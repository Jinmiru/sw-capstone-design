// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/UMGSequencePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_UMGSequencePlayer_generated_h
#error "UMGSequencePlayer.generated.h already included, missing '#pragma once' in UMGSequencePlayer.h"
#endif
#define UMG_UMGSequencePlayer_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetUserTag); \
	DECLARE_FUNCTION(execGetUserTag);


#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUMGSequencePlayer(); \
	friend struct Z_Construct_UClass_UUMGSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UUMGSequencePlayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UUMGSequencePlayer)


#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUMGSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUMGSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSequencePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUMGSequencePlayer(UUMGSequencePlayer&&); \
	UUMGSequencePlayer(const UUMGSequencePlayer&); \
public: \
	UMG_API virtual ~UUMGSequencePlayer();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUMGSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
