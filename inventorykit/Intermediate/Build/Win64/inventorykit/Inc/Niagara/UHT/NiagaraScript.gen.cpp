// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraScript.h"
#include "Niagara/Classes/NiagaraParameterDefinitionsSubscriber.h"
#include "Niagara/Public/NiagaraAssetTagDefinitions.h"
#include "Niagara/Public/NiagaraCommon.h"
#include "Niagara/Public/NiagaraParameters.h"
#include "Niagara/Public/NiagaraParameterStore.h"
#include "Niagara/Public/NiagaraScriptExecutionParameterStore.h"
#include "Niagara/Public/NiagaraStackSection.h"
#include "Niagara/Public/NiagaraTypes.h"
#include "NiagaraCore/Public/NiagaraCompileHash.h"
#include "NiagaraShader/Public/NiagaraScriptBase.h"
#include "NiagaraShader/Public/NiagaraShared.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScript() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoundParameter();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileDependency();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompilerTag();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraModuleDependency();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraResolvedUObjectInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraResolvedUserDataInterfaceBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptResolvedDataInterfaceInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptUObjectCompileInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackSection();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraScriptData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo();
NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash();
NIAGARASHADER_API UClass* Z_Construct_UClass_UNiagaraScriptBase();
NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent();
NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata();
NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationStageMetaData();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum EUnusedAttributeBehaviour
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnusedAttributeBehaviour;
static UEnum* EUnusedAttributeBehaviour_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("EUnusedAttributeBehaviour"));
	}
	return Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<EUnusedAttributeBehaviour>()
{
	return EUnusedAttributeBehaviour_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines what will happen to unused attributes when a script is run. */" },
		{ "Copy.Comment", "/** The previous value of the attribute is copied across. */" },
		{ "Copy.Name", "EUnusedAttributeBehaviour::Copy" },
		{ "Copy.ToolTip", "The previous value of the attribute is copied across." },
		{ "MarkInvalid.Comment", "/** The memory for the attribute is set to NIAGARA_INVALID_MEMORY. */" },
		{ "MarkInvalid.Name", "EUnusedAttributeBehaviour::MarkInvalid" },
		{ "MarkInvalid.ToolTip", "The memory for the attribute is set to NIAGARA_INVALID_MEMORY." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "None.Comment", "/** The attribute is untouched. */" },
		{ "None.Name", "EUnusedAttributeBehaviour::None" },
		{ "None.ToolTip", "The attribute is untouched." },
		{ "PassThrough.Comment", "/** The attribute is passed through without double buffering */" },
		{ "PassThrough.Name", "EUnusedAttributeBehaviour::PassThrough" },
		{ "PassThrough.ToolTip", "The attribute is passed through without double buffering" },
		{ "ToolTip", "Defines what will happen to unused attributes when a script is run." },
		{ "Zero.Comment", "/** The attribute is set to zero. */" },
		{ "Zero.Name", "EUnusedAttributeBehaviour::Zero" },
		{ "Zero.ToolTip", "The attribute is set to zero." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUnusedAttributeBehaviour::Copy", (int64)EUnusedAttributeBehaviour::Copy },
		{ "EUnusedAttributeBehaviour::Zero", (int64)EUnusedAttributeBehaviour::Zero },
		{ "EUnusedAttributeBehaviour::None", (int64)EUnusedAttributeBehaviour::None },
		{ "EUnusedAttributeBehaviour::MarkInvalid", (int64)EUnusedAttributeBehaviour::MarkInvalid },
		{ "EUnusedAttributeBehaviour::PassThrough", (int64)EUnusedAttributeBehaviour::PassThrough },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"EUnusedAttributeBehaviour",
	"EUnusedAttributeBehaviour",
	Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour()
{
	if (!Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton, Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton;
}
// End Enum EUnusedAttributeBehaviour

// Begin Enum ENiagaraModuleDependencyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraModuleDependencyType;
static UEnum* ENiagaraModuleDependencyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraModuleDependencyType"));
	}
	return Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyType>()
{
	return ENiagaraModuleDependencyType_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "PostDependency.Comment", "/** The dependency belongs after the module. */" },
		{ "PostDependency.Name", "ENiagaraModuleDependencyType::PostDependency" },
		{ "PostDependency.ToolTip", "The dependency belongs after the module." },
		{ "PreDependency.Comment", "/** The dependency belongs before the module. */" },
		{ "PreDependency.Name", "ENiagaraModuleDependencyType::PreDependency" },
		{ "PreDependency.ToolTip", "The dependency belongs before the module." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraModuleDependencyType::PreDependency", (int64)ENiagaraModuleDependencyType::PreDependency },
		{ "ENiagaraModuleDependencyType::PostDependency", (int64)ENiagaraModuleDependencyType::PostDependency },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraModuleDependencyType",
	"ENiagaraModuleDependencyType",
	Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType()
{
	if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton;
}
// End Enum ENiagaraModuleDependencyType

// Begin Enum ENiagaraModuleDependencyScriptConstraint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint;
static UEnum* ENiagaraModuleDependencyScriptConstraint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraModuleDependencyScriptConstraint"));
	}
	return Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyScriptConstraint>()
{
	return ENiagaraModuleDependencyScriptConstraint_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllScripts.Comment", "/** The module providing the dependency can be in any script as long as it satisfies the dependency type, e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency could be in \"Emitter Spawn\". */" },
		{ "AllScripts.Name", "ENiagaraModuleDependencyScriptConstraint::AllScripts" },
		{ "AllScripts.ToolTip", "The module providing the dependency can be in any script as long as it satisfies the dependency type, e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency could be in \"Emitter Spawn\"." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "SameScript.Comment", "/** The module providing the dependency must be in the same script e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency must also be in \"Particle Spawn\". */" },
		{ "SameScript.Name", "ENiagaraModuleDependencyScriptConstraint::SameScript" },
		{ "SameScript.ToolTip", "The module providing the dependency must be in the same script e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency must also be in \"Particle Spawn\"." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraModuleDependencyScriptConstraint::SameScript", (int64)ENiagaraModuleDependencyScriptConstraint::SameScript },
		{ "ENiagaraModuleDependencyScriptConstraint::AllScripts", (int64)ENiagaraModuleDependencyScriptConstraint::AllScripts },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraModuleDependencyScriptConstraint",
	"ENiagaraModuleDependencyScriptConstraint",
	Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint()
{
	if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton;
}
// End Enum ENiagaraModuleDependencyScriptConstraint

// Begin Enum ENiagaraScriptLibraryVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility;
static UEnum* ENiagaraScriptLibraryVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptLibraryVisibility"));
	}
	return Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptLibraryVisibility>()
{
	return ENiagaraScriptLibraryVisibility_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Hidden.Comment", "/** The script is never visible to the user. This is useful to \"soft deprecate\" assets that should not be shown to a user, but should also not generate errors for existing usages. */" },
		{ "Hidden.DisplayName", "Hidden" },
		{ "Hidden.Name", "ENiagaraScriptLibraryVisibility::Hidden" },
		{ "Hidden.ToolTip", "The script is never visible to the user. This is useful to \"soft deprecate\" assets that should not be shown to a user, but should also not generate errors for existing usages." },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ENiagaraScriptLibraryVisibility::Invalid" },
		{ "Library.Comment", "/** The script is exposed to the asset library and always visible to the user. */" },
		{ "Library.DisplayName", "Exposed" },
		{ "Library.Name", "ENiagaraScriptLibraryVisibility::Library" },
		{ "Library.ToolTip", "The script is exposed to the asset library and always visible to the user." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "Unexposed.Comment", "/** The script is not visible by default to the user, but can be made visible by disabling the \"Library only\" filter option. */" },
		{ "Unexposed.DisplayName", "Unexposed" },
		{ "Unexposed.Name", "ENiagaraScriptLibraryVisibility::Unexposed" },
		{ "Unexposed.ToolTip", "The script is not visible by default to the user, but can be made visible by disabling the \"Library only\" filter option." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraScriptLibraryVisibility::Invalid", (int64)ENiagaraScriptLibraryVisibility::Invalid },
		{ "ENiagaraScriptLibraryVisibility::Unexposed", (int64)ENiagaraScriptLibraryVisibility::Unexposed },
		{ "ENiagaraScriptLibraryVisibility::Library", (int64)ENiagaraScriptLibraryVisibility::Library },
		{ "ENiagaraScriptLibraryVisibility::Hidden", (int64)ENiagaraScriptLibraryVisibility::Hidden },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraScriptLibraryVisibility",
	"ENiagaraScriptLibraryVisibility",
	Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility()
{
	if (!Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton;
}
// End Enum ENiagaraScriptLibraryVisibility

// Begin Enum ENiagaraScriptTemplateSpecification
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification;
static UEnum* ENiagaraScriptTemplateSpecification_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptTemplateSpecification"));
	}
	return Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptTemplateSpecification>()
{
	return ENiagaraScriptTemplateSpecification_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Behavior.DisplayName", "Learning Example" },
		{ "Behavior.Name", "ENiagaraScriptTemplateSpecification::Behavior" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "None.Name", "ENiagaraScriptTemplateSpecification::None" },
		{ "Template.Name", "ENiagaraScriptTemplateSpecification::Template" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraScriptTemplateSpecification::None", (int64)ENiagaraScriptTemplateSpecification::None },
		{ "ENiagaraScriptTemplateSpecification::Template", (int64)ENiagaraScriptTemplateSpecification::Template },
		{ "ENiagaraScriptTemplateSpecification::Behavior", (int64)ENiagaraScriptTemplateSpecification::Behavior },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraScriptTemplateSpecification",
	"ENiagaraScriptTemplateSpecification",
	Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification()
{
	if (!Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton;
}
// End Enum ENiagaraScriptTemplateSpecification

// Begin Enum ENiagaraEmitterDefaultSummaryState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState;
static UEnum* ENiagaraEmitterDefaultSummaryState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraEmitterDefaultSummaryState"));
	}
	return Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraEmitterDefaultSummaryState>()
{
	return ENiagaraEmitterDefaultSummaryState_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** The emitter will be added in default, full view by default. */" },
		{ "Default.Name", "ENiagaraEmitterDefaultSummaryState::Default" },
		{ "Default.ToolTip", "The emitter will be added in default, full view by default." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "Summary.Comment", "/** The emitter will be added in summary state by default. */" },
		{ "Summary.Name", "ENiagaraEmitterDefaultSummaryState::Summary" },
		{ "Summary.ToolTip", "The emitter will be added in summary state by default." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraEmitterDefaultSummaryState::Default", (int64)ENiagaraEmitterDefaultSummaryState::Default },
		{ "ENiagaraEmitterDefaultSummaryState::Summary", (int64)ENiagaraEmitterDefaultSummaryState::Summary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraEmitterDefaultSummaryState",
	"ENiagaraEmitterDefaultSummaryState",
	Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState()
{
	if (!Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraEmitterDefaultSummaryState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState.InnerSingleton;
}
// End Enum ENiagaraEmitterDefaultSummaryState

// Begin Enum ENiagaraModuleDependencyUsage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage;
static UEnum* ENiagaraModuleDependencyUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraModuleDependencyUsage"));
	}
	return Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyUsage>()
{
	return ENiagaraModuleDependencyUsage_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines different usages for a niagara script's module dependecies. */" },
		{ "Event.Comment", "/** Evaluate when the script is called in an event context. */" },
		{ "Event.Name", "ENiagaraModuleDependencyUsage::Event" },
		{ "Event.ToolTip", "Evaluate when the script is called in an event context." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "None.Comment", "/** Default entry to catch invalid usages */" },
		{ "None.Hidden", "" },
		{ "None.Name", "ENiagaraModuleDependencyUsage::None" },
		{ "None.ToolTip", "Default entry to catch invalid usages" },
		{ "SimulationStage.Comment", "/** Evaluate when the script is called in a simulation stage. */" },
		{ "SimulationStage.Name", "ENiagaraModuleDependencyUsage::SimulationStage" },
		{ "SimulationStage.ToolTip", "Evaluate when the script is called in a simulation stage." },
		{ "Spawn.Comment", "/** Evaluate when the script is called during the spawn phase. */" },
		{ "Spawn.Name", "ENiagaraModuleDependencyUsage::Spawn" },
		{ "Spawn.ToolTip", "Evaluate when the script is called during the spawn phase." },
		{ "ToolTip", "Defines different usages for a niagara script's module dependecies." },
		{ "Update.Comment", "/** Evaluate when the script is called during the update phase. */" },
		{ "Update.Name", "ENiagaraModuleDependencyUsage::Update" },
		{ "Update.ToolTip", "Evaluate when the script is called during the update phase." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraModuleDependencyUsage::None", (int64)ENiagaraModuleDependencyUsage::None },
		{ "ENiagaraModuleDependencyUsage::Spawn", (int64)ENiagaraModuleDependencyUsage::Spawn },
		{ "ENiagaraModuleDependencyUsage::Update", (int64)ENiagaraModuleDependencyUsage::Update },
		{ "ENiagaraModuleDependencyUsage::Event", (int64)ENiagaraModuleDependencyUsage::Event },
		{ "ENiagaraModuleDependencyUsage::SimulationStage", (int64)ENiagaraModuleDependencyUsage::SimulationStage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraModuleDependencyUsage",
	"ENiagaraModuleDependencyUsage",
	Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage()
{
	if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton;
}
// End Enum ENiagaraModuleDependencyUsage

// Begin ScriptStruct FNiagaraModuleDependency
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraModuleDependency;
class UScriptStruct* FNiagaraModuleDependency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraModuleDependency, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraModuleDependency"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraModuleDependency>()
{
	return FNiagaraModuleDependency::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Specifies the provided id of the required dependent module (e.g. 'ProvidesNormalizedAge') */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies the provided id of the required dependent module (e.g. 'ProvidesNormalizedAge')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Whether the dependency belongs before or after this module */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Whether the dependency belongs before or after this module" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptConstraint_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Specifies constraints related to the source script a modules provides as dependency. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies constraints related to the source script a modules provides as dependency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredVersion_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "// Specifies the version constraint that module providing the dependency must fulfill.\n// Example usages:\n// '1.2' requires the exact version 1.2 of the source script\n// '1.2+' requires at least version 1.2, but any higher version is also ok\n// '1.2-2.0' requires any version between 1.2 and 2.0\n" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies the version constraint that module providing the dependency must fulfill.\nExample usages:\n'1.2' requires the exact version 1.2 of the source script\n'1.2+' requires at least version 1.2, but any higher version is also ok\n'1.2-2.0' requires any version between 1.2 and 2.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyEvaluateInScriptUsage_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Niagara.ENiagaraModuleDependencyUsage" },
		{ "Category", "Script" },
		{ "Comment", "/** This property can limit where the dependency is evaluated. By default, the dependency is enforced in all script usages */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "This property can limit where the dependency is evaluated. By default, the dependency is enforced in all script usages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Detailed description of the dependency */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Detailed description of the dependency" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScriptConstraint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OnlyEvaluateInScriptUsage;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraModuleDependency>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraModuleDependency, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraModuleDependency, Type), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2139529885
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint = { "ScriptConstraint", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraModuleDependency, ScriptConstraint), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptConstraint_MetaData), NewProp_ScriptConstraint_MetaData) }; // 2616803412
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_RequiredVersion = { "RequiredVersion", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraModuleDependency, RequiredVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredVersion_MetaData), NewProp_RequiredVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_OnlyEvaluateInScriptUsage = { "OnlyEvaluateInScriptUsage", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraModuleDependency, OnlyEvaluateInScriptUsage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyEvaluateInScriptUsage_MetaData), NewProp_OnlyEvaluateInScriptUsage_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraModuleDependency, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_RequiredVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_OnlyEvaluateInScriptUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraModuleDependency",
	Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers),
	sizeof(FNiagaraModuleDependency),
	alignof(FNiagaraModuleDependency),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraModuleDependency()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.InnerSingleton;
}
// End ScriptStruct FNiagaraModuleDependency

// Begin ScriptStruct FNiagaraCompilerTag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCompilerTag;
class UScriptStruct* FNiagaraCompilerTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompilerTag, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCompilerTag"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCompilerTag>()
{
	return FNiagaraCompilerTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompilerTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompilerTag, Variable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) }; // 2475164134
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompilerTag, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_StringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraCompilerTag",
	Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::PropPointers),
	sizeof(FNiagaraCompilerTag),
	alignof(FNiagaraCompilerTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompilerTag()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.InnerSingleton;
}
// End ScriptStruct FNiagaraCompilerTag

// Begin ScriptStruct FNiagaraVMExecutableDataId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId;
class UScriptStruct* FNiagaraVMExecutableDataId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVMExecutableDataId"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVMExecutableDataId>()
{
	return FNiagaraVMExecutableDataId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing all of the data necessary to look up a NiagaraScript's VM executable results from the Derived Data Cache.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Struct containing all of the data necessary to look up a NiagaraScript's VM executable results from the Derived Data Cache." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompilerVersionID_MetaData[] = {
		{ "Comment", "/** The version of the compiler that this needs to be built against.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The version of the compiler that this needs to be built against." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptUsageType_MetaData[] = {
		{ "Comment", "/** The type of script this was used for.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The type of script this was used for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptUsageTypeID_MetaData[] = {
		{ "Comment", "/** The instance id of this script usage type.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The instance id of this script usage type." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalDefines_MetaData[] = {
		{ "Comment", "/** Configuration options*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Configuration options" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalVariables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesRapidIterationParams_MetaData[] = {
		{ "Comment", "/** Whether or not we need to bake Rapid Iteration params. True to keep params, false to bake.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Whether or not we need to bake Rapid Iteration params. True to keep params, false to bake." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugSwitches_MetaData[] = {
		{ "Comment", "/** Whether or not we allow debug switches to be used. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Whether or not we allow debug switches to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatedSpawn_MetaData[] = {
		{ "Comment", "/** Do we require interpolated spawning */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Do we require interpolated spawning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Comment", "/** Do we require persistent IDs */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Do we require persistent IDs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseScriptID_MetaData[] = {
		{ "Comment", "/**\n\x09* The GUID of the subgraph this shader primarily represents.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The GUID of the subgraph this shader primarily represents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseScriptCompileHash_MetaData[] = {
		{ "Comment", "/**\n\x09* The hash of the subgraph this shader primarily represents.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The hash of the subgraph this shader primarily represents." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedCompileHashes_MetaData[] = {
		{ "Comment", "/** Compile hashes of any top level scripts the script was dependent on that might trigger a recompile if they change. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Compile hashes of any top level scripts the script was dependent on that might trigger a recompile if they change." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptVersionID_MetaData[] = {
		{ "Comment", "/** The version of the script that was compiled. If empty then just the latest version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The version of the script that was compiled. If empty then just the latest version." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompilerVersionID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptUsageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScriptUsageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptUsageTypeID;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalDefines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalDefines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalVariables;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bUsesRapidIterationParams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesRapidIterationParams;
	static void NewProp_bDisableDebugSwitches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugSwitches;
	static void NewProp_bInterpolatedSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatedSpawn;
	static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseScriptID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseScriptCompileHash;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedCompileHashes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedCompileHashes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptVersionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVMExecutableDataId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID = { "CompilerVersionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, CompilerVersionID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompilerVersionID_MetaData), NewProp_CompilerVersionID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType = { "ScriptUsageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ScriptUsageType), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptUsageType_MetaData), NewProp_ScriptUsageType_MetaData) }; // 625320668
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID = { "ScriptUsageTypeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ScriptUsageTypeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptUsageTypeID_MetaData), NewProp_ScriptUsageTypeID_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_Inner = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, AdditionalDefines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalDefines_MetaData), NewProp_AdditionalDefines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables_Inner = { "AdditionalVariables", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables = { "AdditionalVariables", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, AdditionalVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalVariables_MetaData), NewProp_AdditionalVariables_MetaData) }; // 2955719795
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_SetBit(void* Obj)
{
	((FNiagaraVMExecutableDataId*)Obj)->bUsesRapidIterationParams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams = { "bUsesRapidIterationParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesRapidIterationParams_MetaData), NewProp_bUsesRapidIterationParams_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches_SetBit(void* Obj)
{
	((FNiagaraVMExecutableDataId*)Obj)->bDisableDebugSwitches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches = { "bDisableDebugSwitches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugSwitches_MetaData), NewProp_bDisableDebugSwitches_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_SetBit(void* Obj)
{
	((FNiagaraVMExecutableDataId*)Obj)->bInterpolatedSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn = { "bInterpolatedSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolatedSpawn_MetaData), NewProp_bInterpolatedSpawn_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
{
	((FNiagaraVMExecutableDataId*)Obj)->bRequiresPersistentIDs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresPersistentIDs_MetaData), NewProp_bRequiresPersistentIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID = { "BaseScriptID", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, BaseScriptID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseScriptID_MetaData), NewProp_BaseScriptID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash = { "BaseScriptCompileHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, BaseScriptCompileHash), Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseScriptCompileHash_MetaData), NewProp_BaseScriptCompileHash_MetaData) }; // 314894840
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_Inner = { "ReferencedCompileHashes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(0, nullptr) }; // 314894840
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes = { "ReferencedCompileHashes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ReferencedCompileHashes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedCompileHashes_MetaData), NewProp_ReferencedCompileHashes_MetaData) }; // 314894840
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptVersionID = { "ScriptVersionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ScriptVersionID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptVersionID_MetaData), NewProp_ScriptVersionID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptVersionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraVMExecutableDataId",
	Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers),
	sizeof(FNiagaraVMExecutableDataId),
	alignof(FNiagaraVMExecutableDataId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.InnerSingleton;
}
// End ScriptStruct FNiagaraVMExecutableDataId

// Begin ScriptStruct FNiagaraVMExecutableByteCode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode;
class UScriptStruct* FNiagaraVMExecutableByteCode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVMExecutableByteCode"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVMExecutableByteCode>()
{
	return FNiagaraVMExecutableByteCode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVMExecutableByteCode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableByteCode, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_UncompressedSize = { "UncompressedSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableByteCode, UncompressedSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncompressedSize_MetaData), NewProp_UncompressedSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_UncompressedSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraVMExecutableByteCode",
	Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::PropPointers),
	sizeof(FNiagaraVMExecutableByteCode),
	alignof(FNiagaraVMExecutableByteCode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.InnerSingleton;
}
// End ScriptStruct FNiagaraVMExecutableByteCode

// Begin ScriptStruct FNiagaraVMExecutableData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData;
class UScriptStruct* FNiagaraVMExecutableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVMExecutableData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVMExecutableData>()
{
	return FNiagaraVMExecutableData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing all of the data needed to run a Niagara VM executable script.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Struct containing all of the data needed to run a Niagara VM executable script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[] = {
		{ "Comment", "/** Byte code to execute for this system. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Byte code to execute for this system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizedByteCode_MetaData[] = {
		{ "Comment", "/** Optimized version of the byte code to execute for this system */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Optimized version of the byte code to execute for this system" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTempRegisters_MetaData[] = {
		{ "Comment", "/** Number of temp registers used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Number of temp registers used by this script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumUserPtrs_MetaData[] = {
		{ "Comment", "/** Number of user pointers we must pass to the VM. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Number of user pointers we must pass to the VM." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Comment", "/** All the data for using external constants in the script, laid out in the order they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "All the data for using external constants in the script, laid out in the order they are expected in the uniform table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalParameters_MetaData[] = {
		{ "Comment", "/** All the data for using external constants in the script, laid out in the order they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "All the data for using external constants in the script, laid out in the order they are expected in the uniform table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDependencies_MetaData[] = {
		{ "Comment", "/** List of all external dependencies of this script. If not met, linking should result in an error.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "List of all external dependencies of this script. If not met, linking should result in an error." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedRapidIterationParameters_MetaData[] = {
		{ "Comment", "/** The default set of rapid iteration parameters defined by the script that this data represents.  In the case of baked\n\x09    in RI parameters this will be the values that are baked in, otherwise it will be the set of defaults based on the graphs. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The default set of rapid iteration parameters defined by the script that this data represents.  In the case of baked\n          in RI parameters this will be the values that are baked in, otherwise it will be the set of defaults based on the graphs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompileTagsEditorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompileTags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptLiterals_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Comment", "/** Attributes used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Attributes used by this script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataUsage_MetaData[] = {
		{ "Comment", "/** Contains various usage information for this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Contains various usage information for this script." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSetToParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalExternalFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UObjectInfos_MetaData[] = {
		{ "Comment", "/** Information about all the UObjects used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Information about all the UObjects used by this script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceInfo_MetaData[] = {
		{ "Comment", "/** Information about all data interfaces used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Information about all data interfaces used by this script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalledVMExternalFunctions_MetaData[] = {
		{ "Comment", "/** Array of ordered vm external functions to place in the function table. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of ordered vm external functions to place in the function table." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadDataSets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteDataSets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatScopes_MetaData[] = {
		{ "Comment", "/** Scopes we'll track with stats.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Scopes we'll track with stats." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastHlslTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastHlslTranslationGPU_MetaData[] = {
		{ "Comment", "// Note that this is currently needed to be non-transient because of how we kick off compilation of GPUComputeScripts\n" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Note that this is currently needed to be non-transient because of how we kick off compilation of GPUComputeScripts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastAssemblyTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastOpCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderScriptParametersMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionPaths_MetaData[] = {
		{ "Comment", "/** The parameter collections used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The parameter collections used by this script." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCompileStatus_MetaData[] = {
		{ "Comment", "/** Last known compile status. Lets us determine the latest state of the script byte buffer.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Last known compile status. Lets us determine the latest state of the script byte buffer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStageMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReadsAttributeData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesWritten_MetaData[] = {
		{ "Comment", "/** List of all attributes explicitly written by this VM script graph. Used to verify external dependencies.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "List of all attributes explicitly written by this VM script graph. Used to verify external dependencies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticVariablesWritten_MetaData[] = {
		{ "Comment", "/** List of all attributes explicitly written by this VM script graph. Used to verify external dependencies.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "List of all attributes explicitly written by this VM script graph. Used to verify external dependencies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCompileEvents_MetaData[] = {
		{ "Comment", "/** Array of all compile events generated last time the script was compiled.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of all compile events generated last time the script was compiled." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentalContextData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastExperimentalAssemblyScript_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReadsSignificanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsGPUContextInit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ByteCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptimizedByteCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTempRegisters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumUserPtrs;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InternalParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalDependencies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedRapidIterationParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedRapidIterationParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompileTagsEditorOnly_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompileTagsEditorOnly;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompileTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompileTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptLiterals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptLiterals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataUsage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetToParameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataSetToParameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataSetToParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalExternalFunctions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalExternalFunctions;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UObjectInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UObjectInfos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataInterfaceInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaceInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CalledVMExternalFunctions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CalledVMExternalFunctions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReadDataSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReadDataSets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WriteDataSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WriteDataSets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatScopes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatScopes;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastHlslTranslation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastHlslTranslationGPU;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastAssemblyTranslation;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastOpCount;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShaderScriptParametersMetadata;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterCollectionPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionPaths;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastCompileStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LastCompileStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationStageMetaData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationStageMetaData;
#if WITH_EDITORONLY_DATA
	static void NewProp_bReadsAttributeData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadsAttributeData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesWritten_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesWritten;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticVariablesWritten_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticVariablesWritten;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastCompileEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastCompileEvents;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExperimentalContextData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExperimentalContextData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastExperimentalAssemblyScript;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bReadsSignificanceIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadsSignificanceIndex;
	static void NewProp_bNeedsGPUContextInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsGPUContextInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVMExecutableData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ByteCode), Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteCode_MetaData), NewProp_ByteCode_MetaData) }; // 1738183084
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode = { "OptimizedByteCode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, OptimizedByteCode), Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizedByteCode_MetaData), NewProp_OptimizedByteCode_MetaData) }; // 1738183084
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters = { "NumTempRegisters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, NumTempRegisters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTempRegisters_MetaData), NewProp_NumTempRegisters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs = { "NumUserPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, NumUserPtrs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumUserPtrs_MetaData), NewProp_NumUserPtrs_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, Parameters), Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 3940972434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters = { "InternalParameters", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, InternalParameters), Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalParameters_MetaData), NewProp_InternalParameters_MetaData) }; // 3940972434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies_Inner = { "ExternalDependencies", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraCompileDependency, METADATA_PARAMS(0, nullptr) }; // 2577883489
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies = { "ExternalDependencies", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ExternalDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalDependencies_MetaData), NewProp_ExternalDependencies_MetaData) }; // 2577883489
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters_Inner = { "BakedRapidIterationParameters", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters = { "BakedRapidIterationParameters", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, BakedRapidIterationParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedRapidIterationParameters_MetaData), NewProp_BakedRapidIterationParameters_MetaData) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTagsEditorOnly_Inner = { "CompileTagsEditorOnly", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraCompilerTag, METADATA_PARAMS(0, nullptr) }; // 4056813306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTagsEditorOnly = { "CompileTagsEditorOnly", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, CompileTagsEditorOnly), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompileTagsEditorOnly_MetaData), NewProp_CompileTagsEditorOnly_MetaData) }; // 4056813306
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags_Inner = { "CompileTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraCompilerTag, METADATA_PARAMS(0, nullptr) }; // 4056813306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags = { "CompileTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, CompileTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompileTags_MetaData), NewProp_CompileTags_MetaData) }; // 4056813306
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_Inner = { "ScriptLiterals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals = { "ScriptLiterals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ScriptLiterals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptLiterals_MetaData), NewProp_ScriptLiterals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 2955719795
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage = { "DataUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, DataUsage), Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataUsage_MetaData), NewProp_DataUsage_MetaData) }; // 4292525715
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_ValueProp = { "DataSetToParameters", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(0, nullptr) }; // 3940972434
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_Key_KeyProp = { "DataSetToParameters_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters = { "DataSetToParameters", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, DataSetToParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSetToParameters_MetaData), NewProp_DataSetToParameters_MetaData) }; // 3940972434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_Inner = { "AdditionalExternalFunctions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraFunctionSignature, METADATA_PARAMS(0, nullptr) }; // 1665547483
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions = { "AdditionalExternalFunctions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, AdditionalExternalFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalExternalFunctions_MetaData), NewProp_AdditionalExternalFunctions_MetaData) }; // 1665547483
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_UObjectInfos_Inner = { "UObjectInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptUObjectCompileInfo, METADATA_PARAMS(0, nullptr) }; // 1662083083
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_UObjectInfos = { "UObjectInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, UObjectInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UObjectInfos_MetaData), NewProp_UObjectInfos_MetaData) }; // 1662083083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_Inner = { "DataInterfaceInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo, METADATA_PARAMS(0, nullptr) }; // 629928092
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo = { "DataInterfaceInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, DataInterfaceInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataInterfaceInfo_MetaData), NewProp_DataInterfaceInfo_MetaData) }; // 629928092
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_Inner = { "CalledVMExternalFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo, METADATA_PARAMS(0, nullptr) }; // 910578968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions = { "CalledVMExternalFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, CalledVMExternalFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalledVMExternalFunctions_MetaData), NewProp_CalledVMExternalFunctions_MetaData) }; // 910578968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_Inner = { "ReadDataSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(0, nullptr) }; // 978557515
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets = { "ReadDataSets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ReadDataSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadDataSets_MetaData), NewProp_ReadDataSets_MetaData) }; // 978557515
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_Inner = { "WriteDataSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataSetProperties, METADATA_PARAMS(0, nullptr) }; // 136557021
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets = { "WriteDataSets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, WriteDataSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteDataSets_MetaData), NewProp_WriteDataSets_MetaData) }; // 136557021
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_Inner = { "StatScopes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraStatScope, METADATA_PARAMS(0, nullptr) }; // 1622566407
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes = { "StatScopes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, StatScopes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatScopes_MetaData), NewProp_StatScopes_MetaData) }; // 1622566407
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation = { "LastHlslTranslation", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastHlslTranslation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastHlslTranslation_MetaData), NewProp_LastHlslTranslation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU = { "LastHlslTranslationGPU", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastHlslTranslationGPU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastHlslTranslationGPU_MetaData), NewProp_LastHlslTranslationGPU_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation = { "LastAssemblyTranslation", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastAssemblyTranslation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastAssemblyTranslation_MetaData), NewProp_LastAssemblyTranslation_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount = { "LastOpCount", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastOpCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastOpCount_MetaData), NewProp_LastOpCount_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ShaderScriptParametersMetadata = { "ShaderScriptParametersMetadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ShaderScriptParametersMetadata), Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderScriptParametersMetadata_MetaData), NewProp_ShaderScriptParametersMetadata_MetaData) }; // 2828845662
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_Inner = { "ParameterCollectionPaths", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths = { "ParameterCollectionPaths", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ParameterCollectionPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCollectionPaths_MetaData), NewProp_ParameterCollectionPaths_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus = { "LastCompileStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastCompileStatus), Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCompileStatus_MetaData), NewProp_LastCompileStatus_MetaData) }; // 812677692
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_Inner = { "SimulationStageMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimulationStageMetaData, METADATA_PARAMS(0, nullptr) }; // 990367062
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData = { "SimulationStageMetaData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, SimulationStageMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationStageMetaData_MetaData), NewProp_SimulationStageMetaData_MetaData) }; // 990367062
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_SetBit(void* Obj)
{
	((FNiagaraVMExecutableData*)Obj)->bReadsAttributeData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData = { "bReadsAttributeData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraVMExecutableData), &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadsAttributeData_MetaData), NewProp_bReadsAttributeData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten_Inner = { "AttributesWritten", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten = { "AttributesWritten", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, AttributesWritten), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesWritten_MetaData), NewProp_AttributesWritten_MetaData) }; // 2955719795
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten_Inner = { "StaticVariablesWritten", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten = { "StaticVariablesWritten", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, StaticVariablesWritten), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticVariablesWritten_MetaData), NewProp_StaticVariablesWritten_MetaData) }; // 2475164134
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_Inner = { "LastCompileEvents", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraCompileEvent, METADATA_PARAMS(0, nullptr) }; // 1182157970
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents = { "LastCompileEvents", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastCompileEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCompileEvents_MetaData), NewProp_LastCompileEvents_MetaData) }; // 1182157970
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData_Inner = { "ExperimentalContextData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData = { "ExperimentalContextData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, ExperimentalContextData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperimentalContextData_MetaData), NewProp_ExperimentalContextData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastExperimentalAssemblyScript = { "LastExperimentalAssemblyScript", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVMExecutableData, LastExperimentalAssemblyScript), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastExperimentalAssemblyScript_MetaData), NewProp_LastExperimentalAssemblyScript_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_SetBit(void* Obj)
{
	((FNiagaraVMExecutableData*)Obj)->bReadsSignificanceIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex = { "bReadsSignificanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableData), &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadsSignificanceIndex_MetaData), NewProp_bReadsSignificanceIndex_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit_SetBit(void* Obj)
{
	((FNiagaraVMExecutableData*)Obj)->bNeedsGPUContextInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit = { "bNeedsGPUContextInit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraVMExecutableData), &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsGPUContextInit_MetaData), NewProp_bNeedsGPUContextInit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTagsEditorOnly_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTagsEditorOnly,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_UObjectInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_UObjectInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ShaderScriptParametersMetadata,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastExperimentalAssemblyScript,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraVMExecutableData",
	Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers),
	sizeof(FNiagaraVMExecutableData),
	alignof(FNiagaraVMExecutableData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.InnerSingleton;
}
// End ScriptStruct FNiagaraVMExecutableData

// Begin Enum ENiagaraInlineDynamicInputFormatTokenUsage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage;
static UEnum* ENiagaraInlineDynamicInputFormatTokenUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraInlineDynamicInputFormatTokenUsage"));
	}
	return Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraInlineDynamicInputFormatTokenUsage>()
{
	return ENiagaraInlineDynamicInputFormatTokenUsage_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines usages for inline dynamic input format tokens. */" },
		{ "Decorator.Comment", "/** The format token represents text which is displayed along with inputs. */" },
		{ "Decorator.Name", "ENiagaraInlineDynamicInputFormatTokenUsage::Decorator" },
		{ "Decorator.ToolTip", "The format token represents text which is displayed along with inputs." },
		{ "Input.Comment", "/** The format token refers to a dynamic input function input. */" },
		{ "Input.Name", "ENiagaraInlineDynamicInputFormatTokenUsage::Input" },
		{ "Input.ToolTip", "The format token refers to a dynamic input function input." },
		{ "LineBreak.Comment", "/** The format token represents a line break which will force the start a new row when sorting format tokens into groups. */" },
		{ "LineBreak.Name", "ENiagaraInlineDynamicInputFormatTokenUsage::LineBreak" },
		{ "LineBreak.ToolTip", "The format token represents a line break which will force the start a new row when sorting format tokens into groups." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Defines usages for inline dynamic input format tokens." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraInlineDynamicInputFormatTokenUsage::Input", (int64)ENiagaraInlineDynamicInputFormatTokenUsage::Input },
		{ "ENiagaraInlineDynamicInputFormatTokenUsage::Decorator", (int64)ENiagaraInlineDynamicInputFormatTokenUsage::Decorator },
		{ "ENiagaraInlineDynamicInputFormatTokenUsage::LineBreak", (int64)ENiagaraInlineDynamicInputFormatTokenUsage::LineBreak },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraInlineDynamicInputFormatTokenUsage",
	"ENiagaraInlineDynamicInputFormatTokenUsage",
	Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage()
{
	if (!Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage.InnerSingleton;
}
// End Enum ENiagaraInlineDynamicInputFormatTokenUsage

// Begin ScriptStruct FNiagaraInlineDynamicInputFormatToken
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraInlineDynamicInputFormatToken;
class UScriptStruct* FNiagaraInlineDynamicInputFormatToken::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInlineDynamicInputFormatToken.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraInlineDynamicInputFormatToken.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInlineDynamicInputFormatToken"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInlineDynamicInputFormatToken.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInlineDynamicInputFormatToken>()
{
	return FNiagaraInlineDynamicInputFormatToken::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines a single token in a format for displaying dynamic input trees inline in the UI.  These tokens can represent the\n\x09inputs to the dynamic input or additional text and layout options. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Defines a single token in a format for displaying dynamic input trees inline in the UI.  These tokens can represent the\n      inputs to the dynamic input or additional text and layout options." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** Defines how the value of this token should be used when formatting the dynamic input tree. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Defines how the value of this token should be used when formatting the dynamic input tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** The value of this token which is used for formatting an inline dynamic input tree.  The purpose of this value is different\n\x09\x09""depending on the value of the Usage property. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The value of this token which is used for formatting an inline dynamic input tree.  The purpose of this value is different\n              depending on the value of the Usage property." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Usage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Usage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInlineDynamicInputFormatToken>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::NewProp_Usage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInlineDynamicInputFormatToken, Usage), Z_Construct_UEnum_Niagara_ENiagaraInlineDynamicInputFormatTokenUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Usage_MetaData), NewProp_Usage_MetaData) }; // 4203502970
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInlineDynamicInputFormatToken, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::NewProp_Usage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::NewProp_Usage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraInlineDynamicInputFormatToken",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::PropPointers), 0),
	sizeof(FNiagaraInlineDynamicInputFormatToken),
	alignof(FNiagaraInlineDynamicInputFormatToken),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInlineDynamicInputFormatToken.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraInlineDynamicInputFormatToken.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInlineDynamicInputFormatToken.InnerSingleton;
}
// End ScriptStruct FNiagaraInlineDynamicInputFormatToken

// Begin ScriptStruct FVersionedNiagaraScriptData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData;
class UScriptStruct* FVersionedNiagaraScriptData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("VersionedNiagaraScriptData"));
	}
	return Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVersionedNiagaraScriptData>()
{
	return FVersionedNiagaraScriptData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing all of the data that can be different between different script versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Struct containing all of the data that can be different between different script versions." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionChangeDescription_MetaData[] = {
		{ "Comment", "/** What changed in this version compared to the last? Displayed to the user when upgrading to a new script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "What changed in this version compared to the last? Displayed to the user when upgrading to a new script version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleUsageBitmask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Niagara.ENiagaraScriptUsage" },
		{ "Category", "Script" },
		{ "Comment", "/** When used as a module, what are the appropriate script types for referencing this module?*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "When used as a module, what are the appropriate script types for referencing this module?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Used to break up scripts of the same Usage type in UI display.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Used to break up scripts of the same Usage type in UI display." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTagDefinitionReferences_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuggested_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** If true, this script will be added to a 'Suggested' category at the top of menus during searches */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If true, this script will be added to a 'Suggested' category at the top of menus during searches" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProvidedDependencies_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Array of Ids of dependencies provided by this module to other modules on the stack (e.g. 'ProvidesNormalizedAge') */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of Ids of dependencies provided by this module to other modules on the stack (e.g. 'ProvidesNormalizedAge')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredDependencies_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Dependencies required by this module from other modules on the stack */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Dependencies required by this module from other modules on the stack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeprecated_MetaData[] = {
		{ "Comment", "/* If this script is no longer meant to be used, this option should be set.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If this script is no longer meant to be used, this option should be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[] = {
		{ "Comment", "/* Message to display when the script is deprecated. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Message to display when the script is deprecated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationRecommendation_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Which script to use if this is deprecated.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Which script to use if this is deprecated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePythonScriptConversion_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* If true then a python script will be executed when changing from this script to the selected deprectation recommendation. This allows the current script to transfer its inputs to the new script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If true then a python script will be executed when changing from this script to the selected deprectation recommendation. This allows the current script to transfer its inputs to the new script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionScriptExecution_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Reference to a python script that is executed when the user updates from a previous version to this version. */" },
		{ "EditCondition", "bUsePythonScriptConversion" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Reference to a python script that is executed when the user updates from a previous version to this version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PythonConversionScript_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Python script to run when converting this script to the recommended deprecation update script. */" },
		{ "EditCondition", "bUsePythonScriptConversion && ConversionScriptExecution == ENiagaraPythonUpdateScriptReference::DirectTextEntry" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Python script to run when converting this script to the recommended deprecation update script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionScriptAsset_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Asset reference to a python script to run when converting this script to the recommended deprecation update script. */" },
		{ "EditCondition", "bUsePythonScriptConversion && ConversionScriptExecution == ENiagaraPythonUpdateScriptReference::ScriptAsset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Asset reference to a python script to run when converting this script to the recommended deprecation update script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionUtility_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Custom logic to convert the contents of an existing script assignment to this script.*/" },
		{ "EditCondition", "!bUsePythonScriptConversion" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Custom logic to convert the contents of an existing script assignment to this script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExperimental_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Is this script experimental and less supported? */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Is this script experimental and less supported?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentalMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The message to display when a function is marked experimental. */" },
		{ "EditCondition", "bExperimental" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The message to display when a function is marked experimental." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoteMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A message to display when adding the module to the stack. This is useful to highlight pitfalls or weird behavior of the module. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "A message to display when adding the module to the stack. This is useful to highlight pitfalls or weird behavior of the module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A message to display on UI actions handling debug draw state. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "A message to display on UI actions handling debug draw state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Defines if this script is visible to the user when searching for modules to add to an emitter.  */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Defines if this script is visible to the user when searching for modules to add to an emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericOutputTypeSelectionMode_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The mode to use when deducing the type of numeric output pins from the types of the input pins. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The mode to use when deducing the type of numeric output pins from the types of the input pins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A list of space separated keywords which can be used to find this script in editor menus. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "A list of space separated keywords which can be used to find this script in editor menus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollapsedViewFormat_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The format for the text to display in the stack if the value is collapsed.\n\x09*  This supports formatting placeholders for the function inputs, for example \"myfunc({0}, {1})\" will be converted to \"myfunc(1.23, Particles.Position)\". */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The format for the text to display in the stack if the value is collapsed.\nThis supports formatting placeholders for the function inputs, for example \"myfunc({0}, {1})\" will be converted to \"myfunc(1.23, Particles.Position)\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineExpressionFormat_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineGraphFormat_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeUsedForTypeConversions_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* If used as a dynamic input with exactly one input and output of different types, setting this to true will auto-insert this script to convert from one type to another when dragging and dropping parameters in the stack.\n\x09   For example, a script with a bool as input and a float as output will be automatically inserted in the stack when dropping a bool parameter into the float input of a module in the stack. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If used as a dynamic input with exactly one input and output of different types, setting this to true will auto-insert this script to convert from one type to another when dragging and dropping parameters in the stack.\n         For example, a script with a bool as input and a float as output will be automatically inserted in the stack when dropping a bool parameter into the float input of a module in the stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptMetaData_MetaData[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Script Metadata" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Script Metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputSections_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastGeneratedVMId_MetaData[] = {
		{ "Comment", "/** Adjusted every time ComputeVMCompilationId is called.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Adjusted every time ComputeVMCompilationId is called." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateScriptExecution_MetaData[] = {
		{ "Comment", "/** Reference to a python script that is executed when the user updates from a previous version to this version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Reference to a python script that is executed when the user updates from a previous version to this version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PythonUpdateScript_MetaData[] = {
		{ "Comment", "/** Python script to run when updating to this script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Python script to run when updating to this script version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptAsset_MetaData[] = {
		{ "Comment", "/** Asset reference to a python script to run when updating to this script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Asset reference to a python script to run when updating to this script version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDefinitionsSubscriptions_MetaData[] = {
		{ "Comment", "/** Subscriptions to parameter definitions for this script version */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Subscriptions to parameter definitions for this script version" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Comment", "/** 'Source' data/graphs for this script */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "'Source' data/graphs for this script" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
	static const UECodeGen_Private::FTextPropertyParams NewProp_VersionChangeDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModuleUsageBitmask;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetTagDefinitionReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetTagDefinitionReferences;
	static void NewProp_bSuggested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuggested;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProvidedDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProvidedDependencies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredDependencies;
	static void NewProp_bDeprecated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeprecated;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DeprecationMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeprecationRecommendation;
	static void NewProp_bUsePythonScriptConversion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePythonScriptConversion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConversionScriptExecution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionScriptExecution;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PythonConversionScript;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionScriptAsset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ConversionUtility;
	static void NewProp_bExperimental_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExperimental;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ExperimentalMessage;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NoteMessage;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DebugDrawMessage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumericOutputTypeSelectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericOutputTypeSelectionMode;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Keywords;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CollapsedViewFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlineExpressionFormat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InlineExpressionFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlineGraphFormat_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InlineGraphFormat;
	static void NewProp_bCanBeUsedForTypeConversions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeUsedForTypeConversions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScriptMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ScriptMetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputSections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastGeneratedVMId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateScriptExecution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateScriptExecution;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PythonUpdateScript;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDefinitionsSubscriptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterDefinitionsSubscriptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersionedNiagaraScriptData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, Version), Z_Construct_UScriptStruct_FNiagaraAssetVersion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) }; // 1747924701
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_VersionChangeDescription = { "VersionChangeDescription", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, VersionChangeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionChangeDescription_MetaData), NewProp_VersionChangeDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ModuleUsageBitmask = { "ModuleUsageBitmask", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ModuleUsageBitmask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleUsageBitmask_MetaData), NewProp_ModuleUsageBitmask_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_AssetTagDefinitionReferences_Inner = { "AssetTagDefinitionReferences", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraAssetTagDefinitionReference, METADATA_PARAMS(0, nullptr) }; // 304733456
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_AssetTagDefinitionReferences = { "AssetTagDefinitionReferences", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, AssetTagDefinitionReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTagDefinitionReferences_MetaData), NewProp_AssetTagDefinitionReferences_MetaData) }; // 304733456
void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested_SetBit(void* Obj)
{
	((FVersionedNiagaraScriptData*)Obj)->bSuggested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested = { "bSuggested", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuggested_MetaData), NewProp_bSuggested_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies_Inner = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ProvidedDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProvidedDependencies_MetaData), NewProp_ProvidedDependencies_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies_Inner = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraModuleDependency, METADATA_PARAMS(0, nullptr) }; // 3423758043
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, RequiredDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredDependencies_MetaData), NewProp_RequiredDependencies_MetaData) }; // 3423758043
void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated_SetBit(void* Obj)
{
	((FVersionedNiagaraScriptData*)Obj)->bDeprecated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated = { "bDeprecated", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeprecated_MetaData), NewProp_bDeprecated_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, DeprecationMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeprecationMessage_MetaData), NewProp_DeprecationMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationRecommendation = { "DeprecationRecommendation", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, DeprecationRecommendation), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeprecationRecommendation_MetaData), NewProp_DeprecationRecommendation_MetaData) };
void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bUsePythonScriptConversion_SetBit(void* Obj)
{
	((FVersionedNiagaraScriptData*)Obj)->bUsePythonScriptConversion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bUsePythonScriptConversion = { "bUsePythonScriptConversion", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bUsePythonScriptConversion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePythonScriptConversion_MetaData), NewProp_bUsePythonScriptConversion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionScriptExecution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionScriptExecution = { "ConversionScriptExecution", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ConversionScriptExecution), Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionScriptExecution_MetaData), NewProp_ConversionScriptExecution_MetaData) }; // 3904598484
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonConversionScript = { "PythonConversionScript", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, PythonConversionScript), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PythonConversionScript_MetaData), NewProp_PythonConversionScript_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionScriptAsset = { "ConversionScriptAsset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ConversionScriptAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionScriptAsset_MetaData), NewProp_ConversionScriptAsset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionUtility = { "ConversionUtility", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ConversionUtility), Z_Construct_UClass_UClass, Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionUtility_MetaData), NewProp_ConversionUtility_MetaData) };
void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental_SetBit(void* Obj)
{
	((FVersionedNiagaraScriptData*)Obj)->bExperimental = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental = { "bExperimental", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExperimental_MetaData), NewProp_bExperimental_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ExperimentalMessage = { "ExperimentalMessage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ExperimentalMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperimentalMessage_MetaData), NewProp_ExperimentalMessage_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NoteMessage = { "NoteMessage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, NoteMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoteMessage_MetaData), NewProp_NoteMessage_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DebugDrawMessage = { "DebugDrawMessage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, DebugDrawMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawMessage_MetaData), NewProp_DebugDrawMessage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, LibraryVisibility), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LibraryVisibility_MetaData), NewProp_LibraryVisibility_MetaData) }; // 4158869167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode = { "NumericOutputTypeSelectionMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, NumericOutputTypeSelectionMode), Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericOutputTypeSelectionMode_MetaData), NewProp_NumericOutputTypeSelectionMode_MetaData) }; // 1381706057
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, Keywords), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keywords_MetaData), NewProp_Keywords_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_CollapsedViewFormat = { "CollapsedViewFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, CollapsedViewFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollapsedViewFormat_MetaData), NewProp_CollapsedViewFormat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InlineExpressionFormat_Inner = { "InlineExpressionFormat", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken, METADATA_PARAMS(0, nullptr) }; // 2881879182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InlineExpressionFormat = { "InlineExpressionFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, InlineExpressionFormat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineExpressionFormat_MetaData), NewProp_InlineExpressionFormat_MetaData) }; // 2881879182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InlineGraphFormat_Inner = { "InlineGraphFormat", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken, METADATA_PARAMS(0, nullptr) }; // 2881879182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InlineGraphFormat = { "InlineGraphFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, InlineGraphFormat), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineGraphFormat_MetaData), NewProp_InlineGraphFormat_MetaData) }; // 2881879182
void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions_SetBit(void* Obj)
{
	((FVersionedNiagaraScriptData*)Obj)->bCanBeUsedForTypeConversions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions = { "bCanBeUsedForTypeConversions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeUsedForTypeConversions_MetaData), NewProp_bCanBeUsedForTypeConversions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_ValueProp = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_Key_KeyProp = { "ScriptMetaData_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ScriptMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptMetaData_MetaData), NewProp_ScriptMetaData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections_Inner = { "InputSections", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraStackSection, METADATA_PARAMS(0, nullptr) }; // 3147855551
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections = { "InputSections", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, InputSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputSections_MetaData), NewProp_InputSections_MetaData) }; // 3147855551
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LastGeneratedVMId = { "LastGeneratedVMId", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, LastGeneratedVMId), Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastGeneratedVMId_MetaData), NewProp_LastGeneratedVMId_MetaData) }; // 1366016173
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution = { "UpdateScriptExecution", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, UpdateScriptExecution), Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateScriptExecution_MetaData), NewProp_UpdateScriptExecution_MetaData) }; // 3904598484
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonUpdateScript = { "PythonUpdateScript", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, PythonUpdateScript), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PythonUpdateScript_MetaData), NewProp_PythonUpdateScript_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptAsset = { "ScriptAsset", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ScriptAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptAsset_MetaData), NewProp_ScriptAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, METADATA_PARAMS(0, nullptr) }; // 2160028313
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, ParameterDefinitionsSubscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterDefinitionsSubscriptions_MetaData), NewProp_ParameterDefinitionsSubscriptions_MetaData) }; // 2160028313
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraScriptData, Source), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_VersionChangeDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ModuleUsageBitmask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_AssetTagDefinitionReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_AssetTagDefinitionReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationRecommendation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bUsePythonScriptConversion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionScriptExecution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionScriptExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonConversionScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionScriptAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionUtility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ExperimentalMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NoteMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DebugDrawMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Keywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_CollapsedViewFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InlineExpressionFormat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InlineExpressionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InlineGraphFormat_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InlineGraphFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LastGeneratedVMId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonUpdateScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"VersionedNiagaraScriptData",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::PropPointers), 0),
	sizeof(FVersionedNiagaraScriptData),
	alignof(FVersionedNiagaraScriptData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraScriptData()
{
	if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.InnerSingleton, Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.InnerSingleton;
}
// End ScriptStruct FVersionedNiagaraScriptData

// Begin Class UNiagaraScript Function RaiseOnGPUCompilationComplete
struct Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraScript, nullptr, "RaiseOnGPUCompilationComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraScript::execRaiseOnGPUCompilationComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RaiseOnGPUCompilationComplete();
	P_NATIVE_END;
}
// End Class UNiagaraScript Function RaiseOnGPUCompilationComplete

// Begin Class UNiagaraScript
void UNiagaraScript::StaticRegisterNativesUNiagaraScript()
{
	UClass* Class = UNiagaraScript::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RaiseOnGPUCompilationComplete", &UNiagaraScript::execRaiseOnGPUCompilationComplete },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScript);
UClass* Z_Construct_UClass_UNiagaraScript_NoRegister()
{
	return UNiagaraScript::StaticClass();
}
struct Z_Construct_UClass_UNiagaraScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Runtime script for a Niagara system */" },
		{ "IncludePath", "NiagaraScript.h" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Runtime script for a Niagara system" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_Inner_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[] = {
		{ "Comment", "// how this script is to be used. cannot be private due to use of GET_MEMBER_NAME_CHECKED\n" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "how this script is to be used. cannot be private due to use of GET_MEMBER_NAME_CHECKED" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsageId_MetaData[] = {
		{ "Comment", "/** Specifies a unique id for use when there are multiple scripts with the same usage, e.g. events. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies a unique id for use when there are multiple scripts with the same usage, e.g. events." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposedVersion_MetaData[] = {
		{ "Comment", "/** The exposed version is the version that is used by default when a user adds this script somewhere. It is basically the published version and allows a script maintainer to create and test newer versions that are not used by normal users. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The exposed version is the version that is used by default when a user adds this script somewhere. It is basically the published version and allows a script maintainer to create and test newer versions that are not used by normal users." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVersioningEnabled_MetaData[] = {
		{ "Comment", "/** If true then this script asset uses active version control to track changes. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If true then this script asset uses active version control to track changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionData_MetaData[] = {
		{ "Comment", "/** Contains all of the versioned script data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Contains all of the versioned script data." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RapidIterationParameters_MetaData[] = {
		{ "Comment", "/** Contains all of the top-level values that are iterated on in the UI. These are usually \"Module\" variables in the graph. They don't necessarily have to be in the order that they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Contains all of the top-level values that are iterated on in the UI. These are usually \"Module\" variables in the graph. They don't necessarily have to be in the order that they are expected in the uniform table." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RapidIterationParametersCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionToOpenInEditor_MetaData[] = {
		{ "Comment", "/** This is used as a transient value to open a specific version in the graph editor */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "This is used as a transient value to open a specific version in the graph editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsageIndex_MetaData[] = {
		{ "Comment", "/** Which instance of the usage in the graph to use.  This is now deprecated and is handled by UsageId. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Which instance of the usage in the graph to use.  This is now deprecated and is handled by UsageId." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleUsageBitmask_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProvidedDependencies_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredDependencies_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeprecated_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationRecommendation_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionUtility_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExperimental_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentalMessage_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoteMessage_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[] = {
		{ "Comment", "/* Deprecated, use LibraryVisibility instead. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Deprecated, use LibraryVisibility instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericOutputTypeSelectionMode_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollapsedViewFormat_MetaData[] = {
		{ "Comment", "/* Deprecated, use LibraryVisibility instead. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Deprecated, use LibraryVisibility instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptMetaData_MetaData[] = {
		{ "Comment", "/* Deprecated, use LibraryVisibility instead. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Deprecated, use LibraryVisibility instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Comment", "/** 'Source' data/graphs for this script */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "'Source' data/graphs for this script" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStoreCPU_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStoreGPU_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStore_MetaData[] = {
		{ "Comment", "/** The equivalent of ScriptExecutionParamStoreCPU (or GPU) cooked for the given platform.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The equivalent of ScriptExecutionParamStoreCPU (or GPU) cooked for the given platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionBoundParameters_MetaData[] = {
		{ "Comment", "/** The cooked binding data between ScriptExecutionParamStore and RapidIterationParameters.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The cooked binding data between ScriptExecutionParamStore and RapidIterationParameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedScriptVMId_MetaData[] = {
		{ "Comment", "/** Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCompileRoots_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedScriptVM_MetaData[] = {
		{ "Comment", "/** Compiled VM bytecode and data necessary to run this script.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Compiled VM bytecode and data necessary to run this script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedParameterCollectionReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDefaultDataInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedDataInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedUserDataInterfaceBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDefaultUObjects_MetaData[] = {
		{ "Comment", "// Populated from compilation process, used to generate resolved list\n" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Populated from compilation process, used to generate resolved list" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedUObjectInfos_MetaData[] = {
		{ "Comment", "// Resolved objects are used to populate the script parameter stores, they are 1:1 mapping from variable -> object\n" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Resolved objects are used to populate the script parameter stores, they are 1:1 mapping from variable -> object" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidationRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationRules;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Usage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Usage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UsageId;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedVersion;
	static void NewProp_bVersioningEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVersioningEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VersionData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RapidIterationParameters;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RapidIterationParametersCookedEditorCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionToOpenInEditor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UsageIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModuleUsageBitmask;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProvidedDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProvidedDependencies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredDependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredDependencies;
	static void NewProp_bDeprecated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeprecated;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DeprecationMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeprecationRecommendation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ConversionUtility;
	static void NewProp_bExperimental_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExperimental;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ExperimentalMessage;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NoteMessage;
	static void NewProp_bExposeToLibrary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumericOutputTypeSelectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericOutputTypeSelectionMode;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Keywords;
	static const UECodeGen_Private::FTextPropertyParams NewProp_CollapsedViewFormat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScriptMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ScriptMetaData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStoreCPU;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStoreGPU;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionBoundParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptExecutionBoundParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedScriptVMId;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCompileRoots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveCompileRoots;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedScriptVM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedParameterCollectionReferences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedParameterCollectionReferences;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedDefaultDataInterfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedDefaultDataInterfaces;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedDataInterfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResolvedDataInterfaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedUserDataInterfaceBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResolvedUserDataInterfaceBindings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedDefaultUObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedDefaultUObjects;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedUObjectInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResolvedUObjectInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete, "RaiseOnGPUCompilationComplete" }, // 25194958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_Inner = { "ValidationRules", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraValidationRule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRules_Inner_MetaData), NewProp_ValidationRules_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules = { "ValidationRules", nullptr, (EPropertyFlags)0x0114008800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ValidationRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRules_MetaData), NewProp_ValidationRules_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, Usage), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Usage_MetaData), NewProp_Usage_MetaData) }; // 625320668
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId = { "UsageId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, UsageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsageId_MetaData), NewProp_UsageId_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExposedVersion = { "ExposedVersion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ExposedVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposedVersion_MetaData), NewProp_ExposedVersion_MetaData) };
void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled_SetBit(void* Obj)
{
	((UNiagaraScript*)Obj)->bVersioningEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled = { "bVersioningEnabled", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVersioningEnabled_MetaData), NewProp_bVersioningEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData_Inner = { "VersionData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVersionedNiagaraScriptData, METADATA_PARAMS(0, nullptr) }; // 3649377139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData = { "VersionData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, VersionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionData_MetaData), NewProp_VersionData_MetaData) }; // 3649377139
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters = { "RapidIterationParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, RapidIterationParameters), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RapidIterationParameters_MetaData), NewProp_RapidIterationParameters_MetaData) }; // 3025266078
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParametersCookedEditorCache = { "RapidIterationParametersCookedEditorCache", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, RapidIterationParametersCookedEditorCache), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RapidIterationParametersCookedEditorCache_MetaData), NewProp_RapidIterationParametersCookedEditorCache_MetaData) }; // 3025266078
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionToOpenInEditor = { "VersionToOpenInEditor", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, VersionToOpenInEditor), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionToOpenInEditor_MetaData), NewProp_VersionToOpenInEditor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex = { "UsageIndex", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, UsageIndex_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsageIndex_MetaData), NewProp_UsageIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask = { "ModuleUsageBitmask", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ModuleUsageBitmask_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleUsageBitmask_MetaData), NewProp_ModuleUsageBitmask_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, Category_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_Inner = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ProvidedDependencies_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProvidedDependencies_MetaData), NewProp_ProvidedDependencies_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_Inner = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraModuleDependency, METADATA_PARAMS(0, nullptr) }; // 3423758043
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, RequiredDependencies_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredDependencies_MetaData), NewProp_RequiredDependencies_MetaData) }; // 3423758043
void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_SetBit(void* Obj)
{
	((UNiagaraScript*)Obj)->bDeprecated_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated = { "bDeprecated", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeprecated_MetaData), NewProp_bDeprecated_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, DeprecationMessage_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeprecationMessage_MetaData), NewProp_DeprecationMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation = { "DeprecationRecommendation", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, DeprecationRecommendation_DEPRECATED), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeprecationRecommendation_MetaData), NewProp_DeprecationRecommendation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility = { "ConversionUtility", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ConversionUtility_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionUtility_MetaData), NewProp_ConversionUtility_MetaData) };
void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_SetBit(void* Obj)
{
	((UNiagaraScript*)Obj)->bExperimental_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental = { "bExperimental", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExperimental_MetaData), NewProp_bExperimental_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage = { "ExperimentalMessage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ExperimentalMessage_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperimentalMessage_MetaData), NewProp_ExperimentalMessage_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NoteMessage = { "NoteMessage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, NoteMessage_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoteMessage_MetaData), NewProp_NoteMessage_MetaData) };
void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
{
	((UNiagaraScript*)Obj)->bExposeToLibrary_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExposeToLibrary_MetaData), NewProp_bExposeToLibrary_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, LibraryVisibility_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LibraryVisibility_MetaData), NewProp_LibraryVisibility_MetaData) }; // 4158869167
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode = { "NumericOutputTypeSelectionMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, NumericOutputTypeSelectionMode_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericOutputTypeSelectionMode_MetaData), NewProp_NumericOutputTypeSelectionMode_MetaData) }; // 1381706057
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, Description_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, Keywords_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keywords_MetaData), NewProp_Keywords_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat = { "CollapsedViewFormat", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, CollapsedViewFormat_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollapsedViewFormat_MetaData), NewProp_CollapsedViewFormat_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_ValueProp = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_Key_KeyProp = { "ScriptMetaData_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ScriptMetaData_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptMetaData_MetaData), NewProp_ScriptMetaData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, Source_DEPRECATED), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU = { "ScriptExecutionParamStoreCPU", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStoreCPU), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptExecutionParamStoreCPU_MetaData), NewProp_ScriptExecutionParamStoreCPU_MetaData) }; // 3272560127
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU = { "ScriptExecutionParamStoreGPU", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStoreGPU), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptExecutionParamStoreGPU_MetaData), NewProp_ScriptExecutionParamStoreGPU_MetaData) }; // 3272560127
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore = { "ScriptExecutionParamStore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStore), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptExecutionParamStore_MetaData), NewProp_ScriptExecutionParamStore_MetaData) }; // 3272560127
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_Inner = { "ScriptExecutionBoundParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraBoundParameter, METADATA_PARAMS(0, nullptr) }; // 3542562955
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters = { "ScriptExecutionBoundParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionBoundParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptExecutionBoundParameters_MetaData), NewProp_ScriptExecutionBoundParameters_MetaData) }; // 3542562955
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId = { "CachedScriptVMId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, CachedScriptVMId), Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedScriptVMId_MetaData), NewProp_CachedScriptVMId_MetaData) }; // 1366016173
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_Inner = { "ActiveCompileRoots", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots = { "ActiveCompileRoots", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ActiveCompileRoots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCompileRoots_MetaData), NewProp_ActiveCompileRoots_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM = { "CachedScriptVM", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, CachedScriptVM), Z_Construct_UScriptStruct_FNiagaraVMExecutableData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedScriptVM_MetaData), NewProp_CachedScriptVM_MetaData) }; // 4003384606
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_Inner = { "CachedParameterCollectionReferences", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences = { "CachedParameterCollectionReferences", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, CachedParameterCollectionReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedParameterCollectionReferences_MetaData), NewProp_CachedParameterCollectionReferences_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_Inner = { "CachedDefaultDataInterfaces", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo, METADATA_PARAMS(0, nullptr) }; // 1943075001
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces = { "CachedDefaultDataInterfaces", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, CachedDefaultDataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDefaultDataInterfaces_MetaData), NewProp_CachedDefaultDataInterfaces_MetaData) }; // 1943075001
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedDataInterfaces_Inner = { "ResolvedDataInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptResolvedDataInterfaceInfo, METADATA_PARAMS(0, nullptr) }; // 4137634986
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedDataInterfaces = { "ResolvedDataInterfaces", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ResolvedDataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedDataInterfaces_MetaData), NewProp_ResolvedDataInterfaces_MetaData) }; // 4137634986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedUserDataInterfaceBindings_Inner = { "ResolvedUserDataInterfaceBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraResolvedUserDataInterfaceBinding, METADATA_PARAMS(0, nullptr) }; // 1649462364
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedUserDataInterfaceBindings = { "ResolvedUserDataInterfaceBindings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ResolvedUserDataInterfaceBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedUserDataInterfaceBindings_MetaData), NewProp_ResolvedUserDataInterfaceBindings_MetaData) }; // 1649462364
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultUObjects_Inner = { "CachedDefaultUObjects", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraScriptUObjectCompileInfo, METADATA_PARAMS(0, nullptr) }; // 1662083083
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultUObjects = { "CachedDefaultUObjects", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, CachedDefaultUObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDefaultUObjects_MetaData), NewProp_CachedDefaultUObjects_MetaData) }; // 1662083083
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedUObjectInfos_Inner = { "ResolvedUObjectInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraResolvedUObjectInfo, METADATA_PARAMS(0, nullptr) }; // 541572632
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedUObjectInfos = { "ResolvedUObjectInfos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraScript, ResolvedUObjectInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedUObjectInfos_MetaData), NewProp_ResolvedUObjectInfos_MetaData) }; // 541572632
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraScript_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExposedVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParametersCookedEditorCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionToOpenInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NoteMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedDataInterfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedDataInterfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedUserDataInterfaceBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedUserDataInterfaceBindings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultUObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultUObjects,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedUObjectInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ResolvedUObjectInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraScriptBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScript_Statics::ClassParams = {
	&UNiagaraScript::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraScript_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraScript()
{
	if (!Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton, Z_Construct_UClass_UNiagaraScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraScript>()
{
	return UNiagaraScript::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScript);
UNiagaraScript::~UNiagaraScript() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraScript)
// End Class UNiagaraScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUnusedAttributeBehaviour_StaticEnum, TEXT("EUnusedAttributeBehaviour"), &Z_Registration_Info_UEnum_EUnusedAttributeBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1445910230U) },
		{ ENiagaraModuleDependencyType_StaticEnum, TEXT("ENiagaraModuleDependencyType"), &Z_Registration_Info_UEnum_ENiagaraModuleDependencyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2139529885U) },
		{ ENiagaraModuleDependencyScriptConstraint_StaticEnum, TEXT("ENiagaraModuleDependencyScriptConstraint"), &Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2616803412U) },
		{ ENiagaraScriptLibraryVisibility_StaticEnum, TEXT("ENiagaraScriptLibraryVisibility"), &Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4158869167U) },
		{ ENiagaraScriptTemplateSpecification_StaticEnum, TEXT("ENiagaraScriptTemplateSpecification"), &Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 143822808U) },
		{ ENiagaraEmitterDefaultSummaryState_StaticEnum, TEXT("ENiagaraEmitterDefaultSummaryState"), &Z_Registration_Info_UEnum_ENiagaraEmitterDefaultSummaryState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 565332519U) },
		{ ENiagaraModuleDependencyUsage_StaticEnum, TEXT("ENiagaraModuleDependencyUsage"), &Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1132878307U) },
		{ ENiagaraInlineDynamicInputFormatTokenUsage_StaticEnum, TEXT("ENiagaraInlineDynamicInputFormatTokenUsage"), &Z_Registration_Info_UEnum_ENiagaraInlineDynamicInputFormatTokenUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4203502970U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraModuleDependency::StaticStruct, Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewStructOps, TEXT("NiagaraModuleDependency"), &Z_Registration_Info_UScriptStruct_NiagaraModuleDependency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraModuleDependency), 3423758043U) },
		{ FNiagaraCompilerTag::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewStructOps, TEXT("NiagaraCompilerTag"), &Z_Registration_Info_UScriptStruct_NiagaraCompilerTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCompilerTag), 4056813306U) },
		{ FNiagaraVMExecutableDataId::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewStructOps, TEXT("NiagaraVMExecutableDataId"), &Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVMExecutableDataId), 1366016173U) },
		{ FNiagaraVMExecutableByteCode::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewStructOps, TEXT("NiagaraVMExecutableByteCode"), &Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVMExecutableByteCode), 1738183084U) },
		{ FNiagaraVMExecutableData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewStructOps, TEXT("NiagaraVMExecutableData"), &Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVMExecutableData), 4003384606U) },
		{ FNiagaraInlineDynamicInputFormatToken::StaticStruct, Z_Construct_UScriptStruct_FNiagaraInlineDynamicInputFormatToken_Statics::NewStructOps, TEXT("NiagaraInlineDynamicInputFormatToken"), &Z_Registration_Info_UScriptStruct_NiagaraInlineDynamicInputFormatToken, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraInlineDynamicInputFormatToken), 2881879182U) },
		{ FVersionedNiagaraScriptData::StaticStruct, Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewStructOps, TEXT("VersionedNiagaraScriptData"), &Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersionedNiagaraScriptData), 3649377139U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScript, UNiagaraScript::StaticClass, TEXT("UNiagaraScript"), &Z_Registration_Info_UClass_UNiagaraScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScript), 4134060587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_1008392913(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
