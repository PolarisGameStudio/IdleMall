using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TrashbinScript : MonoBehaviour
{
    public ShopType type;
    public float timer, maxTimer = 90;
    public RectTransform canvasRect;
    [SerializeField] protected TMP_Text text, textPrefab;

    protected virtual void Start()
    {
        timer = maxTimer;
        if (canvasRect == null)
        {
            canvasRect = GameObject.Find("Canvas").GetComponent<RectTransform>();
        }
        text = Instantiate(textPrefab, canvasRect.transform);
        text.text = "Trash bin";
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
            if (!StickmanController.Instance.IsMoving())
            {
                if (StickmanController.Instance.HasItems())
                {
                    timer -= Time.deltaTime * 60;
                    if (timer <= 0)
                    {
                        StickmanController.Instance.GiveItem(this);
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
}
