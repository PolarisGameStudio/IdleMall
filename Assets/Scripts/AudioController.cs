using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioController : SerializedSingleton<AudioController>
{
    [SerializeField] public Dictionary<string, AudioClip> sounds;
    private string prevTitle;
    private float prevTime;
    private AudioSource thisSource;

    private void Start()
    {
        thisSource = GetComponent<AudioSource>();
        prevTime = 0;
    }

    public void Play (string title)
    {
        try
        {
            AudioClip clip;
            if (sounds.TryGetValue (title, out clip))
            {
                if (prevTitle == title && (Time.time - prevTime) < 1f)
                    thisSource.pitch += 0.1f;
                else
                    thisSource.pitch = 1f;
                thisSource.PlayOneShot(clip);
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
