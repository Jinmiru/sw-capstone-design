// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/CookedMetaData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_CookedMetaData_generated_h
#error "CookedMetaData.generated.h already included, missing '#pragma once' in CookedMetaData.h"
#endif
#define COREUOBJECT_CookedMetaData_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FObjectCookedMetaDataStore>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FFieldCookedMetaDataStore>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics; \
	COREUOBJECT_API static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FStructCookedMetaDataStore>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnumCookedMetaData(); \
	friend struct Z_Construct_UClass_UEnumCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UEnumCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/CoreUObject"), COREUOBJECT_API) \
	DECLARE_SERIALIZER(UEnumCookedMetaData) \
	DECLARE_WITHIN(UEnum)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UEnumCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnumCookedMetaData(UEnumCookedMetaData&&); \
	UEnumCookedMetaData(const UEnumCookedMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UEnumCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnumCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnumCookedMetaData) \
	COREUOBJECT_API virtual ~UEnumCookedMetaData();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_70_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_74_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UEnumCookedMetaData>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructCookedMetaData(); \
	friend struct Z_Construct_UClass_UStructCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UStructCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/CoreUObject"), COREUOBJECT_API) \
	DECLARE_SERIALIZER(UStructCookedMetaData) \
	DECLARE_WITHIN(UScriptStruct)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UStructCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStructCookedMetaData(UStructCookedMetaData&&); \
	UStructCookedMetaData(const UStructCookedMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UStructCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructCookedMetaData) \
	COREUOBJECT_API virtual ~UStructCookedMetaData();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_90_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_94_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UStructCookedMetaData>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassCookedMetaData(); \
	friend struct Z_Construct_UClass_UClassCookedMetaData_Statics; \
public: \
	DECLARE_CLASS(UClassCookedMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/CoreUObject"), COREUOBJECT_API) \
	DECLARE_SERIALIZER(UClassCookedMetaData) \
	DECLARE_WITHIN(UClass)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COREUOBJECT_API UClassCookedMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClassCookedMetaData(UClassCookedMetaData&&); \
	UClassCookedMetaData(const UClassCookedMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UClassCookedMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassCookedMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassCookedMetaData) \
	COREUOBJECT_API virtual ~UClassCookedMetaData();


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_110_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_114_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UClassCookedMetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
