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
    [SerializeField] protected int lockLevel, shopLevel;
    [SerializeField] protected GameObject lockImage, adsImage;
    [SerializeField] protected Material frameMat;
    protected int buildCount;
    protected float buildTimer;
    protected SpriteRenderer SR;
    protected Material mat;

    protected virtual void Start()
    {
        capacityText.text = (maxCapacity - capacity) + "$";
        SR = GetComponent<SpriteRenderer>();
        if (mat == null)
            mat = new Material(frameMat);
        SR.sharedMaterial = Instantiate(mat);
        SR.sharedMaterial.SetFloat("_Frac", (float)capacity / maxCapacity);
    }

    private void OnEnable()
    {
        SR = GetComponent<SpriteRenderer>();
        Invoke("CheckLevel", 0.05f);
    }

    public void CheckShops(int _shopCount)
    {
        bool open = _shopCount > shopLevel;
        SR = GetComponent<SpriteRenderer>();
        SR.enabled = open;
        GetComponent<BoxCollider>().enabled = open;
        if (adsImage != null)
            adsImage.SetActive(open);
        else
            capacityText.gameObject.SetActive(open);
        if (TutorialHandler.Instance.currentQuestID >= lockLevel)
            lockImage.gameObject.SetActive(false);
        else
            lockImage.gameObject.SetActive(open);
    }

    public void CheckLevel()
    {
        if (SR.enabled)
        {
            if (TutorialHandler.Instance.currentQuestID >= lockLevel)
            {
                lockImage.gameObject.SetActive(false);
                if (adsImage != null)
                    adsImage.SetActive(true);
                else
                    capacityText.gameObject.SetActive(true);
            }
            else
            {
                lockImage.gameObject.SetActive(true);
                if (adsImage != null)
                    adsImage.SetActive(false);
                else
                    capacityText.gameObject.SetActive(false);
            }
        }
    }

    public virtual void AddMoney(Transform player)
    {
        if (capacity < maxCapacity)
        {
            AudioController.Instance.Play("Pick", false);
            capacity++;
            SR.sharedMaterial.DOFloat((float)capacity / maxCapacity, "_Frac", 0.05f);
            if (adsImage == null)
            {
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
        }
        if (maxCapacity - capacity >= 0 && capacityText.text != null)
            capacityText.text = (maxCapacity - capacity) + "$";
        if (capacity >= maxCapacity)
        {
            if (!built)
            {
                if (adsImage != null)
                {
                    AdsController.Instance.ShowRewardToUser(this);
                    return;
                }
                Buy();
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

    protected virtual void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            if (adsImage != null)
            {
                capacity = 0;
                SR.sharedMaterial.DOFloat((float)capacity / maxCapacity, "_Frac", 0.05f);
            }
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
                    if (adsImage == null)
                        buildTimer -= Time.deltaTime * (20 + buildCount * 0.4f);
                    else
                        buildTimer -= Time.deltaTime * (60 + buildCount * 0.4f);
                    if (buildTimer <= 0)
                    {
                        for (int i = 0; i < buildCount / 3 + 1; i++)
                        {
                            if (IsPossible(other))
                            {
                                if (adsImage == null)
                                    other.GetComponent<StickmanController>().AddDollars(-1);
                                AddMoney(other.transform);
                            }
                            else
                            {
                                if (!built)
                                {
                                    AdsController.Instance.ShowRewardedPopup(2, null, this);
                                    buildTimer = 1000;
                                    return;
                                }
                                break;
                            }
                        }
                        buildTimer = 4;
                        buildCount++;
                    }
                }
            }
        }
    }

    public void Buy()
    {
        if (AudioController.Instance.HasHaptic())
            MMVibrationManager.Haptic(HapticTypes.SoftImpact);
        AudioController.Instance.Play("Cheer", false);
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
                StickmanController.Instance.SaveProcess();
            });
        });
        built = true;
    }

    protected bool IsPossible(Collider other)
    {
        return other.GetComponent<StickmanController>().GetDollars() > 0 && !built;
    }
}