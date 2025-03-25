// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/Int32Binding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Int32Binding_generated_h
#error "Int32Binding.generated.h already included, missing '#pragma once' in Int32Binding.h"
#endif
#define UMG_Int32Binding_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInt32Binding(); \
	friend struct Z_Construct_UClass_UInt32Binding_Statics; \
public: \
	DECLARE_CLASS(UInt32Binding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UInt32Binding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInt32Binding(UInt32Binding&&); \
	UInt32Binding(const UInt32Binding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UInt32Binding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInt32Binding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInt32Binding) \
	UMG_API virtual ~UInt32Binding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_11_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UInt32Binding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_Int32Binding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
