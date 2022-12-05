using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class StockScript : MonoBehaviour
{
    private bool moneyGave;
    [SerializeField] private float distance = 2.5f;
    [SerializeField] private GameObject stockUI, stockUIPrefab, moneyVFX;
    [SerializeField] private TMP_Text stockText;
    [SerializeField] private int stockCurrent, stockLimit = 50;
    private float stockTimer, stockGiver;
    [SerializeField] private RectTransform canvasRect;
    private StickmanController player;

    private void Start()
    {
        if (canvasRect == null)
            canvasRect = GameObject.Find("StockCanvas").GetComponent<RectTransform>();
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<StickmanController>();
        stockUI = Instantiate(stockUIPrefab, canvasRect.transform);
        stockText = stockUI.transform.Find("StockText").GetComponent<TMP_Text>();
        stockText.text = "Stock:\n<size=80>0/50</size>";
    }

    private void Update()
    {
        float offsetPosY = transform.position.y + 1.5f;
        Vector3 offsetPos = new Vector3(transform.position.x, offsetPosY, transform.position.z);
        Vector2 canvasPos;
        Vector2 screenPoint = Camera.main.WorldToScreenPoint(offsetPos);
        RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRect, screenPoint, null, out canvasPos);
        stockUI.transform.localPosition = new Vector2(canvasPos.x, canvasPos.y + 375);
        if (Vector3.Distance (transform.position, player.transform.position) <= distance)
        {
            if (stockCurrent > 0)
            {
                stockGiver -= Time.deltaTime * 80;
                if (stockGiver <= 0)
                {
                    if (!moneyGave)
                    {
                        AudioController.Instance.Play("Cash");
                        Instantiate(moneyVFX, transform.position, Quaternion.identity);
                        moneyGave = true;
                    }
                    StickmanController.Instance.AddDollars(1);
                    stockCurrent--;
                    stockText.text = string.Format("Stock:\n<size=80>{0}/{1}</size>", stockCurrent, stockLimit);
                    stockGiver = 2;
                }
            }
        }
        else
        {
            stockTimer -= Time.deltaTime * 60;
            if (stockTimer <= 0)
            {
                moneyGave = false;
                if (stockCurrent < stockLimit)
                    stockCurrent++;
                stockText.text = string.Format("Stock:\n<size=80>{0}/{1}</size>", stockCurrent, stockLimit);
                stockTimer = 60;
            }
        }
    }
}
