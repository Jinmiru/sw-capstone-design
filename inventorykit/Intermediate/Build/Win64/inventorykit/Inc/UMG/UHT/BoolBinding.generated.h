// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/BoolBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_BoolBinding_generated_h
#error "BoolBinding.generated.h already included, missing '#pragma once' in BoolBinding.h"
#endif
#define UMG_BoolBinding_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoolBinding(); \
	friend struct Z_Construct_UClass_UBoolBinding_Statics; \
public: \
	DECLARE_CLASS(UBoolBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UBoolBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBoolBinding(UBoolBinding&&); \
	UBoolBinding(const UBoolBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UBoolBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoolBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoolBinding) \
	UMG_API virtual ~UBoolBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_11_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBoolBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_BoolBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
