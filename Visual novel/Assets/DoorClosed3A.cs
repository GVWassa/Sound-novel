using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DoorClosed3A : MonoBehaviour {

	public GameObject Button;
	public GameObject Text;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void DoorClosed(){
		Text.SetActive(true);
	}
}
