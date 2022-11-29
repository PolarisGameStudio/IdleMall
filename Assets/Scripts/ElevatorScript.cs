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
                    break;
                }
                var v = Instantiate(visitor, transform.position + new Vector3 (Random.Range (-1f, 1f), 0, Random.Range (-1f, 1f)), Quaternion.Euler (new Vector3 (0, 90, 0)));
                v.elevator = true;
                v.SetShop();
                if (AdsController.Instance.vipCount > 0)
                {
                    if (Random.Range (1, 101) <= 80)
                    {
                        v.SetVip();
                        AdsController.Instance.ReduceVipCount();
                    }
                }
                v.transform.DOMoveX(v.transform.position.x + 4.25f, 1.75f).SetEase (Ease.Linear).OnComplete(() =>
                {
                    v.elevator = false;
                    v.Activate();
                });
                yield return new WaitForSeconds(2.5f);
            }
        }
        if (TutorialHandler.Instance.currentQuestID < 11)
            yield return new WaitForSeconds(delay * 0.5f);
        else
        {
            if (AdsController.Instance.crowdCount > 0)
            {
                yield return new WaitForSeconds(delay * 0.3f);
                AdsController.Instance.ReduceCrowdCount();
            }
            else
            {
                yield return new WaitForSeconds(delay);
            }
        }
        yield return new WaitForSeconds(delay);
        StartCoroutine(Spawn());
    }

    public void Activate()
    {
        active = true;
        anim.SetBool("Open", true);
    }
}
