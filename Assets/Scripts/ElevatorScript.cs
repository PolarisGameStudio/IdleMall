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
        Invoke("LoadActive", 0.1f);
    }

    void LoadActive()
    {
        if (active)
            anim.SetBool("Open", true);
    }

    private IEnumerator Spawn()
    {
        VisitorScript isVip = null;
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
                    v.SetVip();
                    AdsController.Instance.ReduceVipCount();
                    if (isVip == null)
                        isVip = v;
                }
                v.transform.DOMoveX(v.transform.position.x + 4.25f, 1.75f).SetEase (Ease.Linear).OnComplete(() =>
                {
                    v.elevator = false;
                    v.Activate();
                    if (AdsController.Instance.bonusCamera && isVip == v)
                    {
                        CameraController.Instance.Focus(v.transform, 4);
                        AdsController.Instance.bonusCamera = false;
                        isVip = null;
                    }
                });
                yield return new WaitForSeconds(2.5f);
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
