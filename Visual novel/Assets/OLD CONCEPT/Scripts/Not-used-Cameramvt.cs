using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cameramvt : MonoBehaviour {

	public float amountOfy;
	public float speed;

	// Use this for initialization
	void Start () {
		amountOfy = 0.2f;
		speed = 1.1f;
		
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetAxis("Mouse X")<0){
		print("Mouse moved left");
		transform.Rotate(0,amountOfy+speed,0);
		}

		if(Input.GetAxis("Mouse X")<0){
		print("Mouse moved right");
		transform.Rotate(0,amountOfy-speed,0);
		}
	}
}
