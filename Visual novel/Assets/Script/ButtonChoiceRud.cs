using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonChoiceRud : MonoBehaviour {

	public GameObject Answer;
	public GameObject Question;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ClickedAnswer(){

	Answer.SetActive(true);
	Debug.Log("You just clicked on one of the answer!");
	Question.SetActive(false);
	}
}
