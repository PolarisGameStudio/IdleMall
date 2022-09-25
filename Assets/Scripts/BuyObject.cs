using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using MoreMountains.NiceVibrations;

public class BuyObject : MonoBehaviour
{
    [SerializeField] protected bool built;
    [SerializeField] protected int capacity, maxCapacity = 100;
    [SerializeField] private GameObject buildObject;
    [SerializeField] protected TMP_Text capacityText;
    [SerializeField] protected GameObject confetti, money;
    [SerializeField] protected int lockLevel;
    [SerializeField] protected GameObject lockImage;
    protected int buildCount;
    protected float buildTimer;
    protected SpriteRenderer SR;
    protected Material mat;

    protected virtual void Start()
    {
        capacityText.text = (maxCapacity - capacity) + "$";
        SR = GetComponent<SpriteRenderer>();
        if (mat == null)
            mat = new Material(SR.sharedMaterial);
        SR.sharedMaterial = Instantiate(mat);
        SR.sharedMaterial.SetFloat("_Frac", (float)capacity / maxCapacity);
    }

    public void CheckLevel()
    {
        if (TutorialHandler.Instance.currentQuestID >= lockLevel)
        {
            lockImage.gameObject.SetActive(false);
            capacityText.gameObject.SetActive(true);
        }
        else
        {
            lockImage.gameObject.SetActive(true);
            capacityText.gameObject.SetActive(false);
        }
    }

    public virtual void AddMoney (Transform player)
    {
        if (capacity < maxCapacity)
        {
            capacity++;
            SR.sharedMaterial.DOFloat((float)capacity / maxCapacity, "_Frac", 0.05f);
            GameObject m = null;
            m = Instantiate(money, player.position + Vector3.up, Quaternion.identity);
            if (m != null)
            {
                m.transform.DOScale(0.75f, 0.75f);
                m.transform.DOJump(transform.position, 3, 1, 0.75f).OnComplete(() =>
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
                MMVibrationManager.Haptic(HapticTypes.SoftImpact);
                transform.DOScale(0, 0.5f).OnComplete(() =>
                {
                    TutorialHandler.Instance.QuestIncrement(4);
                    gameObject.SetActive(false);
                    Instantiate(confetti, transform.position, transform.rotation);
                    buildObject.gameObject.SetActive(true);
                    var tmpScale = buildObject.transform.localScale;
                    buildObject.transform.localScale = Vector3.zero;
                    buildObject.transform.DOScale(tmpScale, 0.25f).OnComplete(() =>
                    {
                        NavmeshBaker.Instance.UpdateNavmesh();
                        UIHandler.Instance.ShowBuildingText();
                    });
                });
                built = true;
            }
        }
    }

    protected virtual void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            buildTimer = 4;
        }
    }

    public virtual void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player")
        {
            if (!lockImage.gameObject.activeSelf)
            {
                if (!other.GetComponent<StickmanController>().IsMoving() && !built)
                {
                    buildTimer -= Time.deltaTime * (20 + buildCount * 0.2f);
                    if (buildTimer <= 0)
                    {
                        for (int i = 0; i < buildCount / 3 + 1; i++)
                        {
                            if (IsPossible(other))
                            {
                                other.GetComponent<StickmanController>().AddDollars(-1);
                                AddMoney(other.transform);
                            }
                            else
                                break;
                        }
                        buildTimer = 4;
                        buildCount++;
                    }
                }
            }
        }
    }

    protected bool IsPossible(Collider other)
    {
        return other.GetComponent<StickmanController>().GetDollars() > 0 && !built;
    }
}