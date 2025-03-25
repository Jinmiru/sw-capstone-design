// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlueprintAsyncActionBase_generated_h
#error "BlueprintAsyncActionBase.generated.h already included, missing '#pragma once' in BlueprintAsyncActionBase.h"
#endif
#define ENGINE_BlueprintAsyncActionBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActivate);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintAsyncActionBase(); \
	friend struct Z_Construct_UClass_UBlueprintAsyncActionBase_Statics; \
public: \
	DECLARE_CLASS(UBlueprintAsyncActionBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprintAsyncActionBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintAsyncActionBase(UBlueprintAsyncActionBase&&); \
	UBlueprintAsyncActionBase(const UBlueprintAsyncActionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintAsyncActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintAsyncActionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintAsyncActionBase) \
	ENGINE_API virtual ~UBlueprintAsyncActionBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintAsyncActionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintAsyncActionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
