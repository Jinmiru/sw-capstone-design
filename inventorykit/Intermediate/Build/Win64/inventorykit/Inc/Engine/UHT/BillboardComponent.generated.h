// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BillboardComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef ENGINE_BillboardComponent_generated_h
#error "BillboardComponent.generated.h already included, missing '#pragma once' in BillboardComponent.h"
#endif
#define ENGINE_BillboardComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetOpacityMaskRefVal); \
	DECLARE_FUNCTION(execSetSpriteAndUV); \
	DECLARE_FUNCTION(execSetUV); \
	DECLARE_FUNCTION(execSetSprite);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBillboardComponent(); \
	friend struct Z_Construct_UClass_UBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UBillboardComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBillboardComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBillboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBillboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBillboardComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBillboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBillboardComponent(UBillboardComponent&&); \
	UBillboardComponent(const UBillboardComponent&); \
public: \
	ENGINE_API virtual ~UBillboardComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBillboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
