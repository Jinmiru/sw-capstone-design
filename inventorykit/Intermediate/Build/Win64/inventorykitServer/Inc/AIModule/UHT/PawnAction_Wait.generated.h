// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/PawnAction_Wait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_PawnAction_Wait_generated_h
#error "PawnAction_Wait.generated.h already included, missing '#pragma once' in PawnAction_Wait.h"
#endif
#define AIMODULE_PawnAction_Wait_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_PawnAction_Wait(); \
	friend struct Z_Construct_UClass_UDEPRECATED_PawnAction_Wait_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_PawnAction_Wait, UDEPRECATED_PawnAction, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UDEPRECATED_PawnAction_Wait)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UDEPRECATED_PawnAction_Wait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_PawnAction_Wait) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UDEPRECATED_PawnAction_Wait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_PawnAction_Wait); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_PawnAction_Wait(UDEPRECATED_PawnAction_Wait&&); \
	UDEPRECATED_PawnAction_Wait(const UDEPRECATED_PawnAction_Wait&); \
public: \
	AIMODULE_API virtual ~UDEPRECATED_PawnAction_Wait();


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UDEPRECATED_PawnAction_Wait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
