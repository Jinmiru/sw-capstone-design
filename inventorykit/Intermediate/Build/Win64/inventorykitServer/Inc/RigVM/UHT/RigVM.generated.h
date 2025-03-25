// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVM.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScriptStruct;
struct FRigVMExtendedExecuteContext;
struct FRigVMStatistics;
#ifdef RIGVM_RigVM_generated_h
#error "RigVM.generated.h already included, missing '#pragma once' in RigVM.h"
#endif
#define RIGVM_RigVM_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMParameter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMParameter>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStatistics); \
	DECLARE_FUNCTION(execSetParameterValueTransform); \
	DECLARE_FUNCTION(execSetParameterValueQuat); \
	DECLARE_FUNCTION(execSetParameterValueVector); \
	DECLARE_FUNCTION(execSetParameterValueVector2D); \
	DECLARE_FUNCTION(execSetParameterValueString); \
	DECLARE_FUNCTION(execSetParameterValueName); \
	DECLARE_FUNCTION(execSetParameterValueInt); \
	DECLARE_FUNCTION(execSetParameterValueDouble); \
	DECLARE_FUNCTION(execSetParameterValueFloat); \
	DECLARE_FUNCTION(execSetParameterValueBool); \
	DECLARE_FUNCTION(execGetParameterValueTransform); \
	DECLARE_FUNCTION(execGetParameterValueQuat); \
	DECLARE_FUNCTION(execGetParameterValueVector); \
	DECLARE_FUNCTION(execGetParameterValueVector2D); \
	DECLARE_FUNCTION(execGetParameterValueString); \
	DECLARE_FUNCTION(execGetParameterValueName); \
	DECLARE_FUNCTION(execGetParameterValueInt); \
	DECLARE_FUNCTION(execGetParameterValueDouble); \
	DECLARE_FUNCTION(execGetParameterValueFloat); \
	DECLARE_FUNCTION(execGetParameterValueBool); \
	DECLARE_FUNCTION(execGetRigVMFunctionName); \
	DECLARE_FUNCTION(execAddRigVMFunction); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVM, NO_API)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVM(); \
	friend struct Z_Construct_UClass_URigVM_Statics; \
public: \
	DECLARE_CLASS(URigVM, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVM) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URigVM(URigVM&&); \
	URigVM(const URigVM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVM)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_152_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVM_h


#define FOREACH_ENUM_ERIGVMPARAMETERTYPE(op) \
	op(ERigVMParameterType::Input) \
	op(ERigVMParameterType::Output) \
	op(ERigVMParameterType::Invalid) 

enum class ERigVMParameterType : uint8;
template<> struct TIsUEnumClass<ERigVMParameterType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMParameterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
