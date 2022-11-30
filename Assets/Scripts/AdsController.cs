using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MAXHelper;
using DG.Tweening;

public class AdsController : Singleton<AdsController>
{
    public float totalTime;
    public bool adsShown, vipInit, crowdInit;
    public bool bonusCamera;
    public int vipCount, crowdCount;
    [HideInInspector] public BuyObject toBuy;
    [HideInInspector] public BuyScript toBuyScr;
    public int rewardType;
    public float adsTimer = 45;
    public Image adsCircle;
    public TMP_Text adsTimerText;
    private int popupType;
    public List<Sprite> rewardSprites;
    public CanvasGroup rewardPopup;
    public Image rewardImage;
    public TMP_Text popupText;
    public Button vipButton, crowdButton;

    void Start()
    {
        totalTime = PlayerPrefs.GetFloat("Totaltime", 0);
        StartCoroutine(InitializeBanners());
    }

    private void FixedUpdate()
    {
        totalTime += Time.fixedDeltaTime;
    }

    private void OnApplicationQuit()
    {
        PlayerPrefs.SetFloat("Totaltime", totalTime);
    }

    private IEnumerator InitializeBanners()
    {
        yield return new WaitForSeconds(0.5f);
        AdsManager.ToggleBanner(true);
    }

    // Update is called once per frame
    void Update()
    {
        if (!adsShown)
        {
            adsTimer -= Time.deltaTime;
            if (adsTimer < 0)
            {
                ShowRewardedPopup();
                adsTimer = 45;
            }
            else
            {
                adsCircle.fillAmount = adsTimer / 45;
                adsTimerText.text = Mathf.CeilToInt(adsTimer).ToString();
            }
        }
    }

    private void ShowRewardedPopup()
    {
        rewardPopup.gameObject.SetActive(true);
        rewardPopup.DOFade(1, 0.5f);
        adsShown = true;
        switch (popupType)
        {
            case 0:
                popupText.text = "DO YOU WANT VIP CUSTOMERS?";
                if (!vipInit)
                {
                    vipButton.GetComponent<RectTransform>().DOAnchorPosX(-98, 0.5f);
                    vipInit = true;
                }
                break;
            case 1:
                popupText.text = "DO YOU WANT MORE CUSTOMERS?";
                if (!crowdInit)
                {
                    crowdButton.GetComponent<RectTransform>().DOAnchorPosX(-98, 0.5f);
                    crowdInit = true;
                }
                break;
        }
        rewardImage.sprite = rewardSprites[popupType];
    }

    public void ShowPopupRewardToUser()
    {
        rewardType = popupType;
        popupType++;
        if (popupType > 1)
            popupType = 0;
        AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnFinishAds);
        if (Result != AdsManager.EResultCode.OK)
        {
            adsShown = false;
        }
    }

    public void ShowRewardToUser (BuyObject _toBuy)
    {
        toBuy = _toBuy;
        AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnBuyAds);
        if (Result != AdsManager.EResultCode.OK)
        {
            adsShown = false;
        }
    }

    public void ShowRewardToUser(BuyScript _toBuy)
    {
        toBuyScr = _toBuy;
        AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnBuyScrAds);
        if (Result != AdsManager.EResultCode.OK)
        {
            adsShown = false;
        }
    }

    public void ShowRewardToUser (int _rewardType)
    {
        rewardType = _rewardType;
        AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnFinishAds);
        if (Result != AdsManager.EResultCode.OK)
        {
            adsShown = false;
        }
    }

    public void ShowRewardSpawnWorker (int _rewardType)
    {
        rewardType = _rewardType;
        AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnWorkersAds);
        if (Result != AdsManager.EResultCode.OK)
        {
            adsShown = false;
        }
    }

    private void OnBuyAds (bool Success)
    {
        if (Success)
        {
            toBuy.Buy();
        }
        else
        {
            // Игрок не досмотрел рекламу до конца, ничего не давайте
        }
        adsTimer = 45;
        adsShown = false;
    }

    private void OnBuyScrAds(bool Success)
    {
        if (Success)
        {
            toBuyScr.Buy();
        }
        else
        {
            // Игрок не досмотрел рекламу до конца, ничего не давайте
        }
        adsTimer = 45;
        adsShown = false;
    }

    private void OnFinishAds(bool Success)
    {
        if (Success)
        {
            switch (rewardType)
            {
                case 0:
                    //вип-клиенты
                    vipCount = Random.Range(3, 6);
                    vipButton.GetComponent<RectTransform>().DOAnchorPosX(98, 0.5f);
                    bonusCamera = true;
                    break;
                case 1:
                    //больше клиентов
                    crowdCount = Random.Range(5, 11);
                    crowdButton.GetComponent<RectTransform>().DOAnchorPosX(98, 0.5f);
                    break;
            }
        }
        else
        {
            // Игрок не досмотрел рекламу до конца, ничего не давайте
        }
        rewardPopup.DOFade(0, 0.25f).OnComplete(() => rewardPopup.gameObject.SetActive(false));
        adsTimer = 45;
        adsShown = false;
    }

    public void ReduceVipCount()
    {
        vipCount--;
        if (vipCount <= 0)
        {
            vipButton.GetComponent<RectTransform>().DOAnchorPosX(-98, 0.5f);
        }
    }

    public void ReduceCrowdCount()
    {
        crowdCount--;
        if (crowdCount <= 0)
        {
            crowdButton.GetComponent<RectTransform>().DOAnchorPosX(-98, 0.5f);
        }
    }

    private void OnWorkersAds(bool Success) 
    {
        if (Success)
        {
            switch (rewardType)
            {
                case 0:
                    UpgradeHandler.Instance.AdsCashier();
                    break;
                case 1:
                    UpgradeHandler.Instance.AdsWorker();
                    break;
                case 2:
                    UpgradeHandler.Instance.AdsUpgradeWorkers();
                    break;

            }
        }
        else
        {
            // Игрок не досмотрел рекламу до конца, ничего не давайте
        }
        adsTimer = 45;
        adsShown = false;
    }


    public void RewardDismissed()
    {
        popupType++;
        if (popupType > 1)
            popupType = 0;
        rewardPopup.DOFade(0, 0.25f).OnComplete(() =>
        {
            rewardPopup.gameObject.SetActive(false);
        });
        AdsManager.ShowInter("reward_dismissed");
        adsShown = false;
    }
}
