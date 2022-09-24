
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;
using MoreMountains.NiceVibrations;

public class BuyCinemaRoomScript : BuyScript
{
    public Animator door;
    public CinemaRoomScript room;

    public override void AddMoney(Transform player)
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
                    MMVibrationManager.Haptic(HapticTypes.SoftImpact);
                    gameObject.SetActive(false);
                    door.SetBool("Open", true);
                    room.Unlock();
                    Instantiate(confetti, transform.position, transform.rotation);
                    NavmeshBaker.Instance.UpdateNavmesh();
                    UIHandler.Instance.ShowBuildingText();
                });
                built = true;
            }
        }
    }
}
