using System.Linq;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;

public class CashierScript : MonoBehaviour
{
    [SerializeField] private ShopType type;
    [SerializeField] private Counter counter;
    public CounterCircle circle;
    private Animator anim;
    private NavMeshAgent ai;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        ai = GetComponent<NavMeshAgent>();
        SetShop();
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
        if (DestinationReached())
        {
            transform.DOLookAt(counter.transform.position, 0.25f);
            anim.Play("Idle");
        }
        else
        {
            anim.Play("Run");
        }
    }

    private void SetShop()
    {
        counter = ShopHandler.Instance.GetShop(type).counter;
        circle = FindObjectsOfType<CounterCircle>().Where(x => x.counter == counter).FirstOrDefault();
        ai.SetDestination(circle.transform.position);
    }
}
