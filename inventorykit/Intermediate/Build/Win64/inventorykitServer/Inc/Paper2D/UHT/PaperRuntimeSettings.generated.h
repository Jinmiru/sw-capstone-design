// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperRuntimeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperRuntimeSettings_generated_h
#error "PaperRuntimeSettings.generated.h already included, missing '#pragma once' in PaperRuntimeSettings.h"
#endif
#define PAPER2D_PaperRuntimeSettings_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPaperRuntimeSettings(); \
	friend struct Z_Construct_UClass_UPaperRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UPaperRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperRuntimeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperRuntimeSettings(UPaperRuntimeSettings&&); \
	UPaperRuntimeSettings(const UPaperRuntimeSettings&); \
public: \
	NO_API virtual ~UPaperRuntimeSettings();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_10_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_13_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
