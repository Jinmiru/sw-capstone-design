// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundParameterPack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetasoundParameterPack;
enum class ESetParamResult : uint8;
#ifdef METASOUNDFRONTEND_MetasoundParameterPack_generated_h
#error "MetasoundParameterPack.generated.h already included, missing '#pragma once' in MetasoundParameterPack.h"
#endif
#define METASOUNDFRONTEND_MetasoundParameterPack_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_262_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasTrigger); \
	DECLARE_FUNCTION(execHasString); \
	DECLARE_FUNCTION(execHasFloat); \
	DECLARE_FUNCTION(execHasInt); \
	DECLARE_FUNCTION(execHasBool); \
	DECLARE_FUNCTION(execGetTrigger); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execSetTrigger); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetInt); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execMakeMetasoundParameterPack);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_262_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundParameterPack(); \
	friend struct Z_Construct_UClass_UMetasoundParameterPack_Statics; \
public: \
	DECLARE_CLASS(UMetasoundParameterPack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundFrontend"), NO_API) \
	DECLARE_SERIALIZER(UMetasoundParameterPack)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_262_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetasoundParameterPack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetasoundParameterPack(UMetasoundParameterPack&&); \
	UMetasoundParameterPack(const UMetasoundParameterPack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetasoundParameterPack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundParameterPack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundParameterPack) \
	NO_API virtual ~UMetasoundParameterPack();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_259_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_262_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_262_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_262_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h_262_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDFRONTEND_API UClass* StaticClass<class UMetasoundParameterPack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundParameterPack_h


#define FOREACH_ENUM_ESETPARAMRESULT(op) \
	op(ESetParamResult::Succeeded) \
	op(ESetParamResult::Failed) 

enum class ESetParamResult : uint8;
template<> struct TIsUEnumClass<ESetParamResult> { enum { Value = true }; };
template<> METASOUNDFRONTEND_API UEnum* StaticEnum<ESetParamResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
