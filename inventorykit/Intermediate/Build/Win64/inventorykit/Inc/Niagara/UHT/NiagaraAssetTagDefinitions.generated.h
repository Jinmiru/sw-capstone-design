// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraAssetTagDefinitions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraAssetTagDefinitions_generated_h
#error "NiagaraAssetTagDefinitions.generated.h already included, missing '#pragma once' in NiagaraAssetTagDefinitions.h"
#endif
#define NIAGARA_NiagaraAssetTagDefinitions_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraAssetTagDefinition_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraAssetTagDefinition>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraAssetTagDefinitionReference>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraAssetTagDefinitions(); \
	friend struct Z_Construct_UClass_UNiagaraAssetTagDefinitions_Statics; \
public: \
	DECLARE_CLASS(UNiagaraAssetTagDefinitions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraAssetTagDefinitions)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraAssetTagDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraAssetTagDefinitions(UNiagaraAssetTagDefinitions&&); \
	UNiagaraAssetTagDefinitions(const UNiagaraAssetTagDefinitions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraAssetTagDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraAssetTagDefinitions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraAssetTagDefinitions) \
	NO_API virtual ~UNiagaraAssetTagDefinitions();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_114_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraAssetTagDefinitions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraAssetTagDefinitions_h


#define FOREACH_ENUM_ENIAGARAASSETLIBRARYASSETTYPES(op) \
	op(ENiagaraAssetLibraryAssetTypes::Emitters) \
	op(ENiagaraAssetLibraryAssetTypes::Systems) \
	op(ENiagaraAssetLibraryAssetTypes::Scripts) 

enum class ENiagaraAssetLibraryAssetTypes : uint8;
template<> struct TIsUEnumClass<ENiagaraAssetLibraryAssetTypes> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraAssetLibraryAssetTypes>();

#define FOREACH_ENUM_ENIAGARAASSETTAGDEFINITIONIMPORTANCE(op) \
	op(ENiagaraAssetTagDefinitionImportance::Primary) \
	op(ENiagaraAssetTagDefinitionImportance::Secondary) 

enum class ENiagaraAssetTagDefinitionImportance : uint8;
template<> struct TIsUEnumClass<ENiagaraAssetTagDefinitionImportance> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraAssetTagDefinitionImportance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
