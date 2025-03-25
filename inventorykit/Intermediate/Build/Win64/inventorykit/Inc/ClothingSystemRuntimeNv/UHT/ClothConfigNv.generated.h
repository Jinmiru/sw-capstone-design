// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothConfigNv.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMRUNTIMENV_ClothConfigNv_generated_h
#error "ClothConfigNv.generated.h already included, missing '#pragma once' in ClothConfigNv.h"
#endif
#define CLOTHINGSYSTEMRUNTIMENV_ClothConfigNv_generated_h

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothConstraintSetupNv_Statics; \
	CLOTHINGSYSTEMRUNTIMENV_API static class UScriptStruct* StaticStruct();


template<> CLOTHINGSYSTEMRUNTIMENV_API UScriptStruct* StaticStruct<struct FClothConstraintSetupNv>();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UClothConfigNv, CLOTHINGSYSTEMRUNTIMENV_API)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothConfigNv(); \
	friend struct Z_Construct_UClass_UClothConfigNv_Statics; \
public: \
	DECLARE_CLASS(UClothConfigNv, UClothConfigCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeNv"), CLOTHINGSYSTEMRUNTIMENV_API) \
	DECLARE_SERIALIZER(UClothConfigNv) \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClothConfigNv(UClothConfigNv&&); \
	UClothConfigNv(const UClothConfigNv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMENV_API, UClothConfigNv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothConfigNv); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClothConfigNv) \
	CLOTHINGSYSTEMRUNTIMENV_API virtual ~UClothConfigNv();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_64_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<class UClothConfigNv>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothConfigNv_h


#define FOREACH_ENUM_ECLOTHINGWINDMETHODNV(op) \
	op(EClothingWindMethodNv::Legacy) \
	op(EClothingWindMethodNv::Accurate) 

enum class EClothingWindMethodNv : uint8;
template<> struct TIsUEnumClass<EClothingWindMethodNv> { enum { Value = true }; };
template<> CLOTHINGSYSTEMRUNTIMENV_API UEnum* StaticEnum<EClothingWindMethodNv>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
