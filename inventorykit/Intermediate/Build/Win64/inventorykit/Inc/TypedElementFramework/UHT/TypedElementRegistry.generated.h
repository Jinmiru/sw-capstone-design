// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Framework/TypedElementRegistry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterface;
class UObject;
class UTypedElementRegistry;
struct FScriptTypedElementHandle;
#ifdef TYPEDELEMENTFRAMEWORK_TypedElementRegistry_generated_h
#error "TypedElementRegistry.generated.h already included, missing '#pragma once' in TypedElementRegistry.h"
#endif
#define TYPEDELEMENTFRAMEWORK_TypedElementRegistry_generated_h

#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetElementInterface); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypedElementRegistry(); \
	friend struct Z_Construct_UClass_UTypedElementRegistry_Statics; \
public: \
	DECLARE_CLASS(UTypedElementRegistry, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TypedElementFramework"), TYPEDELEMENTFRAMEWORK_API) \
	DECLARE_SERIALIZER(UTypedElementRegistry)


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTypedElementRegistry(UTypedElementRegistry&&); \
	UTypedElementRegistry(const UTypedElementRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTFRAMEWORK_API, UTypedElementRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTypedElementRegistry) \
	TYPEDELEMENTFRAMEWORK_API virtual ~UTypedElementRegistry();


#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_52_PROLOG
#define FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<class UTypedElementRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
