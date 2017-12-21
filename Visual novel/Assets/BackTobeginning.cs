using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackTobeginning : MonoBehaviour {

	public GameObject Back4;
	public GameObject Back5;
	public GameObject Back6;
	public GameObject Back7;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	 public void Again(){
	 	Back4.SetActive(true);
		Back5.SetActive(true);
		Back6.SetActive(true);
		Back7.SetActive(true);
	 }
}
