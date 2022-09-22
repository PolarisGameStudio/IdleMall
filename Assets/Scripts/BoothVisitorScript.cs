using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoothVisitorScript : MonoBehaviour
{
    [SerializeField] private List<GameObject> suits;
    [SerializeField] private SkinnedMeshRenderer shirt, pants;
    public List<Material> shirtMaterials, pantMaterials;

    public void ChangeSuit()
    {
        if (suits.Count > 0)
        {
            foreach (var s in suits)
                s.gameObject.SetActive(false);
            suits[Random.Range(0, suits.Count)].SetActive(true);
        }
        else
        {
            shirt.material = shirtMaterials[Random.Range(0, shirtMaterials.Count)];
            pants.material = pantMaterials[Random.Range(0, pantMaterials.Count)];
        }
    }

    public void Jumped()
    {

    }
}
