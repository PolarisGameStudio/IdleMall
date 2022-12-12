using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using TMPro;
using DG.Tweening;

public class TutorialHandler : Singleton<TutorialHandler>
{
    public bool debug;
    public bool buttonShown;
    public bool moved;
    public int currentQuestID;
    [SerializeField] private List<Quest> quests;
    [SerializeField] private GameObject arrow;
    [SerializeField] private GameObject movementTutorial, questPanel, questSmallPanel;
    [SerializeField] private TMP_Text questText, questSmallText;

    void Start()
    {
        //currentQuestID = 10;
        if (!moved && !debug)
        {
            movementTutorial.gameObject.SetActive(true);
        }
        #if UNITY_EDITOR
            debug = true;
            movementTutorial.gameObject.SetActive(false);
        #endif
        Invoke("CheckTutorialStatus", 0.1f);
    }

    public void QuestIncrement (int _ID)
    {
        if (currentQuestID == _ID)
        {
            if (_ID == 8)
                CameraController.Instance.SetOldPlayer(GameObject.FindGameObjectWithTag("Player").transform);
            quests[_ID].amount++;
            CheckQuestsCompletion(_ID);
        }
    }

    public void CheckQuestsCompletion (int _ID = -1)
    {
        if (_ID == -1)
            _ID = currentQuestID;
        try
        {
            switch (quests[_ID].type)
            {
                case QuestType.TICKETS:
                    if (StickmanController.Instance.EnoughMoney(quests[_ID].maxAmount))
                    {
                        ProceedTutorial();
                    }
                    break;
                default:
                    if (quests[_ID].amount >= quests[_ID].maxAmount)
                    {
                        ProceedTutorial();
                    }
                    break;
            }
        }
        catch
        {

        }
    }

    /* 0 - взять ящики с одеждой
     * 1 - отнести ящики к вешалке
     * 2 - обслужить клиента на кассе
     * 3, 4 - построить новую вешалку
     * 5, 6 - построить новую зону
     * 7, 8 - нанять нового работника
     * 9, 10 - купить новый магазин
     * */

    private void ProceedTutorial()
    {
        currentQuestID++;
        CheckTutorialStatus();
    }

    private void CheckTutorialStatus()
    {
        if (debug)
            currentQuestID = 11;
        Transform target = null;
        switch (currentQuestID)
        {
            case 0:
                movementTutorial.gameObject.SetActive(false);
                target = FindObjectsOfType<ClothRackCircle>().Where (x => x.rack.item.type == ShopType.CLOTH).FirstOrDefault().transform;
                CameraController.Instance.Focus(target, 2.5f);
                ShowArrow(target, 1.5f);
                break;
            case 1:
                target = FindObjectsOfType<ItemRack>().Where (x => x.type == ShopType.CLOTH).FirstOrDefault().transform;
                CameraController.Instance.Focus(target, 2.5f);
                ShowArrow(target, 1f);
                break;
            case 2:
                target = FindObjectsOfType<CounterCircle>().Where (x => x.counter == ShopHandler.Instance.shops[0].counter).FirstOrDefault().transform;
                CameraController.Instance.Focus(target, 2f);
                ShowArrow(target, 1f);
                break;
            case 4:
                target = FindObjectsOfType<BuyScript>().FirstOrDefault(x => x.GetType() == ShopType.CLOTH && x.GetComponent<BuyExtensionScript>() == null && x.GetComponent<BuyLiftScript>() == null && x.GetComponent<BuyElevatorScript>() == null).transform;
                CameraController.Instance.Focus(target, 2f);
                ShowArrow(target, 1f);
                break;
            case 6:
                target = FindObjectsOfType<BuyExtensionScript>().FirstOrDefault(x => x.GetType() == ShopType.CLOTH).transform;
                CameraController.Instance.Focus(target, 3f);
                ShowArrow(target, 1f);
                break;
            case 8:
                target = FindObjectsOfType<UpgradeCircle>().FirstOrDefault (x => x.GetType() == ShopType.CLOTH).transform;
                CameraController.Instance.Focus(target, 3f);
                ShowArrow(target, 1f);
                break;
            case 10:
                target = FindObjectsOfType<BuyRoomScript>().Where (x => x.GetType() == ShopType.COFFEE).FirstOrDefault().transform;
                CameraController.Instance.Focus(target, 3f);
                ShowArrow(target, 1f);
                break;
            default:
                StartCoroutine(HideArrow(0));
                break;
        }
        if (currentQuestID > 6 && !debug)
        {
            AdsController.Instance.ActivateAds();
        }
        if (currentQuestID <= (quests.Count - 1) && currentQuestID >= 0)
        {
            questPanel.SetActive(true);
            questSmallPanel.SetActive(false);
            questPanel.transform.DOScale(1f, 0.25f).OnComplete(() =>
            {
                questPanel.transform.DOScale(1f, 1.5f).OnComplete(() =>
                {
                    questSmallPanel.SetActive(true);
                    questPanel.transform.DOScale(0, 0.25f);
                });
            });
            questText.text = quests[currentQuestID].text;
            questSmallText.text = quests[currentQuestID].text;
            string eventParameters = string.Format("\"level_number\":\"{0}\", \"level_name\":\"tutorial\", \"level_diff\":\"easy\", \"level_loop\":\"1\", \"level_random\":\"0\", \"level_type\":\"normal\", \"result\":\"win\", \"time\":\"{1}\", \"progress\":\"100\"", currentQuestID, Time.time);
            AppMetrica.Instance.ReportEvent("tutorial_progress", "{" + eventParameters + "}");
            AppMetrica.Instance.SendEventsBuffer();
            if (quests[currentQuestID].type == QuestType.TICKETS)
            {
                CheckQuestsCompletion();
            }
        }
        else
        {
            movementTutorial.gameObject.SetActive(false);
            UpgradeHandler.Instance.LimitSet();
            questPanel.SetActive(false);
            questSmallPanel.SetActive(false);
            StartCoroutine(HideArrow(0));
        }
        foreach (var v in FindObjectsOfType<BuyScript>())
        {
            v.CheckLevel();
        }
        foreach (var v in FindObjectsOfType<BuyObject>())
        {
            v.CheckLevel();
        }
    }

    private void ShowArrow (Transform _target, float _delay)
    {
        arrow.SetActive(true);
        arrow.transform.DOScale(1, 0.5f);
        arrow.transform.position = new Vector3(_target.position.x, _target.position.y + 4, _target.position.z);
        //StartCoroutine(HideArrow(_delay));
    }

    private IEnumerator HideArrow (float _delay)
    {
        yield return new WaitForSeconds(_delay);
        arrow.transform.DOScale(0, 0.5f).OnComplete(() => arrow.SetActive(false));
    }

    public void Moved()
    {
        if (!moved)
        {
            ProceedTutorial();
            moved = true;
        }
    }
}

public enum QuestType { TICKETS, BUILD, HIRE, JOB }

[System.Serializable]
public class Quest
{
    public string text;
    public QuestType type;
    public int amount, maxAmount;
}
