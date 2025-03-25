// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/SpectatorPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SpectatorPawn_generated_h
#error "SpectatorPawn.generated.h already included, missing '#pragma once' in SpectatorPawn.h"
#endif
#define ENGINE_SpectatorPawn_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASpectatorPawn(); \
	friend struct Z_Construct_UClass_ASpectatorPawn_Statics; \
public: \
	DECLARE_CLASS(ASpectatorPawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASpectatorPawn)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASpectatorPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpectatorPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASpectatorPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpectatorPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpectatorPawn(ASpectatorPawn&&); \
	ASpectatorPawn(const ASpectatorPawn&); \
public: \
	ENGINE_API virtual ~ASpectatorPawn();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASpectatorPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
