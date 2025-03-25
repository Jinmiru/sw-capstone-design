// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateLevelVisibilityLevelInfo() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNetLevelVisibilityTransactionId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetLevelVisibilityTransactionId;
class UScriptStruct* FNetLevelVisibilityTransactionId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetLevelVisibilityTransactionId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetLevelVisibilityTransactionId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetLevelVisibilityTransactionId"));
	}
	return Z_Registration_Info_UScriptStruct_NetLevelVisibilityTransactionId.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetLevelVisibilityTransactionId>()
{
	return FNetLevelVisibilityTransactionId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to to identify NetLevelVisibility transactions between server and client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "This structure is used to to identify NetLevelVisibility transactions between server and client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetLevelVisibilityTransactionId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetLevelVisibilityTransactionId, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetLevelVisibilityTransactionId",
	Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::PropPointers),
	sizeof(FNetLevelVisibilityTransactionId),
	alignof(FNetLevelVisibilityTransactionId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId()
{
	if (!Z_Registration_Info_UScriptStruct_NetLevelVisibilityTransactionId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetLevelVisibilityTransactionId.InnerSingleton, Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetLevelVisibilityTransactionId.InnerSingleton;
}
// End ScriptStruct FNetLevelVisibilityTransactionId

// Begin ScriptStruct FUpdateLevelVisibilityLevelInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo;
class UScriptStruct* FUpdateLevelVisibilityLevelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UpdateLevelVisibilityLevelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUpdateLevelVisibilityLevelInfo>()
{
	return FUpdateLevelVisibilityLevelInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** The name of the package for the level whose status changed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The name of the package for the level whose status changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Comment", "/** The name / path of the asset file for the level whose status changed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The name / path of the asset file for the level whose status changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityRequestId_MetaData[] = {
		{ "Comment", "/** Identifies this visibility request when communicating with server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "Identifies this visibility request when communicating with server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** The new visibility state for this level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The new visibility state for this level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryMakeVisible_MetaData[] = {
		{ "Comment", "/** Whether the level is in the state of making visible and waits for server to acknowledge. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "Whether the level is in the state of making visible and waits for server to acknowledge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCloseOnError_MetaData[] = {
		{ "Comment", "/** Skip connection close if level can't be found (not net serialized) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "Skip connection close if level can't be found (not net serialized)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityRequestId;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bTryMakeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryMakeVisible;
	static void NewProp_bSkipCloseOnError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCloseOnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateLevelVisibilityLevelInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_VisibilityRequestId = { "VisibilityRequestId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, VisibilityRequestId), Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityRequestId_MetaData), NewProp_VisibilityRequestId_MetaData) }; // 1049054583
void Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((FUpdateLevelVisibilityLevelInfo*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FUpdateLevelVisibilityLevelInfo), &Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bTryMakeVisible_SetBit(void* Obj)
{
	((FUpdateLevelVisibilityLevelInfo*)Obj)->bTryMakeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bTryMakeVisible = { "bTryMakeVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FUpdateLevelVisibilityLevelInfo), &Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bTryMakeVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryMakeVisible_MetaData), NewProp_bTryMakeVisible_MetaData) };
void Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bSkipCloseOnError_SetBit(void* Obj)
{
	((FUpdateLevelVisibilityLevelInfo*)Obj)->bSkipCloseOnError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bSkipCloseOnError = { "bSkipCloseOnError", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FUpdateLevelVisibilityLevelInfo), &Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bSkipCloseOnError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipCloseOnError_MetaData), NewProp_bSkipCloseOnError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_VisibilityRequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bTryMakeVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bSkipCloseOnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"UpdateLevelVisibilityLevelInfo",
	Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers),
	sizeof(FUpdateLevelVisibilityLevelInfo),
	alignof(FUpdateLevelVisibilityLevelInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.InnerSingleton, Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.InnerSingleton;
}
// End ScriptStruct FUpdateLevelVisibilityLevelInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetLevelVisibilityTransactionId::StaticStruct, Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId_Statics::NewStructOps, TEXT("NetLevelVisibilityTransactionId"), &Z_Registration_Info_UScriptStruct_NetLevelVisibilityTransactionId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetLevelVisibilityTransactionId), 1049054583U) },
		{ FUpdateLevelVisibilityLevelInfo::StaticStruct, Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewStructOps, TEXT("UpdateLevelVisibilityLevelInfo"), &Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateLevelVisibilityLevelInfo), 3244678757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_111748166(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
