using System;
using UnityEngine;

// Include the namespace required to use Unity UI
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine.Networking;
using UnityEngine.SocialPlatforms.Impl;

public class PlayerController : MonoBehaviour {
	
	// Create public variables for player speed, and for the Text UI game objects
	public float speed;
	public Text countText;
	public Text winText;
	public Text timerText;
	public TextMeshProUGUI TMPUGUI_playerStats;
	public float countDownTimer=0;
	// Create private references to the rigidbody component on the player, and the count of pick up objects picked up so far
	private Rigidbody rb;
	private int count;
	private int score;
	bool isRunning=true;
	public GameObject winPanel;
	[SerializeField] InputField pname;
	[SerializeField] Text txtsb;
	[SerializeField] AudioSource audsrc;
	[SerializeField] TextMeshProUGUI TMPUGUI_LastScore;

	// At the start of the game..
	void Start ()
	{
		// Assign the Rigidbody component to our private rb variable
		rb = GetComponent<Rigidbody>();

		// Set the count to zero 
		count = 0;

		// Run the SetCountText function to update the UI (see below)
		SetCountText ();
		ScoreText.text = "Score: " + score.ToString();

		// Set the text property of our Win Text UI to an empty string, making the 'You Win' (game over message) blank
		winText.text = "";
		winPanel.SetActive(false);
		StartCoroutine(GlobalStuffs.GetScoreBoard(txtsb));
		RefreshPlayerStats();
		countDownTimer += 1.5f * GlobalStuffs.PrestigeLevel;
		speed=GlobalStuffs.level*5+5;
		if (speed > 30) speed = 30;
	}
	void RefreshPlayerStats(){
		TMPUGUI_playerStats.text=
			"Player Stats"
			+"\nName:"+GlobalStuffs.username
		    +"\nLevel:"+GlobalStuffs.level
		    +"\nXP:"+GlobalStuffs.xp
		    +"\nCash:"+GlobalStuffs.cash
		    +"\nTimes Played:"+GlobalStuffs.timesPlayed
		    +"\nPrestige: "+GlobalStuffs.PrestigeLevel;
	}

	// Each physics step..
	void FixedUpdate ()
	{
		if(!isRunning)return;
		// Set some local float variables equal to the value of our Horizontal and Vertical Inputs
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		// Create a Vector3 variable, and assign X and Z to feature our horizontal and vertical float variables above
		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		// Add a physical force to our Player rigidbody using our 'movement' Vector3 above, 
		// multiplying it by 'speed' - our public player speed that appears in the inspector
		rb.AddForce (movement * speed);
	}

    void Update(){
		if(!isRunning)return;
            countDownTimer-=Time.deltaTime;
            SetTimerText();
        
    }

	// When this game object intersects a collider with 'is trigger' checked, 
	// store a reference to that collider in a variable named 'other'..
	void OnTriggerEnter(Collider other) 
	{
		// ..and if the game object we intersect has the tag 'Pick Up' assigned to it..
		if (other.gameObject.CompareTag ("Pick Up"))
		{
			// Make the other game object (the pick up) inactive, to make it disappear
			other.gameObject.SetActive (false);

			// Add one to the score variable 'count'
			count = count + 1;
			score += 1;
			ScoreText.text = "Score: " + score.ToString();
			GlobalStuffs.xp+=1;
			if(GlobalStuffs.xp>GlobalStuffs.level*10){
				GlobalStuffs.level++;
				GlobalStuffs.xp=0;
			}

			// Run the 'SetCountText()' function (see below)
			SetCountText ();
			audsrc.Play();
			RefreshPlayerStats();
		}
		if (other.gameObject.CompareTag ("Coin"))
		{
			// Make the other game object (the pick up) inactive, to make it disappear
			other.gameObject.SetActive (false);

			// Add one to the score variable 'count'
			GlobalStuffs.cash+=5;

			// Run the 'SetCountText()' function (see below)
			//SetCountText ();
			audsrc.Play();
			RefreshPlayerStats();
		}
	}

	// Create a standalone function that can update the 'countText' UI and check if the required amount to win has been achieved
	void SetCountText()
	{
		// Update the text field of our 'countText' variable
		countText.text = "Items Collected: " + count.ToString ();

		// Check if our 'count' is equal to or exceeded 12
		if (count >= 12) 
		{
			// Set the text value of our 'winText'
			winText.text = "You Win!";
			GameOver();
		}
	}
	void SetTimerText(){
        timerText.text="Time Left:"+countDownTimer.ToString("0.0");
		if(countDownTimer<=0){
			winText.text = "Time over!";
			GameOver();
		}
    }
	void GameOver(){
		isRunning=false;
		winPanel.SetActive(true);
		GlobalStuffs.xp+=count;
		GlobalStuffs.timesPlayed += 1;
		GlobalStuffs.finishTime = countDownTimer;
		rb.velocity=Vector3.zero;
		rb.angularVelocity=Vector3.zero;
		TMPUGUI_LastScore.text="LastScore:"+count;
		StartCoroutine(GlobalStuffs.UpdatePlayerStats());
		StartCoroutine(GlobalStuffs.DoSendScore(GlobalStuffs.username,score));
	}
	public void Replay(){
		//StartCoroutine(GlobalStuffs.DoSendScore(pname.text,count));
		//winPanel.SetActive(false);
		//Restart();
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		
	}
	public void OnDeleteUser(){
		StartCoroutine(GlobalStuffs.DeleteCurrentUser());
		BacktoMain();
	}

	
	// public void Restart(){

	// 	StartCoroutine(GlobalStuffs.GetScoreBoard(txtsb));
	// 	isRunning=true;
	// 	count=0;
	// 	countDownTimer=10;
	// 	SetCountText();
	// 	SetTimerText();
	// 	transform.position=new Vector3(0f,0.5f,0f);
	// 	winText.text="";
	// 	 SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		
	// }

	public void ClearScores(){
		StartCoroutine(GlobalStuffs.ClearScores());
		StartCoroutine(GlobalStuffs.GetScoreBoard(txtsb));
	}
	public void BacktoMain(){
		SceneManager.LoadScene("MainScn");
	}

	public Button pauseResumeButton;
	public TMP_Text StoreReplyText;
	public GameObject storePanel;
	private Vector3 velocityStash;
	public void PauseGame()
	{
		velocityStash = rb.velocity;
		rb.velocity = Vector3.zero;
		rb.angularVelocity = Vector3.zero;
		isRunning = false;
		pauseResumeButton.onClick.RemoveListener(PauseGame);
		pauseResumeButton.onClick.AddListener(ResumeGame);
	}

	public void ResumeGame()
	{
		isRunning = true;
		rb.velocity = velocityStash;
		pauseResumeButton.onClick.RemoveListener(ResumeGame);
		pauseResumeButton.onClick.AddListener(PauseGame);
	}

	public Button storeButton;

	public void OpenStore()
	{
		storeButton.onClick.RemoveListener(OpenStore);
		storeButton.onClick.AddListener(CloseStore);
		storePanel.SetActive(true);
	}

	public void CloseStore()
	{
		storeButton.onClick.RemoveListener(CloseStore);
		storeButton.onClick.AddListener(OpenStore);
		storePanel.SetActive(false);
	}

	public Text ScoreText;
	public void buyScores()
	{
		if (GlobalStuffs.cash < 5)
		{
			StoreReplyText.text = "Not Enough Money";
			return;
		}

		StoreReplyText.text = "Bought One Score";
		score += 1;
		ScoreText.text = "Score: " + score.ToString();
		GlobalStuffs.cash -= 5;
		RefreshPlayerStats();
	}

	public void buyTime()
	{
		if (GlobalStuffs.cash < 25)
		{
			StoreReplyText.text = "Not Enough Money";
			return;
		}

		StoreReplyText.text = "Bought Two Seconds";
		countDownTimer += 2;
		GlobalStuffs.cash -= 25;
		RefreshPlayerStats();
		SetTimerText();
	}

	public void Prestige()
	{
		if (GlobalStuffs.level < 20)
		{
			StoreReplyText.text = "Level Is Too Low";
			return;
		}

		StoreReplyText.text = "Prestiged";
		GlobalStuffs.PrestigeLevel += 1;
		GlobalStuffs.cash += 50;
		GlobalStuffs.level -= 20;
		RefreshPlayerStats();
	}

	public GameObject leaderboard;
	public TMP_Text leaderboardInfo;
	public Button leaderboardButton;
	public void OpenLeaderboard()
	{
		leaderboard.SetActive(true);
		leaderboardButton.onClick.RemoveListener(OpenLeaderboard);
		leaderboardButton.onClick.AddListener(CloseLeaderboard);
		StartCoroutine(loadLeaderboard());
	}

	public void CloseLeaderboard()
	{
		leaderboard.SetActive(false);
		leaderboardButton.onClick.RemoveListener(CloseLeaderboard);
		leaderboardButton.onClick.AddListener(OpenLeaderboard);
	}

	private static string LoadLeaderBoardURL = GlobalStuffs.baseURL + "ReadLeaderBoard.php";
	
	public IEnumerator loadLeaderboard()
	{
		using (UnityWebRequest webreq = UnityWebRequest.Get(LoadLeaderBoardURL))
		{
			yield return webreq.SendWebRequest();

			switch (webreq.result)
			{
				case UnityWebRequest.Result.Success:
					Entries meep = JsonUtility.FromJson<Entries>(webreq.downloadHandler.text);
					string leaderdata = "Top Players: \n";
					for (int i = 0; i < meep.entries.Count; ++i)
					{
						PlayerStats stat = meep.entries[i];
						leaderdata +=
							stat.username + " | L" +
							stat.level + " | " +
							stat.xp + "xp | $" +
							stat.cash + " | " +
							stat.timesPlayed + " | P" +
							stat.prestige + " |\n";
					}
					leaderboardInfo.text = leaderdata;
					break;
				default:
					Debug.Log("Leaderboard Error");
					break;
			}
		}
	}

	[Serializable]
	class Entries
	{
		public List<PlayerStats> entries = new List<PlayerStats>();
	}
}