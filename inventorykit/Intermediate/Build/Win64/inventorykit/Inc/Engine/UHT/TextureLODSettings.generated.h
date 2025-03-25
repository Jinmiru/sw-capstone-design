// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureLODSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureLODSettings_generated_h
#error "TextureLODSettings.generated.h already included, missing '#pragma once' in TextureLODSettings.h"
#endif
#define ENGINE_TextureLODSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureLODGroup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureLODGroup>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_157_INCLASS \
private: \
	static void StaticRegisterNativesUTextureLODSettings(); \
	friend struct Z_Construct_UClass_UTextureLODSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureLODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureLODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureLODSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureLODSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureLODSettings(UTextureLODSettings&&); \
	UTextureLODSettings(const UTextureLODSettings&); \
public: \
	ENGINE_API virtual ~UTextureLODSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_154_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_157_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureLODSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
