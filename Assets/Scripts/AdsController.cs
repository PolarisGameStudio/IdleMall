using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MAXHelper;

public class AdsController : MonoBehaviour
{
    public bool adsShown;
    public int rewardType;
    public float adsTimer = 45;
    public Image adsCircle;
    public TMP_Text adsTimerText;
    public CanvasGroup rewardPopup;
    public Button vipButton, crowdButton;

    void Start()
    {
        StartCoroutine(InitializeBanners());
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
        adsShown = true;
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

    private void OnFinishAds(bool Success)
    {
        if (Success)
        {
            switch (rewardType)
            {
                case 0:
                    //вип-клиенты
                    break;
                case 1:
                    //больше клиентов
                    break;
            }
        }
        else
        {
            // Игрок не досмотрел рекламу до конца, ничего не давайте
        }
        adsTimer = 45;
        adsShown = false;
        vipButton.gameObject.SetActive(true);
        crowdButton.gameObject.SetActive(true);
    }


    public void RewardDismissed()
    {
        AdsManager.ShowInter("reward_dismissed");
        adsShown = false;
    }
}
