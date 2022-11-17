using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MoneyScript : MonoBehaviour
{
    public bool picked, active;
    public Counter counter;

    private void Start()
    {
        StartCoroutine(MyUpdate());
    }

    IEnumerator MyUpdate()
    {
        if (!picked)
        {
            while (true)
            {
                yield return new WaitForSeconds(0.05f);
                if (active)
                {
                    if (Vector3.Distance(transform.position, new Vector3(StickmanController.Instance.transform.position.x,
                        transform.position.y, StickmanController.Instance.transform.position.z)) <= 2.5f)
                    {
                        counter.RemoveMoney(this);
                        transform.DOJump(StickmanController.Instance.transform.position, 1, 1, 0.25f).OnComplete(() =>
                        {
                            StickmanController.Instance.AddDollars(2);
                            Destroy(gameObject);
                        });
                        picked = true;
                    }
                }
            }
        }
    }
}
