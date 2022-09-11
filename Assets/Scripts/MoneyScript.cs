using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MoneyScript : MonoBehaviour
{
    public bool picked, active;
    public Counter counter;

    private void Update()
    {
        if (active)
        {
            if (!picked)
            {
                if (Vector3.Distance(transform.position, StickmanController.Instance.transform.position) <= 4)
                {
                    transform.DOJump(StickmanController.Instance.transform.position, 1, 1, 0.25f).OnComplete(() =>
                    {
                        StickmanController.Instance.AddDollars(10);
                        Destroy(gameObject);
                    });
                    picked = true;
                }
            }
        }
    }
}
