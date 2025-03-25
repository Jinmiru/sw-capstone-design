// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMBlueprintGeneratedClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMBlueprintGeneratedClass_generated_h
#error "RigVMBlueprintGeneratedClass.generated.h already included, missing '#pragma once' in RigVMBlueprintGeneratedClass.h"
#endif
#define RIGVM_RigVMBlueprintGeneratedClass_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMGraphFunctionHeaderArray>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMBlueprintGeneratedClass, NO_API)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURigVMBlueprintGeneratedClass(); \
	friend struct Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics; \
public: \
	DECLARE_CLASS(URigVMBlueprintGeneratedClass, UBlueprintGeneratedClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMBlueprintGeneratedClass) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_24_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<URigVMBlueprintGeneratedClass*>(this); }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMBlueprintGeneratedClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMBlueprintGeneratedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMBlueprintGeneratedClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URigVMBlueprintGeneratedClass(URigVMBlueprintGeneratedClass&&); \
	URigVMBlueprintGeneratedClass(const URigVMBlueprintGeneratedClass&); \
public: \
	NO_API virtual ~URigVMBlueprintGeneratedClass();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVMBlueprintGeneratedClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
