using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;
using System.Linq;

public class UpgradeHandler : SerializedSingleton<UpgradeHandler>
{
    [SerializeField] private List<UpgradeUI> upgradeUIs;
    [SerializeField] private GameObject upgradeEffect;

    private void Start()
    {
        if (TutorialHandler.Instance.currentQuestID >= 10)
            Invoke("LimitSet", 0.5f);
    }

    private void LimitSet()
    {
        foreach (var u in upgradeUIs)
        {
            if (u.cashierPrice != null)
            {
                if (!u.NeedsCashiers())
                {
                    u.cashierPrice.text = "MAX";
                }
                else
                {
                    u.cashierPrice.text = "$" + (250 + (u.cashierCount - 1) * 250);
                }
               
            }
            if (u.helperPrice != null)
            {
                if (u.NeedsWorkers())
                {
                    u.helperPrice.text = "MAX";
                }
                else
                {
                    u.helperPrice.text = "$" + (250 + (u.workerCount - 1) * 250);
                }
            }
            if (u.helperUpgradePrice != null)
            {
                if (!NeedsUpgrade(u.type))
                {
                    u.helperUpgradePrice.text = "MAX";
                }
                else
                {
                    u.helperUpgradePrice.text = "$" + (250 + (u.workerLevel - 1) * 250);
                }
            }
        }
    }

    private UpgradeUI GetUpgradeUI(ShopType type)
    {
        return upgradeUIs.Find(x => x.type == type);
    }

    public void OpenCanvas(int type)
    {
        upgradeUIs.Find (x => x.type == (ShopType)type).canvas.gameObject.SetActive(true);
        GetUpgradeUI ((ShopType)type).canvas.DOFade(1, 0.25f);
        CameraController.Instance.FocusOnPlayerUpgrade();
    }

    public void CloseCanvas(int type)
    {
        GetUpgradeUI ((ShopType)type).canvas.DOFade(0, 0.25f).OnComplete(() =>
        {
            CameraController.Instance.upgrade = false;
            CameraController.Instance.FocusOnPlayer();
            GetUpgradeUI ((ShopType)type).canvas.gameObject.SetActive(false);
        });
    }

    public bool NeedsCashier(ShopType type)
    {
        return GetUpgradeUI (type).NeedsCashiers();
    }

    public void BuyCashier(int type)
    {
        if (NeedsCashier((ShopType)type))
        {
            int cashierCount = GetUpgradeUI ((ShopType)type).cashierCount;
            int price = 250 + (cashierCount - 1) * 250;
            if (cashierCount < 1)
                price = 150;
            if (StickmanController.Instance.EnoughMoney(price))
            {
                TutorialHandler.Instance.QuestIncrement(8);
                Instantiate(GetUpgradeUI((ShopType)type).cashier, StickmanController.Instance.transform.position, Quaternion.identity);
                StickmanController.Instance.RemoveDollars(price);
                GetUpgradeUI((ShopType)type).cashierCount++;
                GetUpgradeUI((ShopType)type).cashierButton.transform.DOScale(1.1f, 0.25f);
                GetUpgradeUI((ShopType)type).cashierButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    GetUpgradeUI((ShopType)type).cashierButton.transform.DOScale(1, 0.15f);
                    GetUpgradeUI((ShopType)type).cashierButton.transform.DORotate(Vector3.zero, 0.15f);
                    if (!GetUpgradeUI((ShopType)type).NeedsCashiers())
                    {
                        GetUpgradeUI((ShopType)type).cashierPrice.text = "MAX";
                    }
                    else
                    {
                        GetUpgradeUI((ShopType)type).cashierPrice.text = "$" + (250 + (GetUpgradeUI((ShopType)type).cashierCount - 1) * 250);
                    }
                });
            }
            else
            {
                GetUpgradeUI((ShopType)type).cashierButton.GetComponent<RectTransform>().DOShakeAnchorPos(0.25f, 0.25f);
            }
        }
        else
        {
            GetUpgradeUI((ShopType)type).cashierButton.GetComponent<RectTransform>().DOShakeAnchorPos(0.25f, 0.25f);
        }
    }

    public bool NeedsWorkers(ShopType type)
    {
        return GetUpgradeUI(type).NeedsWorkers();
    }

    public void BuyWorker(int type)
    {
        if (NeedsWorkers((ShopType)type))
        {
            int workerCount = GetUpgradeUI((ShopType)type).workerCount;
            int price = 250 + (workerCount - 1) * 250;
            if (workerCount < 1)
                price = 150;
            if (StickmanController.Instance.EnoughMoney(price))
            {
                TutorialHandler.Instance.QuestIncrement(8);
                Instantiate(GetUpgradeUI((ShopType)type).worker, StickmanController.Instance.transform.position, Quaternion.identity);
                StickmanController.Instance.RemoveDollars(price);
                GetUpgradeUI((ShopType)type).workerCount++;
                GetUpgradeUI((ShopType)type).helperButton.transform.DOScale(1.1f, 0.25f);
                GetUpgradeUI((ShopType)type).helperButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    GetUpgradeUI((ShopType)type).helperButton.transform.DOScale(1, 0.15f);
                    GetUpgradeUI((ShopType)type).helperButton.transform.DORotate(Vector3.zero, 0.15f);
                    GetUpgradeUI((ShopType)type).helperText.text = GetUpgradeUI((ShopType)type).workerCount.ToString();
                    if (!GetUpgradeUI((ShopType)type).NeedsWorkers())
                    {
                        GetUpgradeUI((ShopType)type).helperPrice.text = "MAX";
                    }
                    else
                    {
                        GetUpgradeUI((ShopType)type).helperPrice.text = "$" + (250 + (GetUpgradeUI((ShopType)type).workerCount - 1) * 250);
                    }
                });
            }
            else
            {
                GetUpgradeUI((ShopType)type).helperButton.GetComponent<RectTransform>().DOShakeAnchorPos(0.25f, 0.25f);
            }
        }
        else
        {
            GetUpgradeUI((ShopType)type).helperButton.GetComponent<RectTransform>().DOShakeAnchorPos(0.25f, 0.25f);
        }
    }

    public bool NeedsUpgrade(ShopType type)
    {
        return GetUpgradeUI(type).workerLevel < 3;
    }

    public void UpgradeWorkers(int type)
    {
        int workerLevel = GetUpgradeUI((ShopType)type).workerLevel;
        int price = 250 + workerLevel * 250;
        if (NeedsUpgrade ((ShopType)type))
        {
            if (StickmanController.Instance.EnoughMoney(price))
            {
                TutorialHandler.Instance.CheckQuestsCompletion(9);
                StickmanController.Instance.RemoveDollars(price);
                GetUpgradeUI((ShopType)type).workerLevel++;
                foreach (var f in FindObjectsOfType<WorkerScript>().Where(x => x.GetShopType() == (ShopType)type))
                {
                    f.AddLevel();
                    var t = Instantiate(upgradeEffect, f.transform.position, upgradeEffect.transform.rotation);
                    t.transform.SetParent(f.transform);
                }
                GetUpgradeUI((ShopType)type).helperUpgradeButton.transform.DOScale(1.1f, 0.25f);
                GetUpgradeUI((ShopType)type).helperUpgradeButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    GetUpgradeUI((ShopType)type).helperUpgradeButton.transform.DOScale(1, 0.15f);
                    GetUpgradeUI((ShopType)type).helperUpgradeButton.transform.DORotate(Vector3.zero, 0.15f);
                    GetUpgradeUI((ShopType)type).helperUpgradeText.text = (GetUpgradeUI((ShopType)type).workerLevel+1).ToString();
                    if (!NeedsUpgrade ((ShopType)type))
                    {
                        GetUpgradeUI((ShopType)type).helperUpgradePrice.text = "MAX";
                    }
                    else
                    {
                        GetUpgradeUI((ShopType)type).helperUpgradePrice.text = "$" + (250 + (GetUpgradeUI((ShopType)type).workerLevel - 1) * 250);
                    }
                });
            }
            else
            {
                GetUpgradeUI((ShopType)type).helperUpgradeButton.GetComponent<RectTransform>().DOShakeAnchorPos(0.25f, 0.25f);
            }
        }
        else
        {
            GetUpgradeUI((ShopType)type).helperUpgradeButton.GetComponent<RectTransform>().DOShakeAnchorPos(0.25f, 0.25f);
        }
    }

    public int GetWorkerLevel (ShopType type)
    {
        return GetUpgradeUI(type).workerLevel;
    }
}

[System.Serializable]
public class UpgradeUI
{
    public ShopType type;
    public int cashierCount, workerCount;
    public int maxCashierCount = 1, maxWorkerCount = 3;
    public int workerLevel = 0;
    public CanvasGroup canvas;
    public Button cashierButton, helperButton, helperUpgradeButton;
    public TMP_Text cashierPrice, helperPrice, helperUpgradePrice;
    public TMP_Text cashierText, helperText, helperUpgradeText;
    public CashierScript cashier;
    public WorkerScript worker;

    public bool NeedsCashiers()
    {
        return cashierCount < maxCashierCount && TutorialHandler.Instance.currentQuestID >= 10;
    }

    public bool NeedsWorkers()
    {
        if (type == ShopType.POPCORN)
            return workerCount < ShopHandler.Instance.GetShop(type).CinemaRoomCount();
        return workerCount < maxWorkerCount && TutorialHandler.Instance.currentQuestID >= 8;
    }
}