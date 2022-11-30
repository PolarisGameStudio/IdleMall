using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorScrip : MonoBehaviour
{
    public ShopType type;

    void Start()
    {
        Invoke("CheckOpen", 0.15f);
    }

    void CheckOpen()
    {
        if (ShopHandler.Instance.GetShop (type).open)
        {
            GetComponent<Animator>().SetBool("Open", true);
            GetComponent<BoxCollider>().enabled = false;
        }
    }
}
