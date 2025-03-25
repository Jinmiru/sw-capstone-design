// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ComboBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ComboBox_generated_h
#error "ComboBox.generated.h already included, missing '#pragma once' in ComboBox.h"
#endif
#define UMG_ComboBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUComboBox(); \
	friend struct Z_Construct_UClass_UComboBox_Statics; \
public: \
	DECLARE_CLASS(UComboBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UComboBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UComboBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UComboBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UComboBox(UComboBox&&); \
	UComboBox(const UComboBox&); \
public: \
	UMG_API virtual ~UComboBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UComboBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
