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
        var v = Instantiate(visitor, transform.position, Quaternion.Euler (new Vector3(0, -90, 0)));
        v.transform.DOMove(transform.position + new Vector3(-18, 10.75f, 0), 5f).SetEase (Ease.Linear).OnComplete(() =>
        {
            v.transform.DOMoveX(v.transform.position.x - 2, 0.5f).SetEase(Ease.Linear).OnComplete(() =>
            {
                v.Activate();
            });
        });
        yield return new WaitForSeconds(delay);
        StartCoroutine(Spawn());
    }
}
