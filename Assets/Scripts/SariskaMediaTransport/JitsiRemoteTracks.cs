using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JitsiRemoteTracks
{
    string type = "";
    string participantId = "";
    string id = "";
    bool muted = false;
    string streamURL = "";

    public JitsiRemoteTracks(Dictionary<dynamic, dynamic> map)
    {
        this.type = map["type"];
        this.participantId = map["participantId"];
        this.id = map["id"];
        this.muted = map["muted"];
        this.streamURL = map["streamURL"];
    }

    new public string GetType()
    {
        return this.type;
    }

    public string GetStreamURL()
    {
        return this.streamURL;
    }

    public string GetId()
    {
        return this.id;
    }

    public bool IsMuted()
    {
        return this.muted;
    }

    public string GetParticipantId()
    {
        return this.participantId;
    }

    public bool IsLocal()
    {
        return false;
    }

    public void SetMuted(bool mute)
    {
        this.muted = mute;
    }

}
