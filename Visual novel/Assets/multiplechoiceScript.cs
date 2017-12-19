using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class multiplechoiceScript : MonoBehaviour {

	public GameObject First;
	public GameObject First1;
	public GameObject First2;
	public GameObject First3;
	public GameObject First4;
	public GameObject First5;
	//public GameObject First6;

	public GameObject Second;
	public GameObject Second1;
	public GameObject Second2;
	public GameObject Second3;
	public GameObject Second4;
	public GameObject Second5;
	//public GameObject Second6;
	//public GameObject Second7;

	public GameObject Third;
	public GameObject Third1;
	public GameObject Third2;
	public GameObject Third3;
	public GameObject Third4;
	public GameObject Third5;
	public GameObject Third6;
	//public GameObject Third7;
	//public GameObject Third8;
	//public GameObject Third9;

	public GameObject Question;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Choice1(){
		First.SetActive(true);
		First1.SetActive(true);
		First2.SetActive(true);
		First3.SetActive(true);
		First4.SetActive(true);
		First5.SetActive(true);
		//First6.SetActive(true);
		Debug.Log("clicked on the 1");
		Question.SetActive(false);
	}

	public void Choice2(){
		Second.SetActive(true);
		Second1.SetActive(true);
		Second2.SetActive(true);
		Second3.SetActive(true);
		Second4.SetActive(true);
		Second5.SetActive(true);
		//Second6.SetActive(true);
		//Second7.SetActive(true);
		Debug.Log("clicked on the 2");
		Question.SetActive(false);
	}

	public void Choice3(){
		Third.SetActive(true);
		Third1.SetActive(true);
		Third2.SetActive(true);
		Third3.SetActive(true);
		Third4.SetActive(true);
		Third5.SetActive(true);
		Third6.SetActive(true);
		//Third7.SetActive(true);
		//Third8.SetActive(true);
		//Third9.SetActive(true);
		Debug.Log("clicked on the 3");
		Question.SetActive(false);
	}
}
