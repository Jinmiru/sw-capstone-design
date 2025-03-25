// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/AttributeIdentifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UScriptStruct;
struct FAnimationAttributeIdentifier;
#ifdef ENGINE_AttributeIdentifier_generated_h
#error "AttributeIdentifier.generated.h already included, missing '#pragma once' in AttributeIdentifier.h"
#endif
#define ENGINE_AttributeIdentifier_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationAttributeIdentifier_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationAttributeIdentifier>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execCreateAttributeIdentifier);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAttributeIdentifierExtensions(); \
	friend struct Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationAttributeIdentifierExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimationAttributeIdentifierExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimationAttributeIdentifierExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationAttributeIdentifierExtensions(UAnimationAttributeIdentifierExtensions&&); \
	UAnimationAttributeIdentifierExtensions(const UAnimationAttributeIdentifierExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimationAttributeIdentifierExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAttributeIdentifierExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAttributeIdentifierExtensions) \
	ENGINE_API virtual ~UAnimationAttributeIdentifierExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_95_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationAttributeIdentifierExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AttributeIdentifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
