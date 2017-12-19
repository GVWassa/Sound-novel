#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mydialogue
struct  Mydialogue_t1820456904  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Mydialogue::timer
	float ___timer_2;
	// UnityEngine.GameObject[] Mydialogue::buttons
	GameObjectU5BU5D_t3057952154* ___buttons_3;
	// System.Int32 Mydialogue::buttonCounter
	int32_t ___buttonCounter_4;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(Mydialogue_t1820456904, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_buttons_3() { return static_cast<int32_t>(offsetof(Mydialogue_t1820456904, ___buttons_3)); }
	inline GameObjectU5BU5D_t3057952154* get_buttons_3() const { return ___buttons_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_buttons_3() { return &___buttons_3; }
	inline void set_buttons_3(GameObjectU5BU5D_t3057952154* value)
	{
		___buttons_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_3, value);
	}

	inline static int32_t get_offset_of_buttonCounter_4() { return static_cast<int32_t>(offsetof(Mydialogue_t1820456904, ___buttonCounter_4)); }
	inline int32_t get_buttonCounter_4() const { return ___buttonCounter_4; }
	inline int32_t* get_address_of_buttonCounter_4() { return &___buttonCounter_4; }
	inline void set_buttonCounter_4(int32_t value)
	{
		___buttonCounter_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
