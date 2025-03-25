// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMRUNTIMECOMMON_ClothConfig_generated_h
#error "ClothConfig.generated.h already included, missing '#pragma once' in ClothConfig.h"
#endif
#define CLOTHINGSYSTEMRUNTIMECOMMON_ClothConfig_generated_h

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothConfigCommon(); \
	friend struct Z_Construct_UClass_UClothConfigCommon_Statics; \
public: \
	DECLARE_CLASS(UClothConfigCommon, UClothConfigBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeCommon"), CLOTHINGSYSTEMRUNTIMECOMMON_API) \
	DECLARE_SERIALIZER(UClothConfigCommon)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClothConfigCommon(UClothConfigCommon&&); \
	UClothConfigCommon(const UClothConfigCommon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMECOMMON_API, UClothConfigCommon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothConfigCommon); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UClothConfigCommon)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_28_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<class UClothConfigCommon>();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothSharedConfigCommon(); \
	friend struct Z_Construct_UClass_UClothSharedConfigCommon_Statics; \
public: \
	DECLARE_CLASS(UClothSharedConfigCommon, UClothConfigCommon, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeCommon"), CLOTHINGSYSTEMRUNTIMECOMMON_API) \
	DECLARE_SERIALIZER(UClothSharedConfigCommon)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClothSharedConfigCommon(UClothSharedConfigCommon&&); \
	UClothSharedConfigCommon(const UClothSharedConfigCommon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMECOMMON_API, UClothSharedConfigCommon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothSharedConfigCommon); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UClothSharedConfigCommon)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_71_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<class UClothSharedConfigCommon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h


#define FOREACH_ENUM_ECLOTHMASSMODE(op) \
	op(EClothMassMode::UniformMass) \
	op(EClothMassMode::TotalMass) \
	op(EClothMassMode::Density) \
	op(EClothMassMode::MaxClothMassMode) 

enum class EClothMassMode : uint8;
template<> struct TIsUEnumClass<EClothMassMode> { enum { Value = true }; };
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EClothMassMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
