// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RuntimeVirtualTextureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RuntimeVirtualTextureComponent_generated_h
#error "RuntimeVirtualTextureComponent.generated.h already included, missing '#pragma once' in RuntimeVirtualTextureComponent.h"
#endif
#define ENGINE_RuntimeVirtualTextureComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execInvalidate);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureComponent(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTextureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URuntimeVirtualTextureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimeVirtualTextureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeVirtualTextureComponent(URuntimeVirtualTextureComponent&&); \
	URuntimeVirtualTextureComponent(const URuntimeVirtualTextureComponent&); \
public: \
	ENGINE_API virtual ~URuntimeVirtualTextureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeVirtualTextureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
