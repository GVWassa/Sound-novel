using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ContractButton : MonoBehaviour {


	public GameObject Contract;
	public GameObject Background;

	// Use this for initialization
	void Start () {
		Contract.SetActive(false);
		Background.SetActive(true);
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ButtonContract(){

		Contract.SetActive(true);
		Background.SetActive(false);

	}
}
