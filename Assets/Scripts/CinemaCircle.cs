using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class CinemaCircle : MonoBehaviour
{
    public bool occupied;
    public float timer, maxtimer = 120;
    public RectTransform canvasRect;
    public CinemaButtonScript button;
    Vector3 localScale = Vector3.zero;
    [SerializeField] private ArrowScript arrow;
    [SerializeField] private Image progressUI, progressPrefab;

    private void Start()
    {
        localScale = transform.localScale;
        timer = maxtimer;
        if (canvasRect == null)
        {
            canvasRect = GameObject.Find("Canvas").GetComponent<RectTransform>();
        }
        progressUI = Instantiate(progressPrefab, canvasRect.transform);
    }

    public void Activate()
    {
        arrow.gameObject.SetActive(TutorialHandler.Instance.buttonNeverShown);
    }

    private void Update()
    {
        if (occupied && !button.room.off)
        {
            timer -= Time.deltaTime * 60;
            float offsetPosY = transform.position.y + 1f;
            Vector3 offsetPos = new Vector3(transform.position.x, offsetPosY, transform.position.z);
            Vector2 canvasPos;
            Vector2 screenPoint = Camera.main.WorldToScreenPoint(offsetPos);
            RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRect, screenPoint, null, out canvasPos);
            progressUI.gameObject.SetActive(true);
            progressUI.transform.localPosition = new Vector2(canvasPos.x, canvasPos.y + 200);
            progressUI.fillAmount = 1 - timer / maxtimer;
            if (timer <= 0)
            {
                if (TutorialHandler.Instance.buttonNeverShown)
                {
                    arrow.gameObject.SetActive(false);
                    TutorialHandler.Instance.buttonNeverShown = false;
                }
                button.Press();
                occupied = false;
                timer = maxtimer;
            }
        }
        else
        {
            progressUI.gameObject.SetActive(false);
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (!occupied && button.room.off)
        {
            if (other.tag == "Player" && !StickmanController.Instance.IsMoving())
            {
                timer = maxtimer;
                occupied = true;
                other.transform.DOMove(new Vector3(transform.position.x, other.transform.position.y, transform.position.z), 0.25f);
                other.transform.DOLookAt(new Vector3 (button.transform.position.x, transform.position.y, button.transform.position.z), 0.25f);
                StartCoroutine(Scale());
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            occupied = false;
            StopCoroutine(Scale());
            transform.DOKill();
            transform.localScale = localScale;
        }
    }

    private IEnumerator Scale()
    {
        if (occupied)
        {
            transform.DOScale(localScale * 1.2f, 1.5f).OnComplete(() =>
            {
                transform.DOScale(localScale, 1.5f);
            });
            yield return new WaitForSeconds(3f);
            StartCoroutine(Scale());
        }
        else
        {
            transform.DOKill();
            transform.localScale = localScale;
        }
    }
}
