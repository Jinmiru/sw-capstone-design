// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameSession.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameSession_generated_h
#error "GameSession.generated.h already included, missing '#pragma once' in GameSession.h"
#endif
#define ENGINE_GameSession_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAGameSession(); \
	friend struct Z_Construct_UClass_AGameSession_Statics; \
public: \
	DECLARE_CLASS(AGameSession, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AGameSession) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AGameSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AGameSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameSession(AGameSession&&); \
	AGameSession(const AGameSession&); \
public: \
	ENGINE_API virtual ~AGameSession();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
