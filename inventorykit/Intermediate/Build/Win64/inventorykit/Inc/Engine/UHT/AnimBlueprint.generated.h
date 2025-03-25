// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimBlueprint_generated_h
#error "AnimBlueprint.generated.h already included, missing '#pragma once' in AnimBlueprint.h"
#endif
#define ENGINE_AnimBlueprint_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimGroupInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimGroupInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimParentNodeAssetOverride>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprint, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBlueprint(); \
	friend struct Z_Construct_UClass_UAnimBlueprint_Statics; \
public: \
	DECLARE_CLASS(UAnimBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimBlueprint) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimBlueprint*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimBlueprint(UAnimBlueprint&&); \
	UAnimBlueprint(const UAnimBlueprint&); \
public: \
	ENGINE_API virtual ~UAnimBlueprint();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_80_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h


#define FOREACH_ENUM_EPREVIEWANIMATIONBLUEPRINTAPPLICATIONMETHOD(op) \
	op(EPreviewAnimationBlueprintApplicationMethod::LinkedLayers) \
	op(EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph) 

enum class EPreviewAnimationBlueprintApplicationMethod : uint8;
template<> struct TIsUEnumClass<EPreviewAnimationBlueprintApplicationMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPreviewAnimationBlueprintApplicationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
