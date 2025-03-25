// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/WidgetBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef UMG_WidgetBinding_generated_h
#error "WidgetBinding.generated.h already included, missing '#pragma once' in WidgetBinding.h"
#endif
#define UMG_WidgetBinding_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBinding(); \
	friend struct Z_Construct_UClass_UWidgetBinding_Statics; \
public: \
	DECLARE_CLASS(UWidgetBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetBinding(UWidgetBinding&&); \
	UWidgetBinding(const UWidgetBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetBinding) \
	UMG_API virtual ~UWidgetBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_13_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
