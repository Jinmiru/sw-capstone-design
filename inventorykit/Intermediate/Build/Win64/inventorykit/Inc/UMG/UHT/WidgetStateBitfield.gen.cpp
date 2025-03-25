// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/States/WidgetStateBitfield.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStateBitfield() {}

// Begin Cross Module References
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetStateBitfield();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FWidgetStateBitfield
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetStateBitfield;
class UScriptStruct* FWidgetStateBitfield::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetStateBitfield.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetStateBitfield.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetStateBitfield, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetStateBitfield"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetStateBitfield.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetStateBitfield>()
{
	return FWidgetStateBitfield::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetStateBitfield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Expensive to create wrapper for binary and enumerated widget states that supports\n * FName-based interaction and dynamic states populated in an IWidgetStateNameMapper\n * May be used to represent either a target widget state combination, or an actual widgets state\n * \n * All this does is cache the integer results of dynamic FName state lookup from an IWidgetStateNameMapper\n * So it's prefertable to create these once and reuse. In particular, if broadcasting current state\n * determine the correct bitfield to modify the existing state ahead of time. Save that bitfield and use it\n * when performing state-modifications. Likewise when performing state tests, try to construct the relevant\n * bitfield ahead of time & store that to later be compared against  \n */" },
		{ "ModuleRelativePath", "Public/Binding/States/WidgetStateBitfield.h" },
		{ "ToolTip", "Expensive to create wrapper for binary and enumerated widget states that supports\nFName-based interaction and dynamic states populated in an IWidgetStateNameMapper\nMay be used to represent either a target widget state combination, or an actual widgets state\n\nAll this does is cache the integer results of dynamic FName state lookup from an IWidgetStateNameMapper\nSo it's prefertable to create these once and reuse. In particular, if broadcasting current state\ndetermine the correct bitfield to modify the existing state ahead of time. Save that bitfield and use it\nwhen performing state-modifications. Likewise when performing state tests, try to construct the relevant\nbitfield ahead of time & store that to later be compared against" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetStateBitfield>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetStateBitfield_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"WidgetStateBitfield",
	nullptr,
	0,
	sizeof(FWidgetStateBitfield),
	alignof(FWidgetStateBitfield),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStateBitfield_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetStateBitfield_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetStateBitfield()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetStateBitfield.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetStateBitfield.InnerSingleton, Z_Construct_UScriptStruct_FWidgetStateBitfield_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetStateBitfield.InnerSingleton;
}
// End ScriptStruct FWidgetStateBitfield

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateBitfield_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetStateBitfield::StaticStruct, Z_Construct_UScriptStruct_FWidgetStateBitfield_Statics::NewStructOps, TEXT("WidgetStateBitfield"), &Z_Registration_Info_UScriptStruct_WidgetStateBitfield, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetStateBitfield), 3225327680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateBitfield_h_2651784962(TEXT("/Script/UMG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateBitfield_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateBitfield_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
