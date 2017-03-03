﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const MethodInfo*);

	static inline void Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InterfaceFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InterfaceFuncInvoker9
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const MethodInfo*);

	static inline R Invoke (Il2CppMethodSlot slot, Il2CppClass* declaringInterface, void* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_interface_invoke_data (slot, declaringInterface, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
