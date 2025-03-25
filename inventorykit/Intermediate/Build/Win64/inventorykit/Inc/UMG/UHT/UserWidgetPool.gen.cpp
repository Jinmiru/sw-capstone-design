// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidgetPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetPool() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FUserWidgetPool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserWidgetPool;
class UScriptStruct* FUserWidgetPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserWidgetPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserWidgetPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserWidgetPool, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("UserWidgetPool"));
	}
	return Z_Registration_Info_UScriptStruct_UserWidgetPool.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FUserWidgetPool>()
{
	return FUserWidgetPool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserWidgetPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Pools UUserWidget instances to minimize UObject and SWidget allocations for UMG elements with dynamic entries.\n *\n * Note that if underlying Slate instances are released when a UserWidget instance becomes inactive, NativeConstruct & NativeDestruct will be called when UUserWidget\n * instances are made active or inactive, respectively, provided the widget isn't actively referenced in the Slate hierarchy (i.e. if the shared reference count on the widget goes from/to 0).\n *\n * WARNING: Be sure to release the pool's Slate widgets within the owning widget's ReleaseSlateResources call to prevent leaking due to circular references\n *\x09\x09Otherwise the cached references to SObjectWidgets will keep the UUserWidgets - and all that they reference - alive\n *\n * @see UListView\n * @see UDynamicEntryBox\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
		{ "ToolTip", "Pools UUserWidget instances to minimize UObject and SWidget allocations for UMG elements with dynamic entries.\n\nNote that if underlying Slate instances are released when a UserWidget instance becomes inactive, NativeConstruct & NativeDestruct will be called when UUserWidget\ninstances are made active or inactive, respectively, provided the widget isn't actively referenced in the Slate hierarchy (i.e. if the shared reference count on the widget goes from/to 0).\n\nWARNING: Be sure to release the pool's Slate widgets within the owning widget's ReleaseSlateResources call to prevent leaking due to circular references\n            Otherwise the cached references to SObjectWidgets will keep the UUserWidgets - and all that they reference - alive\n\n@see UListView\n@see UDynamicEntryBox" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidgetPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveWidgets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InactiveWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InactiveWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserWidgetPool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_Inner = { "ActiveWidgets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets = { "ActiveWidgets", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserWidgetPool, ActiveWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveWidgets_MetaData), NewProp_ActiveWidgets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_Inner = { "InactiveWidgets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets = { "InactiveWidgets", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserWidgetPool, InactiveWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveWidgets_MetaData), NewProp_InactiveWidgets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_ActiveWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewProp_InactiveWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserWidgetPool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"UserWidgetPool",
	Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::PropPointers),
	sizeof(FUserWidgetPool),
	alignof(FUserWidgetPool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWidgetPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserWidgetPool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool()
{
	if (!Z_Registration_Info_UScriptStruct_UserWidgetPool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserWidgetPool.InnerSingleton, Z_Construct_UScriptStruct_FUserWidgetPool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserWidgetPool.InnerSingleton;
}
// End ScriptStruct FUserWidgetPool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserWidgetPool::StaticStruct, Z_Construct_UScriptStruct_FUserWidgetPool_Statics::NewStructOps, TEXT("UserWidgetPool"), &Z_Registration_Info_UScriptStruct_UserWidgetPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserWidgetPool), 871085244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_1992840511(TEXT("/Script/UMG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetPool_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
