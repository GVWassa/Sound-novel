using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RencontreBoss : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	public void BossEnconter () {
		SceneManager.LoadScene("RencontreAvecleboss");
		
	}
}
