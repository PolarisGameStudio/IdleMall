using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CinemaButtonScript : MonoBehaviour
{
    public CinemaRoomScript room;
    public CinemaCircle circle;

    public void Start()
    {
        circle.transform.DOScale(0, 0f).OnComplete(() =>
        {
            circle.gameObject.SetActive(false);
        });
    }

    public void ActivateCircle()
    {
        circle.gameObject.SetActive(true);
        circle.transform.DOScale(0.5f, 0.5f);
        circle.Activate();
    }

    public void Press()
    {
        circle.occupied = false;
        GetComponent<Animator>().SetBool("Open", true);
        room.Recharge();
    }

    public void Pressed()
    {
        GetComponent<Animator>().SetBool("Open", false);
        circle.transform.DOScale(0, 0.5f).OnComplete(() =>
        {
            circle.gameObject.SetActive(false);
        });
    }
}
