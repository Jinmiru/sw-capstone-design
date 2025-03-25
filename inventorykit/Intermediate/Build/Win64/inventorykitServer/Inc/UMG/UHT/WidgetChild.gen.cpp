// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetChild.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetChild() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetChild();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FWidgetChild
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetChild;
class UScriptStruct* FWidgetChild::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetChild.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetChild.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetChild, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetChild"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetChild.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetChild>()
{
	return FWidgetChild::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetChild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represent a Widget present in the Tree Widget of the UserWidget\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetChild.h" },
		{ "ToolTip", "Represent a Widget present in the Tree Widget of the UserWidget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** This either the widget to focus, OR the name of the function to call. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetChild.h" },
		{ "ToolTip", "This either the widget to focus, OR the name of the function to call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetChild.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WidgetPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetChild>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetChild_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetChild, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FWidgetChild_Statics::NewProp_WidgetPtr = { "WidgetPtr", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetChild, WidgetPtr), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetPtr_MetaData), NewProp_WidgetPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetChild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetChild_Statics::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetChild_Statics::NewProp_WidgetPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetChild_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetChild_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"WidgetChild",
	Z_Construct_UScriptStruct_FWidgetChild_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetChild_Statics::PropPointers),
	sizeof(FWidgetChild),
	alignof(FWidgetChild),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetChild_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetChild_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetChild()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetChild.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetChild.InnerSingleton, Z_Construct_UScriptStruct_FWidgetChild_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetChild.InnerSingleton;
}
// End ScriptStruct FWidgetChild

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetChild_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetChild::StaticStruct, Z_Construct_UScriptStruct_FWidgetChild_Statics::NewStructOps, TEXT("WidgetChild"), &Z_Registration_Info_UScriptStruct_WidgetChild, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetChild), 3026455905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetChild_h_1086933517(TEXT("/Script/UMG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetChild_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetChild_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
