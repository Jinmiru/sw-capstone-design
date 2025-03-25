// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperGroupedSpriteComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
struct FLinearColor;
#ifdef PAPER2D_PaperGroupedSpriteComponent_generated_h
#error "PaperGroupedSpriteComponent.generated.h already included, missing '#pragma once' in PaperGroupedSpriteComponent.h"
#endif
#define PAPER2D_PaperGroupedSpriteComponent_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpriteInstanceData_Statics; \
	PAPER2D_API static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FSpriteInstanceData>();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_58_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSortInstancesAlongAxis); \
	DECLARE_FUNCTION(execGetInstanceCount); \
	DECLARE_FUNCTION(execClearInstances); \
	DECLARE_FUNCTION(execRemoveInstance); \
	DECLARE_FUNCTION(execUpdateInstanceColor); \
	DECLARE_FUNCTION(execUpdateInstanceTransform); \
	DECLARE_FUNCTION(execGetInstanceTransform); \
	DECLARE_FUNCTION(execAddInstance);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUPaperGroupedSpriteComponent(); \
	friend struct Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperGroupedSpriteComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperGroupedSpriteComponent)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperGroupedSpriteComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperGroupedSpriteComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperGroupedSpriteComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperGroupedSpriteComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperGroupedSpriteComponent(UPaperGroupedSpriteComponent&&); \
	UPaperGroupedSpriteComponent(const UPaperGroupedSpriteComponent&); \
public: \
	NO_API virtual ~UPaperGroupedSpriteComponent();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_55_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_58_RPC_WRAPPERS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_58_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperGroupedSpriteComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
