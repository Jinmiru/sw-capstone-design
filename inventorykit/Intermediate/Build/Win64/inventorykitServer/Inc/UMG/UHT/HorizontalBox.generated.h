// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HorizontalBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizontalBoxSlot;
class UWidget;
#ifdef UMG_HorizontalBox_generated_h
#error "HorizontalBox.generated.h already included, missing '#pragma once' in HorizontalBox.h"
#endif
#define UMG_HorizontalBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAddChildToHorizontalBox);


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUHorizontalBox(); \
	friend struct Z_Construct_UClass_UHorizontalBox_Statics; \
public: \
	DECLARE_CLASS(UHorizontalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UHorizontalBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UHorizontalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UHorizontalBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHorizontalBox(UHorizontalBox&&); \
	UHorizontalBox(const UHorizontalBox&); \
public: \
	UMG_API virtual ~UHorizontalBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UHorizontalBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
