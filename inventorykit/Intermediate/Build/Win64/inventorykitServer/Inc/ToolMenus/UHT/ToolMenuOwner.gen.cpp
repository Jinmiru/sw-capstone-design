// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenuOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuOwner() {}

// Begin Cross Module References
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin ScriptStruct FToolMenuOwner
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuOwner;
class UScriptStruct* FToolMenuOwner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuOwner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuOwner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuOwner, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuOwner"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuOwner.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuOwner>()
{
	return FToolMenuOwner::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the owner of a menu. Can be used when registering menus\n * to later unregistering all menus created by a specified owner.\n *\n * See UToolMenus::UnregisterOwnerByName and FToolMenuOwnerScoped which relate to this.\n */" },
		{ "HasNativeBreak", "/Script/ToolMenus.ToolMenuEntryExtensions.BreakToolMenuOwner" },
		{ "HasNativeMake", "/Script/ToolMenus.ToolMenuEntryExtensions.MakeToolMenuOwner" },
		{ "ModuleRelativePath", "Public/ToolMenuOwner.h" },
		{ "ToolTip", "Represents the owner of a menu. Can be used when registering menus\nto later unregistering all menus created by a specified owner.\n\nSee UToolMenus::UnregisterOwnerByName and FToolMenuOwnerScoped which relate to this." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuOwner>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuOwner_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuOwner",
	nullptr,
	0,
	sizeof(FToolMenuOwner),
	alignof(FToolMenuOwner),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuOwner_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuOwner_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuOwner.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuOwner.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuOwner_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuOwner.InnerSingleton;
}
// End ScriptStruct FToolMenuOwner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToolMenuOwner::StaticStruct, Z_Construct_UScriptStruct_FToolMenuOwner_Statics::NewStructOps, TEXT("ToolMenuOwner"), &Z_Registration_Info_UScriptStruct_ToolMenuOwner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuOwner), 1275886166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_126053198(TEXT("/Script/ToolMenus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuOwner_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
