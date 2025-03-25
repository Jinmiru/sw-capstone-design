// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/VariableFrameStrippingSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VariableFrameStrippingSettings_generated_h
#error "VariableFrameStrippingSettings.generated.h already included, missing '#pragma once' in VariableFrameStrippingSettings.h"
#endif
#define ENGINE_VariableFrameStrippingSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVariableFrameStrippingSettings(); \
	friend struct Z_Construct_UClass_UVariableFrameStrippingSettings_Statics; \
public: \
	DECLARE_CLASS(UVariableFrameStrippingSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVariableFrameStrippingSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVariableFrameStrippingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariableFrameStrippingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVariableFrameStrippingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariableFrameStrippingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVariableFrameStrippingSettings(UVariableFrameStrippingSettings&&); \
	UVariableFrameStrippingSettings(const UVariableFrameStrippingSettings&); \
public: \
	ENGINE_API virtual ~UVariableFrameStrippingSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVariableFrameStrippingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
