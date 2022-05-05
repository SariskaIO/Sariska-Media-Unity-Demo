using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tracks 
{
    string id;
    string streamUrl;
    string participantId;
    string deviceId;
    bool muted;

    public bool IsMuted()
    {
        return this.muted;
    }

    public string GetStreamUrl()
    {
        return this.streamUrl;
    }

    public string GetId()
    {
        return this.id;
    }

    public string GetDeviceId()
    {
        return deviceId;
    }

    public string GetParticipantId()
    {
        return participantId;
    }
}
