// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ProxyLODMeshSimplificationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ProxyLODMeshSimplificationSettings_generated_h
#error "ProxyLODMeshSimplificationSettings.generated.h already included, missing '#pragma once' in ProxyLODMeshSimplificationSettings.h"
#endif
#define ENGINE_ProxyLODMeshSimplificationSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUProxyLODMeshSimplificationSettings(); \
	friend struct Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics; \
public: \
	DECLARE_CLASS(UProxyLODMeshSimplificationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UProxyLODMeshSimplificationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UProxyLODMeshSimplificationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProxyLODMeshSimplificationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UProxyLODMeshSimplificationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProxyLODMeshSimplificationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProxyLODMeshSimplificationSettings(UProxyLODMeshSimplificationSettings&&); \
	UProxyLODMeshSimplificationSettings(const UProxyLODMeshSimplificationSettings&); \
public: \
	ENGINE_API virtual ~UProxyLODMeshSimplificationSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UProxyLODMeshSimplificationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ProxyLODMeshSimplificationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
