using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PresentationName : MonoBehaviour {

	public InputField FirstName;
	public InputField LastName;
	public Text Presence;

	public void SetGet(){
		Presence.text= "Welcome miss"+LastName+", "+FirstName+ "Thankyou for accepting this mission";
	}

}
