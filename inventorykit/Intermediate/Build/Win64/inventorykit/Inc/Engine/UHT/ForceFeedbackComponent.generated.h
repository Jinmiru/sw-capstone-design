// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ForceFeedbackComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UForceFeedbackComponent;
class UForceFeedbackEffect;
struct FForceFeedbackAttenuationSettings;
#ifdef ENGINE_ForceFeedbackComponent_generated_h
#error "ForceFeedbackComponent.generated.h already included, missing '#pragma once' in ForceFeedbackComponent.h"
#endif
#define ENGINE_ForceFeedbackComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_53_DELEGATE \
ENGINE_API void FOnForceFeedbackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnForceFeedbackFinished, UForceFeedbackComponent* ForceFeedbackComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetIntensityMultiplier); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetForceFeedbackEffect);


#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UForceFeedbackComponent, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForceFeedbackComponent(); \
	friend struct Z_Construct_UClass_UForceFeedbackComponent_Statics; \
public: \
	DECLARE_CLASS(UForceFeedbackComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UForceFeedbackComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UForceFeedbackComponent(UForceFeedbackComponent&&); \
	UForceFeedbackComponent(const UForceFeedbackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UForceFeedbackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackComponent) \
	ENGINE_API virtual ~UForceFeedbackComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UForceFeedbackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
