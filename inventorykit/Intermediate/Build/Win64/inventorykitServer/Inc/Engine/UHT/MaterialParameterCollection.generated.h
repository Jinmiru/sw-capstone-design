// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialParameterCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_MaterialParameterCollection_generated_h
#error "MaterialParameterCollection.generated.h already included, missing '#pragma once' in MaterialParameterCollection.h"
#endif
#define ENGINE_MaterialParameterCollection_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollectionParameterBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollectionParameterBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCollectionParameterBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollectionScalarParameter>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCollectionParameterBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollectionVectorParameter>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_83_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetVectorParameterDefaultValue); \
	DECLARE_FUNCTION(execGetScalarParameterDefaultValue); \
	DECLARE_FUNCTION(execGetVectorParameterNames); \
	DECLARE_FUNCTION(execGetScalarParameterNames);


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollection(); \
	friend struct Z_Construct_UClass_UMaterialParameterCollection_Statics; \
public: \
	DECLARE_CLASS(UMaterialParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialParameterCollection)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialParameterCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialParameterCollection(UMaterialParameterCollection&&); \
	UMaterialParameterCollection(const UMaterialParameterCollection&); \
public: \
	ENGINE_API virtual ~UMaterialParameterCollection();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_80_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_83_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_83_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialParameterCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
