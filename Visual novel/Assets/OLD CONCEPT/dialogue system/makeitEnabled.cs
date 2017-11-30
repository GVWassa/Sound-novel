using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class makeitEnabled : MonoBehaviour {

	//Out of the youtube code: just to make the button Start disappear
	public GameObject startDialogue;

	// Use this for initialization
	void Start () {
		//Out of the youtube code: just to make the button Start disappear
		startDialogue = GetComponent<GameObject>();
		startDialogue.SetActive(true);
		EnableButton();
	}


	void EnableButton (){
		if(Input.GetMouseButtonDown(0)){
			
			Debug.Log("J'ai cliquer!");
			startDialogue.SetActive(false);

	}

}

}
