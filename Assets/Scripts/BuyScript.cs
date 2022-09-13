using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;

public class BuyScript : MonoBehaviour
{
    [SerializeField] private bool built;
    [SerializeField] private ShopType shopType;
    [SerializeField] private int capacity, maxCapacity = 100;
    [SerializeField] private ItemRack toBuild;
    [SerializeField] private TMP_Text capacityText;
    [SerializeField] private GameObject confetti, money;
    private int buildCount;
    private float buildTimer;
    private SpriteRenderer SR;
    private Material mat;

    private void Start()
    {
        capacityText.text = (maxCapacity - capacity) + "$";
        SR = GetComponent<SpriteRenderer>();
        if (mat == null)
            mat = new Material(SR.sharedMaterial);
        SR.sharedMaterial = Instantiate(mat);
        SR.sharedMaterial.SetFloat("_Frac", (float)capacity / maxCapacity);
    }


    public void AddMoney (Transform player)
    {
        if (capacity < maxCapacity)
        {
            capacity++;
            SR.sharedMaterial.SetFloat("_Frac", (float)capacity / maxCapacity);
            GameObject m = null;
            m = Instantiate(money, player.position, Quaternion.identity);
            if (m != null)
            {
                m.transform.DOScale(0.3f, 0.15f);
                m.transform.DOJump(transform.position, 1, 1, 0.15f).OnComplete(() =>
                {
                    Destroy(m.gameObject);
                });
            }
        }
        if (maxCapacity - capacity >= 0)
            capacityText.text = (maxCapacity - capacity) + "$";
        if (capacity >= maxCapacity)
        {
            if (!built)
            {
                transform.DOScale(0, 0.5f).OnComplete(() =>
                {
                    gameObject.SetActive(false);
                    Instantiate(confetti, transform.position, transform.rotation);
                    toBuild.gameObject.SetActive(true);
                    ShopHandler.Instance.AddRack(shopType, toBuild);
                    var tmpScale = toBuild.transform.localScale;
                    toBuild.transform.localScale = Vector3.zero;
                    toBuild.transform.DOScale(tmpScale, 0.25f).OnComplete(() =>
                    {
                        NavmeshBaker.Instance.UpdateNavmesh();
                        UIHandler.Instance.ShowBuildingText();
                    });
                });
                built = true;
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            buildTimer = 100;
        }
    }

    public virtual void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player")
        {
            if (!other.GetComponent<StickmanController>().IsMoving() && !built)
            {
                buildTimer -= Time.deltaTime * (150 + buildCount * 0.1f);
                if (buildTimer <= 0)
                {
                    for (int i = 0; i < buildCount / 10 + 1; i++)
                    {
                        if (IsPossible(other))
                        {
                            other.GetComponent<StickmanController>().AddDollars(-1);
                            AddMoney(other.transform);
                        }
                        else
                            break;
                    }
                    if (buildCount < 100)
                        buildTimer = 7 - buildCount * 0.069f;
                    else
                        buildTimer = 0.01f;
                    buildCount++;
                }
            }
        }
    }

    protected bool IsPossible(Collider other)
    {
        return other.GetComponent<StickmanController>().GetDollars() > 0 && !built;
    }
}
