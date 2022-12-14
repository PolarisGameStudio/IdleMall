using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using DG.Tweening;

public class AudioController : SerializedSingleton<AudioController>
{
    private int hasHaptic = 1, hasMusic = 1;
    [SerializeField] public List<Audio> sounds;
    private string prevTitle;
    private float prevTime;
    [SerializeField] private Image musicImage, hapticImage;
    [SerializeField] private Sprite musicOn, musicOff, hapticOn, hapticOff;
    [SerializeField] private AudioSource thisSource, musicSource;
    [SerializeField] private CanvasGroup settingsCanvas;

    private void Start()
    {
        thisSource = GetComponent<AudioSource>();
        prevTime = 0;
        hasMusic = PlayerPrefs.GetInt("Music", 1);
        hasHaptic = PlayerPrefs.GetInt("Haptic", 1);
        SetMusic();
        SetHaptic();
    }

    public void OpenSettings()
    {
        settingsCanvas.gameObject.SetActive(true);
        settingsCanvas.DOFade(1, 0.5f);
    }

    public void CloseSettings()
    {
        settingsCanvas.DOFade(0, 0.25f).OnComplete(() =>
        {
            settingsCanvas.gameObject.SetActive(false);
        });
    }

    public bool HasHaptic()
    {
        return hasHaptic > 0;
    }

    public bool HasMusic()
    {
        return hasMusic > 0;
    }

    public void SwitchMusic()
    {
        hasMusic++;
        if (hasMusic > 1)
        {
            hasMusic = 0;
        }
        PlayerPrefs.SetInt("Music", hasMusic);
        SetMusic();
    }

    private void SetMusic()
    {
        switch (hasMusic)
        {
            case 0:
                musicImage.sprite = musicOff;
                musicSource.Stop();
                break;
            case 1:
                musicImage.sprite = musicOn;
                musicSource.Play();
                break;
        }
    }

    public void SwitchHaptic()
    {
        hasHaptic++;
        if (hasHaptic > 1)
        {
            hasHaptic = 0;
        }
        PlayerPrefs.SetInt("Haptic", hasHaptic);
        SetHaptic();
    }

    private void SetHaptic()
    {
        switch (hasHaptic)
        {
            case 0:
                hapticImage.sprite = hapticOff;
                break;
            case 1:
                hapticImage.sprite = hapticOn;
                break;
        }
    }

    public void Play (string title, bool isPitched = true)
    {
        if (HasMusic())
        {
            try
            {
                Audio clip = sounds.Find(x => x.title == title);
                if (clip != null)
                {
                    if (prevTitle == title && (Time.time - prevTime) < 1f && isPitched)
                    {
                        if (thisSource.pitch < 2.5f)
                            thisSource.pitch += 0.05f;
                    }
                    else
                    {
                        if (thisSource.pitch != 1)
                            thisSource.pitch = 1;
                    }
                    thisSource.Stop();
                    thisSource.PlayOneShot(clip.clips[Random.Range(0, clip.clips.Count)]);
                    prevTitle = title;
                    prevTime = Time.time;
                }
            }
            catch
            {
                Debug.Log("There is no sound with such key: " + title);
            }
        }
    }
}

[System.Serializable]
public class Audio
{
    public string title;
    public List<AudioClip> clips;
}
