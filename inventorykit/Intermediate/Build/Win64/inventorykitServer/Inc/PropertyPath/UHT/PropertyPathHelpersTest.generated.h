// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/PropertyPathHelpersTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPropertyPathTestStruct;
#ifdef PROPERTYPATH_PropertyPathHelpersTest_generated_h
#error "PropertyPathHelpersTest.generated.h already included, missing '#pragma once' in PropertyPathHelpersTest.h"
#endif
#define PROPERTYPATH_PropertyPathHelpersTest_generated_h

#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct_Statics; \
	PROPERTYPATH_API static class UScriptStruct* StaticStruct();


template<> PROPERTYPATH_API UScriptStruct* StaticStruct<struct FPropertyPathTestBaseStruct>();

#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics; \
	PROPERTYPATH_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyPathTestBaseStruct Super;


template<> PROPERTYPATH_API UScriptStruct* StaticStruct<struct FPropertyPathTestInnerStruct>();

#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics; \
	PROPERTYPATH_API static class UScriptStruct* StaticStruct(); \
	typedef FPropertyPathTestBaseStruct Super;


template<> PROPERTYPATH_API UScriptStruct* StaticStruct<struct FPropertyPathTestStruct>();

#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStructConstRef); \
	DECLARE_FUNCTION(execSetStructConstRef); \
	DECLARE_FUNCTION(execGetStructRef); \
	DECLARE_FUNCTION(execSetStructRef); \
	DECLARE_FUNCTION(execGetStruct); \
	DECLARE_FUNCTION(execSetStruct); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execSetFloat);


#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_ACCESSORS \
static void GetFloat_WrapperImpl(const void* Object, void* OutValue); \
static void SetFloat_WrapperImpl(void* Object, const void* InValue); \
static void GetStruct_WrapperImpl(const void* Object, void* OutValue); \
static void SetStruct_WrapperImpl(void* Object, const void* InValue); \
static void GetStructRef_WrapperImpl(const void* Object, void* OutValue); \
static void SetStructRef_WrapperImpl(void* Object, const void* InValue); \
static void GetStructConstRef_WrapperImpl(const void* Object, void* OutValue); \
static void SetStructConstRef_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyPathTestObject(); \
	friend struct Z_Construct_UClass_UPropertyPathTestObject_Statics; \
public: \
	DECLARE_CLASS(UPropertyPathTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyPath"), NO_API) \
	DECLARE_SERIALIZER(UPropertyPathTestObject)


#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyPathTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPropertyPathTestObject(UPropertyPathTestObject&&); \
	UPropertyPathTestObject(const UPropertyPathTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyPathTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyPathTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyPathTestObject)


#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_156_PROLOG
#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_ACCESSORS \
	FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROPERTYPATH_API UClass* StaticClass<class UPropertyPathTestObject>();

#define FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_319_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics; \
	PROPERTYPATH_API static class UScriptStruct* StaticStruct();


template<> PROPERTYPATH_API UScriptStruct* StaticStruct<struct FPropertyPathTestBed>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h


#define FOREACH_ENUM_EPROPERTYPATHTESTENUM(op) \
	op(One) \
	op(Two) \
	op(Three) \
	op(Four) 

enum EPropertyPathTestEnum : int;
template<> PROPERTYPATH_API UEnum* StaticEnum<EPropertyPathTestEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
