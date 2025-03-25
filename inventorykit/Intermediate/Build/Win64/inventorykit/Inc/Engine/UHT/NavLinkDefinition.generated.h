// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavLinkDefinition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavLinkDefinition_generated_h
#error "NavLinkDefinition.generated.h already included, missing '#pragma once' in NavLinkDefinition.h"
#endif
#define ENGINE_NavLinkDefinition_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationLinkBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavigationLinkBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationLink_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNavigationLinkBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavigationLink>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_255_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FNavigationLinkBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavigationSegmentLink>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_309_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkDefinition(); \
	friend struct Z_Construct_UClass_UNavLinkDefinition_Statics; \
public: \
	DECLARE_CLASS(UNavLinkDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavLinkDefinition) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_309_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavLinkDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavLinkDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavLinkDefinition(UNavLinkDefinition&&); \
	UNavLinkDefinition(const UNavLinkDefinition&); \
public: \
	ENGINE_API virtual ~UNavLinkDefinition();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_306_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_309_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_309_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_309_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavLinkDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h


#define FOREACH_ENUM_ENAVLINKDIRECTION(op) \
	op(ENavLinkDirection::BothWays) \
	op(ENavLinkDirection::LeftToRight) \
	op(ENavLinkDirection::RightToLeft) 

namespace ENavLinkDirection { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENavLinkDirection::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
