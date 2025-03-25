// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveFoliageComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_InteractiveFoliageComponent_generated_h
#error "InteractiveFoliageComponent.generated.h already included, missing '#pragma once' in InteractiveFoliageComponent.h"
#endif
#define FOLIAGE_InteractiveFoliageComponent_generated_h

#define FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveFoliageComponent(); \
	friend struct Z_Construct_UClass_UInteractiveFoliageComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractiveFoliageComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveFoliageComponent)


#define FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveFoliageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveFoliageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveFoliageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractiveFoliageComponent(UInteractiveFoliageComponent&&); \
	UInteractiveFoliageComponent(const UInteractiveFoliageComponent&); \
public: \
	NO_API virtual ~UInteractiveFoliageComponent();


#define FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UInteractiveFoliageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
