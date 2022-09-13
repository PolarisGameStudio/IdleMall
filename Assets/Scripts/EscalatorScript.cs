using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class EscalatorScript : MonoBehaviour
{
    public VisitorScript visitor;
    public float delay;

    void Start()
    {
        StartCoroutine(Spawn());
    }

    private IEnumerator Spawn()
    {
        if (ShopHandler.Instance.HasSpace())
        {
            var v = Instantiate(visitor, transform.position, Quaternion.Euler(new Vector3(0, -90, 0)));
            v.transform.DOMove(transform.position + new Vector3(-18, 10.25f, 0), 5f).SetEase(Ease.Linear).OnComplete(() =>
            {
                v.transform.DOMoveX(v.transform.position.x - 3, 0.75f).SetEase(Ease.Linear).OnComplete(() =>
                {
                    v.Activate();
                });
            });
        }
        yield return new WaitForSeconds(delay);
        StartCoroutine(Spawn());
    }
}
