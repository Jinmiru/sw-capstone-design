// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ScreenShotComparisonTools/Public/ImageComparer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageComparer() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult();
SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance();
UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
// End Cross Module References

// Begin ScriptStruct FImageTolerance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageTolerance;
class UScriptStruct* FImageTolerance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageTolerance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageTolerance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageTolerance, (UObject*)Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageTolerance"));
	}
	return Z_Registration_Info_UScriptStruct_ImageTolerance.OuterSingleton;
}
template<> SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* StaticStruct<FImageTolerance>()
{
	return FImageTolerance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImageTolerance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreAntiAliasing_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreColors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Red;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Green;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Blue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MinBrightness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxBrightness;
	static void NewProp_IgnoreAntiAliasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreAntiAliasing;
	static void NewProp_IgnoreColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreColors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageTolerance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageTolerance, Red), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Red_MetaData), NewProp_Red_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageTolerance, Green), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Green_MetaData), NewProp_Green_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageTolerance, Blue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blue_MetaData), NewProp_Blue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageTolerance, Alpha), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness = { "MinBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageTolerance, MinBrightness), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinBrightness_MetaData), NewProp_MinBrightness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness = { "MaxBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageTolerance, MaxBrightness), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBrightness_MetaData), NewProp_MaxBrightness_MetaData) };
void Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_SetBit(void* Obj)
{
	((FImageTolerance*)Obj)->IgnoreAntiAliasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing = { "IgnoreAntiAliasing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImageTolerance), &Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreAntiAliasing_MetaData), NewProp_IgnoreAntiAliasing_MetaData) };
void Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_SetBit(void* Obj)
{
	((FImageTolerance*)Obj)->IgnoreColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors = { "IgnoreColors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImageTolerance), &Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreColors_MetaData), NewProp_IgnoreColors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError = { "MaximumLocalError", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageTolerance, MaximumLocalError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumLocalError_MetaData), NewProp_MaximumLocalError_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError = { "MaximumGlobalError", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageTolerance, MaximumGlobalError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumGlobalError_MetaData), NewProp_MaximumGlobalError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageTolerance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
	nullptr,
	&NewStructOps,
	"ImageTolerance",
	Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers),
	sizeof(FImageTolerance),
	alignof(FImageTolerance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageTolerance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance()
{
	if (!Z_Registration_Info_UScriptStruct_ImageTolerance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageTolerance.InnerSingleton, Z_Construct_UScriptStruct_FImageTolerance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImageTolerance.InnerSingleton;
}
// End ScriptStruct FImageTolerance

// Begin ScriptStruct FImageComparisonResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageComparisonResult;
class UScriptStruct* FImageComparisonResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageComparisonResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageComparisonResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult, (UObject*)Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageComparisonResult"));
	}
	return Z_Registration_Info_UScriptStruct_ImageComparisonResult.OuterSingleton;
}
template<> SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* StaticStruct<FImageComparisonResult>()
{
	return FImageComparisonResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImageComparisonResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This struct holds the results of comparing an incoming image from a platform with an approved image that exists under the \n * project hierarchy. \n \n * All paths in this structure should be portable. Test results (including this struct) result can be serialized to \n * JSON and stored on the network as during automation runs then opened in the editor to commit / approve changes\n * to the local project.\n */" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "This struct holds the results of comparing an incoming image from a platform with an approved image that exists under the\nproject hierarchy.\n\nAll paths in this structure should be portable. Test results (including this struct) result can be serialized to\nJSON and stored on the network as during automation runs then opened in the editor to commit / approve changes\nto the local project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreationTime_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Time that the comparison was performed\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Time that the comparison was performed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePlatform_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Platform that the incoming image was generated on\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Platform that the incoming image was generated on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRHI_MetaData[] = {
		{ "Comment", "/*\n\x09\x09RHI that the incoming image was generated with\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "RHI that the incoming image was generated with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdealApprovedFolderPath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path to a folder where the idealized ground-truth for this comparison would be. Relative to the project directory.\n\x09\x09Note: This path may not exist a fallback is being used for approval, or if there is no approved\n\x09\x09image at all. Comparing this value with the FPaths::GetPath(ApprovedFilePath) can be used to determine that.\n\x09\x09(the IsIdeal() function performs that check).\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path to a folder where the idealized ground-truth for this comparison would be. Relative to the project directory.\nNote: This path may not exist a fallback is being used for approval, or if there is no approved\nimage at all. Comparing this value with the FPaths::GetPath(ApprovedFilePath) can be used to determine that.\n(the IsIdeal() function performs that check)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApprovedFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path to the file that was considered as the ground-truth. Relative to the project directory\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path to the file that was considered as the ground-truth. Relative to the project directory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path to the file that was generated in the test. Relative to the project directory, only valid when a test is run locally\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path to the file that was generated in the test. Relative to the project directory, only valid when a test is run locally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path to the delta image between the ground-truth and the incoming file. Relative to the project directory, only valid when a test is run locally\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path to the delta image between the ground-truth and the incoming file. Relative to the project directory, only valid when a test is run locally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportApprovedFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Name of the approved file saved for the report. Path is relative to the location of the metadata for the report\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Name of the approved file saved for the report. Path is relative to the location of the metadata for the report" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportIncomingFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09name of the incoming file saved for the report.  Path is relative to the location of the metadata for the report\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "name of the incoming file saved for the report.  Path is relative to the location of the metadata for the report" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportComparisonFilePath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Name of the delta image saved for the report.  Path is relative to the location of the metadata for the report\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Name of the delta image saved for the report.  Path is relative to the location of the metadata for the report" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLocalDifference_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Largest local difference found during comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Largest local difference found during comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDifference_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Global difference found during comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Global difference found during comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Tolerance values for comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Tolerance values for comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Comment", "/*\n\x09\x09""Error message that can be set during a comparison\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Error message that can be set during a comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotPath_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Path of the screenshot (includes variant if applicable)\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Path of the screenshot (includes variant if applicable)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAttachingImages_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Whether to skip saving and attaching images to the report for this test\n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Whether to skip saving and attaching images to the report for this test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Comment", "/*\n\x09\x09Version of the image comparision result \n\x09*/" },
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
		{ "ToolTip", "Version of the image comparision result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreationTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePlatform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceRHI;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IdealApprovedFolderPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApprovedFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IncomingFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ComparisonFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportApprovedFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportIncomingFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportComparisonFilePath;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxLocalDifference;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GlobalDifference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScreenshotPath;
	static void NewProp_bSkipAttachingImages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAttachingImages;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageComparisonResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, CreationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreationTime_MetaData), NewProp_CreationTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourcePlatform = { "SourcePlatform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, SourcePlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePlatform_MetaData), NewProp_SourcePlatform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourceRHI = { "SourceRHI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, SourceRHI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRHI_MetaData), NewProp_SourceRHI_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IdealApprovedFolderPath = { "IdealApprovedFolderPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, IdealApprovedFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdealApprovedFolderPath_MetaData), NewProp_IdealApprovedFolderPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFilePath = { "ApprovedFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, ApprovedFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApprovedFilePath_MetaData), NewProp_ApprovedFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFilePath = { "IncomingFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, IncomingFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingFilePath_MetaData), NewProp_IncomingFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFilePath = { "ComparisonFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, ComparisonFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonFilePath_MetaData), NewProp_ComparisonFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFilePath = { "ReportApprovedFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, ReportApprovedFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportApprovedFilePath_MetaData), NewProp_ReportApprovedFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFilePath = { "ReportIncomingFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, ReportIncomingFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportIncomingFilePath_MetaData), NewProp_ReportIncomingFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFilePath = { "ReportComparisonFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, ReportComparisonFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportComparisonFilePath_MetaData), NewProp_ReportComparisonFilePath_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference = { "MaxLocalDifference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, MaxLocalDifference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLocalDifference_MetaData), NewProp_MaxLocalDifference_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference = { "GlobalDifference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, GlobalDifference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDifference_MetaData), NewProp_GlobalDifference_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, Tolerance), Z_Construct_UScriptStruct_FImageTolerance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) }; // 4136216623
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ScreenshotPath = { "ScreenshotPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, ScreenshotPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotPath_MetaData), NewProp_ScreenshotPath_MetaData) };
void Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_bSkipAttachingImages_SetBit(void* Obj)
{
	((FImageComparisonResult*)Obj)->bSkipAttachingImages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_bSkipAttachingImages = { "bSkipAttachingImages", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FImageComparisonResult), &Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_bSkipAttachingImages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipAttachingImages_MetaData), NewProp_bSkipAttachingImages_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImageComparisonResult, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_CreationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourcePlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_SourceRHI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IdealApprovedFolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ScreenshotPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_bSkipAttachingImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
	nullptr,
	&NewStructOps,
	"ImageComparisonResult",
	Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers),
	sizeof(FImageComparisonResult),
	alignof(FImageComparisonResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImageComparisonResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult()
{
	if (!Z_Registration_Info_UScriptStruct_ImageComparisonResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageComparisonResult.InnerSingleton, Z_Construct_UScriptStruct_FImageComparisonResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImageComparisonResult.InnerSingleton;
}
// End ScriptStruct FImageComparisonResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FImageTolerance::StaticStruct, Z_Construct_UScriptStruct_FImageTolerance_Statics::NewStructOps, TEXT("ImageTolerance"), &Z_Registration_Info_UScriptStruct_ImageTolerance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageTolerance), 4136216623U) },
		{ FImageComparisonResult::StaticStruct, Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewStructOps, TEXT("ImageComparisonResult"), &Z_Registration_Info_UScriptStruct_ImageComparisonResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageComparisonResult), 2385905341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h_827280490(TEXT("/Script/ScreenShotComparisonTools"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
