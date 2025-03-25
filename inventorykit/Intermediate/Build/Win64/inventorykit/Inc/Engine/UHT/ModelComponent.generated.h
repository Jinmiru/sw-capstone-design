// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ModelComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ModelComponent_generated_h
#error "ModelComponent.generated.h already included, missing '#pragma once' in ModelComponent.h"
#endif
#define ENGINE_ModelComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UModelComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUModelComponent(); \
	friend struct Z_Construct_UClass_UModelComponent_Statics; \
public: \
	DECLARE_CLASS(UModelComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UModelComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UModelComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UModelComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UModelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModelComponent(UModelComponent&&); \
	UModelComponent(const UModelComponent&); \
public: \
	ENGINE_API virtual ~UModelComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UModelComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
