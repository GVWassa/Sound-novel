#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Dialogue
struct  Dialogue_t3688956654  : public Il2CppObject
{
public:
	// System.String Dialogue::name
	String_t* ___name_0;
	// System.String[] Dialogue::sentences
	StringU5BU5D_t1642385972* ___sentences_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Dialogue_t3688956654, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_sentences_1() { return static_cast<int32_t>(offsetof(Dialogue_t3688956654, ___sentences_1)); }
	inline StringU5BU5D_t1642385972* get_sentences_1() const { return ___sentences_1; }
	inline StringU5BU5D_t1642385972** get_address_of_sentences_1() { return &___sentences_1; }
	inline void set_sentences_1(StringU5BU5D_t1642385972* value)
	{
		___sentences_1 = value;
		Il2CppCodeGenWriteBarrier(&___sentences_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
