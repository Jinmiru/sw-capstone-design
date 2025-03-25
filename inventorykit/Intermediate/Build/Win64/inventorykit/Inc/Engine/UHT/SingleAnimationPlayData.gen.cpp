// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleAnimationPlayData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSingleAnimationPlayData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SingleAnimationPlayData;
class UScriptStruct* FSingleAnimationPlayData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleAnimationPlayData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SingleAnimationPlayData"));
	}
	return Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSingleAnimationPlayData>()
{
	return FSingleAnimationPlayData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// @todo in the future, we should make this one UObject\n// and have detail customization to display different things\n// The default sequence to play on this skeletal mesh\n" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "@todo in the future, we should make this one UObject\nand have detail customization to display different things\nThe default sequence to play on this skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSavedLooping_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Default setting for looping for SequenceToPlay. This is not current state of looping. */" },
		{ "DisplayName", "Looping" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for looping for SequenceToPlay. This is not current state of looping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSavedPlaying_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Default setting for playing for SequenceToPlay. This is not current state of playing. */" },
		{ "DisplayName", "Playing" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for playing for SequenceToPlay. This is not current state of playing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedPosition_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Default setting for position of SequenceToPlay to play. */" },
		{ "DisplayName", "Initial Position" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for position of SequenceToPlay to play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedPlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Default setting for play rate of SequenceToPlay to play. */" },
		{ "DisplayName", "PlayRate" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for play rate of SequenceToPlay to play." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToPlay;
	static void NewProp_bSavedLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedLooping;
	static void NewProp_bSavedPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedPlaying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleAnimationPlayData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleAnimationPlayData, AnimToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimToPlay_MetaData), NewProp_AnimToPlay_MetaData) };
void Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_SetBit(void* Obj)
{
	((FSingleAnimationPlayData*)Obj)->bSavedLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping = { "bSavedLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSingleAnimationPlayData), &Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSavedLooping_MetaData), NewProp_bSavedLooping_MetaData) };
void Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_SetBit(void* Obj)
{
	((FSingleAnimationPlayData*)Obj)->bSavedPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying = { "bSavedPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSingleAnimationPlayData), &Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSavedPlaying_MetaData), NewProp_bSavedPlaying_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition = { "SavedPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleAnimationPlayData, SavedPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedPosition_MetaData), NewProp_SavedPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate = { "SavedPlayRate", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleAnimationPlayData, SavedPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedPlayRate_MetaData), NewProp_SavedPlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SingleAnimationPlayData",
	Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers),
	sizeof(FSingleAnimationPlayData),
	alignof(FSingleAnimationPlayData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData()
{
	if (!Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.InnerSingleton, Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SingleAnimationPlayData.InnerSingleton;
}
// End ScriptStruct FSingleAnimationPlayData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSingleAnimationPlayData::StaticStruct, Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewStructOps, TEXT("SingleAnimationPlayData"), &Z_Registration_Info_UScriptStruct_SingleAnimationPlayData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSingleAnimationPlayData), 3798559383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_561383652(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SingleAnimationPlayData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
