// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMeter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FMeterChannelInfo;
#ifdef AUDIOWIDGETS_AudioMeter_generated_h
#error "AudioMeter.generated.h already included, missing '#pragma once' in AudioMeter.h"
#endif
#define AUDIOWIDGETS_AudioMeter_generated_h

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_45_DELEGATE \
static TArray<FMeterChannelInfo> FGetMeterChannelInfo_DelegateWrapper(const FScriptDelegate& GetMeterChannelInfo);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_41_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMeterScaleLabelColor); \
	DECLARE_FUNCTION(execSetMeterScaleColor); \
	DECLARE_FUNCTION(execSetMeterClippingColor); \
	DECLARE_FUNCTION(execSetMeterPeakColor); \
	DECLARE_FUNCTION(execSetMeterValueColor); \
	DECLARE_FUNCTION(execSetMeterBackgroundColor); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execSetMeterChannelInfo); \
	DECLARE_FUNCTION(execGetMeterChannelInfo);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMeter(); \
	friend struct Z_Construct_UClass_UAudioMeter_Statics; \
public: \
	DECLARE_CLASS(UAudioMeter, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioMeter)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMeter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMeter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMeter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioMeter(UAudioMeter&&); \
	UAudioMeter(const UAudioMeter&); \
public: \
	NO_API virtual ~UAudioMeter();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_38_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_41_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_41_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioMeter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
