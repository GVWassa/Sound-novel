#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Dialogue
struct Dialogue_t3688956654;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueTrigger
struct  DialogueTrigger_t2216006262  : public MonoBehaviour_t1158329972
{
public:
	// Dialogue DialogueTrigger::dialogue
	Dialogue_t3688956654 * ___dialogue_2;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(DialogueTrigger_t2216006262, ___dialogue_2)); }
	inline Dialogue_t3688956654 * get_dialogue_2() const { return ___dialogue_2; }
	inline Dialogue_t3688956654 ** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(Dialogue_t3688956654 * value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
