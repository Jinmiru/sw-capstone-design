// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/PawnAction_Move.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_PawnAction_Move_generated_h
#error "PawnAction_Move.generated.h already included, missing '#pragma once' in PawnAction_Move.h"
#endif
#define AIMODULE_PawnAction_Move_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_PawnAction_Move(); \
	friend struct Z_Construct_UClass_UDEPRECATED_PawnAction_Move_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_PawnAction_Move, UDEPRECATED_PawnAction, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UDEPRECATED_PawnAction_Move)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UDEPRECATED_PawnAction_Move(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_PawnAction_Move) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UDEPRECATED_PawnAction_Move); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_PawnAction_Move); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_PawnAction_Move(UDEPRECATED_PawnAction_Move&&); \
	UDEPRECATED_PawnAction_Move(const UDEPRECATED_PawnAction_Move&); \
public: \
	AIMODULE_API virtual ~UDEPRECATED_PawnAction_Move();


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_28_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_31_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UDEPRECATED_PawnAction_Move>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h


#define FOREACH_ENUM_EPAWNACTIONMOVEMODE(op) \
	op(EPawnActionMoveMode::UsePathfinding) \
	op(EPawnActionMoveMode::StraightLine) 

namespace EPawnActionMoveMode { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPawnActionMoveMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
