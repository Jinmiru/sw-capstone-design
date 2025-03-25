// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetNavigation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EUINavigation : uint8;
#ifdef UMG_WidgetNavigation_generated_h
#error "WidgetNavigation.generated.h already included, missing '#pragma once' in WidgetNavigation.h"
#endif
#define UMG_WidgetNavigation_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_15_DELEGATE \
UMG_API UWidget* FCustomWidgetNavigationDelegate_DelegateWrapper(const FScriptDelegate& CustomWidgetNavigationDelegate, EUINavigation Navigation);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetNavigationData_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FWidgetNavigationData>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetNavigation(); \
	friend struct Z_Construct_UClass_UWidgetNavigation_Statics; \
public: \
	DECLARE_CLASS(UWidgetNavigation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetNavigation)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetNavigation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetNavigation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetNavigation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetNavigation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetNavigation(UWidgetNavigation&&); \
	UWidgetNavigation(const UWidgetNavigation&); \
public: \
	UMG_API virtual ~UWidgetNavigation();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_49_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetNavigation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
