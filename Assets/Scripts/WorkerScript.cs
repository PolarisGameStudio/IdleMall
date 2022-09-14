using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;

public enum WorkerState { IDLE, GETTING, GIVING }

public class WorkerScript : MonoBehaviour
{
    public WorkerState state;
    [SerializeField] private ShopType type;
    [SerializeField] private Shop shop;
    [SerializeField] private List<ItemScript> items = new List<ItemScript>();
    [SerializeField] private ItemRack rack;
    [SerializeField] private ClothRack clothRack;
    [SerializeField] private float gettingTimer = 60;
    [SerializeField] private Transform itemPos;
    private Animator anim;
    private NavMeshAgent ai;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        ai = GetComponent<NavMeshAgent>();
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

    void Update()
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
                        clothRack.GiveItem(this);
                        state = WorkerState.IDLE;
                        gettingTimer = 5;
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
                        var item = items[0];
                        items.Remove(item);
                        item.transform.DOScale(0.3f, 0.5f);
                        item.transform.DOJump(rack.GetItemPosition(), 3, 1, 0.5f).OnComplete(() =>
                        {
                            rack.AddItem();
                            Destroy(item.gameObject);
                        });
                        state = WorkerState.IDLE;
                        gettingTimer = 5;
                    }
                }
                else
                {
                    WalkAnimation();
                }
                break;
        }
    }

    public void AddItem (ItemScript item)
    {
        item.transform.SetParent(itemPos);
        items.Add(item);
        item.Pick(Vector3.zero);
    }

    private void FindRack()
    {
        if (items.Count > 0)
        {
            rack = shop.GetEmptyRack(type);
            if (rack != null)
            {
                ai.SetDestination(rack.GetPosition());
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

    private void IdleAnimation()
    {
        anim.Play(items.Count > 0 ? "CarryIdle" : "Idle");
    }

    private void WalkAnimation()
    {
        anim.Play(items.Count > 0 ? "CarryRun" : "Run");
    }

    private void SetShop()
    {
        shop = ShopHandler.Instance.GetShop(type);
        clothRack = shop.GetClothRack();
    }
}
