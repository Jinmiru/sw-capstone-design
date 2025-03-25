// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/TextBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_TextBinding_generated_h
#error "TextBinding.generated.h already included, missing '#pragma once' in TextBinding.h"
#endif
#define UMG_TextBinding_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStringValue); \
	DECLARE_FUNCTION(execGetTextValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextBinding(); \
	friend struct Z_Construct_UClass_UTextBinding_Statics; \
public: \
	DECLARE_CLASS(UTextBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UTextBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UTextBinding(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextBinding(UTextBinding&&); \
	UTextBinding(const UTextBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UTextBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTextBinding) \
	UMG_API virtual ~UTextBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_11_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTextBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_TextBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
