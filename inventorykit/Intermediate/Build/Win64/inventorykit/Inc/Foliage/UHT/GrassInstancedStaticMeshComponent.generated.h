// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GrassInstancedStaticMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_GrassInstancedStaticMeshComponent_generated_h
#error "GrassInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in GrassInstancedStaticMeshComponent.h"
#endif
#define FOLIAGE_GrassInstancedStaticMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGrassInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UGrassInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(UGrassInstancedStaticMeshComponent)


#define FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UGrassInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrassInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UGrassInstancedStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrassInstancedStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGrassInstancedStaticMeshComponent(UGrassInstancedStaticMeshComponent&&); \
	UGrassInstancedStaticMeshComponent(const UGrassInstancedStaticMeshComponent&); \
public: \
	FOLIAGE_API virtual ~UGrassInstancedStaticMeshComponent();


#define FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_9_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UGrassInstancedStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
