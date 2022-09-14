using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Counter : MonoBehaviour
{
    public int maxAmount = 5;
    public bool occupied;
    public float timer, maxTimer;
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

    public bool IsAvailable()
    {
        return queue.Count < maxAmount;
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
        return moneyPos.position + new Vector3 (0, money.Count * 0.3f, 0);
    }

    public void Update()
    {
        if (occupied && queue.Count > 0 && queue[0].DestinationReached())
        {
            timer -= Time.deltaTime * 60;
            if (timer <= 0)
            {
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
        for (int i = 0; i < queue.Count; i++)
        {
            queue[i].SetQueuePos(GetPos(i));
        }
    }
}
