// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METASOUNDENGINE_MetasoundSettings_generated_h
#error "MetasoundSettings.generated.h already included, missing '#pragma once' in MetasoundSettings.h"
#endif
#define METASOUNDENGINE_MetasoundSettings_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FDefaultMetaSoundAssetAutoUpdateSettings>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetQualityList);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundQualityHelper(); \
	friend struct Z_Construct_UClass_UMetaSoundQualityHelper_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundQualityHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundQualityHelper)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundQualityHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundQualityHelper(UMetaSoundQualityHelper&&); \
	UMetaSoundQualityHelper(const UMetaSoundQualityHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundQualityHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundQualityHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundQualityHelper) \
	NO_API virtual ~UMetaSoundQualityHelper();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundQualityHelper>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundQualitySettings>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundSettings(); \
	friend struct Z_Construct_UClass_UMetaSoundSettings_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MetaSound");} \



#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundSettings(UMetaSoundSettings&&); \
	UMetaSoundSettings(const UMetaSoundSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSettings) \
	NO_API virtual ~UMetaSoundSettings();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_78_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h


#define FOREACH_ENUM_EMETASOUNDMESSAGELEVEL(op) \
	op(EMetaSoundMessageLevel::Error) \
	op(EMetaSoundMessageLevel::Warning) \
	op(EMetaSoundMessageLevel::Info) 

enum class EMetaSoundMessageLevel : uint8;
template<> struct TIsUEnumClass<EMetaSoundMessageLevel> { enum { Value = true }; };
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundMessageLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
