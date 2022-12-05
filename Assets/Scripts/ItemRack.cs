using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ItemRack : MonoBehaviour
{
    public ShopType type;
    public int animalType;
    public float timer, maxTimer = 90;
    public int amount, toAddAmount, maxAmount = 4;
    public List<GameObject> items;
    public RectTransform canvasRect;
    [SerializeField] protected TMP_Text text, textPrefab;
    public float waitTimer = 0.25f;
    public List<VisitorScript> queue;
    public Vector3 queueVector = new Vector3(-1.25f, 0, 0);

    protected virtual void Start()
    {
        toAddAmount = 0;
        timer = maxTimer;
        if (canvasRect == null)
        {
            canvasRect = GameObject.Find("Canvas").GetComponent<RectTransform>();
        }
        text = Instantiate(textPrefab, canvasRect.transform);
        text.text = string.Format("{0}/{1}", amount, maxAmount);
        for (int i = 0; i < items.Count; i++)
        {
            if (amount > i)
            {
                items[i].gameObject.SetActive(true);
            }
            else
            {
                items[i].gameObject.SetActive(false);
            }
        }
    }

    public virtual bool HasSpace()
    {
        return amount < maxAmount;
    }

    public virtual ChairScript GetChair()
    {
        return null;
    }

    public virtual Vector3 GetPosition()
    {
        return GetPos();
    }

    public virtual Vector3 GetWaiterPosition()
    {
        return transform.position;
    }

    public virtual Vector3 GetItemPosition()
    {
        return transform.position;
    }

    public virtual bool IsUsable()
    {
        return amount > 0;
    }

    public virtual bool IsAvailable()
    {
        return amount > 0;
    }

    public virtual void GetItem(Transform target = null)
    {
        amount--;
        items[amount].SetActive(false);
        text.text = string.Format("{0}/{1}", amount, maxAmount);
    }

    protected virtual void Update()
    {
        if (Vector3.Distance(transform.position, StickmanController.Instance.transform.position) <= 4)
        {
            text.gameObject.SetActive(true);
            float offsetPosY = transform.position.y + 1f;
            Vector3 offsetPos = new Vector3(transform.position.x, offsetPosY, transform.position.z);
            Vector2 canvasPos;
            Vector2 screenPoint = Camera.main.WorldToScreenPoint(offsetPos);
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRect, screenPoint, null, out canvasPos);
            if ((amount + toAddAmount) < maxAmount && !StickmanController.Instance.IsMoving())
            {
                if (StickmanController.Instance.HasItem(type))
                {
                    timer -= Time.deltaTime * 60;
                    if (timer <= 0)
                    {
                        toAddAmount++;
                        StickmanController.Instance.GiveItem(type, this);
                        timer = maxTimer;
                    }
                }
            }
            text.transform.localPosition = new Vector2(canvasPos.x, canvasPos.y + 225);
        }
        else
        {
            text.gameObject.SetActive(false);
        }
    }

    public virtual void AddItem()
    {
        if (amount < maxAmount)
        {
            TutorialHandler.Instance.QuestIncrement(1);
            amount++;
            toAddAmount--;
            items[amount - 1].SetActive(true);
            if (amount == maxAmount)
                text.text = "Max";
            else
                text.text = string.Format("{0}/{1}", amount, maxAmount);
        }
        if (toAddAmount < 0)
            toAddAmount = 0;
    }

    public virtual Vector3 GetPos()
    {
        return transform.position + queueVector * queue.Count;
    }

    public virtual Vector3 GetPos(int index)
    {
        return transform.position + queueVector * (index + 1);
    }

    public virtual void AddQueue(VisitorScript _visitor)
    {
        queue.Add(_visitor);
    }

    public void RemoveQueue(VisitorScript _visitor)
    {
        queue.Remove(_visitor);
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
            queue[i].SetQueuePos(GetPos(i), true);
        }
    }
}
