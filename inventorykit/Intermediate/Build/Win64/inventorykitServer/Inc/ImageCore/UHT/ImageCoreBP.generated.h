// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageCoreBP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSharedImageConstRefBlueprint;
#ifdef IMAGECORE_ImageCoreBP_generated_h
#error "ImageCoreBP.generated.h already included, missing '#pragma once' in ImageCoreBP.h"
#endif
#define IMAGECORE_ImageCoreBP_generated_h

#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IMAGECORE_API UScriptStruct* StaticStruct<struct FSharedImageConstRefBlueprint>();

#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPixelValue); \
	DECLARE_FUNCTION(execGetPixelLinearColor); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSharedImageConstRefBlueprintFns(); \
	friend struct Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics; \
public: \
	DECLARE_CLASS(USharedImageConstRefBlueprintFns, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImageCore"), NO_API) \
	DECLARE_SERIALIZER(USharedImageConstRefBlueprintFns)


#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USharedImageConstRefBlueprintFns(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USharedImageConstRefBlueprintFns(USharedImageConstRefBlueprintFns&&); \
	USharedImageConstRefBlueprintFns(const USharedImageConstRefBlueprintFns&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USharedImageConstRefBlueprintFns); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USharedImageConstRefBlueprintFns); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USharedImageConstRefBlueprintFns) \
	NO_API virtual ~USharedImageConstRefBlueprintFns();


#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_25_PROLOG
#define FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGECORE_API UClass* StaticClass<class USharedImageConstRefBlueprintFns>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ImageCore_Public_ImageCoreBP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
