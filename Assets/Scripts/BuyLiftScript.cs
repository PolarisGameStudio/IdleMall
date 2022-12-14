using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using MoreMountains.NiceVibrations;

public class BuyLiftScript : BuyScript
{
    public ElevatorScript elevator;

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
                if (AudioController.Instance.HasHaptic())
                    MMVibrationManager.Haptic(HapticTypes.SoftImpact);
                AudioController.Instance.Play("Cheer", false);
                transform.DOScale(0, 0.5f).OnComplete(() =>
                {
                    gameObject.SetActive(false);
                    Instantiate(confetti, transform.position, transform.rotation);
                    elevator.Activate();
                    NavmeshBaker.Instance.UpdateNavmesh();
                    UIHandler.Instance.ShowBuildingText();
                    StickmanController.Instance.SaveProcess();
                });
                built = true;
            }
        }
    }
}
