// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialBillboardComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UMaterialInterface;
struct FMaterialSpriteElement;
#ifdef ENGINE_MaterialBillboardComponent_generated_h
#error "MaterialBillboardComponent.generated.h already included, missing '#pragma once' in MaterialBillboardComponent.h"
#endif
#define ENGINE_MaterialBillboardComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialSpriteElement>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAddElement); \
	DECLARE_FUNCTION(execSetElements);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialBillboardComponent(); \
	friend struct Z_Construct_UClass_UMaterialBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UMaterialBillboardComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialBillboardComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialBillboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialBillboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialBillboardComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialBillboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialBillboardComponent(UMaterialBillboardComponent&&); \
	UMaterialBillboardComponent(const UMaterialBillboardComponent&); \
public: \
	ENGINE_API virtual ~UMaterialBillboardComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_60_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialBillboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
