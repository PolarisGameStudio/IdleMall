using System.Linq;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;

public class CashierScript : MonoBehaviour
{
    public bool isSaved;
    [SerializeField] private ShopType type;
    [SerializeField] private Counter counter;
    public CounterCircle circle;
    private Animator anim;
    private NavMeshAgent ai;

    void Start()
    {
        ai = GetComponent<NavMeshAgent>();
        anim = GetComponent<Animator>();
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
        if (ai == null || !ai.enabled)
        {
            anim.Play("Idle");
            return;
        }
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
        if (!isSaved)
        {
            isSaved = true;
        }
        else
        {
            transform.position = new Vector3(circle.transform.position.x, 0, circle.transform.position.z);
        }
        ai.SetDestination(circle.transform.position);
    }
}
