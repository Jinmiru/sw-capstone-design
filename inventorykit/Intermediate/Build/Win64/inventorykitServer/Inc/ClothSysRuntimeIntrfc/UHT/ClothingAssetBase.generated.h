// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingAssetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingAssetBase_generated_h
#error "ClothingAssetBase.generated.h already included, missing '#pragma once' in ClothingAssetBase.h"
#endif
#define CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingAssetBase_generated_h

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingAssetBase(); \
	friend struct Z_Construct_UClass_UClothingAssetBase_Statics; \
public: \
	DECLARE_CLASS(UClothingAssetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), CLOTHINGSYSTEMRUNTIMEINTERFACE_API) \
	DECLARE_SERIALIZER(UClothingAssetBase)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClothingAssetBase(UClothingAssetBase&&); \
	UClothingAssetBase(const UClothingAssetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMEINTERFACE_API, UClothingAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingAssetBase) \
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API virtual ~UClothingAssetBase();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_15_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<class UClothingAssetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingAssetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
