// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TextRenderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFont;
class UMaterialInterface;
struct FColor;
#ifdef ENGINE_TextRenderComponent_generated_h
#error "TextRenderComponent.generated.h already included, missing '#pragma once' in TextRenderComponent.h"
#endif
#define ENGINE_TextRenderComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTextWorldSize); \
	DECLARE_FUNCTION(execGetTextLocalSize); \
	DECLARE_FUNCTION(execSetWorldSize); \
	DECLARE_FUNCTION(execSetVertSpacingAdjust); \
	DECLARE_FUNCTION(execSetHorizSpacingAdjust); \
	DECLARE_FUNCTION(execSetYScale); \
	DECLARE_FUNCTION(execSetXScale); \
	DECLARE_FUNCTION(execSetTextRenderColor); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetTextMaterial); \
	DECLARE_FUNCTION(execK2_SetText); \
	DECLARE_FUNCTION(execSetText);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUTextRenderComponent(); \
	friend struct Z_Construct_UClass_UTextRenderComponent_Statics; \
public: \
	DECLARE_CLASS(UTextRenderComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextRenderComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextRenderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextRenderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextRenderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextRenderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextRenderComponent(UTextRenderComponent&&); \
	UTextRenderComponent(const UTextRenderComponent&); \
public: \
	ENGINE_API virtual ~UTextRenderComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_43_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextRenderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h


#define FOREACH_ENUM_EHORIZTEXTALIGMENT(op) \
	op(EHTA_Left) \
	op(EHTA_Center) \
	op(EHTA_Right) 

enum EHorizTextAligment : int;
template<> ENGINE_API UEnum* StaticEnum<EHorizTextAligment>();

#define FOREACH_ENUM_EVERTICALTEXTALIGMENT(op) \
	op(EVRTA_TextTop) \
	op(EVRTA_TextCenter) \
	op(EVRTA_TextBottom) \
	op(EVRTA_QuadTop) 

enum EVerticalTextAligment : int;
template<> ENGINE_API UEnum* StaticEnum<EVerticalTextAligment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
