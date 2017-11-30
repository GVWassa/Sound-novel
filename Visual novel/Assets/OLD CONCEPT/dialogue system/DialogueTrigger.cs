using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class DialogueTrigger : MonoBehaviour {

	public Dialogue dialogue;



	public void TriggerDialogue(){

		FindObjectOfType<DialogueManager>().StartDialogue(dialogue);
	}


}

//Source:https://www.youtube.com/watch?v=_nRzoTzeyxU
//Source: https://docs.unity3d.com/ScriptReference/UI.Button-onClick.html

