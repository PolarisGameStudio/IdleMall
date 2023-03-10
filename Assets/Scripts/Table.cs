using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Table : ItemRack
{
    public GameObject donut;
    public List<GameObject> donutsList;
    public List<ChairScript> chairs;

    protected override void Start()
    {
        toAddAmount = 0;
        timer = maxTimer;
        if (canvasRect == null)
        {
            canvasRect = GameObject.Find("Canvas").GetComponent<RectTransform>();
        }
        text = Instantiate(textPrefab, canvasRect.transform);
        text.text = string.Format("{0}/{1}", donutsList.Count, maxAmount);
        Invoke("LoadDonuts", 0.1f);
    }

    private void LoadDonuts()
    {
        donutsList.Clear();
        for (int j = 0; j < amount; j++)
        {
            var t = Instantiate(donut, transform.position + new Vector3(0, 1.75f + 0.3f * donutsList.Count, 0), donut.transform.rotation);
            t.transform.SetParent(transform);
            t.transform.DOLocalMoveY(1.75f + 0.3f * donutsList.Count, 0);
            donutsList.Add(t);
        }
    }

    public override Vector3 GetPosition()
    {
        return transform.position;
    }

    public override bool HasSpace()
    {
        return donutsList.Count < maxAmount;
    }

    public override Vector3 GetItemPosition()
    {
        return transform.position + new Vector3(0, 1.75f + 0.3f * donutsList.Count, 0);
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
        donutsList.Remove(topDonut);
        amount--;
        topDonut.transform.SetParent(target);
        topDonut.transform.DOLocalMove(Vector3.zero, 0.35f).OnComplete(() =>
        {
            text.text = string.Format("{0}/{1}", donutsList.Count, maxAmount);
            topDonut.transform.DOScale (topDonut.transform.localScale, 0.85f).OnComplete (() =>
            {
                topDonut.transform.DOScale(0, 0.25f).OnComplete(() =>
                {
                    Destroy(topDonut);
                });
            });
        });
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
        if (amount < maxAmount)
        {
            AdsController.Instance.RateGame();
            var t = Instantiate(donut, transform.position + new Vector3 (0, 1.75f + 0.3f * donutsList.Count, 0), donut.transform.rotation);
            t.transform.SetParent(transform);
            t.transform.DOLocalMoveY(1.75f + 0.3f * donutsList.Count, 0);
            donutsList.Add(t);
            amount++;
            if (donutsList.Count == maxAmount)
                text.text = "Max";
            else
                text.text = string.Format("{0}/{1}", donutsList.Count, maxAmount);
        }
    }
}
