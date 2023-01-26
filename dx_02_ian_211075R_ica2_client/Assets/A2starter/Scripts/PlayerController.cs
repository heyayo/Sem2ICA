using UnityEngine;

// Include the namespace required to use Unity UI
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using TMPro;

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

		// Set the text property of our Win Text UI to an empty string, making the 'You Win' (game over message) blank
		winText.text = "";
		winPanel.SetActive(false);
		StartCoroutine(GlobalStuffs.GetScoreBoard(txtsb));
		RefreshPlayerStats();
		speed=GlobalStuffs.level*5+5;
	}
	void RefreshPlayerStats(){
		TMPUGUI_playerStats.text="Player Stats\nName:"+GlobalStuffs.username+"\nLevel:"+GlobalStuffs.level+"\nXP:"+GlobalStuffs.xp+"\nCoins:"+GlobalStuffs.cash;
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
		countText.text = "Score: " + count.ToString ();

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
		rb.velocity=Vector3.zero;
		rb.angularVelocity=Vector3.zero;
		TMPUGUI_LastScore.text="LastScore:"+count;
		StartCoroutine(GlobalStuffs.UpdatePlayerStats());
		StartCoroutine(GlobalStuffs.DoSendScore(GlobalStuffs.username,count));
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
}