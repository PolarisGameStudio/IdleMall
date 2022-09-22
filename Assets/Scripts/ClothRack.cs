using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ClothRack : MonoBehaviour
{
    public int amount, maxAmount;
    public bool occupied;
    public ItemScript item;
    public float timer, maxTimer = 90;
    public RectTransform canvasRect;
    [SerializeField] private List<GameObject> items;
    [SerializeField] private Image progressUI, progressPrefab;
    [SerializeField] private TMP_Text text, textPrefab;

    void Start()
    {
        timer = maxTimer;
        if (canvasRect == null)
        {
            canvasRect = GameObject.Find("Canvas").GetComponent<RectTransform>();
        }
        amount = maxAmount = items.Count;
        progressUI = Instantiate(progressPrefab, canvasRect.transform);
        text = Instantiate(textPrefab, canvasRect.transform);
        text.text = "Max";
    }

    // Update is called once per frame
    void Update()
    {
        if (occupied && amount > 0)
        {
            if (!StickmanController.Instance.IsMoving())
            {
                float offsetPosY = transform.position.y + 1f;
                Vector3 offsetPos = new Vector3(transform.position.x, offsetPosY, transform.position.z);
                Vector2 canvasPos;
                Vector2 screenPoint = Camera.main.WorldToScreenPoint(offsetPos);
                RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRect, screenPoint, null, out canvasPos);
                if (!StickmanController.Instance.IsFull())
                {
                    timer -= Time.deltaTime * 60;
                    if (timer <= 0)
                    {
                        var i = Instantiate(item, transform.position, item.transform.rotation);
                        StickmanController.Instance.AddItem(i);
                        timer = maxTimer;
                        amount--;
                        items[amount].gameObject.SetActive(false);
                        TutorialHandler.Instance.QuestIncrement(0);
                    }
                    text.gameObject.SetActive(false);
                    progressUI.gameObject.SetActive(true);
                    progressUI.transform.localPosition = new Vector2(canvasPos.x, canvasPos.y + 200);
                    progressUI.fillAmount = 1 - timer / maxTimer;
                }
                else
                {
                    progressUI.gameObject.SetActive(false);
                    text.gameObject.SetActive(true);
                    text.transform.localPosition = new Vector2(canvasPos.x, canvasPos.y + 200);
                }
            }
            else
            {
                progressUI.gameObject.SetActive(false);
                text.gameObject.SetActive(false);
            }
        }
        else
        {
            progressUI.gameObject.SetActive(false);
            text.gameObject.SetActive(false);
            if (amount < maxAmount)
            {
                timer -= Time.deltaTime * 60;
                if (timer <= 0)
                {
                    items[amount].gameObject.SetActive(true);
                    amount++;
                    timer = maxTimer * 3;
                }
            }
        }
    }

    public void GiveItem (WorkerScript worker)
    {
        var i = Instantiate(item, transform.position, item.transform.rotation);
        worker.AddItem(i);
    }
}
