// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/HLODProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODProxy_generated_h
#error "HLODProxy.generated.h already included, missing '#pragma once' in HLODProxy.h"
#endif
#define ENGINE_HLODProxy_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHLODProxy(); \
	friend struct Z_Construct_UClass_UHLODProxy_Statics; \
public: \
	DECLARE_CLASS(UHLODProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UHLODProxy)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHLODProxy(UHLODProxy&&); \
	UHLODProxy(const UHLODProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODProxy) \
	ENGINE_API virtual ~UHLODProxy();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHLODProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
