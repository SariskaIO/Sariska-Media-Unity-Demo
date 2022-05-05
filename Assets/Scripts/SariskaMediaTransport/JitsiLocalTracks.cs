using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JitsiLocalTracks 
{
    string id = "";

    string type = "";

    string participantId = "";

    string deviceId = "";

    bool muted = false;

    string streamURL = "";

    public JitsiLocalTracks(Dictionary<string, string> map)
    {
        this.type = map["type"];
        this.participantId = map["participantId"];
        this.deviceId = map["deviceId"];
        this.id = map["id"];
        //this.muted = map["muted"];
        this.streamURL = map["streamUR"];
    }

    public bool isLocal()
    {
        return true;
    }

    public bool isMuted()
    {
        return this.muted;
    }

    public string getStreamURL()
    {
        return this.streamURL;
    }

    public string getType()
    {
        return this.type;
    }

    public string getId()
    {
        return this.id;
    }

    public string getDeviceId()
    {
        return this.deviceId;
    }

    public string getParticipantId()
    {
        return this.participantId;
    }

    public void switchTrackCamera()
    {

        if (this.type == "video")
        {
            //Create a method to switchCamera in the plugin
            
        }
    }

    public void mute()
    {
        //create a method to mute using the plugin
        
    }

    public void unmute()
    {
        //create a method to unmute using the plugin
        
    }

    public void dispose()
    {
        //create a method to dispose using the plugin
        
    }


}
