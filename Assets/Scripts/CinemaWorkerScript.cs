using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using DG.Tweening;
using System.Linq;

public class CinemaWorkerScript : WorkerScript
{
    [SerializeField] private CinemaCircle circle;

    protected override void Awake()
    {
        ai = GetComponent<NavMeshAgent>();
        GetComponent<NavMeshAgent>().enabled = false;
        Invoke("Loaded", 0.1f);
    }

    protected override void Loaded()
    {
        if (!isSaved)
        {
            isSaved = true;
        }
        else
        {
            Transform circle = FindObjectsOfType<UpgradeCircle>().FirstOrDefault(x => x.GetType() == type).transform;
            transform.position = new Vector3(circle.position.x, 0, circle.position.z);
        }
        GetComponent<NavMeshAgent>().enabled = true;
    }

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        SetShop();
    }

    protected override void Update()
    {
        if (ai == null || !ai.enabled)
        {
            IdleAnimation();
            return;
        }
        switch (state)
        {
            case WorkerState.IDLE:
                IdleAnimation();
                ai.isStopped = true;
                gettingTimer -= Time.deltaTime * 60;
                if (gettingTimer <= 0)
                {
                    FindButton();
                    gettingTimer = 120;
                }
                break;
            case WorkerState.GETTING:
                if (DestinationReached())
                {
                    IdleAnimation();
                    ai.isStopped = true;
                    transform.DOLookAt(new Vector3(circle.button.transform.position.x, 0, circle.button.transform.position.z), 0.15f);
                    gettingTimer -= Time.deltaTime * 60;
                    if (gettingTimer <= 0)
                    {
                        gettingTimer = 120;
                        if (!circle.button.room.off)
                            return;
                        circle.Pressed();
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

    private void FindButton()
    {
        List<CinemaButtonScript> buttons = new List<CinemaButtonScript>();
        var rooms = ShopHandler.Instance.GetShop(ShopType.POPCORN).rooms;
        foreach (var r in rooms)
        {
            if (r.unlocked)
            {
                buttons.Add(r.GetButton());
            }
        }
        if (buttons.Count > 0)
        {
            circle = buttons[Random.Range(0, buttons.Count)].circle;
            foreach (var b in buttons)
            {
                if (b.worker == null)
                {
                    if (Vector3.Distance(transform.position, b.circle.transform.position) <
                        Vector3.Distance(transform.position, circle.transform.position))
                    {
                        circle = b.circle;
                    }
                }
            }
            circle.button.worker = this;
            ai.SetDestination(circle.transform.position);
            state = WorkerState.GETTING;
            ai.isStopped = false;
            gettingTimer = 120;
        }
        else
        {
            state = WorkerState.IDLE;
            ai.isStopped = true;
        }
    }

    protected override void SetShop()
    {
        shop = ShopHandler.Instance.GetShop(type);
        workerLevel = UpgradeHandler.Instance.GetWorkerLevel(type);
    }
}
