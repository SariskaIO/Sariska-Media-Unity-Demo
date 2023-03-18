using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.IO;
using System.Text;

public static class TokenAPIHelp
{
   public static Token GetSessionToken(string RoomName, string UserName)
    {
		HttpWebRequest request;
		string data = "{\"sessionId\":\"" + RoomName + "\"," +
			"\"apiKey\":\"249202aabed00b41363794b526eee6927bd35cbc9bac36cd3edcaa\"," +
            "\"user\":{\"name\":\"" + UserName + "\",\"moderator\": true}}";
		byte[] dataBytes = Encoding.UTF8.GetBytes(data);
		Debug.Log("Creating request");
		request = (HttpWebRequest)(WebRequest.Create("https://api.sariska.io/api/v1/misc/generate-token"));
		Debug.Log(request);
		Debug.Log("Done Creating request");
		request.AutomaticDecompression = DecompressionMethods.GZip | DecompressionMethods.Deflate;
		request.ContentLength = dataBytes.Length;
		request.ContentType = "application/json";
		request.Method = "POST";
		using (Stream requestBody = request.GetRequestStream())
		{
			requestBody.Write(dataBytes, 0, dataBytes.Length);
		}
		HttpWebResponse response = (HttpWebResponse)request.GetResponse();
		StreamReader reader = new StreamReader(response.GetResponseStream());
		string json = reader.ReadToEnd();
		return JsonUtility.FromJson<Token>(json);
	}
}
