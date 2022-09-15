using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;
using System.Linq;

public class UpgradeHandler : Singleton<UpgradeHandler>
{
    public bool speedBonus, moneyBonus, vipBonus;
    [SerializeField] private GameObject speedVFX, moneyVFX, vipVFX;
    private float speedTimer, moneyTimer, vipTimer;
    [SerializeField] private CanvasGroup upgradeCanvas, hireCanvas, cargoCanvas, caseCanvas, noThanks;
    [SerializeField] private int limitLevel = 1, baristaCount = 1, porterCount;
    public int speedLevel = 1, porterLevel;
    [SerializeField] private Button limitButton, speedButton;
    [SerializeField] private TMP_Text limitText, limitPrice, speedText, speedPrice;
    [SerializeField] private Button cashierButton, baristaButton, porterButton, porterUpgradeButton;
    [SerializeField] private TMP_Text cashierText, cashierPrice, baristaText, baristaPrice, porterText, porterPrice,
        porterUpgradeText, porterUpgradePrice;
    [SerializeField] private GameObject upgradeEffect;
    [SerializeField] private List<WorkerScript> workers;
    private int cashierCount;

    private void Start()
    {
        Invoke("LimitSet", 0.5f);
        //Invoke("InitRewarded", 3.5f);
    }

    /*private void Update()
    {
        if (speedBonus)
        {
            speedTimer += Time.deltaTime;
            if (speedTimer >= 60)
            {
                StickmanController.Instance.SetSpeed(false);
                speedBonus = false;
                speedTimer = 0;
            }
        }
        if (moneyBonus)
        {
            moneyTimer += Time.deltaTime;
            if (moneyTimer >= 60)
            {
                moneyBonus = false;
                moneyTimer = 0;
                moneyVFX.SetActive(false);
            }
        }
        if (vipBonus)
        {
            vipTimer += Time.deltaTime;
            if (vipTimer >= 60)
            {
                foreach (var c in FindObjectsOfType<VisitorScript>())
                {
                    c.SetVip(false);
                }
                vipBonus = false;
                vipTimer = 0;
                vipVFX.SetActive(false);
            }
        }
    }*/

    private void LimitSet()
    {
        limitText.text = "Level " + limitLevel;
        limitPrice.text = "" + (150 + limitLevel * 100);
        speedText.text = "Level " + speedLevel;
        speedPrice.text = "" + (150 + speedLevel * 100);
        cashierText.text = cashierCount.ToString();
        if (cashierCount < 1)
            cashierPrice.text = "50";
        else
            cashierPrice.text = "" + (250 + cashierCount * 250);
        baristaText.text = baristaCount.ToString();
        if (baristaCount < 1)
            baristaPrice.text = "100";
        else
            baristaPrice.text = "" + (250 + baristaCount * 250);
        porterText.text = porterCount.ToString();
        porterPrice.text = "" + (250 + porterCount * 250);
        porterUpgradeText.text = porterLevel.ToString();
        porterUpgradePrice.text = "" + (250 + porterLevel * 250);
    }

    public void OpenCanvas()
    {
        upgradeCanvas.gameObject.SetActive(true);
        upgradeCanvas.DOFade(1, 0.25f);
        CameraController.Instance.FocusOnPlayerUpgrade();
    }

    public void CloseCanvas()
    {
        upgradeCanvas.DOFade(0, 0.25f).OnComplete(() =>
        {
            CameraController.Instance.upgrade = false;
            CameraController.Instance.FocusOnPlayer();
            upgradeCanvas.gameObject.SetActive(false);
        });
    }

    public void OpenHire()
    {
        hireCanvas.gameObject.SetActive(true);
        hireCanvas.DOFade(1, 0.25f);
        CameraController.Instance.FocusOnPlayerUpgrade();
    }

    public void CloseHire()
    {
        hireCanvas.DOFade(0, 0.25f).OnComplete(() =>
        {
            CameraController.Instance.upgrade = false;
            CameraController.Instance.FocusOnPlayer();
            hireCanvas.gameObject.SetActive(false);
        });
    }

    public void OpenCargo()
    {
        cargoCanvas.gameObject.SetActive(true);
        cargoCanvas.DOFade(1, 0.25f);
        CameraController.Instance.FocusOnPlayerUpgrade();
    }

    public void CloseCargo()
    {
        cargoCanvas.DOFade(0, 0.25f).OnComplete(() =>
        {
            CameraController.Instance.upgrade = false;
            CameraController.Instance.FocusOnPlayer();
            cargoCanvas.gameObject.SetActive(false);
        });
    }

    public void UpgradeCount (bool free)
    {
        if (free)
        {
            //HoopslyIntegration.ShowRewarded(AdRewardType.upgrade_count);
        }
        else
        {
            if (StickmanController.Instance.EnoughMoney(150 + limitLevel * 100))
            {
                StickmanController.Instance.RemoveDollars(150 + limitLevel * 100);
                Instantiate(upgradeEffect, StickmanController.Instance.transform.position, upgradeEffect.transform.rotation);
                limitLevel++;
                limitButton.transform.DOScale(1.4f, 0.25f);
                limitButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    limitButton.transform.DOScale(1.3f, 0.15f);
                    limitButton.transform.DORotate(Vector3.zero, 0.15f);
                    limitText.text = "Level " + limitLevel;
                    limitPrice.text = "" + (150 + limitLevel * 100);
                });
                //StickmanController.Instance.AddCapacity();
            }
        }
    }

    public void UpgradeSpeed(bool free)
    {
        if (free)
        {
            //HoopslyIntegration.ShowRewarded(AdRewardType.played_speed);
        }
        else
        {
            if (StickmanController.Instance.EnoughMoney(150 + speedLevel * 100))
            {
                StickmanController.Instance.RemoveDollars(150 + speedLevel * 100);
                Instantiate(upgradeEffect, StickmanController.Instance.transform.position, upgradeEffect.transform.rotation);
                speedLevel++;
                speedButton.transform.DOScale(1.4f, 0.25f);
                speedButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    speedButton.transform.DOScale(1.3f, 0.15f);
                    speedButton.transform.DORotate(Vector3.zero, 0.15f);
                    speedText.text = "Level " + speedLevel;
                    speedPrice.text = "" + (150 + speedLevel * 100);
                });
                StickmanController.Instance.AddSpeed();
            }
        }
    }

    public bool NeedsCashier(ShopType type)
    {
        return true;
    }

    public void BuyCashier(ShopType shopType)
    {
        if (NeedsCashier(shopType))
        {
            int price = 250 + (cashierCount - 1) * 250;
            if (cashierCount < 1)
                price = 50;
            if (StickmanController.Instance.EnoughMoney(price))
            {
                //var s = Instantiate(workers[(int)shopType], StickmanController.Instance.transform.position, orkers[(int)shopType].transform.rotation);
                //s.SetType(AttractionType.PORT);
                StickmanController.Instance.RemoveDollars(price);
                cashierCount++;
                cashierButton.transform.DOScale(1.4f, 0.25f);
                cashierButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    //TutorialHandler.Instance.QuestIncrement(6);
                    cashierButton.transform.DOScale(1.3f, 0.15f);
                    cashierButton.transform.DORotate(Vector3.zero, 0.15f);
                    cashierText.text = cashierCount.ToString();
                    cashierPrice.text = "" + (250 + (cashierCount - 1) * 250);
                });
            }
        }
        else
        {
            cashierButton.transform.DOShakePosition(0.25f, 0.25f);
        }
    }

    /*public void SpeedBonus()
    {
        if (!IntegrationHandler.Instance.speedUsed)
        {
            IntegrationHandler.Instance.interTimer = 0;
            HoopslyIntegration.ShowRewarded(AdRewardType.upgrade_speed);
        }
    }

    public void MoneyBonus()
    {
        if (!IntegrationHandler.Instance.moneyUsed)
        {
            IntegrationHandler.Instance.interTimer = 0;
            HoopslyIntegration.ShowRewarded(AdRewardType.upgrade_income);
        }
    }

    public void VipBonus()
    {
        if (!IntegrationHandler.Instance.vipUsed)
        {
            IntegrationHandler.Instance.interTimer = 0;
            HoopslyIntegration.ShowRewarded(AdRewardType.other);
        }
    }

    private void RewardReceived(string arg1, MaxSdkBase.Reward arg2, MaxSdkBase.AdInfo arg3, AdRewardType arg4)
    {
        SecurityScript s = null;
        switch (arg4)
        {
            case AdRewardType.buy_barista:
                s = Instantiate(barista, StickmanController.Instance.transform.position, barista.transform.rotation);
                s.SetType(AttractionType.COFFEE);
                baristaCount++;
                baristaButton.transform.DOScale(1.4f, 0.25f);
                baristaButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    TutorialHandler.Instance.QuestIncrement(8);
                    baristaButton.transform.DOScale(1.3f, 0.15f);
                    baristaButton.transform.DORotate(Vector3.zero, 0.15f);
                    baristaText.text = baristaCount.ToString();
                    baristaPrice.text = "" + (250 + baristaCount * 250);
                });
                break;
            case AdRewardType.buy_cashier:
                s = Instantiate(security, StickmanController.Instance.transform.position, security.transform.rotation);
                s.SetType(AttractionType.PORT);
                cashierCount++;
                cashierButton.transform.DOScale(1.4f, 0.25f);
                cashierButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    TutorialHandler.Instance.QuestIncrement(6);
                    cashierButton.transform.DOScale(1.3f, 0.15f);
                    cashierButton.transform.DORotate(Vector3.zero, 0.15f);
                    cashierText.text = cashierCount.ToString();
                    cashierPrice.text = "" + (250 + (cashierCount - 1) * 250);
                });
                break;
            case AdRewardType.buy_porter:
                WorkerScript p = Instantiate(porter, StickmanController.Instance.transform.position, porter.transform.rotation);
                p.SetType(AttractionType.SHIPMENT);
                porterCount++;
                porterButton.transform.DOScale(1.4f, 0.25f);
                porterButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    porterButton.transform.DOScale(1.3f, 0.15f);
                    porterButton.transform.DORotate(Vector3.zero, 0.15f);
                    porterText.text = porterCount.ToString();
                    porterPrice.text = "" + (250 + porterCount * 250);
                });
                break;
            case AdRewardType.upgrade_count:
                Instantiate(upgradeEffect, StickmanController.Instance.transform.position, upgradeEffect.transform.rotation);
                limitLevel++;
                limitButton.transform.DOScale(1.4f, 0.25f);
                limitButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    limitButton.transform.DOScale(1.3f, 0.15f);
                    limitButton.transform.DORotate(Vector3.zero, 0.15f);
                    limitText.text = "Level " + limitLevel;
                    limitPrice.text = "" + (150 + limitLevel * 100);
                });
                StickmanController.Instance.AddCapacity();
                break;
            case AdRewardType.upgrade_porter:
                porterLevel++;
                foreach (var t in FindObjectsOfType<WorkerScript>())
                {
                    Instantiate(upgradeEffect, t.transform.position, upgradeEffect.transform.rotation);
                    t.SetLevel(porterLevel);
                }
                porterUpgradeButton.transform.DOScale(1.4f, 0.25f);
                porterUpgradeButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    porterUpgradeButton.transform.DOScale(1.3f, 0.15f);
                    porterUpgradeButton.transform.DORotate(Vector3.zero, 0.15f);
                    porterUpgradeText.text = "Level " + porterLevel;
                    porterUpgradePrice.text = "" + (150 + porterLevel * 100);
                });
                break;
            case AdRewardType.upgrade_speed:
                speedBonus = true;
                StickmanController.Instance.SetSpeed(true);
                IntegrationHandler.Instance.SpeedUsed();
                break;
            case AdRewardType.upgrade_income:
                moneyBonus = true;
                moneyVFX.SetActive(true);
                IntegrationHandler.Instance.MoneyUsed();
                break;
            case AdRewardType.other:
                vipBonus = true;
                vipVFX.SetActive(true);
                foreach (var c in FindObjectsOfType<VisitorScript>())
                {
                    c.SetVip(true);
                }
                IntegrationHandler.Instance.VipUsed();
                break;
            case AdRewardType.coins_1:
                StickmanController.Instance.AddTickets(40);
                CloseCase();
                break;
            case AdRewardType.played_speed:
                Instantiate(upgradeEffect, StickmanController.Instance.transform.position, upgradeEffect.transform.rotation);
                speedLevel++;
                speedButton.transform.DOScale(1.4f, 0.25f);
                speedButton.transform.DORotate(new Vector3(0, 0, -20), 0.25f).OnComplete(() =>
                {
                    speedButton.transform.DOScale(1.3f, 0.15f);
                    speedButton.transform.DORotate(Vector3.zero, 0.15f);
                    speedText.text = "Level " + speedLevel;
                    speedPrice.text = "" + (150 + speedLevel * 100);
                });
                StickmanController.Instance.AddSpeed();
                break;
        }
    }

    public void ShowCase()
    {
        caseCanvas.gameObject.SetActive(true);
        caseCanvas.DOFade(1, 0.5f).OnComplete(() =>
        {
            StartCoroutine(ShowNoThanks());
        });
        AdRewardType adRewardType = AdRewardType.coins_1;
        HoopslyIntegration.RaiseAdOfferEvent(adRewardType);
    }

    private IEnumerator ShowNoThanks()
    {
        yield return new WaitForSeconds(0.5f);
        noThanks.gameObject.SetActive(true);
    }

    public void ShowRewardedCase()
    {
        IntegrationHandler.Instance.interTimer = 0;
        HoopslyIntegration.ShowRewarded(AdRewardType.coins_1);
    }

    public void CloseCase()
    {
        caseCanvas.DOFade(0, 0.5f).OnComplete(() => caseCanvas.gameObject.SetActive(false));
        noThanks.gameObject.SetActive(false);
        StickmanController.Instance.AddTickets(10);
    }*/
}
