using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ElevatorScript : MonoBehaviour
{
    public bool active;
    public VisitorScript visitor;
    public float delay;
    public Animator anim;


    void Start()
    {
        StartCoroutine(Spawn());
    }

    private IEnumerator Spawn()
    {
        if (ShopHandler.Instance.HasSpace() && active)
        {
            for (int i = 0; i < Random.Range (3, 7); i++)
            {
                if (!ShopHandler.Instance.HasSpace())
                {
                    anim.SetBool("Open", false);
                    break;
                }
                anim.SetBool("Open", true);
                var v = Instantiate(visitor, transform.position + new Vector3 (Random.Range (-1f, 1f), 0, Random.Range (-1f, 1f)), Quaternion.Euler (new Vector3 (0, 90, 0)));
                v.elevator = true;
                v.transform.DOMoveX(v.transform.position.x + 4.25f, 1.75f).SetEase (Ease.Linear).OnComplete(() =>
                {
                    v.elevator = false;
                    v.Activate();
                });
                yield return new WaitForSeconds(2.5f);
            }
            anim.SetBool("Open", false);
        }
        yield return new WaitForSeconds(delay);
        StartCoroutine(Spawn());
    }
}
