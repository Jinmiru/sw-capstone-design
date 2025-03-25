// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/FloatBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_FloatBinding_generated_h
#error "FloatBinding.generated.h already included, missing '#pragma once' in FloatBinding.h"
#endif
#define UMG_FloatBinding_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatBinding(); \
	friend struct Z_Construct_UClass_UFloatBinding_Statics; \
public: \
	DECLARE_CLASS(UFloatBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UFloatBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFloatBinding(UFloatBinding&&); \
	UFloatBinding(const UFloatBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UFloatBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFloatBinding) \
	UMG_API virtual ~UFloatBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_11_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UFloatBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_FloatBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
