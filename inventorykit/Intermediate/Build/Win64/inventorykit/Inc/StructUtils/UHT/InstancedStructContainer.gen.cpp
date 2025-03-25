// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructUtils/Public/InstancedStructContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStructContainer() {}

// Begin Cross Module References
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer();
UPackage* Z_Construct_UPackage__Script_StructUtils();
// End Cross Module References

// Begin ScriptStruct FInstancedStructContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStructContainer;
class UScriptStruct* FInstancedStructContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStructContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStructContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStructContainer, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("InstancedStructContainer"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStructContainer.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FInstancedStructContainer>()
{
	return FInstancedStructContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedStructContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Array of heterogeneous structs. Can be used as a property, supports serialization,\n * but does not have type customizations (no editing in the UI).\n *\n * If you need UI editable array of heterogeneous structs, use TArray<FInstancedStruct> instead.\n *\n * The array item values and the index to an item are stored in one contiguous block of memory.\n * The size required to specific layout of structs is larger than the sum of their sizes due to alignment,\n * and because the index to the structs is stored along with the value memory. Each item takes extra 16 bytes\n * for index. If your items are roughly same size, a TArray<TVariant<>> might be more performant.\n *\n * Adding new items is more expensive than on regular TArray<>, layout of the structs needs to be updated,\n * and initialization is done via UScriptStruct. Adding and removing items should be done in chunks if possible.\n *\n * The allocation of new items does not allocate extra space as most array implementations do.\n * Use Reserve() to reserve certain sized buffer in bytes if that is applicable to your use case.\n */" },
		{ "ModuleRelativePath", "Public/InstancedStructContainer.h" },
		{ "ToolTip", "Array of heterogeneous structs. Can be used as a property, supports serialization,\nbut does not have type customizations (no editing in the UI).\n\nIf you need UI editable array of heterogeneous structs, use TArray<FInstancedStruct> instead.\n\nThe array item values and the index to an item are stored in one contiguous block of memory.\nThe size required to specific layout of structs is larger than the sum of their sizes due to alignment,\nand because the index to the structs is stored along with the value memory. Each item takes extra 16 bytes\nfor index. If your items are roughly same size, a TArray<TVariant<>> might be more performant.\n\nAdding new items is more expensive than on regular TArray<>, layout of the structs needs to be updated,\nand initialization is done via UScriptStruct. Adding and removing items should be done in chunks if possible.\n\nThe allocation of new items does not allocate extra space as most array implementations do.\nUse Reserve() to reserve certain sized buffer in bytes if that is applicable to your use case." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStructContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	nullptr,
	&NewStructOps,
	"InstancedStructContainer",
	nullptr,
	0,
	sizeof(FInstancedStructContainer),
	alignof(FInstancedStructContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStructContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStructContainer.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedStructContainer.InnerSingleton;
}
// End ScriptStruct FInstancedStructContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInstancedStructContainer::StaticStruct, Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::NewStructOps, TEXT("InstancedStructContainer"), &Z_Registration_Info_UScriptStruct_InstancedStructContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStructContainer), 2236846424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_3221297458(TEXT("/Script/StructUtils"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
