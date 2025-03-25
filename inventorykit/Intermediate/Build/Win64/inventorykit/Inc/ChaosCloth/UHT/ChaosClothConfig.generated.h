// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosCloth/ChaosClothConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTH_ChaosClothConfig_generated_h
#error "ChaosClothConfig.generated.h already included, missing '#pragma once' in ChaosClothConfig.h"
#endif
#define CHAOSCLOTH_ChaosClothConfig_generated_h

#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothWeightedValue_Statics; \
	CHAOSCLOTH_API static class UScriptStruct* StaticStruct();


template<> CHAOSCLOTH_API UScriptStruct* StaticStruct<struct FChaosClothWeightedValue>();

#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_56_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothConfig, CHAOSCLOTH_API)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothConfig(); \
	friend struct Z_Construct_UClass_UChaosClothConfig_Statics; \
public: \
	DECLARE_CLASS(UChaosClothConfig, UClothConfigCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCloth"), CHAOSCLOTH_API) \
	DECLARE_SERIALIZER(UChaosClothConfig) \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_56_ARCHIVESERIALIZER


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosClothConfig(UChaosClothConfig&&); \
	UChaosClothConfig(const UChaosClothConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTH_API, UChaosClothConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosClothConfig)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_53_PROLOG
#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCLOTH_API UClass* StaticClass<class UChaosClothConfig>();

#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_435_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosClothSharedSimConfig, CHAOSCLOTH_API)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_435_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothSharedSimConfig(); \
	friend struct Z_Construct_UClass_UChaosClothSharedSimConfig_Statics; \
public: \
	DECLARE_CLASS(UChaosClothSharedSimConfig, UClothSharedConfigCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCloth"), CHAOSCLOTH_API) \
	DECLARE_SERIALIZER(UChaosClothSharedSimConfig) \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_435_ARCHIVESERIALIZER


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_435_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosClothSharedSimConfig(UChaosClothSharedSimConfig&&); \
	UChaosClothSharedSimConfig(const UChaosClothSharedSimConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTH_API, UChaosClothSharedSimConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothSharedSimConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosClothSharedSimConfig)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_432_PROLOG
#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_435_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_435_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h_435_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCLOTH_API UClass* StaticClass<class UChaosClothSharedSimConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothConfig_h


#define FOREACH_ENUM_ECHAOSCLOTHTETHERMODE(op) \
	op(EChaosClothTetherMode::FastTetherFastLength) \
	op(EChaosClothTetherMode::AccurateTetherFastLength) \
	op(EChaosClothTetherMode::AccurateTetherAccurateLength) \
	op(EChaosClothTetherMode::MaxChaosClothTetherMode) 

enum class EChaosClothTetherMode : uint8;
template<> struct TIsUEnumClass<EChaosClothTetherMode> { enum { Value = true }; };
template<> CHAOSCLOTH_API UEnum* StaticEnum<EChaosClothTetherMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
