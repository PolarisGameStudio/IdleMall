using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowScript : MonoBehaviour
{
    void Update()
    {
        transform.Rotate(Vector3.back * Time.deltaTime * 60);
    }
}
