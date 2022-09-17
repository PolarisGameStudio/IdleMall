using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UpgradeCircle : MonoBehaviour
{
    private bool occupied;
    Vector3 localScale = Vector3.zero;

    private void Start()
    {
        localScale = transform.localScale;
    }

    private void OnTriggerStay(Collider other)
    {
        if (!occupied)
        {
            if (other.tag == "Player" && !StickmanController.Instance.IsMoving())
            {
                occupied = true;
                UpgradeHandler.Instance.OpenCanvas();
                other.transform.DOMove(new Vector3(transform.position.x, other.transform.position.y, transform.position.z), 0.25f);
                other.transform.DOLookAt(transform.parent.position, 0.25f);
                StartCoroutine(Scale());
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            occupied = false;
            StopCoroutine(Scale());
            transform.DOKill();
            transform.localScale = localScale;
        }
    }

    private IEnumerator Scale()
    {
        if (occupied)
        {
            transform.DOScale(localScale * 1.2f, 1.5f).OnComplete(() =>
            {
                transform.DOScale(localScale, 1.5f);
            });
            yield return new WaitForSeconds(3f);
            StartCoroutine(Scale());
        }
        else
        {
            transform.DOKill();
            transform.localScale = localScale;
        }
    }
}