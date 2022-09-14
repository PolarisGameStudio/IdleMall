using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class BuyExtensionScript : BuyScript
{
    public GameObject extension;

    public override void AddMoney (Transform player)
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
                transform.DOScale(0, 0.5f).OnComplete(() =>
                {
                    gameObject.SetActive(false);
                    Instantiate(confetti, transform.position, transform.rotation);
                    Camera.main.transform.DOShakePosition(0.25f, 0.5f);
                    extension.gameObject.SetActive(true);
                    extension.transform.localScale = Vector3.one * 1.1f;
                    extension.transform.DOScale(1, 0.25f).OnComplete(() =>
                    {
                        NavmeshBaker.Instance.UpdateNavmesh();
                        UIHandler.Instance.ShowRoomText();
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
            buildTimer = 4;
        }
    }

    public virtual void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player")
        {
            if (!other.GetComponent<StickmanController>().IsMoving() && !built)
            {
                buildTimer -= Time.deltaTime * (20 + buildCount * 0.1f);
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
                    buildTimer = 4;
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
