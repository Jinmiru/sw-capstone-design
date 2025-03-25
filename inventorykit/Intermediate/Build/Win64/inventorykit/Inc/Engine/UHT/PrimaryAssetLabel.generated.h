// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PrimaryAssetLabel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PrimaryAssetLabel_generated_h
#error "PrimaryAssetLabel.generated.h already included, missing '#pragma once' in PrimaryAssetLabel.h"
#endif
#define ENGINE_PrimaryAssetLabel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimaryAssetLabel(); \
	friend struct Z_Construct_UClass_UPrimaryAssetLabel_Statics; \
public: \
	DECLARE_CLASS(UPrimaryAssetLabel, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPrimaryAssetLabel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPrimaryAssetLabel(UPrimaryAssetLabel&&); \
	UPrimaryAssetLabel(const UPrimaryAssetLabel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryAssetLabel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryAssetLabel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPrimaryAssetLabel) \
	ENGINE_API virtual ~UPrimaryAssetLabel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPrimaryAssetLabel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
