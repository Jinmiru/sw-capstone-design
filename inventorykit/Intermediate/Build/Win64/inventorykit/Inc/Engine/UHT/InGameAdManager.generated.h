// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/InGameAdManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InGameAdManager_generated_h
#error "InGameAdManager.generated.h already included, missing '#pragma once' in InGameAdManager.h"
#endif
#define ENGINE_InGameAdManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_29_DELEGATE \
ENGINE_API void FOnUserClickedBanner_DelegateWrapper(const FScriptDelegate& OnUserClickedBanner);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_35_DELEGATE \
ENGINE_API void FOnUserClosedAdvertisement_DelegateWrapper(const FScriptDelegate& OnUserClosedAdvertisement);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUInGameAdManager(); \
	friend struct Z_Construct_UClass_UInGameAdManager_Statics; \
public: \
	DECLARE_CLASS(UInGameAdManager, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInGameAdManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameAdManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameAdManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameAdManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameAdManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInGameAdManager(UInGameAdManager&&); \
	UInGameAdManager(const UInGameAdManager&); \
public: \
	NO_API virtual ~UInGameAdManager();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_38_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInGameAdManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h


#define FOREACH_ENUM_EADMANAGERDELEGATE(op) \
	op(AMD_ClickedBanner) \
	op(AMD_UserClosedAd) 

enum EAdManagerDelegate : int;
template<> ENGINE_API UEnum* StaticEnum<EAdManagerDelegate>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
