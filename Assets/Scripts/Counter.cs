using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class Counter : MonoBehaviour
{
    public int maxAmount = 5;
    public bool occupied;
    public float timer, maxTimer;
    public float waitTimer = 0.25f;
    public Transform moneyPos;
    public List<MoneyScript> money;
    public List<VisitorScript> queue;
    public RectTransform canvasRect;
    [SerializeField] private Image progressUI, progressPrefab;
    public Vector3 queueVector = new Vector3 (-1.25f, 0, 0);

    private void Start()
    {
        timer = maxTimer;
        if (GetComponent<Table>() == null)
        {
            if (canvasRect == null)
            {
                canvasRect = GameObject.Find("Canvas").GetComponent<RectTransform>();
            }
            progressUI = Instantiate(progressPrefab, canvasRect.transform);
        }
    }

    public bool IsAvailable(ShopType type)
    {
        return FindObjectsOfType<VisitorScript>().Where (x => x.GetShopType() == type).Count() < maxAmount;
    }

    public Vector3 GetPos()
    {
        return transform.position + queueVector * queue.Count;
    }

    public Vector3 GetPos(int index)
    {
        return transform.position + queueVector * (index+1);
    }

    public void AddMoney (MoneyScript _money)
    {
        money.Add(_money);
    }

    public void RemoveMoney (MoneyScript _money)
    {
        money.Remove(_money);
    }

    public Vector3 MoneyPos()
    {
        return moneyPos.position + new Vector3 (0, (money.Count/5) * 0.25f, (money.Count % 5) * 0.4f);
    }

    public void Update()
    {
        if (occupied && queue.Count > 0 && Vector3.Distance (queue[0].transform.position, GetPos(0)) <= 0.1f)
        {
            timer -= Time.deltaTime * 60;
            if (timer <= 0)
            {
                TutorialHandler.Instance.QuestIncrement(2);
                RemoveQueue(queue[0]);
                timer = maxTimer;
            }
            if (progressUI != null)
            {
                float offsetPosY = transform.position.y + 1f;
                Vector3 offsetPos = new Vector3(transform.position.x, offsetPosY, transform.position.z);
                Vector2 canvasPos;
                Vector2 screenPoint = Camera.main.WorldToScreenPoint(offsetPos);
                RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRect, screenPoint, null, out canvasPos);
                progressUI.gameObject.SetActive(true);
                progressUI.transform.localPosition = new Vector2(canvasPos.x, canvasPos.y + 200);
                progressUI.fillAmount = 1 - timer / maxTimer;
            }
        }
        else
        {
            if (progressUI != null)
                progressUI.gameObject.SetActive(false);
        }
    }

    public void AddQueue (VisitorScript _visitor)
    {
        queue.Add(_visitor);
    }

    public void RemoveQueue (VisitorScript _visitor)
    {
        queue.Remove(_visitor);
        _visitor.Leave();
        UpdateQueue();
    }

    public void UpdateQueue()
    {
        StartCoroutine(UpdatingQueue());
    }

    private IEnumerator UpdatingQueue()
    {
        yield return new WaitForSeconds(waitTimer);
        for (int i = 0; i < queue.Count; i++)
        {
            queue[i].SetQueuePos(GetPos(i));
        }
    }
}
