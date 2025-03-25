// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraScript.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraScript_generated_h
#error "NiagaraScript.generated.h already included, missing '#pragma once' in NiagaraScript.h"
#endif
#define NIAGARA_NiagaraScript_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraModuleDependency>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraCompilerTag>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_242_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVMExecutableDataId>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_361_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVMExecutableByteCode>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_423_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVMExecutableData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_649_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraInlineDynamicInputFormatToken>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_678_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FVersionedNiagaraScriptData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRaiseOnGPUCompilationComplete);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraScript, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScript(); \
	friend struct Z_Construct_UClass_UNiagaraScript_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScript, UNiagaraScriptBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraScript) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScript(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraScript(UNiagaraScript&&); \
	UNiagaraScript(const UNiagaraScript&); \
public: \
	NIAGARA_API virtual ~UNiagaraScript();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_830_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_833_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h


#define FOREACH_ENUM_EUNUSEDATTRIBUTEBEHAVIOUR(op) \
	op(EUnusedAttributeBehaviour::Copy) \
	op(EUnusedAttributeBehaviour::Zero) \
	op(EUnusedAttributeBehaviour::None) \
	op(EUnusedAttributeBehaviour::MarkInvalid) \
	op(EUnusedAttributeBehaviour::PassThrough) 

enum class EUnusedAttributeBehaviour : uint8;
template<> struct TIsUEnumClass<EUnusedAttributeBehaviour> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<EUnusedAttributeBehaviour>();

#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYTYPE(op) \
	op(ENiagaraModuleDependencyType::PreDependency) \
	op(ENiagaraModuleDependencyType::PostDependency) 

enum class ENiagaraModuleDependencyType : uint8;
template<> struct TIsUEnumClass<ENiagaraModuleDependencyType> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyType>();

#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYSCRIPTCONSTRAINT(op) \
	op(ENiagaraModuleDependencyScriptConstraint::SameScript) \
	op(ENiagaraModuleDependencyScriptConstraint::AllScripts) 

enum class ENiagaraModuleDependencyScriptConstraint : uint8;
template<> struct TIsUEnumClass<ENiagaraModuleDependencyScriptConstraint> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyScriptConstraint>();

#define FOREACH_ENUM_ENIAGARASCRIPTLIBRARYVISIBILITY(op) \
	op(ENiagaraScriptLibraryVisibility::Invalid) \
	op(ENiagaraScriptLibraryVisibility::Unexposed) \
	op(ENiagaraScriptLibraryVisibility::Library) \
	op(ENiagaraScriptLibraryVisibility::Hidden) 

enum class ENiagaraScriptLibraryVisibility : uint8;
template<> struct TIsUEnumClass<ENiagaraScriptLibraryVisibility> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptLibraryVisibility>();

#define FOREACH_ENUM_ENIAGARASCRIPTTEMPLATESPECIFICATION(op) \
	op(ENiagaraScriptTemplateSpecification::None) \
	op(ENiagaraScriptTemplateSpecification::Template) \
	op(ENiagaraScriptTemplateSpecification::Behavior) 

enum class ENiagaraScriptTemplateSpecification : uint8;
template<> struct TIsUEnumClass<ENiagaraScriptTemplateSpecification> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptTemplateSpecification>();

#define FOREACH_ENUM_ENIAGARAEMITTERDEFAULTSUMMARYSTATE(op) \
	op(ENiagaraEmitterDefaultSummaryState::Default) \
	op(ENiagaraEmitterDefaultSummaryState::Summary) 

enum class ENiagaraEmitterDefaultSummaryState : uint8;
template<> struct TIsUEnumClass<ENiagaraEmitterDefaultSummaryState> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraEmitterDefaultSummaryState>();

#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYUSAGE(op) \
	op(ENiagaraModuleDependencyUsage::None) \
	op(ENiagaraModuleDependencyUsage::Spawn) \
	op(ENiagaraModuleDependencyUsage::Update) \
	op(ENiagaraModuleDependencyUsage::Event) \
	op(ENiagaraModuleDependencyUsage::SimulationStage) 

enum class ENiagaraModuleDependencyUsage : uint8;
template<> struct TIsUEnumClass<ENiagaraModuleDependencyUsage> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyUsage>();

#define FOREACH_ENUM_ENIAGARAINLINEDYNAMICINPUTFORMATTOKENUSAGE(op) \
	op(ENiagaraInlineDynamicInputFormatTokenUsage::Input) \
	op(ENiagaraInlineDynamicInputFormatTokenUsage::Decorator) \
	op(ENiagaraInlineDynamicInputFormatTokenUsage::LineBreak) 

enum class ENiagaraInlineDynamicInputFormatTokenUsage;
template<> struct TIsUEnumClass<ENiagaraInlineDynamicInputFormatTokenUsage> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraInlineDynamicInputFormatTokenUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
