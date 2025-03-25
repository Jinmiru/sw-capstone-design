// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraMeshRendererProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraMeshRendererProperties_generated_h
#error "NiagaraMeshRendererProperties.generated.h already included, missing '#pragma once' in NiagaraMeshRendererProperties.h"
#endif
#define NIAGARA_NiagaraMeshRendererProperties_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraMeshMICOverride>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraMeshMaterialOverride>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraMeshRendererMeshProperties>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_249_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraMeshRendererProperties, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_249_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraMeshRendererProperties(); \
	friend struct Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics; \
public: \
	DECLARE_CLASS(UNiagaraMeshRendererProperties, UNiagaraRendererProperties, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraMeshRendererProperties) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_249_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_249_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraMeshRendererProperties(UNiagaraMeshRendererProperties&&); \
	UNiagaraMeshRendererProperties(const UNiagaraMeshRendererProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraMeshRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMeshRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraMeshRendererProperties) \
	NIAGARA_API virtual ~UNiagaraMeshRendererProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_245_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_249_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_249_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_249_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraMeshRendererProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h


#define FOREACH_ENUM_ENIAGARAMESHFACINGMODE(op) \
	op(ENiagaraMeshFacingMode::Default) \
	op(ENiagaraMeshFacingMode::Velocity) \
	op(ENiagaraMeshFacingMode::CameraPosition) \
	op(ENiagaraMeshFacingMode::CameraPlane) 

enum class ENiagaraMeshFacingMode : uint8;
template<> struct TIsUEnumClass<ENiagaraMeshFacingMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshFacingMode>();

#define FOREACH_ENUM_ENIAGARAMESHPIVOTOFFSETSPACE(op) \
	op(ENiagaraMeshPivotOffsetSpace::Mesh) \
	op(ENiagaraMeshPivotOffsetSpace::Simulation) \
	op(ENiagaraMeshPivotOffsetSpace::World) \
	op(ENiagaraMeshPivotOffsetSpace::Local) 

enum class ENiagaraMeshPivotOffsetSpace : uint8;
template<> struct TIsUEnumClass<ENiagaraMeshPivotOffsetSpace> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshPivotOffsetSpace>();

#define FOREACH_ENUM_ENIAGARAMESHLOCKEDAXISSPACE(op) \
	op(ENiagaraMeshLockedAxisSpace::Simulation) \
	op(ENiagaraMeshLockedAxisSpace::World) \
	op(ENiagaraMeshLockedAxisSpace::Local) 

enum class ENiagaraMeshLockedAxisSpace : uint8;
template<> struct TIsUEnumClass<ENiagaraMeshLockedAxisSpace> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshLockedAxisSpace>();

#define FOREACH_ENUM_ENIAGARAMESHLODMODE(op) \
	op(ENiagaraMeshLODMode::LODLevel) \
	op(ENiagaraMeshLODMode::LODBias) \
	op(ENiagaraMeshLODMode::ByComponentBounds) \
	op(ENiagaraMeshLODMode::PerParticle) 

enum class ENiagaraMeshLODMode : uint8;
template<> struct TIsUEnumClass<ENiagaraMeshLODMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshLODMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
