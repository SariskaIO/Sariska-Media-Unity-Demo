using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ExternalTextureSecond : MonoBehaviour
{
    private AndroidJavaObject mGLTexCtrl;
    [SerializeField] private RawImage image;
    [SerializeField] private RawImage remoteImage;
    private int mTextureId;
    private int mWidth;
    private int mHeight;
    private Texture2D texture2D;
    private Texture2D remoteTexture2D;
    private IntPtr _nativeTexturePointer;
    //private Token tokenInstance;
    
    private void Awake()
    {
        AndroidJavaClass androidWebViewApiClass = new AndroidJavaClass("io.sariska.sariskamediaunityplugin.SariskaMediaUnityPlugin");

        AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");

        AndroidJavaObject currentActivityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");

        mGLTexCtrl = androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject);

        //tokenInstance = TokenAPIHelp.GetSessionToken("dipak");

        string token = "eyJhbGciOiJSUzI1NiIsImtpZCI6IjNmYjc1MTJjZjgzYzdkYTRjMjM0Y2QzYWEyYWViOTUzMGNlZmUwMDg1YzRiZjljYzgwY2U5YmQ5YmRiNjA3ZjciLCJ0eXAiOiJKV1QifQ.eyJjb250ZXh0Ijp7InVzZXIiOnsiaWQiOiJlcXpheXhhNyIsIm5hbWUiOiJVbml0eVVzZXIifSwiZ3JvdXAiOiIxIn0sInN1YiI6InVhdG5jb2U1djcybG5vaGxud2dxdjgiLCJyb29tIjoiKiIsImlhdCI6MTY1MTA1ODY1OSwibmJmIjoxNjUxMDU4NjU5LCJpc3MiOiJzYXJpc2thIiwiYXVkIjoibWVkaWFfbWVzc2FnaW5nX2NvLWJyb3dzaW5nIiwiZXhwIjoxNjUxMjMxNDU5fQ.k0eJiQIEErJUaBR-PR_i6THHD_MS26-ndJkjC-sQ4GZwIfJP9EMHWd8bUu4nh5cG8r0qxODxZIuHMrQDXDXapkspfUnENol10MixpKGo4BAsvIxY61fstN0v-vUll29yq-4oJu3qvIlrFrEDRYIMvrXH36kSk71dkmUmGi8SHGEctFyIzBoXiXf5Adb9bJ_7SqoabR14PkLrOUPKKB_Jz7z_ZXMgPCIUrI3viJIshGaQ5zDb4-ZsZuyWG5g2StKBnZK0J3siKENe0W-OhSP0LtP56BNlJYtLXoTaI_pQzIzemyMZr4iFF6R6qPSMN4KgAA5p-GshaWsQ5m8teRoW1Q";

        mGLTexCtrl.Call("setupOpenGL", token);
    }

    // Start is called before the first frame update
    void Start()
    {
        remoteTexture2D = new Texture2D(1280, 800, TextureFormat.ARGB32, false)
        { filterMode = FilterMode.Point };

        remoteTexture2D.Apply();
        remoteImage.texture = remoteTexture2D;
        _nativeTexturePointer = remoteTexture2D.GetNativeTexturePtr();

        texture2D = new Texture2D(1280, 800, TextureFormat.ARGB32, false);
        image.texture = texture2D;
        BindTexture(_nativeTexturePointer);
    }

    private void BindTexture(IntPtr remoteTexturePointer)
    {
        mTextureId = mGLTexCtrl.Call<int>("getStreamTextureID", remoteTexturePointer.ToInt32());
        if (mTextureId == 0) {
            Debug.Log("Texture ID value is zero");
        }
        mWidth = mGLTexCtrl.Call<int>("getStreamTextureWidth");
        mHeight = mGLTexCtrl.Call<int>("getStreamTextureHeight");
        Debug.Log("Done getting width and height");
        
        Texture2D nativeTexture = Texture2D.CreateExternalTexture(
                mWidth, mHeight,
                TextureFormat.ARGB32,
                false, false,
                (IntPtr)mTextureId);

        texture2D.UpdateExternalTexture(nativeTexture.GetNativeTexturePtr());
        //Update texture data
        
        mGLTexCtrl.Call("setupLocalStream");
    }

    // Update is called once per frame
    void Update()
    {
        if(mGLTexCtrl == null)
        {
            return;
        }
        
    }
}
