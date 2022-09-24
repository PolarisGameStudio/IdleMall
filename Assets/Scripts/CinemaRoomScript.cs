using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CinemaRoomScript : MonoBehaviour
{
    public bool unlocked;
    public List<ChairScript> chairs;
    [SerializeField] private BoxCollider doorCollider;

    public void Unlock()
    {
        unlocked = true;
        doorCollider.gameObject.SetActive(false);
    }
}
