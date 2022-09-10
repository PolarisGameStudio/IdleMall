using UnityEngine;
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine.UI;
using MoreMountains.NiceVibrations;

public class StickmanController : Singleton<StickmanController>
{
    [SerializeField] private int dollars;
    private Animator anim;
    private Rigidbody RB;
    [SerializeField] private float offsetY, offsetZ;
    [SerializeField] private ParticleSystem movementVFX;
    [SerializeField] private Image money;
    [SerializeField] private Joystick joystick;
    [SerializeField] private float stickmanSpeed;
    [SerializeField] private RectTransform canvasRect, moneyRect;
    private float waitingTimer;

    private void Start()
    {
        anim = GetComponent<Animator>();
        RB = GetComponent<Rigidbody>();
        UIHandler.Instance.SetCount(dollars);
    }

    private float defaultPosY;

    public bool IsMoving()
    {
        return joystick.Direction != Vector2.zero;
    }

    public void AddSpeed()
    {
        stickmanSpeed += 0.25f;
    }

    void Update()
    {
        if (joystick.Direction != Vector2.zero)
        {
            float inputZ = joystick.Direction.y;
            float inputX = joystick.Direction.x;

            Vector3 lookDirection = new Vector3(inputX, 0, inputZ);
            Quaternion lookRotation;
            lookRotation = Quaternion.LookRotation(lookDirection, Vector3.up);
            //lookRotation = Quaternion.LookRotation(Quaternion.Euler(0, -45, 0) * lookDirection, Vector3.up);
            float step = 10 * Time.deltaTime;

            transform.rotation = Quaternion.RotateTowards(lookRotation, transform.rotation, step);
            transform.Translate(Vector3.forward * Time.deltaTime * stickmanSpeed);
            anim.Play("Run");
        }
        else
        {
            anim.Play("Idle");
        }
        if (joystick.Direction != Vector2.zero)
            movementVFX.Play();
        else
            movementVFX.Stop();
    }

    private void LateUpdate()
    {
        RB.velocity = Vector3.zero;
        RB.angularVelocity = Vector3.zero;
        transform.position = new Vector3(transform.position.x, defaultPosY, transform.position.z);
    }

    public int GetDollars()
    {
        return dollars;
    }

    public bool EnoughMoney (int _amount)
    {
        return dollars >= _amount;
    }

    public void AddDollars(int _amount, Transform _transform = null)
    {
        if (_amount > 0)
        {
            MMVibrationManager.Haptic(HapticTypes.SoftImpact);
            StartCoroutine(AddingMoney(_amount, _amount/10, _transform));
        }
        else
        {
            dollars += _amount;
            if (dollars < 0)
                dollars = 0;
            UIHandler.Instance.SetCount(dollars);
        }
    }

    private IEnumerator AddingMoney(int _amount, int _spawnAmount, Transform _transform = null)
    {
        if (_amount > 0)
        {
            if (_spawnAmount > 0)
            {
                var m = Instantiate(money, canvasRect.transform);
                if (_transform == null)
                    m.transform.position = Camera.main.WorldToScreenPoint(transform.position);
                else
                    m.transform.position = Camera.main.WorldToScreenPoint(_transform.position);
                m.GetComponent<Image>().DOFade(0.5f, 0.3f);
                m.transform.DOMoveY(m.transform.position.y + 100, 0.3f).OnComplete(() =>
                {
                    m.GetComponent<Image>().DOFade(0.1f, 0.4f);
                    m.transform.DOScale(0.1f, 0.4f);
                    m.transform.DOMove(moneyRect.transform.position, 0.4f).OnComplete(() =>
                    {
                        Destroy(m.gameObject);
                    });
                });
            }
            yield return new WaitForSeconds(0.05f);
            dollars++;
            UIHandler.Instance.SetCount(dollars);
            StartCoroutine(AddingMoney(_amount - 1, _spawnAmount - 1));
        }
    }

    /*private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Upgrade")
        {
            upgradeOpen = true;
        }
        if (other.tag == "Hire")
        {
            hireOpen = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Upgrade")
        {
            upgradeOpen = false;
        }
        if (other.tag == "Hire")
        {
            hireOpen = false;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (!IsMoving())
        {
            if (other.tag == "Upgrade" && upgradeOpen)
            {
                upgradeOpen = false;
            }
            if (other.tag == "Hire" && hireOpen)
            {
                hireOpen = false;
            }
        }
    }*/
}