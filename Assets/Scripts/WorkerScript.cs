using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;
using System.Linq;

public enum WorkerState { IDLE, GETTING, GIVING }

public class WorkerScript : MonoBehaviour
{
    public bool isSaved;
    public WorkerState state;
    [SerializeField] protected ShopType type;
    [SerializeField] protected Shop shop;
    [SerializeField] protected int workerLevel;
    [SerializeField] private List<ItemScript> items = new List<ItemScript>();
    [SerializeField] private ItemRack rack;
    [SerializeField] private ClothRack clothRack;
    [SerializeField] protected float gettingTimer = 60;
    [SerializeField] protected Transform itemPos;
    protected Animator anim;
    protected NavMeshAgent ai;

    protected virtual void Awake()
    {
        GetComponent<NavMeshAgent>().isStopped = true;
        Invoke("Loaded", 0.1f);
    }

    protected virtual void Loaded()
    {
        if (!isSaved)
        {
            isSaved = true;
        }
        else
        {
            Transform circle = FindObjectsOfType<UpgradeCircle>().First(x => x.GetType() == type).transform;
            transform.position = new Vector3(circle.position.x, 0, circle.position.z);
        }
        GetComponent<NavMeshAgent>().isStopped = false;
    }

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        ai = GetComponent<NavMeshAgent>();
        items.Clear();
        state = WorkerState.IDLE;
        SetShop();
    }

    public ShopType GetShopType()
    {
        return type;
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

    protected virtual void Update()
    {
        switch (state)
        {
            case WorkerState.IDLE:
                IdleAnimation();
                ai.isStopped = true;
                gettingTimer -= Time.deltaTime * 60;
                if (gettingTimer <= 0)
                {
                    FindRack();
                    gettingTimer = 60;
                }
                break;
            case WorkerState.GETTING:
                if (DestinationReached())
                {
                    IdleAnimation();
                    ai.isStopped = true;
                    transform.DOLookAt(new Vector3(clothRack.transform.position.x, 0, clothRack.transform.position.z), 0.15f);
                    gettingTimer -= Time.deltaTime * 60;
                    if (gettingTimer <= 0)
                    {
                        if (clothRack.amount > 0)
                            clothRack.GiveItem(this);
                        gettingTimer = 5;
                        if (items.Count >= (workerLevel + 1))
                            state = WorkerState.IDLE;
                    }
                }
                else
                {
                    WalkAnimation();
                }
                break;
            case WorkerState.GIVING:
                if (DestinationReached())
                {
                    IdleAnimation();
                    ai.isStopped = true;
                    transform.DOLookAt(new Vector3(rack.transform.position.x, 0, rack.transform.position.z), 0.15f);
                    gettingTimer -= Time.deltaTime * 60;
                    if (gettingTimer <= 0)
                    {
                        var item = items[items.Count - 1];
                        items.Remove(item);
                        item.transform.DOScale(0.3f, 0.5f);
                        item.transform.DOJump(rack.GetItemPosition(), 3, 1, 0.5f).OnComplete(() =>
                        {
                            rack.AddItem();
                            Destroy(item.gameObject);
                        });
                        gettingTimer = 5;
                        if (items.Count < 1)
                            state = WorkerState.IDLE;
                    }
                }
                else
                {
                    WalkAnimation();
                }
                break;
        }
    }

    public void AddLevel ()
    {
        workerLevel++;
    }

    public void AddItem (ItemScript item)
    {
        item.transform.SetParent(itemPos);
        items.Add(item);
        item.Pick(Vector3.zero + Vector3.up * item.height * (items.Count - 1));
    }

    private void FindRack()
    {
        if (items.Count > 0)
        {
            rack = shop.GetEmptyRack(type);
            if (rack != null)
            {
                ai.SetDestination(rack.GetWaiterPosition());
                state = WorkerState.GIVING;
                ai.isStopped = false;
            }
            else
            {
                state = WorkerState.IDLE;
                ai.isStopped = true;
            }
        }
        else
        {
            ai.SetDestination(clothRack.transform.position);
            state = WorkerState.GETTING;
            ai.isStopped = false;
        }
    }

    protected void IdleAnimation()
    {
        anim.Play(items.Count > 0 ? "CarryIdle" : "Idle");
    }

    protected void WalkAnimation()
    {
        anim.Play(items.Count > 0 ? "CarryRun" : "Run");
    }

    protected virtual void SetShop()
    {
        shop = ShopHandler.Instance.GetShop(type);
        clothRack = shop.GetClothRack();
        workerLevel = UpgradeHandler.Instance.GetWorkerLevel(type);
    }
}
