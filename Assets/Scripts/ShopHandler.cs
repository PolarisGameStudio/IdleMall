using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public enum ShopType { CLOTH, COSTUME, DRUGS, POPCORN, COFFEE }

public class ShopHandler : SerializedSingleton<ShopHandler>
{
    public List<Shop> shops;

    public bool HasSpace()
    {
        var visitors = FindObjectsOfType<VisitorScript>().Where(x => x.state != VisitorState.LEAVING);
        return visitors.Count() < ShopCapacity();
    }

    public void AddRack(ShopType type, ItemRack _rack)
    {
        shops.Find(x => x.type == type).AddRack(_rack);
    }

    private int ShopCapacity()
    {
        int count = 0;
        foreach (var s in shops)
        {
            if (s.IsAvailable())
            {
                if (s.counter != null)
                {
                    count += s.counter.maxAmount;
                }
                else
                {
                    count += s.itemRacks.Count * 2;
                }
            }
        }
        return count;
    }

    public Shop RandomShop()
    {
        var openShops = shops.FindAll(x => x.IsAvailable());
        return openShops[Random.Range (0, openShops.Count)];
    }

    public void OpenShop (ShopType type)
    {
        shops.Find(x => x.type == type).open = true;
    }
}

[System.Serializable]
public class Shop
{
    public ShopType type;
    public bool open;
    public Counter counter;
    public List<ItemRack> itemRacks;

    public bool IsAvailable()
    {
        return open && (counter != null && counter.IsAvailable(type) || counter == null && HasAvailableRack());
    }

    public void AddRack (ItemRack _rack)
    {
        itemRacks.Add(_rack);
        _rack.type = type;
    }

    public bool HasAvailableRack()
    {
        if (itemRacks.Find(x => x.IsAvailable()) != null)
        {
            return true;
        }
        return false;
    }

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
