// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/CheckedStateBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;
#ifdef UMG_CheckedStateBinding_generated_h
#error "CheckedStateBinding.generated.h already included, missing '#pragma once' in CheckedStateBinding.h"
#endif
#define UMG_CheckedStateBinding_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckedStateBinding(); \
	friend struct Z_Construct_UClass_UCheckedStateBinding_Statics; \
public: \
	DECLARE_CLASS(UCheckedStateBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UCheckedStateBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCheckedStateBinding(UCheckedStateBinding&&); \
	UCheckedStateBinding(const UCheckedStateBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UCheckedStateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckedStateBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCheckedStateBinding) \
	UMG_API virtual ~UCheckedStateBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_13_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCheckedStateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
