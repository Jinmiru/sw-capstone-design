// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/MouseCursorBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_MouseCursorBinding_generated_h
#error "MouseCursorBinding.generated.h already included, missing '#pragma once' in MouseCursorBinding.h"
#endif
#define UMG_MouseCursorBinding_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMouseCursorBinding(); \
	friend struct Z_Construct_UClass_UMouseCursorBinding_Statics; \
public: \
	DECLARE_CLASS(UMouseCursorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UMouseCursorBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMouseCursorBinding(UMouseCursorBinding&&); \
	UMouseCursorBinding(const UMouseCursorBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMouseCursorBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMouseCursorBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMouseCursorBinding) \
	UMG_API virtual ~UMouseCursorBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_12_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UMouseCursorBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
