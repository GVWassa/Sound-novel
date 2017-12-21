using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisplayFaceEnv : MonoBehaviour {

	public GameObject Envelope;
	public GameObject Door;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void DisplayEnvelope(){
		Envelope.SetActive(false);
		Door.SetActive(true);
	}

	public void GoBackYellowEnvelope(){
		Door.SetActive(false);
		Envelope.SetActive(true);
	}
}
