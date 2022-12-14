using UnityEngine;
using DG.Tweening;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine.UI;
using MoreMountains.NiceVibrations;

public class StickmanController : Singleton<StickmanController>
{
    [SerializeField] private int dollars;
    public int maxAmount = 4;
    private Animator anim;
    private Rigidbody RB;
    [SerializeField] private GameObject plate;
    [SerializeField] private List<ItemScript> items = new List<ItemScript>();
    [SerializeField] private Transform itemPos;
    [SerializeField] private float offsetY, offsetZ;
    [SerializeField] private ParticleSystem movementVFX;
    [SerializeField] private Image money;
    [SerializeField] private Joystick joystick;
    [SerializeField] private float stickmanSpeed;
    [SerializeField] private RectTransform canvasRect, moneyRect;
    private float waitingTimer;

    private void Start()
    {
        #if UNITY_EDITOR
            dollars = 5000;
        #endif
        if (TutorialHandler.Instance.debug)
        {
            dollars = 9999;
        }
        Application.targetFrameRate = 60;
        anim = GetComponent<Animator>();
        RB = GetComponent<Rigidbody>();
        items.Clear();
        UIHandler.Instance.SetCount(dollars);
    }

    public void SaveProcess()
    {
        ES3AutoSaveMgr.Current.Save();
    }

    private void OnApplicationFocus(bool focus)
    {
        if (!focus)
            SaveProcess();
    }

    private void OnApplicationQuit()
    {
        SaveProcess();
    }

    private float defaultPosY;

    public bool IsMoving()
    {
        return joystick.Direction != Vector2.zero;
    }

    public bool IsFull()
    {
        return items.Count >= maxAmount;
    }

    public void AddSpeed()
    {
        stickmanSpeed += 0.25f;
    }

    private bool CanMove(Vector3 direction)
    {
        if (Physics.Raycast(transform.position + Vector3.up + transform.forward, direction, 5, LayerMask.GetMask("Location")))
            return true;
        return false;
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
            float step = 10 * Time.deltaTime;
            transform.rotation = Quaternion.RotateTowards(lookRotation, transform.rotation, step);
            if (CanMove ((transform.forward * 2f + Vector3.down * 2 - Vector3.up).normalized))
            {
                TutorialHandler.Instance.Moved();
                transform.Translate(Vector3.forward * Time.deltaTime * stickmanSpeed);
            }
            anim.Play(items.Count > 0 ? "CarryRun" : "Run");
        }
        else
        {
            anim.Play(items.Count > 0 ? "CarryIdle" : "Idle");
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
            if (AudioController.Instance.HasHaptic())
                MMVibrationManager.Haptic(HapticTypes.SoftImpact);
            AudioController.Instance.Play("Cash");
            StartCoroutine(AddingMoney(_amount, _amount/10, _transform));
        }
        else
        {
            dollars += _amount;
            if (dollars < 0)
                dollars = 0;
            UIHandler.Instance.SetCount(dollars);
            TutorialHandler.Instance.CheckQuestsCompletion();
        }
    }

    public void RemoveDollars (int _amount)
    {
        dollars -= _amount;
        if (dollars < 0)
            dollars = 0;
        UIHandler.Instance.SetCount(dollars);
        TutorialHandler.Instance.CheckQuestsCompletion();
    }

    private IEnumerator AddingMoney(int _amount, int _spawnAmount, Transform _transform = null)
    {
        if (_amount > 0)
        {
            /*if (_spawnAmount > 0)
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
            }*/
            yield return new WaitForSeconds(0.05f);
            dollars++;
            UIHandler.Instance.SetCount(dollars);
            TutorialHandler.Instance.CheckQuestsCompletion();
            StartCoroutine(AddingMoney(_amount - 1, _spawnAmount - 1));
        }
        else
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
    }

    public bool HasItems()
    {
        return items.Count > 0;
    }

    public bool HasItem (ShopType type)
    {
        return items.Find(x => x.type == type) != null;
    }

    public void GiveItem (ShopType type, ItemRack target)
    {
        if (AudioController.Instance.HasHaptic())
            MMVibrationManager.Haptic(HapticTypes.SoftImpact);
        AudioController.Instance.Play("Whoosh");
        var item = items.LastOrDefault(x => x.type == type);
        int index = items.IndexOf(item);
        items.Remove(item);
        for (int i = 0; i < items.Count; i++)
        {
            if (i >= index)
            {
                items[i].UpdatePos(GetItemPos (i));
            }
        }
        if (type != ShopType.COFFEE)
            item.transform.DOScale(0.3f, 0.5f);
        item.transform.DOJump(target.GetItemPosition(), 3, 1, 0.5f).OnComplete(() =>
        {
            target.AddItem();
            Destroy(item.gameObject);
        });
        if (items.Count > 0)
            plate.gameObject.SetActive(items[0].type == ShopType.COFFEE);
        else
            plate.gameObject.SetActive(false);
    }

    public void GiveItem(TrashbinScript target)
    {
        if (AudioController.Instance.HasHaptic())
            MMVibrationManager.Haptic(HapticTypes.SoftImpact);
        AudioController.Instance.Play("Whoosh");
        var item = items[items.Count - 1];
        int index = items.IndexOf(item);
        items.Remove(item);
        for (int i = 0; i < items.Count; i++)
        {
            if (i >= index)
            {
                items[i].UpdatePos(GetItemPos(i));
            }
        }
        item.transform.DOScale(0.3f, 0.5f);
        item.transform.DOJump(target.transform.position, 3, 1, 0.5f).OnComplete(() =>
        {
            Destroy(item.gameObject);
        });
        if (items.Count > 0)
            plate.gameObject.SetActive(items[0].type == ShopType.COFFEE);
        else
            plate.gameObject.SetActive(false);
    }

    public void AddItem (ItemScript _item)
    {
        if (AudioController.Instance.HasHaptic())
            MMVibrationManager.Haptic(HapticTypes.SoftImpact);
        AudioController.Instance.Play("Pick");
        _item.transform.SetParent(itemPos);
        _item.Pick(GetItemPos());
        items.Add(_item);
        plate.gameObject.SetActive(items[0].type == ShopType.COFFEE);
    }

    private Vector3 GetItemPos()
    {
        float height = 0;
        foreach (var i in items)
        {
            height += i.height;
        }
        return new Vector3(0, height, 0);
    }

    private Vector3 GetItemPos (int index)
    {
        float height = 0;
        for (int i = 0; i < items.Count; i++)
        {
            if (i >= index)
                break;
            height += items[i].height;
        }
        return new Vector3(0, height, 0);
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