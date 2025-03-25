// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AutomationController/Private/AutomationDeviceClusterManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationDeviceClusterManager() {}

// Begin Cross Module References
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationDeviceInfo();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_AutomationController();
// End Cross Module References

// Begin ScriptStruct FAutomationDeviceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationDeviceInfo;
class UScriptStruct* FAutomationDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationDeviceInfo, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomationDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomationDeviceInfo>()
{
	return FAutomationDeviceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Hold information about the Device\n*/" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "Hold information about the Device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Comment", "/** The name of device */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "Comment", "/** The instance ID */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The instance ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
		{ "Comment", "/** The instance Name */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The instance Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[] = {
		{ "Comment", "/** The name of the platform */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the platform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSVersion_MetaData[] = {
		{ "Comment", "/** The name of the operating system version */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the operating system version" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "Comment", "/** The name of the device model */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the device model" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPU_MetaData[] = {
		{ "Comment", "/** The name of the GPU */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the GPU" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUModel_MetaData[] = {
		{ "Comment", "/** The name of the CPU model */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the CPU model" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RAMInGB_MetaData[] = {
		{ "Comment", "/** The amount of RAM this device has in gigabytes */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The amount of RAM this device has in gigabytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderMode_MetaData[] = {
		{ "Comment", "/** The name of the current render mode */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the current render mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHI_MetaData[] = {
		{ "Comment", "/** The name of the current RHI */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the current RHI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppInstanceLog_MetaData[] = {
		{ "Comment", "/** The path to the application instance log */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The path to the application instance log" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OSVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GPU;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CPUModel;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RAMInGB;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RenderMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RHI;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppInstanceLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationDeviceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, Instance), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, InstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceName_MetaData), NewProp_InstanceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, Platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Platform_MetaData), NewProp_Platform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_OSVersion = { "OSVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, OSVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSVersion_MetaData), NewProp_OSVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, Model), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_GPU = { "GPU", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, GPU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPU_MetaData), NewProp_GPU_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_CPUModel = { "CPUModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, CPUModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUModel_MetaData), NewProp_CPUModel_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RAMInGB = { "RAMInGB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, RAMInGB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RAMInGB_MetaData), NewProp_RAMInGB_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RenderMode = { "RenderMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, RenderMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderMode_MetaData), NewProp_RenderMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RHI = { "RHI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, RHI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHI_MetaData), NewProp_RHI_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_AppInstanceLog = { "AppInstanceLog", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationDeviceInfo, AppInstanceLog), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppInstanceLog_MetaData), NewProp_AppInstanceLog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_InstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Platform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_OSVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_GPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_CPUModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RAMInGB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RenderMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RHI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_AppInstanceLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	nullptr,
	&NewStructOps,
	"AutomationDeviceInfo",
	Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::PropPointers),
	sizeof(FAutomationDeviceInfo),
	alignof(FAutomationDeviceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationDeviceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.InnerSingleton;
}
// End ScriptStruct FAutomationDeviceInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutomationDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewStructOps, TEXT("AutomationDeviceInfo"), &Z_Registration_Info_UScriptStruct_AutomationDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationDeviceInfo), 2742559182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_1045297179(TEXT("/Script/AutomationController"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
