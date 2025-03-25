// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DemoPendingNetGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DemoPendingNetGame_generated_h
#error "DemoPendingNetGame.generated.h already included, missing '#pragma once' in DemoPendingNetGame.h"
#endif
#define ENGINE_DemoPendingNetGame_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDemoPendingNetGame(); \
	friend struct Z_Construct_UClass_UDemoPendingNetGame_Statics; \
public: \
	DECLARE_CLASS(UDemoPendingNetGame, UPendingNetGame, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDemoPendingNetGame) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoPendingNetGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoPendingNetGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemoPendingNetGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoPendingNetGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDemoPendingNetGame(UDemoPendingNetGame&&); \
	UDemoPendingNetGame(const UDemoPendingNetGame&); \
public: \
	NO_API virtual ~UDemoPendingNetGame();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDemoPendingNetGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
