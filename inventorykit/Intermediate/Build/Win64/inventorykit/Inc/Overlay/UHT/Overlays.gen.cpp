// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Overlay/Public/Overlays.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlays() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
OVERLAY_API UClass* Z_Construct_UClass_UOverlays_NoRegister();
OVERLAY_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem();
UPackage* Z_Construct_UPackage__Script_Overlay();
// End Cross Module References

// Begin ScriptStruct FOverlayItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverlayItem;
class UScriptStruct* FOverlayItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverlayItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverlayItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverlayItem, (UObject*)Z_Construct_UPackage__Script_Overlay(), TEXT("OverlayItem"));
	}
	return Z_Registration_Info_UScriptStruct_OverlayItem.OuterSingleton;
}
template<> OVERLAY_API UScriptStruct* StaticStruct<FOverlayItem>()
{
	return FOverlayItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOverlayItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Display Times" },
		{ "Comment", "/** When the overlay should be displayed */" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "When the overlay should be displayed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "Display Times" },
		{ "Comment", "/** When the overlay should be cleared */" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "When the overlay should be cleared" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Display Data" },
		{ "Comment", "/** Text that appears onscreen when the overlay is shown */" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that appears onscreen when the overlay is shown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Display Data" },
		{ "Comment", "/** The position of the text on screen (Between 0.0 and 1.0) */" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "The position of the text on screen (Between 0.0 and 1.0)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverlayItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlayItem, StartTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlayItem, EndTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlayItem, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOverlayItem, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverlayItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
	nullptr,
	&NewStructOps,
	"OverlayItem",
	Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers),
	sizeof(FOverlayItem),
	alignof(FOverlayItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOverlayItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem()
{
	if (!Z_Registration_Info_UScriptStruct_OverlayItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverlayItem.InnerSingleton, Z_Construct_UScriptStruct_FOverlayItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OverlayItem.InnerSingleton;
}
// End ScriptStruct FOverlayItem

// Begin Class UOverlays
void UOverlays::StaticRegisterNativesUOverlays()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlays);
UClass* Z_Construct_UClass_UOverlays_NoRegister()
{
	return UOverlays::StaticClass();
}
struct Z_Construct_UClass_UOverlays_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An interface class for creating overlay data assets\n */" },
		{ "IncludePath", "Overlays.h" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "An interface class for creating overlay data assets" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlays>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOverlays_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlays_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlays_Statics::ClassParams = {
	&UOverlays::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlays_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlays_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOverlays()
{
	if (!Z_Registration_Info_UClass_UOverlays.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlays.OuterSingleton, Z_Construct_UClass_UOverlays_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOverlays.OuterSingleton;
}
template<> OVERLAY_API UClass* StaticClass<UOverlays>()
{
	return UOverlays::StaticClass();
}
UOverlays::UOverlays(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlays);
UOverlays::~UOverlays() {}
// End Class UOverlays

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOverlayItem::StaticStruct, Z_Construct_UScriptStruct_FOverlayItem_Statics::NewStructOps, TEXT("OverlayItem"), &Z_Registration_Info_UScriptStruct_OverlayItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverlayItem), 1872265656U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOverlays, UOverlays::StaticClass, TEXT("UOverlays"), &Z_Registration_Info_UClass_UOverlays, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlays), 2655556008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_2686390230(TEXT("/Script/Overlay"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
