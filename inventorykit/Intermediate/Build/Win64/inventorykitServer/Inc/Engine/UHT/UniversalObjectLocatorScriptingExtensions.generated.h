// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UniversalObjectLocators/UniversalObjectLocatorScriptingExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FUniversalObjectLocator;
#ifdef ENGINE_UniversalObjectLocatorScriptingExtensions_generated_h
#error "UniversalObjectLocatorScriptingExtensions.generated.h already included, missing '#pragma once' in UniversalObjectLocatorScriptingExtensions.h"
#endif
#define ENGINE_UniversalObjectLocatorScriptingExtensions_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSyncUnload); \
	DECLARE_FUNCTION(execSyncLoad); \
	DECLARE_FUNCTION(execSyncFind); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execUniversalObjectLocatorFromString); \
	DECLARE_FUNCTION(execMakeUniversalObjectLocator);


#define FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniversalObjectLocatorScriptingExtensions(); \
	friend struct Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics; \
public: \
	DECLARE_CLASS(UUniversalObjectLocatorScriptingExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UUniversalObjectLocatorScriptingExtensions)


#define FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UUniversalObjectLocatorScriptingExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUniversalObjectLocatorScriptingExtensions(UUniversalObjectLocatorScriptingExtensions&&); \
	UUniversalObjectLocatorScriptingExtensions(const UUniversalObjectLocatorScriptingExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UUniversalObjectLocatorScriptingExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniversalObjectLocatorScriptingExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniversalObjectLocatorScriptingExtensions) \
	ENGINE_API virtual ~UUniversalObjectLocatorScriptingExtensions();


#define FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UUniversalObjectLocatorScriptingExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
