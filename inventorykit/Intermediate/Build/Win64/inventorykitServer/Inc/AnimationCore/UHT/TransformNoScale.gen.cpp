// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimationCore/Public/TransformNoScale.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformNoScale() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformNoScale();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References

// Begin ScriptStruct FTransformNoScale
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformNoScale;
class UScriptStruct* FTransformNoScale::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformNoScale.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformNoScale.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformNoScale, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("TransformNoScale"));
	}
	return Z_Registration_Info_UScriptStruct_TransformNoScale.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FTransformNoScale>()
{
	return FTransformNoScale::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransformNoScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TransformNoScale.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** The translation of this transform */" },
		{ "ModuleRelativePath", "Public/TransformNoScale.h" },
		{ "ToolTip", "The translation of this transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** The rotation of this transform */" },
		{ "ModuleRelativePath", "Public/TransformNoScale.h" },
		{ "ToolTip", "The rotation of this transform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformNoScale>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformNoScale_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformNoScale, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformNoScale_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformNoScale, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformNoScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformNoScale_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformNoScale_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformNoScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformNoScale_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	nullptr,
	&NewStructOps,
	"TransformNoScale",
	Z_Construct_UScriptStruct_FTransformNoScale_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformNoScale_Statics::PropPointers),
	sizeof(FTransformNoScale),
	alignof(FTransformNoScale),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformNoScale_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformNoScale_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransformNoScale()
{
	if (!Z_Registration_Info_UScriptStruct_TransformNoScale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformNoScale.InnerSingleton, Z_Construct_UScriptStruct_FTransformNoScale_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TransformNoScale.InnerSingleton;
}
// End ScriptStruct FTransformNoScale

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_TransformNoScale_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTransformNoScale::StaticStruct, Z_Construct_UScriptStruct_FTransformNoScale_Statics::NewStructOps, TEXT("TransformNoScale"), &Z_Registration_Info_UScriptStruct_TransformNoScale, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformNoScale), 3566477645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_TransformNoScale_h_866590686(TEXT("/Script/AnimationCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_TransformNoScale_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_TransformNoScale_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
