// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimationCore/Public/CommonAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonAnimTypes() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References

// Begin ScriptStruct FAxis
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Axis;
class UScriptStruct* FAxis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Axis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Axis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxis, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("Axis"));
	}
	return Z_Registration_Info_UScriptStruct_Axis.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FAxis>()
{
	return FAxis::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Axis to represent direction */" },
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
		{ "ToolTip", "Axis to represent direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "Category", "FAxis" },
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInLocalSpace_MetaData[] = {
		{ "Category", "FAxis" },
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static void NewProp_bInLocalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLocalSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxis>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxis, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
void Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_SetBit(void* Obj)
{
	((FAxis*)Obj)->bInLocalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace = { "bInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAxis), &Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInLocalSpace_MetaData), NewProp_bInLocalSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxis_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"Axis",
	Z_Construct_UScriptStruct_FAxis_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::PropPointers),
	sizeof(FAxis),
	alignof(FAxis),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAxis_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAxis()
{
	if (!Z_Registration_Info_UScriptStruct_Axis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Axis.InnerSingleton, Z_Construct_UScriptStruct_FAxis_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Axis.InnerSingleton;
}
// End ScriptStruct FAxis

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAxis::StaticStruct, Z_Construct_UScriptStruct_FAxis_Statics::NewStructOps, TEXT("Axis"), &Z_Registration_Info_UScriptStruct_Axis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxis), 330961940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_2901781606(TEXT("/Script/AnimationCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_CommonAnimTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
