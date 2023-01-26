using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;

public class RegLoginController : MonoBehaviour
{
    string URLLoginBackend = GlobalStuffs.baseURL + "LoginBackend.php";
    string URLRegBackend = GlobalStuffs.baseURL + "RegisterBackend.php";
    string URLReadPlayerStats = GlobalStuffs.baseURL + "ReadPlayerStatsJSON.php";
    public TextMeshProUGUI displayTxt; //must add using UnityEngine.UI
    public TMP_InputField if_regusername, if_regpassword, if_regemail; //to link to the inpufields
    public TMP_InputField if_loginusername, if_loginpassword; //to link to the inpufields
    public void OnButtonLogin()
    { //to be invoked by button click
        StartCoroutine(DoLogin());
    }
    IEnumerator DoLogin()
    {
        WWWForm form = new WWWForm();
        form.AddField("sUsername", if_loginusername.text);
        form.AddField("sPassword", if_loginpassword.text);
        UnityWebRequest webreq = UnityWebRequest.Post(URLLoginBackend, form);
        yield return webreq.SendWebRequest();
        switch (webreq.result)
        {
            case UnityWebRequest.Result.Success:
                displayTxt.text = webreq.downloadHandler.text;
                if (webreq.downloadHandler.text == "LOGIN SUCCESS")
                {
                    Debug.Log("Load new Scene");
                    GlobalStuffs.username = if_loginusername.text;
                    GlobalStuffs.xp = 0;
                    GlobalStuffs.cash = 0;
                    StartCoroutine(GetPlayerStats(if_loginusername.text));
                    SceneManager.LoadScene("GameScn");
                }
                break;
            default:
                displayTxt.text = "server error";
                break;
        }
        webreq.Dispose();
    }
    public void OnButtonRegister()
    { //to be invoked by button click
        StartCoroutine(DoRegister());
    }
    IEnumerator DoRegister()
    {
        WWWForm form = new WWWForm();
        form.AddField("sUsername", if_regusername.text);
        form.AddField("sPassword", if_regpassword.text);
        form.AddField("sEmail", if_regemail.text);
        UnityWebRequest webreq = UnityWebRequest.Post(URLRegBackend, form);
        yield return webreq.SendWebRequest();
        switch (webreq.result)
        {
            case UnityWebRequest.Result.Success:
                displayTxt.text = webreq.downloadHandler.text;
                break;
            default:
                displayTxt.text = "server error";
                break;
        }
        webreq.Dispose();
    }

    IEnumerator GetPlayerStats(string playername)
    {
        WWWForm form = new WWWForm();
        form.AddField("username", playername);
        UnityWebRequest webRequest = UnityWebRequest.Post(URLReadPlayerStats, form);

        // Request and wait for the desired page.
        yield return webRequest.SendWebRequest();

        switch (webRequest.result)
        {
            case UnityWebRequest.Result.Success:
                Debug.Log("Received: " + webRequest.downloadHandler.text);
                displayTxt.text = "RawData:\n" + webRequest.downloadHandler.text + "\n";
                //displayTxt.text=Deserialize(webRequest.downloadHandler.text); //added
                PlayerStats ps = PlayerStats.CreateFromJSON(webRequest.downloadHandler.text);
                displayTxt.text = "Username:" + ps.username + "\nXP:" + ps.xp + "\nLevel:" + ps.level + "\nCash:" + ps.cash;
                GlobalStuffs.username = ps.username;
                GlobalStuffs.xp = ps.xp;
                GlobalStuffs.level = ps.level;
                GlobalStuffs.cash = ps.cash;
                SceneManager.LoadScene("GameScn");

                break;
            default:
                displayTxt.text = "server error";
                break;
        }
        webRequest.Dispose();
    }
    public void GuestLogin()
    {
        SceneManager.LoadScene("GameScn");
    }


}
