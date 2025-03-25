// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinWeightProfile() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSkinWeightProfileInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo;
class UScriptStruct* FSkinWeightProfileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkinWeightProfileInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkinWeightProfileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkinWeightProfileInfo>()
{
	return FSkinWeightProfileInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing user facing properties, and is used to identify profiles at the SkeletalMesh level*/" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Structure storing user facing properties, and is used to identify profiles at the SkeletalMesh level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "Comment", "/** Name of the Skin Weight Profile*/" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Name of the Skin Weight Profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProfile_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "Comment", "/** Whether or not this Profile should be considered the Default loaded for specific LODs rather than the original Skin Weights of the Skeletal Mesh */" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Whether or not this Profile should be considered the Default loaded for specific LODs rather than the original Skin Weights of the Skeletal Mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProfileFromLODIndex_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When DefaultProfile is set any LOD below this LOD Index will override the Skin Weights of the Skeletal Mesh with the Skin Weights from this Profile */" },
		{ "DisplayName", "Default Profile from LOD Index" },
		{ "EditCondition", "DefaultProfile" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "When DefaultProfile is set any LOD below this LOD Index will override the Skin Weights of the Skeletal Mesh with the Skin Weights from this Profile" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerLODSourceFiles_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultProfileFromLODIndex;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerLODSourceFiles_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerLODSourceFiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerLODSourceFiles;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkinWeightProfileInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkinWeightProfileInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile = { "DefaultProfile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkinWeightProfileInfo, DefaultProfile), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultProfile_MetaData), NewProp_DefaultProfile_MetaData) }; // 846681800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex = { "DefaultProfileFromLODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkinWeightProfileInfo, DefaultProfileFromLODIndex), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultProfileFromLODIndex_MetaData), NewProp_DefaultProfileFromLODIndex_MetaData) }; // 1262733314
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_ValueProp = { "PerLODSourceFiles", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_Key_KeyProp = { "PerLODSourceFiles_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles = { "PerLODSourceFiles", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkinWeightProfileInfo, PerLODSourceFiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerLODSourceFiles_MetaData), NewProp_PerLODSourceFiles_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkinWeightProfileInfo",
	Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers),
	sizeof(FSkinWeightProfileInfo),
	alignof(FSkinWeightProfileInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.InnerSingleton;
}
// End ScriptStruct FSkinWeightProfileInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkinWeightProfileInfo::StaticStruct, Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewStructOps, TEXT("SkinWeightProfileInfo"), &Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkinWeightProfileInfo), 2102121985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_2831028580(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
