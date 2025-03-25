// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ViewportStatsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_ViewportStatsSubsystem_generated_h
#error "ViewportStatsSubsystem.generated.h already included, missing '#pragma once' in ViewportStatsSubsystem.h"
#endif
#define ENGINE_ViewportStatsSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_17_DELEGATE \
ENGINE_API bool FViewportDisplayCallback_DelegateWrapper(const FScriptDelegate& ViewportDisplayCallback, FText& OutText, FLinearColor& OutColor);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveDisplayDelegate); \
	DECLARE_FUNCTION(execAddDisplayDelegate); \
	DECLARE_FUNCTION(execAddTimedDisplay);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportStatsSubsystem(); \
	friend struct Z_Construct_UClass_UViewportStatsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UViewportStatsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UViewportStatsSubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UViewportStatsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewportStatsSubsystem(UViewportStatsSubsystem&&); \
	UViewportStatsSubsystem(const UViewportStatsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UViewportStatsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportStatsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportStatsSubsystem) \
	ENGINE_API virtual ~UViewportStatsSubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_73_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UViewportStatsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
