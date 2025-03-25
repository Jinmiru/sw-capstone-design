// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMMemoryStorage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMMemoryStorage_generated_h
#error "RigVMMemoryStorage.generated.h already included, missing '#pragma once' in RigVMMemoryStorage.h"
#endif
#define RIGVM_RigVMMemoryStorage_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMBranchInfo>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1050_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMMemoryStorageGeneratorClass, NO_API)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1050_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMMemoryStorageGeneratorClass(); \
	friend struct Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics; \
public: \
	DECLARE_CLASS(URigVMMemoryStorageGeneratorClass, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMMemoryStorageGeneratorClass) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1050_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1050_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URigVMMemoryStorageGeneratorClass(URigVMMemoryStorageGeneratorClass&&); \
	URigVMMemoryStorageGeneratorClass(const URigVMMemoryStorageGeneratorClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMMemoryStorageGeneratorClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMMemoryStorageGeneratorClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMMemoryStorageGeneratorClass) \
	NO_API virtual ~URigVMMemoryStorageGeneratorClass();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1046_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1050_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1050_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1050_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVMMemoryStorageGeneratorClass>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMMemoryStorage(); \
	friend struct Z_Construct_UClass_URigVMMemoryStorage_Statics; \
public: \
	DECLARE_CLASS(URigVMMemoryStorage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMMemoryStorage)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1170_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMMemoryStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URigVMMemoryStorage(URigVMMemoryStorage&&); \
	URigVMMemoryStorage(const URigVMMemoryStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMMemoryStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMMemoryStorage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMMemoryStorage) \
	NO_API virtual ~URigVMMemoryStorage();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1167_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1170_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVMMemoryStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
