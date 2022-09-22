using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using TMPro;
using DG.Tweening;

public class TutorialHandler : Singleton<TutorialHandler>
{
    public bool moved;
    public int currentQuestID;
    [SerializeField] private List<Quest> quests;
    [SerializeField] private GameObject arrow;
    [SerializeField] private GameObject movementTutorial, questPanel;
    [SerializeField] private TMP_Text questText;

    void Start()
    {
        if (!moved)
        {
            movementTutorial.gameObject.SetActive(true);
        }
        CheckTutorialStatus();
    }

    public void QuestIncrement (int _ID)
    {
        if (currentQuestID == _ID)
        {
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
     * */

    private void ProceedTutorial()
    {
        currentQuestID++;
        CheckTutorialStatus();
    }

    private void CheckTutorialStatus()
    {
        Transform target = null;
        switch (currentQuestID)
        {
            case 0:
                movementTutorial.gameObject.SetActive(false);
                target = FindObjectsOfType<ClothRackCircle>().Where (x => x.rack.item.type == ShopType.CLOTH).FirstOrDefault().transform;
                CameraController.Instance.Focus(target, 3f);
                ShowArrow(target, 1.5f);
                break;
            case 1:
                target = FindObjectsOfType<ItemRack>().Where (x => x.type == ShopType.CLOTH).FirstOrDefault().transform;
                CameraController.Instance.Focus(target, 2f);
                ShowArrow(target, 1f);
                break;
            case 2:
                target = FindObjectsOfType<CounterCircle>().Where (x => x.counter == ShopHandler.Instance.shops[0].counter).FirstOrDefault().transform;
                CameraController.Instance.Focus(target, 2f);
                ShowArrow(target, 1f);
                break;
            case 4:
                target = FindObjectsOfType<BuyScript>().FirstOrDefault(x => x.GetType() == ShopType.CLOTH && x.GetComponent<BuyExtensionScript>() == null).transform;
                CameraController.Instance.Focus(target, 1f);
                ShowArrow(target, 1f);
                break;
            case 6:
                target = FindObjectsOfType<BuyExtensionScript>().FirstOrDefault(x => x.GetType() == ShopType.CLOTH).transform;
                CameraController.Instance.Focus(target, 3f);
                ShowArrow(target, 1f);
                break;
            default:
                StartCoroutine(HideArrow(0));
                break;
        }
        if (currentQuestID <= (quests.Count - 1) && currentQuestID >= 0)
        {
            questPanel.gameObject.SetActive(true);
            questPanel.transform.DOScale(questPanel.transform.localScale.x + 0.1f, 0.25f).OnComplete(() =>
            {
                questPanel.transform.DOScale(questPanel.transform.localScale.x - 0.1f, 0.15f);
            });
            questText.text = quests[currentQuestID].text;
        }
        else
        {
            questPanel.gameObject.SetActive(false);
            StartCoroutine(HideArrow(0));
        }
        /*foreach (var v in FindObjectsOfType<BuyAttractionScript>())
        {
            v.CheckLocked();
        }
        foreach (var v in FindObjectsOfType<UpgradeAreaScript>())
        {
            v.CheckLocked();
        }
        foreach (var v in FindObjectsOfType<UpgradeBoatScript>())
        {
            v.CheckLocked();
        }
        foreach (var v in FindObjectsOfType<HireStaffScript>())
        {
            v.CheckLocked();
        }*/
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