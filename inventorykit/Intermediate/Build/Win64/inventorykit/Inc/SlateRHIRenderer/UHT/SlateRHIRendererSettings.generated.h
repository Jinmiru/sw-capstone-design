// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateRHIRendererSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlatePostRT : uint8;
struct FSlatePostSettings;
#ifdef SLATERHIRENDERER_SlateRHIRendererSettings_generated_h
#error "SlateRHIRendererSettings.generated.h already included, missing '#pragma once' in SlateRHIRendererSettings.h"
#endif
#define SLATERHIRENDERER_SlateRHIRendererSettings_generated_h

#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlatePostSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SLATERHIRENDERER_API UScriptStruct* StaticStruct<struct FSlatePostSettings>();

#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSlatePostSetting); \
	DECLARE_FUNCTION(execGetMutableSlatePostSetting);


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateRHIRendererSettings(); \
	friend struct Z_Construct_UClass_USlateRHIRendererSettings_Statics; \
public: \
	DECLARE_CLASS(USlateRHIRendererSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlateRHIRenderer"), NO_API) \
	DECLARE_SERIALIZER(USlateRHIRendererSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USlateRHIRendererSettings(USlateRHIRendererSettings&&); \
	USlateRHIRendererSettings(const USlateRHIRendererSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateRHIRendererSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateRHIRendererSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlateRHIRendererSettings)


#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_69_PROLOG
#define FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLATERHIRENDERER_API UClass* StaticClass<class USlateRHIRendererSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateRHIRenderer_Public_SlateRHIRendererSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
