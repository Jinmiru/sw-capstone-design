// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/HeadMountedDisplay/Public/IIdentifiableXRDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIIdentifiableXRDevice() {}

// Begin Cross Module References
HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId();
UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References

// Begin ScriptStruct FXRDeviceId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_XRDeviceId;
class UScriptStruct* FXRDeviceId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_XRDeviceId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_XRDeviceId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRDeviceId, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRDeviceId"));
	}
	return Z_Registration_Info_UScriptStruct_XRDeviceId.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRDeviceId>()
{
	return FXRDeviceId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FXRDeviceId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SystemName_MetaData[] = {
		{ "Category", "XRDevice" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "Category", "XRDevice" },
		{ "ModuleRelativePath", "Public/IIdentifiableXRDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SystemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRDeviceId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName = { "SystemName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRDeviceId, SystemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SystemName_MetaData), NewProp_SystemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRDeviceId, DeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_SystemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewProp_DeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRDeviceId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	&NewStructOps,
	"XRDeviceId",
	Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::PropPointers),
	sizeof(FXRDeviceId),
	alignof(FXRDeviceId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRDeviceId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FXRDeviceId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId()
{
	if (!Z_Registration_Info_UScriptStruct_XRDeviceId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_XRDeviceId.InnerSingleton, Z_Construct_UScriptStruct_FXRDeviceId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_XRDeviceId.InnerSingleton;
}
// End ScriptStruct FXRDeviceId

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FXRDeviceId::StaticStruct, Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewStructOps, TEXT("XRDeviceId"), &Z_Registration_Info_UScriptStruct_XRDeviceId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FXRDeviceId), 1028429160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_982258524(TEXT("/Script/HeadMountedDisplay"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
