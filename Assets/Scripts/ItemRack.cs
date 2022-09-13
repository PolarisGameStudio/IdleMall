using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ItemRack : MonoBehaviour
{
    public ShopType type;
    public float timer, maxTimer = 90;
    public int amount, maxAmount = 4;
    public List<GameObject> items;
    public RectTransform canvasRect;
    [SerializeField] private TMP_Text text, textPrefab;

    private void Start()
    {
        timer = maxTimer;
        if (canvasRect == null)
        {
            canvasRect = GameObject.Find("Canvas").GetComponent<RectTransform>();
        }
        text = Instantiate(textPrefab, canvasRect.transform);
        text.text = string.Format("{0}/{1}", amount, maxAmount);
    }

    public bool IsAvailable()
    {
        return amount > 0;
    }

    public void GetItem()
    {
        amount--;
        items[amount].SetActive(false);
        text.text = string.Format("{0}/{1}", amount, maxAmount);
    }

    private void Update()
    {
        if (Vector3.Distance(transform.position, StickmanController.Instance.transform.position) <= 4)
        {
            text.gameObject.SetActive(true);
            float offsetPosY = transform.position.y + 1f;
            Vector3 offsetPos = new Vector3(transform.position.x, offsetPosY, transform.position.z);
            Vector2 canvasPos;
            Vector2 screenPoint = Camera.main.WorldToScreenPoint(offsetPos);
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRect, screenPoint, null, out canvasPos);
            if (amount < maxAmount && !StickmanController.Instance.IsMoving())
            {
                if (StickmanController.Instance.HasItem (type))
                {
                    timer -= Time.deltaTime * 60;
                    if (timer <= 0)
                    {
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

    public void AddItem()
    {
        if (amount < maxAmount)
        {
            amount++;
            items[amount-1].SetActive(true);
            if (amount == maxAmount)
                text.text = "Max";
            else
                text.text = string.Format("{0}/{1}", amount, maxAmount);
        }
    }
}
