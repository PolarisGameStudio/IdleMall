using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;

public enum VisitorState { IDLE, GETITEM, GETTING, QUEUE, LEAVING, WATCHING }

public class VisitorScript : MonoBehaviour
{
    public bool elevator, fat, vip;
    public VisitorState state;
    [SerializeField] private Shop shop;
    [SerializeField] private ItemRack rack;
    [SerializeField] private float gettingTimer = 60;
    [SerializeField] private List<GameObject> trainingTools, zooCages;
    [SerializeField] private List<GameObject> itemsToShow;
    [SerializeField] private List<GameObject> costumes, drugCostumes;
    [SerializeField] private List<Material> drugMaterials;
    [SerializeField] private List<int> moneyAmount;
    [SerializeField] private MoneyScript money;
    [SerializeField] private Transform hand;
    [SerializeField] private GameObject vipCrown;
    [SerializeField] private SkinnedMeshRenderer MR, vipCostume;
    [SerializeField] private GameObject dressEffect, foodEffect, strongEffect;
    [SerializeField] private ParticleSystem angryEffect;
    [SerializeField] private List<ParticleSystem> trainingEffects, cuteEffects, happyEffects;
    Vector3 oldPos;
    private bool eat;
    public ChairScript chair;
    private Animator anim;
    private NavMeshAgent ai;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        ai = GetComponent<NavMeshAgent>();
        if (Random.Range (1, 101) <= 30)
        {
            var weight = Random.Range(50, 101);
            MR.SetBlendShapeWeight(0, weight);
            foreach (var s in costumes)
            {
                s.GetComponent<SkinnedMeshRenderer>().SetBlendShapeWeight(0, weight);
            }
            foreach (var s in drugCostumes)
            {
                if (s != null)
                {
                    try
                    {
                        s.GetComponent<SkinnedMeshRenderer>().SetBlendShapeWeight(0, weight);
                    }
                    catch
                    {

                    }
                }
            }
            fat = true;
        }
    }

    public void SetVip(bool _active = true)
    {
        vip = _active;
        vipCrown.SetActive(_active);
        vipCostume.gameObject.SetActive(_active);
        Invoke("SetVipWeight", 0.1f);
    }

    private void SetVipWeight()
    {
        vipCostume.SetBlendShapeWeight(0, MR.GetBlendShapeWeight(0));
    }

    public ShopType GetShopType()
    {
        return shop.type;
    }

    public bool DestinationReached()
    {
        if (!ai.pathPending)
        {
            if (ai.remainingDistance <= ai.stoppingDistance)
            {
                return true;
            }
        }
        return false;
    }

    void Update()
    {
        switch (state)
        {
            case VisitorState.IDLE:
                if (elevator)
                {
                    anim.Play(fat ? "WalkFat" : "Walk");
                }
                else
                {
                    anim.Play(fat ? "IdleFat" : "Idle");
                }
                break;
            case VisitorState.GETITEM:
                anim.Play(fat ? "WalkFat" : "Walk");
                transform.rotation = Quaternion.LookRotation(ai.velocity, Vector3.up);
                if (DestinationReached())
                {
                    ai.isStopped = true;
                    state = VisitorState.GETTING;
                    transform.DOLookAt(new Vector3(rack.transform.position.x, 0, rack.transform.position.z), 0.25f);
                    if (!shop.HasChairs() && rack.IsUsable())
                    {
                        if (shop.type == ShopType.ZOO)
                            cuteEffects[Random.Range(0, cuteEffects.Count)].Play();
                    }
                }
                break;
            case VisitorState.GETTING:
                IdleAnimation();
                if (!shop.HasChairs() && rack.queue[0] != this)
                    return;
                gettingTimer -= Time.deltaTime * 60;
                if (gettingTimer <= 0)
                {
                    if (!shop.HasChairs())
                    {
                        if (!rack.IsUsable())
                        {
                            var oldRack = rack;
                            rack = shop.GetRandomRack();
                            if (rack != oldRack && rack.IsAvailable())
                            {
                                oldRack.RemoveQueue(this);
                                rack.AddQueue(this);
                                ai.SetDestination(rack.GetPosition());
                                state = VisitorState.GETITEM;
                                ai.isStopped = false;
                            }
                            else
                            {
                                rack = oldRack;
                                gettingTimer = Random.Range(40, 90);
                            }
                            return;
                        }
                    }
                    if (!rack.IsUsable() || eat)
                    {
                        gettingTimer = Random.Range (40, 90);
                        return;
                    }
                    rack.GetItem(hand);
                    try
                    {
                        rack.RemoveQueue(this);
                    }
                    catch
                    {

                    }
                    if (!shop.HasChairs())
                    {
                        shop.GetCounter().AddQueue(this);
                        try
                        {
                            if (shop.type != ShopType.COSTUME && shop.type != ShopType.DRUGS)
                            {
                                if (shop.type == ShopType.ZOO)
                                    zooCages[rack.animalType].SetActive(true);
                                else
                                    itemsToShow[(int)shop.type].SetActive(true);
                                state = VisitorState.QUEUE;
                                ai.SetDestination(shop.GetCounter().GetPos());
                                ai.isStopped = false;
                            }
                            else
                            {
                                eat = true;
                                state = VisitorState.QUEUE;
                                ai.SetDestination(shop.GetCounter().GetPos());
                            }
                        }
                        catch
                        {

                        }
                    }
                    else
                    {
                        if (shop.type == ShopType.GYM)
                        {
                            if (rack.GetComponent<TrainingTool>().toolID > -1)
                                trainingTools[rack.GetComponent<TrainingTool>().toolID].SetActive(true);
                        }
                        eat = true;
                        if (shop.type == ShopType.COFFEE)
                            anim.Play("Eat");
                        if (shop.type == ShopType.GYM)
                        {
                            ai.enabled = false;
                            oldPos = transform.position;
                            transform.SetParent(rack.transform);
                            transform.DOLocalMove(new Vector3(0, transform.localPosition.y, 0), 0.25f).OnComplete(() =>
                            {
                                Invoke("PlayTraining", 0.1f);
                            });
                            transform.localEulerAngles = rack.GetComponent<TrainingTool>().rotAngle;
                            anim.Play(rack.GetComponent<TrainingTool>().animTitle);
                        }
                    }
                }
                break;
            case VisitorState.QUEUE:
                if ((shop.type == ShopType.COSTUME || shop.type == ShopType.DRUGS || shop.type == ShopType.GYM) && eat)
                {
                    anim.Play("JumpSuit");
                }
                else
                {
                    if (DestinationReached())
                    {
                        transform.DOLookAt(new Vector3(shop.GetCounter().transform.position.x, 0, shop.GetCounter().transform.position.z), 0.25f);
                        IdleAnimation();
                    }
                    else
                    {
                        transform.rotation = Quaternion.LookRotation(ai.velocity, Vector3.up);
                        if (shop.type == ShopType.ZOO || shop.type == ShopType.ELECTRONICS)
                            anim.Play("carry_walk");
                        else
                            anim.Play("WalkBag");
                    }
                }
                break;
            case VisitorState.LEAVING:
                if (DestinationReached())
                {
                    Destroy(gameObject);
                }
                else
                {
                    transform.rotation = Quaternion.LookRotation(ai.velocity, Vector3.up);
                    ReturnAnimation();
                }
                break;
            case VisitorState.WATCHING:
                if (DestinationReached())
                {
                    IdleAnimation();
                    gettingTimer -= Time.deltaTime * 60;
                    if (gettingTimer <= 0)
                    {
                        if (!chair.transform.parent.GetComponent<CinemaRoomScript>().IsUsable())
                        {
                            gettingTimer = 300;
                            angryEffect.Play();
                            return;
                        }
                        transform.SetParent(null);
                        chair.occupied = false;
                        state = VisitorState.LEAVING;
                        ai.SetDestination(GameObject.FindGameObjectWithTag("Finish").transform.position);
                        shop.visitors.Remove(this);
                    }
                    else
                    {
                        transform.SetParent(chair.transform);
                        transform.localEulerAngles = Vector3.zero;
                    }
                }
                else
                {
                    anim.Play(fat ? "WalkFat" : "Walk");
                    transform.rotation = Quaternion.LookRotation(ai.velocity, Vector3.up);
                }
            break;
        }
    }

    private void PlayTraining()
    {
        if (!rack.name.Contains("Trampoline"))
            trainingEffects[Random.Range(0, trainingEffects.Count)].Play();
    }

    public void TrainingFinished()
    {
        var t = Instantiate(strongEffect, transform.position + Vector3.up * 2f, dressEffect.transform.rotation);
        t.transform.SetParent(transform);
        eat = true;
        state = VisitorState.QUEUE;
        transform.SetParent(null);
        transform.position = oldPos;
        ai.enabled = true;
        try
        {
            trainingTools[rack.GetComponent<TrainingTool>().toolID].SetActive(false);
        }
        catch
        {

        }
        rack.GetComponent<TrainingTool>().Free();
    }

    public void ChangeSuit()
    {
        if (shop.type == ShopType.DRUGS)
        {
            MR.material = drugMaterials[rack.amount];
            try
            {
                drugCostumes[rack.amount].SetActive(true);
                vipCostume.gameObject.SetActive(false);
                vipCrown.SetActive(false);
            }
            catch
            {

            }
        }
        else
        {
            if (shop.type == ShopType.GYM)
            {
                if (rack.name.Contains("Bench"))
                    MR.SetBlendShapeWeight(1, Random.Range(75, 101));
                else
                {
                    if (MR.GetBlendShapeWeight(0) >= 50)
                        MR.SetBlendShapeWeight(0, Random.Range(0, 31));
                }
                vipCostume.SetBlendShapeWeight(0, MR.GetBlendShapeWeight(0));
                vipCostume.SetBlendShapeWeight(1, MR.GetBlendShapeWeight(1));
            }
            else
            {
                try
                {
                    costumes[rack.amount].SetActive(true);
                    vipCostume.gameObject.SetActive(false);
                    vipCrown.SetActive(false);
                }
                catch
                {
                    costumes[costumes.Count - 1].SetActive(true);
                }
            }
        }
        var t = Instantiate(dressEffect, transform.position + Vector3.up, dressEffect.transform.rotation);
        t.transform.SetParent(transform);
    }

    public void Jumped()
    {
        eat = false;
        ai.isStopped = false;
        if (shop.type == ShopType.GYM)
        {
            state = VisitorState.IDLE;
            Leave(rack.GetComponent<Counter>());
        }
    }

    public void Ate()
    {
        var t = Instantiate(foodEffect, transform.position + Vector3.up, dressEffect.transform.rotation);
        t.transform.SetParent(transform);
        Leave(rack.GetComponent<Counter>());
    }

    private void IdleAnimation()
    {
        if (elevator)
            anim.Play(fat ? "WalkFat" : "Walk");
        else
        {
            if (!eat)
            {
                switch (shop.type)
                {
                    case ShopType.COFFEE:
                        anim.Play("Sit");
                        break;
                    case ShopType.POPCORN:
                        if (state == VisitorState.QUEUE)
                            anim.Play(fat ? "IdleFat" : "Idle");
                        else
                            anim.Play("Sit");
                        break;
                    case ShopType.ZOO:
                        if (state == VisitorState.GETTING)
                            anim.Play(fat ? "IdleFat" : "Idle");
                        else
                            anim.Play("carry2");
                        break;
                    case ShopType.ELECTRONICS:
                        if (state == VisitorState.GETTING)
                            anim.Play(fat ? "IdleFat" : "Idle");
                        else
                            anim.Play("carry2");
                        break;
                    default:
                        anim.Play(fat ? "IdleFat" : "Idle");
                        break;
                }
            }
        }
    }

    private void ReturnAnimation()
    {
        switch (shop.type)
        {
            case ShopType.COFFEE:
                anim.Play("WalkBag");
                break;
            case ShopType.ZOO:
                anim.Play("carry_walk");
                break;
            case ShopType.ELECTRONICS:
                anim.Play("carry_walk");
                break;
            default:
                anim.Play(fat ? "WalkFat" : "Walk");
                break;
        }
    }

    public void Activate()
    {
        ai.enabled = true;
        if (shop.type == ShopType.POPCORN)
        {
            shop.GetCounter().AddQueue(this);
            state = VisitorState.QUEUE;
            ai.SetDestination(shop.GetCounter().GetPos());
            ai.isStopped = false;
        }
        else
        {
            rack = shop.GetRandomRack();
            if (shop.HasChairs())
            {
                chair = rack.GetChair();
                chair.occupied = true;
                ai.SetDestination(chair.transform.position);
            }
            else
            {
                rack.AddQueue(this);
                ai.SetDestination(rack.GetPosition());
            }
            state = VisitorState.GETITEM;
        }
    }

    public void SetShop()
    {
        shop = ShopHandler.Instance.RandomShop();
        shop.visitors.Add(this);
    }

    public void Leave (Counter moneyTarget = null)
    {
        happyEffects[Random.Range(0, happyEffects.Count)].Play();
        StartCoroutine(LeavingSpawnMoney(moneyTarget));
    }

    private IEnumerator LeavingSpawnMoney (Counter moneyTarget = null)
    {
        int moneyCount = moneyAmount[(int)shop.type];
        if (vip)
            moneyCount *= 2;
        for (int i = 0; i < moneyCount; i++)
        {
            var m = Instantiate(money, transform.position, money.transform.rotation);
            if (moneyTarget == null)
                m.counter = shop.GetCounter();
            else
                m.counter = moneyTarget;
            m.transform.DOJump(m.counter.MoneyPos(), 1, 1, 0.25f).OnComplete(() =>
            {
                m.active = true;
                m.counter.AddMoney(m);
            });
            if (i < (moneyCount - 1))
                yield return new WaitForSeconds(0.25f);
        }
        if (chair != null)
            chair.occupied = false;
        ai.isStopped = false;
        if (shop.type != ShopType.POPCORN)
        {
            if (Vector3.Distance (transform.position, StickmanController.Instance.transform.position) <= 10)
            {
                AudioController.Instance.Play("Yahoo", false);
            }
            state = VisitorState.LEAVING;
            ai.SetDestination(GameObject.FindGameObjectWithTag("Finish").transform.position);
            shop.visitors.Remove(this);
        }
        else
        {
            state = VisitorState.WATCHING;
            chair = shop.GetRandomChair();
            chair.occupied = true;
            ai.SetDestination(chair.transform.position + chair.transform.forward * 0.5f);
            gettingTimer = 300;
        }
    }

    public void SetQueuePos (Vector3 pos, bool rack = false)
    {
        ai.isStopped = false;
        ai.SetDestination(pos);
        if (rack)
        {
            state = VisitorState.GETITEM;
        }
    }
}
