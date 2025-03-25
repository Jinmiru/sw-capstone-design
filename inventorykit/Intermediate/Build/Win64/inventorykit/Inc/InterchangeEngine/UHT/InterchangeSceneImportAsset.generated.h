// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneImportAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEENGINE_InterchangeSceneImportAsset_generated_h
#error "InterchangeSceneImportAsset.generated.h already included, missing '#pragma once' in InterchangeSceneImportAsset.h"
#endif
#define INTERCHANGEENGINE_InterchangeSceneImportAsset_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneImportAsset(); \
	friend struct Z_Construct_UClass_UInterchangeSceneImportAsset_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSceneImportAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), INTERCHANGEENGINE_API) \
	DECLARE_SERIALIZER(UInterchangeSceneImportAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeSceneImportAsset*>(this); }


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeSceneImportAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSceneImportAsset(UInterchangeSceneImportAsset&&); \
	UInterchangeSceneImportAsset(const UInterchangeSceneImportAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeSceneImportAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneImportAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSceneImportAsset)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_17_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangeSceneImportAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeSceneImportAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
