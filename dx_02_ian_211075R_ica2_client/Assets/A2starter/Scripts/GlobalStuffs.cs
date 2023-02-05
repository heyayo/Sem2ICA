using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System;
public static class GlobalStuffs {
    public static string username="GuestPlayer";
    public static int xp=0;
    public static int cash=0;
    public static int level=1;
    public static int timesPlayed=0;

    
    public static string baseURL="http://localhost:8000/"; //rename this to your server path
    static string addscorebackendURL=baseURL+"AddScoreBackend.php";
    static string ReadSBJSONURL=baseURL+"ReadScoreBoardJSON.php";
    static string DeleteAllScoreURL=baseURL+"DeleteAllScores.php";
    static string UpdatePlayerStatsURL=baseURL+"UpdatePlayerStatsBackend.php";
    static string DeleteUserURL=baseURL+"DeleteUserBackend.php";
    
    public static IEnumerator DoSendScore(string pname,int score){
        WWWForm form=new WWWForm();
        form.AddField("sPlayerName",pname);
        form.AddField("iScore",score);
        UnityWebRequest webreq=UnityWebRequest.Post(addscorebackendURL,form);
        yield return webreq.SendWebRequest();
        switch (webreq.result)
            {
                case UnityWebRequest.Result.Success:
                    //Debug.Log(":\nReceived: " + webreq.downloadHandler.text);
                    //GetScoreBoard();
                    break;
                default:
                    Debug.Log("error");
                    break;
            }
            webreq.Dispose();
    }
    
    public static IEnumerator GetScoreBoard(Text txtSB)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(ReadSBJSONURL))
        {
            yield return webRequest.SendWebRequest();

            switch (webRequest.result)
            {
                case UnityWebRequest.Result.Success:
                    Debug.Log("Received: " + webRequest.downloadHandler.text);
                    //displayTxt.text="RawData:\n"+webRequest.downloadHandler.text+"\n";
                    txtSB.text=Deserialize(webRequest.downloadHandler.text); //added
                    break;
                default:
                    Debug.Log("error"+webRequest.error);
                    break;
            }
            webRequest.Dispose();
        }
    }

     public static IEnumerator ClearScores(){
        UnityWebRequest webreq=UnityWebRequest.Get(DeleteAllScoreURL);
        yield return webreq.SendWebRequest();
        switch (webreq.result)
            {
                case UnityWebRequest.Result.Success:
                    Debug.Log(":\nReceived: " + webreq.downloadHandler.text);
                    //GetScoreBoard();
                    break;
                default:
                    Debug.Log("error");
                    break;
            }
         webreq.Dispose();
            
    }
    static string Deserialize(String RawJSON){ 
        ScoreList sb=JsonUtility.FromJson<ScoreList>(RawJSON); //convert raw json to objects
         
        string ddata="Leaderboard:\n";               
        for(int a=0;a<sb.scores.Count;a++){
            OneScore oneScore=sb.scores[a];
            //Debug.Log(oneScore.username+" : "+oneScore.score);
            ddata+=(oneScore.username+" : "+oneScore.score+ " : " + oneScore.recordDate + "\n");
        }

        return ddata;
    }
    public static IEnumerator UpdatePlayerStats(){
        WWWForm form=new WWWForm();
        form.AddField("username",username);
        form.AddField("newxp",xp);
        form.AddField("newlevel",level);
        form.AddField("newcash",cash);

        using(UnityWebRequest webreq=UnityWebRequest.Post(UpdatePlayerStatsURL,form)){
        yield return webreq.SendWebRequest();
        switch (webreq.result)
            {
                case UnityWebRequest.Result.Success:
                    Debug.Log(":\nReceived: " + webreq.downloadHandler.text);
                    //GetScoreBoard();
                    break;
                default:
                    Debug.Log("baderror");
                    break;
            }
        }
        //webreq.Dispose();
            
    }
        public static IEnumerator DeleteCurrentUser(){
        WWWForm form=new WWWForm();
        form.AddField("username",username);        

        using(UnityWebRequest webreq=UnityWebRequest.Post(DeleteUserURL,form)){
        yield return webreq.SendWebRequest();
        switch (webreq.result)
            {
                case UnityWebRequest.Result.Success:
                    Debug.Log(":\nReceived: " + webreq.downloadHandler.text);
                    //GetScoreBoard();
                    break;
                default:
                    Debug.Log("baderror");
                    break;
            }
        }
        //webreq.Dispose();
    }
}



//https://docs.unity3d.com/ScriptReference/Networking.UnityWebRequest.Get.html

//create classes and data structure to match the JSON structure
[Serializable]
class OneScore {
    public string username;
    public int score;
    public string recordDate; 
}
[Serializable]
class ScoreList {
    public List<OneScore> scores=new List<OneScore>();
}



