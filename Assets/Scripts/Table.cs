using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Table : ItemRack
{
    public GameObject donut;
    public List<GameObject> donutsList;
    public List<ChairScript> chairs;

    public override Vector3 GetPosition()
    {
        return transform.position;
    }

    public override bool IsAvailable()
    {
        return FreeChairs().Count > 0;
    }

    public override bool IsUsable()
    {
        return donutsList.Count > 0;
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
        var topDonut = donutsList[donutsList.Count - 1];
        topDonut.transform.SetParent(target);
        topDonut.transform.localPosition = Vector3.zero;
        donutsList.Remove(topDonut);
        text.text = string.Format("{0}/{1}", donutsList.Count, maxAmount);
        Destroy(topDonut, 3.5f);
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
            if (donutsList.Count < maxAmount && !StickmanController.Instance.IsMoving())
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

    public override void AddItem()
    {
        if (donutsList.Count < maxAmount)
        {
            var t = Instantiate(donut, transform.position + new Vector3 (0, 1.75f + 0.3f * donutsList.Count, 0), donut.transform.rotation);
            t.transform.SetParent(transform);
            t.transform.DOLocalMoveY(1.75f + 0.3f * donutsList.Count, 0);
            donutsList.Add(t);
            if (donutsList.Count == maxAmount)
                text.text = "Max";
            else
                text.text = string.Format("{0}/{1}", donutsList.Count, maxAmount);
        }
    }
}
