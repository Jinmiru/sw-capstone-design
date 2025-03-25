// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifyStateMachineInspectionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
struct FAnimNotifyEventReference;
#ifdef ENGINE_AnimNotifyStateMachineInspectionLibrary_generated_h
#error "AnimNotifyStateMachineInspectionLibrary.generated.h already included, missing '#pragma once' in AnimNotifyStateMachineInspectionLibrary.h"
#endif
#define ENGINE_AnimNotifyStateMachineInspectionLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTriggeredByState); \
	DECLARE_FUNCTION(execIsTriggeredByStateInStateMachine); \
	DECLARE_FUNCTION(execIsTriggeredByStateMachine);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyStateMachineInspectionLibrary(); \
	friend struct Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyStateMachineInspectionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimNotifyStateMachineInspectionLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimNotifyStateMachineInspectionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNotifyStateMachineInspectionLibrary(UAnimNotifyStateMachineInspectionLibrary&&); \
	UAnimNotifyStateMachineInspectionLibrary(const UAnimNotifyStateMachineInspectionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimNotifyStateMachineInspectionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyStateMachineInspectionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyStateMachineInspectionLibrary) \
	ENGINE_API virtual ~UAnimNotifyStateMachineInspectionLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotifyStateMachineInspectionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
