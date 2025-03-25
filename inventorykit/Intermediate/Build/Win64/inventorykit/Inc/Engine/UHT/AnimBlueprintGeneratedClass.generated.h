// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBlueprintGeneratedClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimBlueprintGeneratedClass_generated_h
#error "AnimBlueprintGeneratedClass.generated.h already included, missing '#pragma once' in AnimBlueprintGeneratedClass.h"
#endif
#define ENGINE_AnimBlueprintGeneratedClass_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateMachineStateDebugData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStateMachineStateDebugData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateMachineDebugData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStateMachineDebugData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationFrameSnapshot>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimBlueprintDebugData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_330_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimBlueprintMutableData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimBlueprintMutableData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_338_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimBlueprintConstantData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimBlueprintConstantData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_357_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBlueprintGeneratedStruct(); \
	friend struct Z_Construct_UClass_UAnimBlueprintGeneratedStruct_Statics; \
public: \
	DECLARE_CLASS(UAnimBlueprintGeneratedStruct, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimBlueprintGeneratedStruct)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_357_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBlueprintGeneratedStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimBlueprintGeneratedStruct(UAnimBlueprintGeneratedStruct&&); \
	UAnimBlueprintGeneratedStruct(const UAnimBlueprintGeneratedStruct&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBlueprintGeneratedStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprintGeneratedStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprintGeneratedStruct) \
	ENGINE_API virtual ~UAnimBlueprintGeneratedStruct();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_354_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_357_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_357_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_357_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimBlueprintGeneratedStruct>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_366_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprintGeneratedClass, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_366_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBlueprintGeneratedClass(); \
	friend struct Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics; \
public: \
	DECLARE_CLASS(UAnimBlueprintGeneratedClass, UBlueprintGeneratedClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimBlueprintGeneratedClass) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_366_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimBlueprintGeneratedClass*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_366_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprintGeneratedClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBlueprintGeneratedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprintGeneratedClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimBlueprintGeneratedClass(UAnimBlueprintGeneratedClass&&); \
	UAnimBlueprintGeneratedClass(const UAnimBlueprintGeneratedClass&); \
public: \
	ENGINE_API virtual ~UAnimBlueprintGeneratedClass();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_363_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_366_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_366_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h_366_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimBlueprintGeneratedClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprintGeneratedClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
