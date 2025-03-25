// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSharingTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEnum;
#ifdef ANIMATIONSHARING_AnimationSharingTypes_generated_h
#error "AnimationSharingTypes.generated.h already included, missing '#pragma once' in AnimationSharingTypes.h"
#endif
#define ANIMATIONSHARING_AnimationSharingTypes_generated_h

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationSetup_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FAnimationSetup>();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStateEntry_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FAnimationStateEntry>();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAnimationStateEnum); \
	DECLARE_FUNCTION(execProcessActorState);


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSharingStateProcessor(); \
	friend struct Z_Construct_UClass_UAnimationSharingStateProcessor_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingStateProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingStateProcessor)


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingStateProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationSharingStateProcessor(UAnimationSharingStateProcessor&&); \
	UAnimationSharingStateProcessor(const UAnimationSharingStateProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingStateProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingStateProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingStateProcessor) \
	NO_API virtual ~UAnimationSharingStateProcessor();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_93_PROLOG
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONSHARING_API UClass* StaticClass<class UAnimationSharingStateProcessor>();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FPerSkeletonAnimationSharingSetup>();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FAnimationSharingScalability>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
