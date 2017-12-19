#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContractButton
struct  ContractButton_t1671221118  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ContractButton::Contract
	GameObject_t1756533147 * ___Contract_2;
	// UnityEngine.GameObject ContractButton::Background
	GameObject_t1756533147 * ___Background_3;

public:
	inline static int32_t get_offset_of_Contract_2() { return static_cast<int32_t>(offsetof(ContractButton_t1671221118, ___Contract_2)); }
	inline GameObject_t1756533147 * get_Contract_2() const { return ___Contract_2; }
	inline GameObject_t1756533147 ** get_address_of_Contract_2() { return &___Contract_2; }
	inline void set_Contract_2(GameObject_t1756533147 * value)
	{
		___Contract_2 = value;
		Il2CppCodeGenWriteBarrier(&___Contract_2, value);
	}

	inline static int32_t get_offset_of_Background_3() { return static_cast<int32_t>(offsetof(ContractButton_t1671221118, ___Background_3)); }
	inline GameObject_t1756533147 * get_Background_3() const { return ___Background_3; }
	inline GameObject_t1756533147 ** get_address_of_Background_3() { return &___Background_3; }
	inline void set_Background_3(GameObject_t1756533147 * value)
	{
		___Background_3 = value;
		Il2CppCodeGenWriteBarrier(&___Background_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
