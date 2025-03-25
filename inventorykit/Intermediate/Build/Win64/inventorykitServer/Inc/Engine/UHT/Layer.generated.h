// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layers/Layer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Layer_generated_h
#error "Layer.generated.h already included, missing '#pragma once' in Layer.h"
#endif
#define ENGINE_Layer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayerActorStats_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLayerActorStats>();

#define FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_INCLASS \
private: \
	static void StaticRegisterNativesULayer(); \
	friend struct Z_Construct_UClass_ULayer_Statics; \
public: \
	DECLARE_CLASS(ULayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULayer)


#define FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULayer(ULayer&&); \
	ULayer(const ULayer&); \
public: \
	ENGINE_API virtual ~ULayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
