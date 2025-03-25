// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Columns/TypedElementAlertColumns.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPEDELEMENTFRAMEWORK_TypedElementAlertColumns_generated_h
#error "TypedElementAlertColumns.generated.h already included, missing '#pragma once' in TypedElementAlertColumns.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementAlertColumns_generated_h

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementAlertColumn_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageColumn Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FTypedElementAlertColumn>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementChildAlertColumn_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageColumn Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FTypedElementChildAlertColumn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementAlertColumns_h


#define FOREACH_ENUM_FTYPEDELEMENTALERTCOLUMNTYPE(op) \
	op(FTypedElementAlertColumnType::Error) \
	op(FTypedElementAlertColumnType::Warning) 

enum class FTypedElementAlertColumnType : uint8;
template<> struct TIsUEnumClass<FTypedElementAlertColumnType> { enum { Value = true }; };
template<> TYPEDELEMENTFRAMEWORK_API UEnum* StaticEnum<FTypedElementAlertColumnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
