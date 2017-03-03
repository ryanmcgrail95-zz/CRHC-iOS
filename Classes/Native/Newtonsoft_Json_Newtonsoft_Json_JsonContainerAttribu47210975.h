﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_t3996993727;

#include "mscorlib_System_Attribute542643598.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen3575889505.h"
#include "mscorlib_System_Nullable_1_gen3889546705.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonContainerAttribute
struct  JsonContainerAttribute_t47210975  : public Attribute_t542643598
{
public:
	// System.Type Newtonsoft.Json.JsonContainerAttribute::<ItemConverterType>k__BackingField
	Type_t * ___U3CItemConverterTypeU3Ek__BackingField_0;
	// System.Object[] Newtonsoft.Json.JsonContainerAttribute::<ItemConverterParameters>k__BackingField
	ObjectU5BU5D_t3614634134* ___U3CItemConverterParametersU3Ek__BackingField_1;
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.JsonContainerAttribute::<NamingStrategyInstance>k__BackingField
	NamingStrategy_t3996993727 * ___U3CNamingStrategyInstanceU3Ek__BackingField_2;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonContainerAttribute::_isReference
	Nullable_1_t2088641033  ____isReference_3;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonContainerAttribute::_itemIsReference
	Nullable_1_t2088641033  ____itemIsReference_4;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonContainerAttribute::_itemReferenceLoopHandling
	Nullable_1_t3575889505  ____itemReferenceLoopHandling_5;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonContainerAttribute::_itemTypeNameHandling
	Nullable_1_t3889546705  ____itemTypeNameHandling_6;
	// System.Type Newtonsoft.Json.JsonContainerAttribute::_namingStrategyType
	Type_t * ____namingStrategyType_7;
	// System.Object[] Newtonsoft.Json.JsonContainerAttribute::_namingStrategyParameters
	ObjectU5BU5D_t3614634134* ____namingStrategyParameters_8;

public:
	inline static int32_t get_offset_of_U3CItemConverterTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ___U3CItemConverterTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CItemConverterTypeU3Ek__BackingField_0() const { return ___U3CItemConverterTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CItemConverterTypeU3Ek__BackingField_0() { return &___U3CItemConverterTypeU3Ek__BackingField_0; }
	inline void set_U3CItemConverterTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CItemConverterTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemConverterTypeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CItemConverterParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ___U3CItemConverterParametersU3Ek__BackingField_1)); }
	inline ObjectU5BU5D_t3614634134* get_U3CItemConverterParametersU3Ek__BackingField_1() const { return ___U3CItemConverterParametersU3Ek__BackingField_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_U3CItemConverterParametersU3Ek__BackingField_1() { return &___U3CItemConverterParametersU3Ek__BackingField_1; }
	inline void set_U3CItemConverterParametersU3Ek__BackingField_1(ObjectU5BU5D_t3614634134* value)
	{
		___U3CItemConverterParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemConverterParametersU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CNamingStrategyInstanceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ___U3CNamingStrategyInstanceU3Ek__BackingField_2)); }
	inline NamingStrategy_t3996993727 * get_U3CNamingStrategyInstanceU3Ek__BackingField_2() const { return ___U3CNamingStrategyInstanceU3Ek__BackingField_2; }
	inline NamingStrategy_t3996993727 ** get_address_of_U3CNamingStrategyInstanceU3Ek__BackingField_2() { return &___U3CNamingStrategyInstanceU3Ek__BackingField_2; }
	inline void set_U3CNamingStrategyInstanceU3Ek__BackingField_2(NamingStrategy_t3996993727 * value)
	{
		___U3CNamingStrategyInstanceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNamingStrategyInstanceU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of__isReference_3() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ____isReference_3)); }
	inline Nullable_1_t2088641033  get__isReference_3() const { return ____isReference_3; }
	inline Nullable_1_t2088641033 * get_address_of__isReference_3() { return &____isReference_3; }
	inline void set__isReference_3(Nullable_1_t2088641033  value)
	{
		____isReference_3 = value;
	}

	inline static int32_t get_offset_of__itemIsReference_4() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ____itemIsReference_4)); }
	inline Nullable_1_t2088641033  get__itemIsReference_4() const { return ____itemIsReference_4; }
	inline Nullable_1_t2088641033 * get_address_of__itemIsReference_4() { return &____itemIsReference_4; }
	inline void set__itemIsReference_4(Nullable_1_t2088641033  value)
	{
		____itemIsReference_4 = value;
	}

	inline static int32_t get_offset_of__itemReferenceLoopHandling_5() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ____itemReferenceLoopHandling_5)); }
	inline Nullable_1_t3575889505  get__itemReferenceLoopHandling_5() const { return ____itemReferenceLoopHandling_5; }
	inline Nullable_1_t3575889505 * get_address_of__itemReferenceLoopHandling_5() { return &____itemReferenceLoopHandling_5; }
	inline void set__itemReferenceLoopHandling_5(Nullable_1_t3575889505  value)
	{
		____itemReferenceLoopHandling_5 = value;
	}

	inline static int32_t get_offset_of__itemTypeNameHandling_6() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ____itemTypeNameHandling_6)); }
	inline Nullable_1_t3889546705  get__itemTypeNameHandling_6() const { return ____itemTypeNameHandling_6; }
	inline Nullable_1_t3889546705 * get_address_of__itemTypeNameHandling_6() { return &____itemTypeNameHandling_6; }
	inline void set__itemTypeNameHandling_6(Nullable_1_t3889546705  value)
	{
		____itemTypeNameHandling_6 = value;
	}

	inline static int32_t get_offset_of__namingStrategyType_7() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ____namingStrategyType_7)); }
	inline Type_t * get__namingStrategyType_7() const { return ____namingStrategyType_7; }
	inline Type_t ** get_address_of__namingStrategyType_7() { return &____namingStrategyType_7; }
	inline void set__namingStrategyType_7(Type_t * value)
	{
		____namingStrategyType_7 = value;
		Il2CppCodeGenWriteBarrier(&____namingStrategyType_7, value);
	}

	inline static int32_t get_offset_of__namingStrategyParameters_8() { return static_cast<int32_t>(offsetof(JsonContainerAttribute_t47210975, ____namingStrategyParameters_8)); }
	inline ObjectU5BU5D_t3614634134* get__namingStrategyParameters_8() const { return ____namingStrategyParameters_8; }
	inline ObjectU5BU5D_t3614634134** get_address_of__namingStrategyParameters_8() { return &____namingStrategyParameters_8; }
	inline void set__namingStrategyParameters_8(ObjectU5BU5D_t3614634134* value)
	{
		____namingStrategyParameters_8 = value;
		Il2CppCodeGenWriteBarrier(&____namingStrategyParameters_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
