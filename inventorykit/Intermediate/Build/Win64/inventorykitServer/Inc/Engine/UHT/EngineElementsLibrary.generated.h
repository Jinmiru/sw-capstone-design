// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Framework/EngineElementsLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UInstancedStaticMeshComponent;
class UObject;
struct FScriptTypedElementHandle;
#ifdef ENGINE_EngineElementsLibrary_generated_h
#error "EngineElementsLibrary.generated.h already included, missing '#pragma once' in EngineElementsLibrary.h"
#endif
#define ENGINE_EngineElementsLibrary_generated_h

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execK2_AcquireEditorSMInstanceElementHandle); \
	DECLARE_FUNCTION(execK2_AcquireEditorComponentElementHandle); \
	DECLARE_FUNCTION(execK2_AcquireEditorActorElementHandle); \
	DECLARE_FUNCTION(execK2_AcquireEditorObjectElementHandle);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineElementsLibrary(); \
	friend struct Z_Construct_UClass_UEngineElementsLibrary_Statics; \
public: \
	DECLARE_CLASS(UEngineElementsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEngineElementsLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEngineElementsLibrary(UEngineElementsLibrary&&); \
	UEngineElementsLibrary(const UEngineElementsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineElementsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineElementsLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEngineElementsLibrary) \
	ENGINE_API virtual ~UEngineElementsLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngineElementsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
