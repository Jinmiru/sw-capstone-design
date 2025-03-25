// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LocalPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocalPlayer_generated_h
#error "LocalPlayer.generated.h already included, missing '#pragma once' in LocalPlayer.h"
#endif
#define ENGINE_LocalPlayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_INCLASS \
private: \
	static void StaticRegisterNativesULocalPlayer(); \
	friend struct Z_Construct_UClass_ULocalPlayer_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULocalPlayer) \
	DECLARE_WITHIN(UEngine)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayer) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocalPlayer(ULocalPlayer&&); \
	ULocalPlayer(const ULocalPlayer&); \
public: \
	ENGINE_API virtual ~ULocalPlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_170_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
