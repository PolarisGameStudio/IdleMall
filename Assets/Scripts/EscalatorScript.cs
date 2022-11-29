using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class EscalatorScript : MonoBehaviour
{
    public bool active;
    public VisitorScript visitor;
    public float delay;
    [SerializeField] private MeshRenderer inactiveMR, activeMR;


    void Start()
    {
        StartCoroutine(Spawn());
    }

    private IEnumerator Spawn()
    {
        if (ShopHandler.Instance.HasSpace() && active)
        {
            var v = Instantiate(visitor, transform.position, Quaternion.Euler(new Vector3(0, -90, 0)));
            v.SetShop();
            if (AdsController.Instance.vipCount > 0)
            {
                if (Random.Range(1, 101) <= 80)
                {
                    v.SetVip();
                    AdsController.Instance.ReduceVipCount();
                }
            }
            v.transform.DOMove(transform.position + new Vector3(-18, 10.25f, 0), 5f).SetEase(Ease.Linear).OnComplete(() =>
            {
                v.transform.DOMoveX(v.transform.position.x - 3, 0.75f).SetEase(Ease.Linear).OnComplete(() =>
                {
                    v.Activate();
                });
            });
        }
        if (AdsController.Instance.crowdCount > 0)
        {
            yield return new WaitForSeconds(delay * 0.3f);
            AdsController.Instance.ReduceCrowdCount();
        }
        else
        {
            yield return new WaitForSeconds(delay);
        }
<<<<<<< HEAD
        yield return new WaitForSeconds(delay);
=======
>>>>>>> parent of 1e7e789 (Merge branch 'main' of https://github.com/tmshakirov/IdleMall)
        StartCoroutine(Spawn());
    }

    public void Activate()
    {
        inactiveMR.gameObject.SetActive(false);
        activeMR.enabled = true;
        active = true;
    }
}
