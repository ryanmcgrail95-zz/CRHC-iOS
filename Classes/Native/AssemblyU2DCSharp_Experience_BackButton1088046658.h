﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Experience
struct Experience_t1974411760;

#include "AssemblyU2DCSharp_RectItem1720926083.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Experience/BackButton
struct  BackButton_t1088046658  : public RectItem_t1720926083
{
public:
	// Experience Experience/BackButton::owner
	Experience_t1974411760 * ___owner_2;

public:
	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(BackButton_t1088046658, ___owner_2)); }
	inline Experience_t1974411760 * get_owner_2() const { return ___owner_2; }
	inline Experience_t1974411760 ** get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(Experience_t1974411760 * value)
	{
		___owner_2 = value;
		Il2CppCodeGenWriteBarrier(&___owner_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
