// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/FieldNotification/WidgetEventField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetEventField() {}

// Begin Cross Module References
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetEventField();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FWidgetEventField
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetEventField;
class UScriptStruct* FWidgetEventField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetEventField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetEventField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetEventField, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetEventField"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetEventField.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetEventField>()
{
	return FWidgetEventField::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetEventField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Generic structure to notify when an event occurs.\n * \n * class UMyWidget : public UWidget\n * {\n *   UPROPERTY(FieldNotify)\n *   FWidgetEventField SomeEvent;\n *\n *   void OnSomeEvent()\n *   {\n *     BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::Text);\n *   }\n * };\n};\n */" },
		{ "ModuleRelativePath", "Public/FieldNotification/WidgetEventField.h" },
		{ "ToolTip", "Generic structure to notify when an event occurs.\n\nclass UMyWidget : public UWidget\n{\n  UPROPERTY(FieldNotify)\n  FWidgetEventField SomeEvent;\n\n  void OnSomeEvent()\n  {\n    BroadcastFieldValueChanged(FFieldNotificationClassDescriptor::Text);\n  }\n};\n};" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetEventField>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetEventField_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"WidgetEventField",
	nullptr,
	0,
	sizeof(FWidgetEventField),
	alignof(FWidgetEventField),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetEventField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetEventField_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetEventField()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetEventField.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetEventField.InnerSingleton, Z_Construct_UScriptStruct_FWidgetEventField_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetEventField.InnerSingleton;
}
// End ScriptStruct FWidgetEventField

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_WidgetEventField_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetEventField::StaticStruct, Z_Construct_UScriptStruct_FWidgetEventField_Statics::NewStructOps, TEXT("WidgetEventField"), &Z_Registration_Info_UScriptStruct_WidgetEventField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetEventField), 1034135836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_WidgetEventField_h_2791307099(TEXT("/Script/UMG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_WidgetEventField_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_FieldNotification_WidgetEventField_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
