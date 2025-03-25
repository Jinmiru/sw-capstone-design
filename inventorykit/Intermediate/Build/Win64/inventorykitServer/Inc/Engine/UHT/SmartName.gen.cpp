// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartName() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSmartNameMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartNameMapping;
class UScriptStruct* FSmartNameMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameMapping"));
	}
	return Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartNameMapping>()
{
	return FSmartNameMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSmartNameMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// DEPRECATED - smart names and their mappings are no longer used\n" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "DEPRECATED - smart names and their mappings are no longer used" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartNameMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SmartNameMapping",
	nullptr,
	0,
	sizeof(FSmartNameMapping),
	alignof(FSmartNameMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping()
{
	if (!Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton, Z_Construct_UScriptStruct_FSmartNameMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton;
}
// End ScriptStruct FSmartNameMapping

// Begin ScriptStruct FSmartNameContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartNameContainer;
class UScriptStruct* FSmartNameContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameContainer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameContainer"));
	}
	return Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartNameContainer>()
{
	return FSmartNameContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSmartNameContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartNameContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SmartNameContainer",
	nullptr,
	0,
	sizeof(FSmartNameContainer),
	alignof(FSmartNameContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer()
{
	if (!Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton, Z_Construct_UScriptStruct_FSmartNameContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton;
}
// End ScriptStruct FSmartNameContainer

// Begin ScriptStruct FSmartName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartName;
class UScriptStruct* FSmartName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartName, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SmartName"));
	}
	return Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartName>()
{
	return FSmartName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSmartName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "FSmartName" },
		{ "Comment", "// name \n" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartName, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SmartName",
	Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers),
	sizeof(FSmartName),
	alignof(FSmartName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSmartName()
{
	if (!Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton, Z_Construct_UScriptStruct_FSmartName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton;
}
// End ScriptStruct FSmartName

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSmartNameMapping::StaticStruct, Z_Construct_UScriptStruct_FSmartNameMapping_Statics::NewStructOps, TEXT("SmartNameMapping"), &Z_Registration_Info_UScriptStruct_SmartNameMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartNameMapping), 2648166616U) },
		{ FSmartNameContainer::StaticStruct, Z_Construct_UScriptStruct_FSmartNameContainer_Statics::NewStructOps, TEXT("SmartNameContainer"), &Z_Registration_Info_UScriptStruct_SmartNameContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartNameContainer), 666233554U) },
		{ FSmartName::StaticStruct, Z_Construct_UScriptStruct_FSmartName_Statics::NewStructOps, TEXT("SmartName"), &Z_Registration_Info_UScriptStruct_SmartName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartName), 217330421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_3246023605(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
