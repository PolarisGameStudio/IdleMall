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
        VisitorScript isVip = null;
        if (ShopHandler.Instance.HasSpace() && active)
        {
            var v = Instantiate(visitor, transform.position, Quaternion.Euler(new Vector3(0, -90, 0)));
            v.SetShop();
            if (AdsController.Instance.vipCount > 0)
            {
                v.SetVip();
                AdsController.Instance.ReduceVipCount();
                if (isVip == null)
                    isVip = v;
            }
            v.transform.DOMove(transform.position + new Vector3(-18, 10.25f, 0), 5f).SetEase(Ease.Linear).OnComplete(() =>
            {
                if (AdsController.Instance.bonusCamera && isVip == v)
                {
                    CameraController.Instance.Focus(v.transform, 4);
                    AdsController.Instance.bonusCamera = false;
                    isVip = null;
                }
                v.transform.DOMoveX(v.transform.position.x - 3, 0.75f).SetEase(Ease.Linear).OnComplete(() =>
                {
                    v.Activate();
                });
            });
        }
        if (ShopHandler.Instance.HasSpace() && active && AdsController.Instance.crowdCount > 0)
        {
            yield return new WaitForSeconds(delay * 0.1f);
            AdsController.Instance.ReduceCrowdCount();
        }
        else
        {
            yield return new WaitForSeconds(delay);
        }
        StartCoroutine(Spawn());
    }

    public void Activate()
    {
        inactiveMR.gameObject.SetActive(false);
        activeMR.enabled = true;
        active = true;
    }
}
