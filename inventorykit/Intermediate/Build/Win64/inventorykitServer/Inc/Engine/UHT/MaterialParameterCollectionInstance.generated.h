// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialParameterCollectionInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialParameterCollectionInstance_generated_h
#error "MaterialParameterCollectionInstance.generated.h already included, missing '#pragma once' in MaterialParameterCollectionInstance.h"
#endif
#define ENGINE_MaterialParameterCollectionInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollectionInstance(); \
	friend struct Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialParameterCollectionInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialParameterCollectionInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialParameterCollectionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollectionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialParameterCollectionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollectionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialParameterCollectionInstance(UMaterialParameterCollectionInstance&&); \
	UMaterialParameterCollectionInstance(const UMaterialParameterCollectionInstance&); \
public: \
	ENGINE_API virtual ~UMaterialParameterCollectionInstance();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialParameterCollectionInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
