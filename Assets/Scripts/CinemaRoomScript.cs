using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CinemaRoomScript : MonoBehaviour
{
    public bool unlocked, off;
    public float timer, maxTimer = 1200;
    public List<ChairScript> chairs;
    [SerializeField] private CinemaButtonScript button;
    [SerializeField] private MeshRenderer screen;
    [SerializeField] private Material whiteMat, filmMat;
    [SerializeField] private BoxCollider doorCollider;

    private void Start()
    {
        off = false;
        timer = maxTimer;
        Invoke("CheckUnlocked", 0.1f);
    }

    public void CheckUnlocked ()
    {
        if (unlocked && ShopHandler.Instance.GetShop(ShopType.POPCORN).open)
        {
            if (off)
                screen.material = whiteMat;
            else
                screen.material = filmMat;
        }
        else
        {
            screen.material = whiteMat;
        }
    }

    public CinemaButtonScript GetButton()
    {
        return button;
    }

    public bool IsUsable()
    {
        return unlocked && !off;
    }

    private void Update()
    {
        if (unlocked && ShopHandler.Instance.GetShop (ShopType.POPCORN).open)
        {
            if (!off)
            {
                timer -= Time.deltaTime * 30;
                if (timer <= 0)
                {
                    off = true;
                    timer = maxTimer;
                    screen.material = whiteMat;
                    button.ActivateCircle();
                }
            }
        }
    }

    public void Unlock()
    {
        unlocked = true;
        doorCollider.gameObject.SetActive(false);
    }

    public void Recharge()
    {
        timer = maxTimer;
        off = false;
        screen.material = filmMat;
    }
}
