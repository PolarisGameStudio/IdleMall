using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using MoreMountains.NiceVibrations;

public class BuyRoomScript : BuyScript
{
    public Animator doors;

    private void Awake()
    {
        Invoke("CheckDoors", 0.25f);
    }

    void CheckDoors()
    {
        if (doors != null && built || ShopHandler.Instance.GetShop(shopType).open)
        {
            gameObject.SetActive(false);
            doors.SetBool("Open", true);
            doors.GetComponent<BoxCollider>().enabled = false;
            ShopHandler.Instance.OpenShop(shopType);
            NavmeshBaker.Instance.UpdateNavmesh();
        }
    }

    public override void AddMoney (Transform player)
    {
        if (capacity < maxCapacity)
        {
            AudioController.Instance.Play("Pick", false);
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
                MMVibrationManager.Haptic(HapticTypes.Success);
                transform.DOScale(0, 0.5f).OnComplete(() =>
                {
                    AudioController.Instance.Play("BigCheer", false);
                    gameObject.SetActive(false);
                    Instantiate(confetti, transform.position, transform.rotation);
                    doors.SetBool("Open", true);
                    doors.GetComponent<BoxCollider>().enabled = false;
                    TutorialHandler.Instance.QuestIncrement(10);
                    Camera.main.transform.DOShakePosition(0.25f, 0.5f);
                    ShopHandler.Instance.OpenShop(shopType);
                    NavmeshBaker.Instance.UpdateNavmesh();
                    UIHandler.Instance.ShowRoomText();
                });
                built = true;
            }
        }
    }
}
