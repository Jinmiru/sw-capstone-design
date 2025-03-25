// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/States/WidgetStateSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_WidgetStateSettings_generated_h
#error "WidgetStateSettings.generated.h already included, missing '#pragma once' in WidgetStateSettings.h"
#endif
#define UMG_WidgetStateSettings_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetStateSettings(); \
	friend struct Z_Construct_UClass_UWidgetStateSettings_Statics; \
public: \
	DECLARE_CLASS(UWidgetStateSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetStateSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetStateSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetStateSettings(UWidgetStateSettings&&); \
	UWidgetStateSettings(const UWidgetStateSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetStateSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetStateSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetStateSettings) \
	UMG_API virtual ~UWidgetStateSettings();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_25_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetStateSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
