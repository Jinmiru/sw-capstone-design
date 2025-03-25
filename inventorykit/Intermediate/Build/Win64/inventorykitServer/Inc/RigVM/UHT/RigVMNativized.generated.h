// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMNativized.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMNativized_generated_h
#error "RigVMNativized.generated.h already included, missing '#pragma once' in RigVMNativized.h"
#endif
#define RIGVM_RigVMNativized_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMNativized, NO_API)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMNativized(); \
	friend struct Z_Construct_UClass_URigVMNativized_Statics; \
public: \
	DECLARE_CLASS(URigVMNativized, URigVM, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMNativized) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URigVMNativized(URigVMNativized&&); \
	URigVMNativized(const URigVMNativized&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMNativized); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMNativized); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URigVMNativized)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVMNativized>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMNativized_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
