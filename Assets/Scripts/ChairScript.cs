 using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChairScript : MonoBehaviour
{
    public bool occupied;

    private void Start()
    {
        Invoke("CheckLoad", 0.1f);
    }

    void CheckLoad()
    {
        occupied = false;
    }
}
