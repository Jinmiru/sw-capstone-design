// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/VirtualTexturePoolConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VirtualTexturePoolConfig_generated_h
#error "VirtualTexturePoolConfig.generated.h already included, missing '#pragma once' in VirtualTexturePoolConfig.h"
#endif
#define ENGINE_VirtualTexturePoolConfig_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVirtualTextureSpacePoolConfig>();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTexturePoolConfig(); \
	friend struct Z_Construct_UClass_UVirtualTexturePoolConfig_Statics; \
public: \
	DECLARE_CLASS(UVirtualTexturePoolConfig, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVirtualTexturePoolConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVirtualTexturePoolConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTexturePoolConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVirtualTexturePoolConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTexturePoolConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVirtualTexturePoolConfig(UVirtualTexturePoolConfig&&); \
	UVirtualTexturePoolConfig(const UVirtualTexturePoolConfig&); \
public: \
	ENGINE_API virtual ~UVirtualTexturePoolConfig();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_53_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_56_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVirtualTexturePoolConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
