// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMAssetUserData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataAsset;
#ifdef RIGVM_RigVMAssetUserData_generated_h
#error "RigVMAssetUserData.generated.h already included, missing '#pragma once' in RigVMAssetUserData.h"
#endif
#define RIGVM_RigVMAssetUserData_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNameSpacedUserData, NO_API)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNameSpacedUserData(); \
	friend struct Z_Construct_UClass_UNameSpacedUserData_Statics; \
public: \
	DECLARE_CLASS(UNameSpacedUserData, UAssetUserData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(UNameSpacedUserData) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_16_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNameSpacedUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNameSpacedUserData(UNameSpacedUserData&&); \
	UNameSpacedUserData(const UNameSpacedUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNameSpacedUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNameSpacedUserData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNameSpacedUserData)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class UNameSpacedUserData>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDataAsset); \
	DECLARE_FUNCTION(execGetDataAsset);


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataAssetLink, NO_API)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataAssetLink(); \
	friend struct Z_Construct_UClass_UDataAssetLink_Statics; \
public: \
	DECLARE_CLASS(UDataAssetLink, UNameSpacedUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(UDataAssetLink) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataAssetLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataAssetLink(UDataAssetLink&&); \
	UDataAssetLink(const UDataAssetLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataAssetLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAssetLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAssetLink) \
	NO_API virtual ~UDataAssetLink();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_186_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_189_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class UDataAssetLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
