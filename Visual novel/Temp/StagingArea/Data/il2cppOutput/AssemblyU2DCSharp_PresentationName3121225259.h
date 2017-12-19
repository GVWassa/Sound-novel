#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PresentationName
struct  PresentationName_t3121225259  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField PresentationName::FirstName
	InputField_t1631627530 * ___FirstName_2;
	// UnityEngine.UI.InputField PresentationName::LastName
	InputField_t1631627530 * ___LastName_3;
	// UnityEngine.UI.Text PresentationName::Presence
	Text_t356221433 * ___Presence_4;

public:
	inline static int32_t get_offset_of_FirstName_2() { return static_cast<int32_t>(offsetof(PresentationName_t3121225259, ___FirstName_2)); }
	inline InputField_t1631627530 * get_FirstName_2() const { return ___FirstName_2; }
	inline InputField_t1631627530 ** get_address_of_FirstName_2() { return &___FirstName_2; }
	inline void set_FirstName_2(InputField_t1631627530 * value)
	{
		___FirstName_2 = value;
		Il2CppCodeGenWriteBarrier(&___FirstName_2, value);
	}

	inline static int32_t get_offset_of_LastName_3() { return static_cast<int32_t>(offsetof(PresentationName_t3121225259, ___LastName_3)); }
	inline InputField_t1631627530 * get_LastName_3() const { return ___LastName_3; }
	inline InputField_t1631627530 ** get_address_of_LastName_3() { return &___LastName_3; }
	inline void set_LastName_3(InputField_t1631627530 * value)
	{
		___LastName_3 = value;
		Il2CppCodeGenWriteBarrier(&___LastName_3, value);
	}

	inline static int32_t get_offset_of_Presence_4() { return static_cast<int32_t>(offsetof(PresentationName_t3121225259, ___Presence_4)); }
	inline Text_t356221433 * get_Presence_4() const { return ___Presence_4; }
	inline Text_t356221433 ** get_address_of_Presence_4() { return &___Presence_4; }
	inline void set_Presence_4(Text_t356221433 * value)
	{
		___Presence_4 = value;
		Il2CppCodeGenWriteBarrier(&___Presence_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
