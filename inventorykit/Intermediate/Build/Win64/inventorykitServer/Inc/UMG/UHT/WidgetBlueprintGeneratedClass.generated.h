// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetBlueprintGeneratedClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_WidgetBlueprintGeneratedClass_generated_h
#error "WidgetBlueprintGeneratedClass.generated.h already included, missing '#pragma once' in WidgetBlueprintGeneratedClass.h"
#endif
#define UMG_WidgetBlueprintGeneratedClass_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FDelegateRuntimeBinding>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_79_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprintGeneratedClass, UMG_API)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintGeneratedClass(); \
	friend struct Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprintGeneratedClass, UBlueprintGeneratedClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintGeneratedClass) \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_79_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetBlueprintGeneratedClass(UWidgetBlueprintGeneratedClass&&); \
	UWidgetBlueprintGeneratedClass(const UWidgetBlueprintGeneratedClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetBlueprintGeneratedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintGeneratedClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetBlueprintGeneratedClass) \
	UMG_API virtual ~UWidgetBlueprintGeneratedClass();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_76_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetBlueprintGeneratedClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h


#define FOREACH_ENUM_EBINDINGKIND(op) \
	op(EBindingKind::Function) \
	op(EBindingKind::Property) 

enum class EBindingKind : uint8;
template<> struct TIsUEnumClass<EBindingKind> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EBindingKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
