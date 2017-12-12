using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class multiplechoiceScript : MonoBehaviour {

	public GameObject First;
	public GameObject Second;
	public GameObject Third;
	public GameObject Question;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Choice1(){
		First.SetActive(true);
		Debug.Log("clicked on the 1");
		Question.SetActive(false);
	}

	public void Choice2(){
		Second.SetActive(true);
		Debug.Log("clicked on the 2");
		Question.SetActive(false);
	}

	public void Choice3(){
		Third.SetActive(true);
		Debug.Log("clicked on the 3");
		Question.SetActive(false);
	}
}
