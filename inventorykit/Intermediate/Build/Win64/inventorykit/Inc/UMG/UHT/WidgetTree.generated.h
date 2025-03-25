// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_WidgetTree_generated_h
#error "WidgetTree.generated.h already included, missing '#pragma once' in WidgetTree.h"
#endif
#define UMG_WidgetTree_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetTree(); \
	friend struct Z_Construct_UClass_UWidgetTree_Statics; \
public: \
	DECLARE_CLASS(UWidgetTree, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetTree) \
	virtual UObject* _getUObject() const override { return const_cast<UWidgetTree*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetTree(UWidgetTree&&); \
	UWidgetTree(const UWidgetTree&); \
public: \
	UMG_API virtual ~UWidgetTree();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_21_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
