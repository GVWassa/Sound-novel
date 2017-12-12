using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Mydialogue : MonoBehaviour {

	public float timer;
	public GameObject[] buttons;
	int buttonCounter;

	
	// Update is called once per frame
	void Update () {

		timer += Time.deltaTime;
		
	}

	public void buttonClick(Object myObject){

	if(timer > 100){
					if(myObject == buttons[buttonCounter]){
															Destroy(myObject);
															buttonCounter++;
															}
		}
	}
}
