// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Columns/TypedElementRevisionControlColumns.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TYPEDELEMENTFRAMEWORK_TypedElementRevisionControlColumns_generated_h
#error "TypedElementRevisionControlColumns.generated.h already included, missing '#pragma once' in TypedElementRevisionControlColumns.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementRevisionControlColumns_generated_h

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCInChangelistTag_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageTag Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCInChangelistTag>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCStagedTag_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageTag Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCStagedTag>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCLockedTag_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageTag Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCLockedTag>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCExternallyEditedTag_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageTag Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCExternallyEditedTag>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCNotCurrentTag_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageTag Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCNotCurrentTag>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCStatusColumn_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageColumn Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCStatusColumn>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCRevisionId_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCRevisionId>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCRevisionIdColumn_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageColumn Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCRevisionIdColumn>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCExternalRevisionIdColumn_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageColumn Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCExternalRevisionIdColumn>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCUserInfo_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCUserInfo>();

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSCCExternallyLockedColumn_Statics; \
	TYPEDELEMENTFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FTypedElementDataStorageColumn Super;


template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<struct FSCCExternallyLockedColumn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementRevisionControlColumns_h


#define FOREACH_ENUM_ESCCMODIFICATION(op) \
	op(ESCCModification::Modified) \
	op(ESCCModification::Added) \
	op(ESCCModification::Removed) \
	op(ESCCModification::Conflicted) 

enum class ESCCModification;
template<> struct TIsUEnumClass<ESCCModification> { enum { Value = true }; };
template<> TYPEDELEMENTFRAMEWORK_API UEnum* StaticEnum<ESCCModification>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
