// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HLOD/HLODProxyDesc.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODProxyDesc_generated_h
#error "HLODProxyDesc.generated.h already included, missing '#pragma once' in HLODProxyDesc.h"
#endif
#define ENGINE_HLODProxyDesc_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHLODISMComponentDesc_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHLODISMComponentDesc>();

#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHLODProxyDesc(); \
	friend struct Z_Construct_UClass_UHLODProxyDesc_Statics; \
public: \
	DECLARE_CLASS(UHLODProxyDesc, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHLODProxyDesc)


#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHLODProxyDesc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHLODProxyDesc(UHLODProxyDesc&&); \
	UHLODProxyDesc(const UHLODProxyDesc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHLODProxyDesc); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODProxyDesc); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODProxyDesc) \
	NO_API virtual ~UHLODProxyDesc();


#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_42_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHLODProxyDesc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyDesc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
