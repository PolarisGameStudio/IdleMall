using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public enum ShopType { CLOTH, COSTUME, DRUGS, POPCORN, COFFEE, GYM, ZOO, ELECTRONICS }

public class ShopHandler : SerializedSingleton<ShopHandler>
{
    public List<Shop> shops;

    private void Start()
    {
        foreach (var s in shops)
        {
            s.visitors.Clear();
        }
        int shopsCount = 0;
        foreach (var s in shops)
        {
            if (s.open)
                shopsCount++;
        }
        foreach (var v in FindObjectsOfType<BuyScript>())
        {
            v.CheckShops(shopsCount);
        }
        foreach (var v in FindObjectsOfType<BuyObject>())
        {
            v.CheckShops(shopsCount);
        }
    }

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
        shops.Find(x => x.type == type).shopObject.SetActive(true);
        int shopsCount = 0;
        foreach (var s in shops)
        {
            if (s.open)
                shopsCount++;
        }
        if (type == ShopType.POPCORN)
        {
            foreach (var v in FindObjectsOfType<CinemaRoomScript>())
            {
                v.CheckUnlocked();
            }
        }
        string eventParameters = string.Format("\"level_number\":\"{0}\", \"level_name\":\"{1}\", \"level_count\":\"{2}\", \"level_diff\":\"easy\", \"level_loop\":\"1\", \"level_random\":\"0\", \"level_type\":\"normal\", \"result\":\"win\", \"time\":\"{3}\", \"progress\":\"100\"", (int)type, type.ToString(), shopsCount, Time.time);
        AppMetrica.Instance.ReportEvent("room_open", "{" + eventParameters + "}");
        AppMetrica.Instance.SendEventsBuffer();
        foreach (var v in FindObjectsOfType<BuyScript>())
        {
            v.CheckShops(shopsCount);
        }
        foreach (var v in FindObjectsOfType<BuyObject>())
        {
            v.CheckShops(shopsCount);
        }
    }
}

[System.Serializable]
public class Shop
{
    public ShopType type;
    public GameObject shopObject;
    public bool open;
    public Counter counter;
    public ClothRack clothRack;
    public List<ItemRack> itemRacks;
    public List<VisitorScript> visitors;
    public List<CinemaRoomScript> rooms;

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

    public bool HasChairs()
    {
        return type == ShopType.COFFEE || type == ShopType.GYM;
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

    public int CinemaRoomCount()
    {
        int count = 0;
        foreach (var r in rooms)
        {
            if (r.unlocked)
                count++;
        }
        return count;
    }

    public ChairScript GetRandomChair()
    {
        List<ChairScript> chairs = new List<ChairScript>();
        foreach (var r in rooms)
        {
            if (r.unlocked)
            {
                foreach (var c in r.chairs)
                {
                    if (!c.occupied)
                    {
                        chairs.Add(c);
                    }
                }
            }
        }
        return chairs[Random.Range(0, chairs.Count)];
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
