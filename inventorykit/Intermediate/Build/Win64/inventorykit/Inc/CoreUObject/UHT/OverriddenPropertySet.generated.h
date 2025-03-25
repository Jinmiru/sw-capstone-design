// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/OverriddenPropertySet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_OverriddenPropertySet_generated_h
#error "OverriddenPropertySet.generated.h already included, missing '#pragma once' in OverriddenPropertySet.h"
#endif
#define COREUOBJECT_OverriddenPropertySet_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FOverriddenPropertyNodeID>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FOverriddenPropertyNode>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FOverriddenPropertySet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h


#define FOREACH_ENUM_EOVERRIDDENPROPERTYOPERATION(op) \
	op(EOverriddenPropertyOperation::None) \
	op(EOverriddenPropertyOperation::Modified) \
	op(EOverriddenPropertyOperation::Replace) \
	op(EOverriddenPropertyOperation::Add) \
	op(EOverriddenPropertyOperation::Remove) 

enum class EOverriddenPropertyOperation : uint8;
template<> struct TIsUEnumClass<EOverriddenPropertyOperation> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EOverriddenPropertyOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
