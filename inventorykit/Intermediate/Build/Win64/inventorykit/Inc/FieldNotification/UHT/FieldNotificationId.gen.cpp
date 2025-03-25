// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/FieldNotification/Public/FieldNotificationId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldNotificationId() {}

// Begin Cross Module References
FIELDNOTIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
UPackage* Z_Construct_UPackage__Script_FieldNotification();
// End Cross Module References

// Begin ScriptStruct FFieldNotificationId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldNotificationId;
class UScriptStruct* FFieldNotificationId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldNotificationId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldNotificationId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldNotificationId, (UObject*)Z_Construct_UPackage__Script_FieldNotification(), TEXT("FieldNotificationId"));
	}
	return Z_Registration_Info_UScriptStruct_FieldNotificationId.OuterSingleton;
}
template<> FIELDNOTIFICATION_API UScriptStruct* StaticStruct<FFieldNotificationId>()
{
	return FFieldNotificationId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFieldNotificationId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//namespace\n" },
		{ "ModuleRelativePath", "Public/FieldNotificationId.h" },
		{ "ToolTip", "namespace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "Category", "FieldNotify" },
		{ "ModuleRelativePath", "Public/FieldNotificationId.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldNotificationId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFieldNotificationId, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldNotificationId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewProp_FieldName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldNotificationId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldNotificationId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FieldNotification,
	nullptr,
	&NewStructOps,
	"FieldNotificationId",
	Z_Construct_UScriptStruct_FFieldNotificationId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldNotificationId_Statics::PropPointers),
	sizeof(FFieldNotificationId),
	alignof(FFieldNotificationId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldNotificationId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFieldNotificationId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId()
{
	if (!Z_Registration_Info_UScriptStruct_FieldNotificationId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldNotificationId.InnerSingleton, Z_Construct_UScriptStruct_FFieldNotificationId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FieldNotificationId.InnerSingleton;
}
// End ScriptStruct FFieldNotificationId

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_FieldNotificationId_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFieldNotificationId::StaticStruct, Z_Construct_UScriptStruct_FFieldNotificationId_Statics::NewStructOps, TEXT("FieldNotificationId"), &Z_Registration_Info_UScriptStruct_FieldNotificationId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldNotificationId), 2941726941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_FieldNotificationId_h_523521855(TEXT("/Script/FieldNotification"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_FieldNotificationId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_FieldNotificationId_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
