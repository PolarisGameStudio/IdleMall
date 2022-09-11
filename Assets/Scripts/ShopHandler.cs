using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ShopType { CLOTH, COSTUME, DRUGS, POPCORN }

public class ShopHandler : SerializedSingleton<ShopHandler>
{
    public List<Shop> shops;

    public Shop RandomShop()
    {
        var openShops = shops.FindAll(x => x.open);
        return openShops[Random.Range (0, openShops.Count)];
    }
}

[System.Serializable]
public class Shop
{
    public ShopType type;
    public bool open;
    public Animator shopDoors;
    public Counter counter;
    public List<ItemRack> itemRacks;

    public ItemRack GetRandomRack()
    {
        if (itemRacks.Find (x => x.IsAvailable()) != null)
        {
            var availableRacks = itemRacks.FindAll(x => x.IsAvailable());
            return availableRacks[Random.Range(0, availableRacks.Count)];
        }
        return itemRacks[Random.Range(0, itemRacks.Count)];
    }

    public Counter GetCounter()
    {
        return counter;
    }
}
