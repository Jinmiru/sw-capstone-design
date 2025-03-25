// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationBinding() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FWidgetAnimationBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetAnimationBinding;
class UScriptStruct* FWidgetAnimationBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAnimationBinding, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetAnimationBinding"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetAnimationBinding>()
{
	return FWidgetAnimationBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A single object bound to a UMG sequence.\n */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
		{ "ToolTip", "A single object bound to a UMG sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotWidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRootWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotWidgetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationGuid;
	static void NewProp_bIsRootWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRootWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAnimationBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAnimationBinding, WidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetName_MetaData), NewProp_WidgetName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName = { "SlotWidgetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAnimationBinding, SlotWidgetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotWidgetName_MetaData), NewProp_SlotWidgetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid = { "AnimationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAnimationBinding, AnimationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationGuid_MetaData), NewProp_AnimationGuid_MetaData) };
void Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_SetBit(void* Obj)
{
	((FWidgetAnimationBinding*)Obj)->bIsRootWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget = { "bIsRootWidget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWidgetAnimationBinding), &Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRootWidget_MetaData), NewProp_bIsRootWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"WidgetAnimationBinding",
	Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers),
	sizeof(FWidgetAnimationBinding),
	alignof(FWidgetAnimationBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.InnerSingleton, Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.InnerSingleton;
}
// End ScriptStruct FWidgetAnimationBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetAnimationBinding::StaticStruct, Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewStructOps, TEXT("WidgetAnimationBinding"), &Z_Registration_Info_UScriptStruct_WidgetAnimationBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetAnimationBinding), 1740454856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_3646604459(TEXT("/Script/UMG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
