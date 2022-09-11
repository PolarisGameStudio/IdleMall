using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemRack : MonoBehaviour
{
    public int amount, maxAmount = 4;
    public List<GameObject> items;

    public bool IsAvailable()
    {
        return amount > 0;
    }

    public void GetItem()
    {
        amount--;
        items[amount].SetActive(false);
    }

    public void AddItem()
    {
        if (amount < maxAmount)
        {
            amount++;
            items[amount].SetActive(true);
        }
    }
}
