// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraRendererProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraRendererProperties_generated_h
#error "NiagaraRendererProperties.generated.h already included, missing '#pragma once' in NiagaraRendererProperties.h"
#endif
#define NIAGARA_NiagaraRendererProperties_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraRendererMaterialScalarParameter>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraRendererMaterialVectorParameter>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_216_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraRendererMaterialTextureParameter>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraRendererMaterialStaticBoolParameter>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraRendererMaterialParameters>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraRendererProperties(); \
	friend struct Z_Construct_UClass_UNiagaraRendererProperties_Statics; \
public: \
	DECLARE_CLASS(UNiagaraRendererProperties, UNiagaraMergeable, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraRendererProperties)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_284_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraRendererProperties(UNiagaraRendererProperties&&); \
	UNiagaraRendererProperties(const UNiagaraRendererProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraRendererProperties); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNiagaraRendererProperties) \
	NIAGARA_API virtual ~UNiagaraRendererProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_281_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_284_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraRendererProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h


#define FOREACH_ENUM_ENIAGARARENDERERSORTPRECISION(op) \
	op(ENiagaraRendererSortPrecision::Default) \
	op(ENiagaraRendererSortPrecision::Low) \
	op(ENiagaraRendererSortPrecision::High) 

enum class ENiagaraRendererSortPrecision : uint8;
template<> struct TIsUEnumClass<ENiagaraRendererSortPrecision> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererSortPrecision>();

#define FOREACH_ENUM_ENIAGARARENDERERGPUTRANSLUCENTLATENCY(op) \
	op(ENiagaraRendererGpuTranslucentLatency::ProjectDefault) \
	op(ENiagaraRendererGpuTranslucentLatency::Immediate) \
	op(ENiagaraRendererGpuTranslucentLatency::Latent) 

enum class ENiagaraRendererGpuTranslucentLatency : uint8;
template<> struct TIsUEnumClass<ENiagaraRendererGpuTranslucentLatency> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererGpuTranslucentLatency>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
