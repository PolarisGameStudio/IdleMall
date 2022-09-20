using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public enum ShopType { CLOTH, COSTUME, DRUGS, POPCORN, COFFEE }

public class ShopHandler : SerializedSingleton<ShopHandler>
{
    public List<Shop> shops;

    public Shop GetShop (ShopType type)
    {
        return shops.Find(x => x.type == type);
    }

    public bool HasSpace()
    {
        return shops.Find (x => x.IsAvailable()) != null;
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
    public ClothRack clothRack;
    public List<ItemRack> itemRacks;
    public List<VisitorScript> visitors;

    public bool IsAvailable()
    {
        if (!open)
            return false;
        if (counter != null)
        {
            return visitors.Count < counter.maxAmount;
        }
        return visitors.Count < itemRacks.Count * 2;
    }

    public void AddRack (ItemRack _rack)
    {
        itemRacks.Add(_rack);
        _rack.type = type;
    }

    public ClothRack GetClothRack()
    {
        return clothRack;
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

    public ItemRack GetEmptyRack(ShopType type)
    {
        if (itemRacks.Find(x => x.HasSpace()) != null)
        {
            var availableRacks = itemRacks.FindAll(x => x.HasSpace());
            return availableRacks[Random.Range(0, availableRacks.Count)];
        }
        return null;
    }

    public Counter GetCounter()
    {
        return counter;
    }
}
