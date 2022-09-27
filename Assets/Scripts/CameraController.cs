using UnityEngine;
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;

public class CameraController : Singleton<CameraController>
{
    private int cinematicIndex;
    public List<CinematicPoint> cinematicPoints;
    public int cameraSettings = -1;
    public List<CameraSettings> settings;
    public bool won, upgrade;
    [SerializeField]
    Transform player, oldTarget;
    [SerializeField]
    Vector3 cameraOffset;
    [SerializeField]
    float cameraCatchUpDistance = 2f;
    [SerializeField]
    float cameraSpeed = 1f, oldCameraSpeed;

    Vector3? cameraDestination;


    private void Start()
    {
        Time.timeScale = 1;
        if (cinematicPoints.Count > 0)
            StartCoroutine(CinematicStart());
        else
            FocusOnPlayer();
    }

    private IEnumerator CinematicStart()
    {
        transform.DOMove(cinematicPoints[cinematicIndex].point, 5f);
        yield return new WaitForSeconds(cinematicPoints[cinematicIndex].time);
        cinematicIndex++;
        if (cinematicIndex < cinematicPoints.Count)
            StartCoroutine(CinematicStart());
    }

    public void SetOldPlayer(Transform _player)
    {
        player = _player;
    }

    public void Focus(Transform _newTarget, float _delay)
    {
        oldCameraSpeed = cameraSpeed;
        cameraSpeed = 3.5f;
        oldTarget = player;
        player = _newTarget;
        StopAllCoroutines();
        StartCoroutine(Return(_delay));
    }

    private IEnumerator Return(float _delay)
    {
        yield return new WaitForSeconds(_delay);
        player = oldTarget;
        cameraSpeed = oldCameraSpeed;
    }

    private void Update()
    {
        if (player != null)
        {
            if (!upgrade)
            {
                Vector3 destination = player.position + cameraOffset;
                if (Mathf.Abs(destination.z - transform.position.z) > cameraCatchUpDistance || Mathf.Abs(destination.x - transform.position.x) > cameraCatchUpDistance)
                    cameraDestination = destination;
                //if (cameraDestination != null && (Mathf.Abs(destination.z - transform.position.z) < cameraCatchUpDistance / 2 || Mathf.Abs(destination.x - transform.position.x) < cameraCatchUpDistance / 2))
                //    cameraDestination = null;
            }
            if (cameraDestination != null)
                transform.position = Vector3.Lerp(transform.position, cameraDestination.Value, cameraSpeed * Time.deltaTime);
        }
    }

    public void FocusOnPlayer()
    {
        if (cameraSettings > -1)
        {
            cameraOffset = settings[cameraSettings].offset;
            transform.eulerAngles = settings[cameraSettings].angle;
        }
        cameraDestination = null;
        transform.position = player.position + cameraOffset;
    }

    public void FocusOnPlayerUpgrade()
    {
        //cameraDestination = player.position + new Vector3(3, 9, 0);
        //upgrade = true;
    }
}

[System.Serializable]
public class CameraSettings
{
    public Vector3 offset;
    public Vector3 angle;
}

[System.Serializable]
public class CinematicPoint
{
    public Vector3 point;
    public float time = 5;
}