// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimationSettings.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Animation/MirrorDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings();
ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomAttributeBlendType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributeSetting();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorFindReplaceExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimationSettings Function GetBoneCustomAttributeNamesToImport
struct Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics
{
	struct AnimationSettings_eventGetBoneCustomAttributeNamesToImport_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Gets the complete list of bone animation attribute names to consider for import.\n\x09    This includes the designated timecode animation attributes as well as other bone animation attributes identified in the settings. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Gets the complete list of bone animation attribute names to consider for import.\n          This includes the designated timecode animation attributes as well as other bone animation attributes identified in the settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationSettings_eventGetBoneCustomAttributeNamesToImport_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSettings, nullptr, "GetBoneCustomAttributeNamesToImport", nullptr, nullptr, Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::AnimationSettings_eventGetBoneCustomAttributeNamesToImport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::AnimationSettings_eventGetBoneCustomAttributeNamesToImport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationSettings::execGetBoneCustomAttributeNamesToImport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetBoneCustomAttributeNamesToImport();
	P_NATIVE_END;
}
// End Class UAnimationSettings Function GetBoneCustomAttributeNamesToImport

// Begin Class UAnimationSettings
void UAnimationSettings::StaticRegisterNativesUAnimationSettings()
{
	UClass* Class = UAnimationSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoneCustomAttributeNamesToImport", &UAnimationSettings::execGetBoneCustomAttributeNamesToImport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSettings);
UClass* Z_Construct_UClass_UAnimationSettings_NoRegister()
{
	return UAnimationSettings::StaticClass();
}
struct Z_Construct_UClass_UAnimationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default animation settings.\n */" },
		{ "DisplayName", "Animation" },
		{ "IncludePath", "Animation/AnimationSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Default animation settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressCommandletVersion_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Compression version for recompress commandlet, bump this to trigger full recompressed, otherwise only new imported animations will be recompressed */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Compression version for recompress commandlet, bump this to trigger full recompressed, otherwise only new imported animations will be recompressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyEndEffectorsMatchNameArray_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** List of bone names to treat with higher precision, in addition to any bones with sockets */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "List of bone names to treat with higher precision, in addition to any bones with sockets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceRecompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true, this will forcibly recompress every animation, this should not be checked in enabled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, this will forcibly recompress every animation, this should not be checked in enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceBelowThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini) \n\x09* Also known as \"Run Current Default Compressor\"\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini)\nAlso known as \"Run Current Default Compressor\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRaiseMaxErrorToExisting_MetaData[] = {
		{ "Comment", "/*, EditAnywhere, Category = Compression*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "No longer used." },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", ", EditAnywhere, Category = Compression" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerformanceLog_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, recompression will log performance information */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, recompression will log performance information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStripAnimationDataOnDedicatedServer_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, animation track data will be stripped from dedicated server cooked data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, animation track data will be stripped from dedicated server cooked data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTickAnimationOnSkeletalMeshInit_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, pre-4.19 behavior of zero-ticking animations during skeletal mesh init */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, pre-4.19 behavior of zero-ticking animations during skeletal mesh init" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneTimecodeCustomAttributeNameSettings_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Names that identify bone animation attributes representing the individual components of a timecode and a subframe along with a take name.\n\x09    These will be included in the list of bone custom attribute names to import. */" },
		{ "DisplayName", "Bone Timecode Animation Attribute name settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Names that identify bone animation attributes representing the individual components of a timecode and a subframe along with a take name.\n          These will be included in the list of bone custom attribute names to import." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneCustomAttributesNames_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** List of animation attribute names to import directly on their corresponding bone names. The meaning field allows to contextualize the attribute name and customize tooling for it. */" },
		{ "DisplayName", "Bone Animation Attributes names" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "List of animation attribute names to import directly on their corresponding bone names. The meaning field allows to contextualize the attribute name and customize tooling for it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNamesWithCustomAttributes_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** List of bone names for which all animation attributes are directly imported on the bone. */" },
		{ "DisplayName", "Bone names with Animation Attributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "List of bone names for which all animation attributes are directly imported on the bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBlendModes_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Animation Attribute specific blend types (by name) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Animation Attribute specific blend types (by name)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeBlendMode_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Default Animation Attribute blend type */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Default Animation Attribute blend type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformAttributeNames_MetaData[] = {
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Names to match against when importing FBX node transform curves as attributes (can use ? and * wildcards) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Names to match against when importing FBX node transform curves as attributes (can use ? and * wildcards)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedStructAttributes_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.UserDefinedStruct" },
		{ "Category", "AnimationAttributes" },
		{ "Comment", "/** Register user defined structs as animation attributes*/" },
		{ "DisplayName", "User Defined Struct Animation Attributes (Runtime only, Non-blendable)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Register user defined structs as animation attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorFindReplaceExpressions_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "Comment", "/** Find and Replace Expressions used for mirroring  */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Find and Replace Expressions used for mirroring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameRate_MetaData[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/** Project specific default frame-rate used when (re)initializing any animation based data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Project specific default frame-rate used when (re)initializing any animation based data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceSupportedFrameRates_MetaData[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/** Whether to enforce the project to only use entries from SupportedFrameRates for the animation assets, if disable will warn instead */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Whether to enforce the project to only use entries from SupportedFrameRates for the animation assets, if disable will warn instead" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressCommandletVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyEndEffectorsMatchNameArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyEndEffectorsMatchNameArray;
	static void NewProp_ForceRecompression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceRecompression;
	static void NewProp_bForceBelowThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceBelowThreshold;
	static void NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstRecompressUsingCurrentOrDefault;
	static void NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaiseMaxErrorToExisting;
	static void NewProp_bEnablePerformanceLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerformanceLog;
	static void NewProp_bStripAnimationDataOnDedicatedServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripAnimationDataOnDedicatedServer;
	static void NewProp_bTickAnimationOnSkeletalMeshInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickAnimationOnSkeletalMeshInit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTimecodeCustomAttributeNameSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneCustomAttributesNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneCustomAttributesNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BoneNamesWithCustomAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNamesWithCustomAttributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeBlendModes_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeBlendModes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeBlendModes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeBlendModes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAttributeBlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultAttributeBlendMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransformAttributeNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformAttributeNames;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UserDefinedStructAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserDefinedStructAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MirrorFindReplaceExpressions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MirrorFindReplaceExpressions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFrameRate;
	static void NewProp_bEnforceSupportedFrameRates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceSupportedFrameRates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationSettings_GetBoneCustomAttributeNamesToImport, "GetBoneCustomAttributeNamesToImport" }, // 328789973
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion = { "CompressCommandletVersion", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, CompressCommandletVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressCommandletVersion_MetaData), NewProp_CompressCommandletVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_Inner = { "KeyEndEffectorsMatchNameArray", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray = { "KeyEndEffectorsMatchNameArray", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, KeyEndEffectorsMatchNameArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyEndEffectorsMatchNameArray_MetaData), NewProp_KeyEndEffectorsMatchNameArray_MetaData) };
void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit(void* Obj)
{
	((UAnimationSettings*)Obj)->ForceRecompression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression = { "ForceRecompression", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceRecompression_MetaData), NewProp_ForceRecompression_MetaData) };
void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit(void* Obj)
{
	((UAnimationSettings*)Obj)->bForceBelowThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold = { "bForceBelowThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceBelowThreshold_MetaData), NewProp_bForceBelowThreshold_MetaData) };
void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit(void* Obj)
{
	((UAnimationSettings*)Obj)->bFirstRecompressUsingCurrentOrDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault = { "bFirstRecompressUsingCurrentOrDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData), NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData) };
void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj)
{
	((UAnimationSettings*)Obj)->bRaiseMaxErrorToExisting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting = { "bRaiseMaxErrorToExisting", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRaiseMaxErrorToExisting_MetaData), NewProp_bRaiseMaxErrorToExisting_MetaData) };
void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit(void* Obj)
{
	((UAnimationSettings*)Obj)->bEnablePerformanceLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog = { "bEnablePerformanceLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePerformanceLog_MetaData), NewProp_bEnablePerformanceLog_MetaData) };
void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit(void* Obj)
{
	((UAnimationSettings*)Obj)->bStripAnimationDataOnDedicatedServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer = { "bStripAnimationDataOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStripAnimationDataOnDedicatedServer_MetaData), NewProp_bStripAnimationDataOnDedicatedServer_MetaData) };
void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit(void* Obj)
{
	((UAnimationSettings*)Obj)->bTickAnimationOnSkeletalMeshInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit = { "bTickAnimationOnSkeletalMeshInit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTickAnimationOnSkeletalMeshInit_MetaData), NewProp_bTickAnimationOnSkeletalMeshInit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneTimecodeCustomAttributeNameSettings = { "BoneTimecodeCustomAttributeNameSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, BoneTimecodeCustomAttributeNameSettings), Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneTimecodeCustomAttributeNameSettings_MetaData), NewProp_BoneTimecodeCustomAttributeNameSettings_MetaData) }; // 2149748894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames_Inner = { "BoneCustomAttributesNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomAttributeSetting, METADATA_PARAMS(0, nullptr) }; // 2548857817
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames = { "BoneCustomAttributesNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, BoneCustomAttributesNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneCustomAttributesNames_MetaData), NewProp_BoneCustomAttributesNames_MetaData) }; // 2548857817
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes_Inner = { "BoneNamesWithCustomAttributes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes = { "BoneNamesWithCustomAttributes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, BoneNamesWithCustomAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNamesWithCustomAttributes_MetaData), NewProp_BoneNamesWithCustomAttributes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_ValueProp = { "AttributeBlendModes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_Engine_ECustomAttributeBlendType, METADATA_PARAMS(0, nullptr) }; // 636533535
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_Key_KeyProp = { "AttributeBlendModes_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes = { "AttributeBlendModes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, AttributeBlendModes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeBlendModes_MetaData), NewProp_AttributeBlendModes_MetaData) }; // 636533535
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode = { "DefaultAttributeBlendMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, DefaultAttributeBlendMode), Z_Construct_UEnum_Engine_ECustomAttributeBlendType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributeBlendMode_MetaData), NewProp_DefaultAttributeBlendMode_MetaData) }; // 636533535
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames_Inner = { "TransformAttributeNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames = { "TransformAttributeNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, TransformAttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformAttributeNames_MetaData), NewProp_TransformAttributeNames_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes_Inner = { "UserDefinedStructAttributes", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes = { "UserDefinedStructAttributes", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, UserDefinedStructAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedStructAttributes_MetaData), NewProp_UserDefinedStructAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions_Inner = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression, METADATA_PARAMS(0, nullptr) }; // 3197240219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, MirrorFindReplaceExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorFindReplaceExpressions_MetaData), NewProp_MirrorFindReplaceExpressions_MetaData) }; // 3197240219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultFrameRate = { "DefaultFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSettings, DefaultFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFrameRate_MetaData), NewProp_DefaultFrameRate_MetaData) };
void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnforceSupportedFrameRates_SetBit(void* Obj)
{
	((UAnimationSettings*)Obj)->bEnforceSupportedFrameRates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnforceSupportedFrameRates = { "bEnforceSupportedFrameRates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnforceSupportedFrameRates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnforceSupportedFrameRates_MetaData), NewProp_bEnforceSupportedFrameRates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneTimecodeCustomAttributeNameSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneCustomAttributesNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_BoneNamesWithCustomAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AttributeBlendModes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultAttributeBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TransformAttributeNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_UserDefinedStructAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MirrorFindReplaceExpressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnforceSupportedFrameRates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSettings_Statics::ClassParams = {
	&UAnimationSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationSettings()
{
	if (!Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton, Z_Construct_UClass_UAnimationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimationSettings>()
{
	return UAnimationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSettings);
UAnimationSettings::~UAnimationSettings() {}
// End Class UAnimationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationSettings, UAnimationSettings::StaticClass, TEXT("UAnimationSettings"), &Z_Registration_Info_UClass_UAnimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSettings), 1173504230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_3776021755(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
