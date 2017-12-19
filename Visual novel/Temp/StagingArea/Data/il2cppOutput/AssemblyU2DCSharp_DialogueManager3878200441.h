#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t1848877068;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueManager
struct  DialogueManager_t3878200441  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text DialogueManager::nameText
	Text_t356221433 * ___nameText_2;
	// UnityEngine.UI.Text DialogueManager::dialogueText
	Text_t356221433 * ___dialogueText_3;
	// System.Collections.Generic.Queue`1<System.String> DialogueManager::sentences
	Queue_1_t1848877068 * ___sentences_4;

public:
	inline static int32_t get_offset_of_nameText_2() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___nameText_2)); }
	inline Text_t356221433 * get_nameText_2() const { return ___nameText_2; }
	inline Text_t356221433 ** get_address_of_nameText_2() { return &___nameText_2; }
	inline void set_nameText_2(Text_t356221433 * value)
	{
		___nameText_2 = value;
		Il2CppCodeGenWriteBarrier(&___nameText_2, value);
	}

	inline static int32_t get_offset_of_dialogueText_3() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dialogueText_3)); }
	inline Text_t356221433 * get_dialogueText_3() const { return ___dialogueText_3; }
	inline Text_t356221433 ** get_address_of_dialogueText_3() { return &___dialogueText_3; }
	inline void set_dialogueText_3(Text_t356221433 * value)
	{
		___dialogueText_3 = value;
		Il2CppCodeGenWriteBarrier(&___dialogueText_3, value);
	}

	inline static int32_t get_offset_of_sentences_4() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___sentences_4)); }
	inline Queue_1_t1848877068 * get_sentences_4() const { return ___sentences_4; }
	inline Queue_1_t1848877068 ** get_address_of_sentences_4() { return &___sentences_4; }
	inline void set_sentences_4(Queue_1_t1848877068 * value)
	{
		___sentences_4 = value;
		Il2CppCodeGenWriteBarrier(&___sentences_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
