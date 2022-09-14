using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;

public enum VisitorState { IDLE, GETITEM, GETTING, QUEUE, LEAVING }

public class VisitorScript : MonoBehaviour
{
    public VisitorState state;
    [SerializeField] private Shop shop;
    [SerializeField] private ItemRack rack;
    [SerializeField] private float gettingTimer = 60;
    [SerializeField] private List<GameObject> itemsToShow;
    [SerializeField] private MoneyScript money;
    private bool eat;
    public ChairScript chair;
    private Animator anim;
    private NavMeshAgent ai;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        ai = GetComponent<NavMeshAgent>();
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
                IdleAnimation();
                break;
            case VisitorState.GETITEM:
                anim.Play("Walk");
                transform.rotation = Quaternion.LookRotation(ai.velocity, Vector3.up);
                if (DestinationReached())
                {
                    ai.isStopped = true;
                    state = VisitorState.GETTING;
                    transform.DOLookAt(new Vector3(rack.transform.position.x, 0, rack.transform.position.z), 0.25f);
                }
                break;
            case VisitorState.GETTING:
                IdleAnimation();
                gettingTimer -= Time.deltaTime * 60;
                if (gettingTimer <= 0)
                {
                    if (!rack.IsUsable() || eat)
                    {
                        gettingTimer = 60;
                        return;
                    }
                    rack.GetItem(transform);
                    if (shop.type != ShopType.COFFEE)
                    {
                        shop.GetCounter().AddQueue(this);
                        state = VisitorState.QUEUE;
                        ai.SetDestination(shop.GetCounter().GetPos());
                        ai.isStopped = false;
                        itemsToShow[(int)shop.type].SetActive(true);
                    }
                    else
                    {
                        eat = true;
                        anim.Play("Eat");
                    }
                }
                break;
            case VisitorState.QUEUE:
                if (DestinationReached())
                {
                    transform.DOLookAt(new Vector3(shop.GetCounter().transform.position.x, 0, shop.GetCounter().transform.position.z), 0.25f);
                    anim.Play("Idle");
                }
                else
                {
                    transform.rotation = Quaternion.LookRotation(ai.velocity, Vector3.up);
                    anim.Play("WalkBag");
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
        }
    }

    public void Ate()
    {
        Leave(rack.GetComponent<Counter>());
    }

    private void IdleAnimation()
    {
        if (!eat)
        {
            switch (shop.type)
            {
                case ShopType.COFFEE:
                    anim.Play("Sit");
                    break;
                default:
                    anim.Play("Idle");
                    break;
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
            default:
                anim.Play("Walk");
                break;
        }
    }

    public void Activate()
    {
        ai.enabled = true;
        SetShop();
        state = VisitorState.GETITEM;
    }

    private void SetShop()
    {
        shop = ShopHandler.Instance.RandomShop();
        rack = shop.GetRandomRack();
        if (shop.type == ShopType.COFFEE)
        {
            chair = rack.GetChair();
            chair.occupied = true;
            ai.SetDestination(chair.transform.position);
        }
        else
        {
            ai.SetDestination(rack.GetPosition());
        }
    }

    public void Leave(Counter moneyTarget = null)
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
        if (chair != null)
            chair.occupied = false;
        ai.isStopped = false;
        state = VisitorState.LEAVING;
        ai.SetDestination(GameObject.FindGameObjectWithTag("Finish").transform.position);
    }

    public void SetQueuePos (Vector3 pos)
    {
        ai.isStopped = false;
        ai.SetDestination(pos);
    }
}
