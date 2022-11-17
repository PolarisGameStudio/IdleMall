using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TrainingTool : ItemRack
{
    public int toolID = -1;
    public Vector3 rotAngle = new Vector3(0, -90, 0);
    public GameObject trainingTool;
    public int protCount;
    public string animTitle = "Bench";
    public List<ChairScript> chairs;

    protected override void Start()
    {
        chairs.Clear();
        chairs.Add(GetComponent<ChairScript>());
        toAddAmount = 0;
        timer = maxTimer;
        if (canvasRect == null)
        {
            canvasRect = GameObject.Find("Canvas").GetComponent<RectTransform>();
        }
        text = Instantiate(textPrefab, canvasRect.transform);
        text.text = string.Format("{0}/{1}", protCount, maxAmount);
    }

    public override Vector3 GetPosition()
    {
        return transform.position;
    }

    public override bool HasSpace()
    {
        return protCount < maxAmount;
    }

    public override Vector3 GetItemPosition()
    {
        return transform.position;
    }

    public override bool IsAvailable()
    {
        return FreeChairs().Count > 0;
    }

    public override bool IsUsable()
    {
        return protCount > 0;
    }

    public override ChairScript GetChair()
    {
        return FreeChairs()[Random.Range(0, FreeChairs().Count)];
    }

    private List<ChairScript> FreeChairs()
    {
        var tmp = new List<ChairScript>();
        foreach (var c in chairs)
        {
            if (!c.occupied)
            {
                tmp.Add(c);
            }
        }
        return tmp;
    }

    public override void GetItem(Transform target = null)
    {
        protCount--;
        if (trainingTool != null)
            trainingTool.SetActive(false);
        text.text = string.Format("{0}/{1}", protCount, maxAmount);
    }

    public void Free()
    {
        if (trainingTool != null)
            trainingTool.SetActive(true);
    }

    protected override void Update()
    {
        if (Vector3.Distance(transform.position, StickmanController.Instance.transform.position) <= 5)
        {
            text.gameObject.SetActive(true);
            float offsetPosY = transform.position.y + 1f;
            Vector3 offsetPos = new Vector3(transform.position.x, offsetPosY, transform.position.z);
            Vector2 canvasPos;
            Vector2 screenPoint = Camera.main.WorldToScreenPoint(offsetPos);
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRect, screenPoint, null, out canvasPos);
            if (protCount < maxAmount && !StickmanController.Instance.IsMoving())
            {
                if (StickmanController.Instance.HasItem(type))
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

    public override void AddItem()
    {
        if (protCount < maxAmount)
        {
            protCount++;
            if (protCount == maxAmount)
                text.text = "Max";
            else
                text.text = string.Format("{0}/{1}", protCount, maxAmount);
        }
    }
}
