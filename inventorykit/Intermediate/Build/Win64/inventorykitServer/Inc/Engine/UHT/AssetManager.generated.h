// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/AssetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetManager_generated_h
#error "AssetManager.generated.h already included, missing '#pragma once' in AssetManager.h"
#endif
#define ENGINE_AssetManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetManager(); \
	friend struct Z_Construct_UClass_UAssetManager_Statics; \
public: \
	DECLARE_CLASS(UAssetManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAssetManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssetManager(UAssetManager&&); \
	UAssetManager(const UAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetManager) \
	ENGINE_API virtual ~UAssetManager();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_41_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
