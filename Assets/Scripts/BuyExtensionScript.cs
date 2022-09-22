using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using MoreMountains.NiceVibrations;

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
                MMVibrationManager.Haptic(HapticTypes.Success);
                transform.DOScale(0, 0.5f).OnComplete(() =>
                {
                    TutorialHandler.Instance.QuestIncrement(6);
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
}
