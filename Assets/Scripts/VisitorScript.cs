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
                anim.Play("Idle");
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
                anim.Play("Idle");
                gettingTimer -= Time.deltaTime * 60;
                if (gettingTimer <= 0)
                {
                    rack.GetItem();
                    shop.GetCounter().AddQueue(this);
                    state = VisitorState.QUEUE;
                    ai.SetDestination(shop.GetCounter().GetPos());
                    ai.isStopped = false;
                    itemsToShow[(int)shop.type].SetActive(true);
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
                    anim.Play("WalkBag");
                }
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
        ai.SetDestination(rack.transform.position);
    }

    public void Leave()
    {
        var m = Instantiate(money, transform.position, money.transform.rotation);
        m.counter = shop.GetCounter();
        m.transform.DOJump(shop.GetCounter().MoneyPos(), 1, 1, 0.25f).OnComplete(() =>
        {
            m.active = true;
            shop.GetCounter().AddMoney(m);
        });
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
