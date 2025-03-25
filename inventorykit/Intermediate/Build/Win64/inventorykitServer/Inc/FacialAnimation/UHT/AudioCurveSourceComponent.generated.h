// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCurveSourceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACIALANIMATION_AudioCurveSourceComponent_generated_h
#error "AudioCurveSourceComponent.generated.h already included, missing '#pragma once' in AudioCurveSourceComponent.h"
#endif
#define FACIALANIMATION_AudioCurveSourceComponent_generated_h

#define FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCurveSourceComponent(); \
	friend struct Z_Construct_UClass_UAudioCurveSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioCurveSourceComponent, UAudioComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FacialAnimation"), NO_API) \
	DECLARE_SERIALIZER(UAudioCurveSourceComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioCurveSourceComponent*>(this); }


#define FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioCurveSourceComponent(UAudioCurveSourceComponent&&); \
	UAudioCurveSourceComponent(const UAudioCurveSourceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCurveSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCurveSourceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioCurveSourceComponent) \
	NO_API virtual ~UAudioCurveSourceComponent();


#define FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_16_PROLOG
#define FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACIALANIMATION_API UClass* StaticClass<class UAudioCurveSourceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimation_Public_AudioCurveSourceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
