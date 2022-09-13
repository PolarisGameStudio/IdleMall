using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ItemScript : MonoBehaviour
{
    public bool picked;
    public float height = 0.2f;
    public Vector3 target;
    public ShopType type;

    public void Pick (Vector3 _pos)
    {
        target = _pos;
        transform.DOLocalJump(target, 1, 1, 0.25f);
        picked = true;
    }

    public void UpdatePos (Vector3 _pos)
    {
        target = _pos;
        transform.position = target;
    }
}
