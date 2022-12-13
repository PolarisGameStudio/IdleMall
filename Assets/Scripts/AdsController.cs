using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MAXHelper;
using DG.Tweening;

public class AdsController : Singleton<AdsController>
{
    public ShopType shopType;
    public float totalTime;
    public bool rateUs, adsShown, vipInit, crowdInit;
    public bool bonusCamera;
    public int vipCount, crowdCount;
    [HideInInspector] public BuyObject toBuy;
    [HideInInspector] public BuyScript toBuyScr;
    public int rewardType;
    public float adsTimer = 45, workerTimer;
    public Image adsCircle;
    public TMP_Text adsTimerText;
    private int popupType;
    public List<Sprite> rewardSprites;
    public CanvasGroup rewardPopup, rateGroup;
    public Image rewardImage;
    public TMP_Text popupText;
    public Button vipButton, crowdButton, workerButton;
    public Image workerTimerImage;

    void Start()
    {
        rateUs = PlayerPrefs.GetInt("Rate", 0) == 1;
        adsShown = true;
        totalTime = PlayerPrefs.GetFloat("Totaltime", 0);
        Invoke ("InitializeBanners", 2f);
    }

    private void FixedUpdate()
    {
        totalTime += Time.fixedDeltaTime;
        if (workerTimer > 0)
        {
            workerTimer -= Time.deltaTime;
            workerTimerImage.fillAmount = workerTimer / 10;
        }
        else
        {
            if (workerTimer > -1)
            {
                workerButton.GetComponent<RectTransform>().DOAnchorPosX(85, 0.5f);
                workerTimer = -1;
            }
        }
    }

    private void OnApplicationQuit()
    {
        PlayerPrefs.SetFloat("Totaltime", totalTime);
    }

    private void InitializeBanners()
    {
        if (!TutorialHandler.Instance.debug)
        {
            AdsManager.ToggleBanner(true);
            string eventParameters1 = string.Format("\"ad_type\":\"banner\", \"placement\":\"banner\", \"result\":\"success\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
            string eventParameters = string.Format("\"ad_type\":\"banner\", \"placement\":\"banner\", \"result\":\"start\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters + "}");
            string eventParameters2 = string.Format("\"ad_type\":\"banner\", \"placement\":\"banner\", \"result\":\"watched\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters2 + "}");
        }    
    }

    public void ActivateAds()
    {
        //if (!TutorialHandler.Instance.debug)
        {
            adsShown = false;
            adsCircle.gameObject.SetActive(true);

            ShowRewardedPopup();

            /*AdsManager.EResultCode Result = AdsManager.ShowInter("first_inter");
            if (Result != AdsManager.EResultCode.OK)
            {
                string eventParameters = string.Format("\"ad_type\":\"interstitial\", \"placement\":\"first_inter\", \"result\":\"not_available\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
            }
            else
            {
                string eventParameters1 = string.Format("\"ad_type\":\"interstitial\", \"placement\":\"first_inter\", \"result\":\"success\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
                string eventParameters = string.Format("\"ad_type\":\"interstitial\", \"placement\":\"first_inter\", \"result\":\"start\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters + "}");
            }*/
        }
    }

    public void RateGame()
    {
        if (!TutorialHandler.Instance.debug)
        {
            if (!rateUs)
            {
                rateGroup.gameObject.SetActive(true);
                rateGroup.DOFade(1, 0.5f);
                rateUs = true;
                PlayerPrefs.SetInt("Rate", 1);
            }
        }
    }

    public void CloseRate()
    {
        rateGroup.DOFade(0, 0.25f).OnComplete(() => rateGroup.gameObject.SetActive(false));
    }

    public void RatePressed()
    {
        #if UNITY_IOS
            UnityEngine.iOS.Device.RequestStoreReview();
        #else
            Application.OpenURL("http://play.google.com/store/apps/details?id=" + Application.identifier);
        #endif
    }

    // Update is called once per frame
    void Update()
    {
        if (!adsShown && !rewardPopup.gameObject.activeSelf)
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

    public void ShowRewardedPopup(int _poptype = -1, BuyScript _tobuyscr = null, BuyObject _toObj = null)
    {
        rewardPopup.gameObject.SetActive(true);
        rewardPopup.DOFade(1, 0.5f);
        if (_poptype > -1)
            popupType = _poptype;
        else
        {
            if (popupType > 1)
                popupType = 0;
        }
        if (_tobuyscr != null)
            toBuyScr = _tobuyscr;
        if (_toObj != null)
            toBuy = _toObj;
        adsShown = true;
        switch (popupType)
        {
            case 0:
                popupText.text = "DO YOU WANT VIP CUSTOMERS?";
                if (!vipInit)
                {
                    vipButton.GetComponent<RectTransform>().DOAnchorPosX(-85, 0.5f);
                    vipInit = true;
                }
                break;
            case 1:
                popupText.text = "DO YOU WANT MORE CUSTOMERS?";
                if (!crowdInit)
                {
                    crowdButton.GetComponent<RectTransform>().DOAnchorPosX(-85, 0.5f);
                    crowdInit = true;
                }
                break;
            case 2:
                popupText.text = "NOT ENOUGH MONEY! DO YOU WANT TO UNLOCK IT FOR FREE?";
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
            switch (rewardType)
            {
                case 0:
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"vip_clients\", \"result\":\"not_available\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
                    break;
                case 1:
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"crowd_clients\", \"result\":\"not_available\", " +
                     "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
                    break;
                case 2:
                    string eventParameters2 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"build_ads\", \"result\":\"not_available\", " +
                       "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters2 + "}");
                    break;
            }
        }
        else
        {
            switch (rewardType)
            {
                case 0:
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"vip_clients\", \"result\":\"success\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
                    string eventParameters0 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"vip_clients\", \"result\":\"start\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters0 + "}");
                    break;
                case 1:
                    string eventParameters11 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"crowd_clients\", \"result\":\"success\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters11 + "}");
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"crowd_clients\", \"result\":\"start\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters1 + "}");
                    break;
                case 2:
                    string eventParameters2 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"build_ads\", \"result\":\"success\", " +
                       "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters2 + "}");
                    string eventParameters22 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"build_ads\", \"result\":\"start\", " +
                       "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters22 + "}");
                    break;
            }
        }
    }

    public void ShowRewardToUser (ShopType _type)
    {
        shopType = _type;
        if (workerTimer <= 0)
        {
            workerButton.GetComponent<RectTransform>().DOAnchorPosX(-85, 0.5f);
        }
        workerTimer = 10;
    }

    public void WorkerButtonClicked ()
    {
        AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnWorkersAds);
        rewardType = 1;
        UpgradeHandler.Instance.currentShopType = (int)shopType;
        workerTimer = 0;
        if (Result != AdsManager.EResultCode.OK)
        {
            adsShown = false;
            string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_helper\", \"result\":\"not_available\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
        }
        else
        {
            string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_helper\", \"result\":\"success\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
            string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_helper\", \"result\":\"start\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters + "}");
        }
    }

    public void ShowRewardToUser (BuyObject _toBuy)
    {
        if (toBuy != _toBuy)
        {
            toBuy = _toBuy;
            AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnBuyAds);
            if (Result != AdsManager.EResultCode.OK)
            {
                adsShown = false;
                string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"decor_buy\", \"result\":\"not_available\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
            }
            else
            {
                string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"decor_buy\", \"result\":\"success\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
                string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"decor_buy\", \"result\":\"start\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters + "}");
            }
        }
    }

    public void ShowRewardToUser(BuyScript _toBuy)
    {
        if (toBuyScr != _toBuy)
        {
            toBuyScr = _toBuy;
            AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnBuyScrAds);
            if (Result != AdsManager.EResultCode.OK)
            {
                adsShown = false;
                string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"hanger_buy\", \"result\":\"not_available\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
            }
            else
            {
                string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"hanger_buy\", \"result\":\"success\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
                string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"hanger_buy\", \"result\":\"start\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters + "}");
            }
        }
    }

    public void ShowRewardToUser (int _rewardType)
    {
        rewardType = _rewardType;
        AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnFinishAds);
        if (Result != AdsManager.EResultCode.OK)
        {
            adsShown = false;
            switch (rewardType)
            {
                case 0:
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"vip_clients\", \"result\":\"not_available\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
                    break;
                case 1:
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"crowd_clients\", \"result\":\"not_available\", " +
                     "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
                    break;
            }
        }
        else
        {
            switch (rewardType)
            {
                case 0:
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"vip_clients\", \"result\":\"success\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
                    string eventParameters0 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"vip_clients\", \"result\":\"start\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters0 + "}");
                    break;
                case 1:
                    string eventParameters11 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"crowd_clients\", \"result\":\"success\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters11 + "}");
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"crowd_clients\", \"result\":\"start\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters1 + "}");
                    break;
            }
        }
    }

    public void ShowRewardSpawnWorker (int _rewardType)
    {
        rewardType = _rewardType;
        AdsManager.EResultCode Result = AdsManager.ShowRewarded(gameObject, OnWorkersAds);
        if (Result != AdsManager.EResultCode.OK)
        {
            switch (rewardType)
            {
                case 0:
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_cashier\", \"result\":\"not_available\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
                    break;
                case 1:
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_helper\", \"result\":\"not_available\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
                    break;
                case 2:
                    string eventParameters2 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_upgrade\", \"result\":\"not_available\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters2 + "}");
                    break;

            }
            adsShown = false;
        }
        else
        {
            switch (rewardType)
            {
                case 0:
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_cashier\", \"result\":\"success\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
                    string eventParameters0 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_cashier\", \"result\":\"start\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters0 + "}");
                    break;
                case 1:
                    string eventParameters11 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_helper\", \"result\":\"success\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters11 + "}");
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_helper\", \"result\":\"start\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters1 + "}");
                    break;
                case 2:
                    string eventParameters22 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_upgrade\", \"result\":\"success\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters22 + "}");
                    string eventParameters2 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_upgrade\", \"result\":\"start\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters2 + "}");
                    break;

            }
        }
    }

    private void OnBuyAds (bool Success)
    {
        if (Success)
        {
            toBuy.Buy();
            string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"decor_buy\", \"result\":\"watched\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters + "}");
        }
        else
        {
            // Игрок не досмотрел рекламу до конца, ничего не давайте
            string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"decor_buy\", \"result\":\"canceled\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters + "}");
        }
        adsTimer = 45;
        adsShown = false;
    }

    private void OnBuyScrAds(bool Success)
    {
        if (Success)
        {
            toBuyScr.Buy();
            string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"hanger_buy\", \"result\":\"watched\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters + "}");
        }
        else
        {
            // Игрок не досмотрел рекламу до конца, ничего не давайте
            string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"hanger_buy\", \"result\":\"canceled\", " +
                "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
            AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters + "}");
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
                    vipButton.GetComponent<RectTransform>().DOAnchorPosX(85, 0.5f);
                    bonusCamera = true;
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"vip_clients\", \"result\":\"watched\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters + "}");
                    break;
                case 1:
                    //больше клиентов
                    crowdCount = Random.Range(5, 11);
                    crowdButton.GetComponent<RectTransform>().DOAnchorPosX(85, 0.5f);
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"crowd_clients\", \"result\":\"watched\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters1 + "}");
                    break;
                case 2:
                    //постройка объекта за рекламу
                    if (toBuyScr != null)
                    {
                        toBuyScr.Buy();
                        toBuyScr = null;
                    }
                    if (toBuy != null)
                    {
                        toBuy.Buy();
                        toBuy = null;
                    }
                    string eventParameters2 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"build_ads\", \"result\":\"watched\", " +
                       "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters2 + "}");
                    break;
            }
        }
        else
        {
            toBuyScr = null;
            toBuy = null;
            // Игрок не досмотрел рекламу до конца, ничего не давайте
            switch (rewardType)
            {
                case 0:
                    //вип-клиенты
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"vip_clients\", \"result\":\"canceled\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters + "}");
                    break;
                case 1:
                    //больше клиентов
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"crowd_clients\", \"result\":\"canceled\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters1 + "}");
                    break;
                case 2:
                    //постройка объекта за рекламу
                    string eventParameters2 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"build_ads\", \"result\":\"canceled\", " +
                       "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters2 + "}");
                    break;
            }
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
            vipButton.GetComponent<RectTransform>().DOAnchorPosX(-85, 0.5f);
        }
    }

    public void ReduceCrowdCount()
    {
        crowdCount--;
        if (crowdCount <= 0)
        {
            crowdButton.GetComponent<RectTransform>().DOAnchorPosX(-85, 0.5f);
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
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_cashier\", \"result\":\"watched\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters + "}");
                    break;
                case 1:
                    UpgradeHandler.Instance.AdsWorker();
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_helper\", \"result\":\"watched\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters1 + "}");
                    break;
                case 2:
                    UpgradeHandler.Instance.AdsUpgradeWorkers();
                    string eventParameters2 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_upgrade\", \"result\":\"watched\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters2 + "}");
                    break;
            }
            UpgradeHandler.Instance.LimitSet();
        }
        else
        {
            // Игрок не досмотрел рекламу до конца, ничего не давайте
            switch (rewardType)
            {
                case 0:
                    string eventParameters = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_cashier\", \"result\":\"canceled\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters + "}");
                    break;
                case 1:
                    string eventParameters1 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_helper\", \"result\":\"canceled\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters1 + "}");
                    break;
                case 2:
                    string eventParameters2 = string.Format("\"ad_type\":\"rewarded\", \"placement\":\"ads_upgrade\", \"result\":\"canceled\", " +
                        "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                    AppMetrica.Instance.ReportEvent("video_ads_watch", "{" + eventParameters2 + "}");
                    break;

            }
        }
        adsTimer = 45;
        adsShown = false;
    }


    public void RewardDismissed()
    {
        if (popupType != 2)
        {
            popupType++;
            if (popupType > 1)
                popupType = 0;
            rewardPopup.DOFade(0, 0.25f).OnComplete(() =>
            {
                rewardPopup.gameObject.SetActive(false);
            });
            adsShown = false;

            AdsManager.EResultCode Result = AdsManager.ShowInter("reward_dismissed");
            if (Result != AdsManager.EResultCode.OK)
            {
                string eventParameters = string.Format("\"ad_type\":\"interstitial\", \"placement\":\"reward_dismissed\", \"result\":\"not_available\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters + "}");
            }
            else
            {
                string eventParameters1 = string.Format("\"ad_type\":\"interstitial\", \"placement\":\"reward_dismissed\", \"result\":\"success\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_available", "{" + eventParameters1 + "}");
                string eventParameters = string.Format("\"ad_type\":\"interstitial\", \"placement\":\"reward_dismissed\", \"result\":\"start\", " +
                    "\"connection\":\"1\", \"time\":\"{0}\"", Time.time);
                AppMetrica.Instance.ReportEvent("video_ads_started", "{" + eventParameters + "}");
            }
            AppMetrica.Instance.SendEventsBuffer();
        }
        else
        {
            rewardPopup.DOFade(0, 0.25f).OnComplete(() =>
            {
                rewardPopup.gameObject.SetActive(false);
            });
            adsShown = false;
        }
    }
}
