// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Private/Blueprint/ListViewDesignerPreviewItem.h"
#include "Runtime/UMG/Public/Components/ListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListViewDesignerPreviewItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UMG_API UClass* Z_Construct_UClass_UListViewDesignerPreviewItem();
UMG_API UClass* Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UListViewDesignerPreviewItem
void UListViewDesignerPreviewItem::StaticRegisterNativesUListViewDesignerPreviewItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UListViewDesignerPreviewItem);
UClass* Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister()
{
	return UListViewDesignerPreviewItem::StaticClass();
}
struct Z_Construct_UClass_UListViewDesignerPreviewItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Empty dummy UObject used as the table view item during design time\n// Allows rough design-time previewing of how list contents will lay out\n" },
		{ "IncludePath", "Blueprint/ListViewDesignerPreviewItem.h" },
		{ "ModuleRelativePath", "Private/Blueprint/ListViewDesignerPreviewItem.h" },
		{ "ToolTip", "Empty dummy UObject used as the table view item during design time\nAllows rough design-time previewing of how list contents will lay out" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListViewDesignerPreviewItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::ClassParams = {
	&UListViewDesignerPreviewItem::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UListViewDesignerPreviewItem()
{
	if (!Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton, Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UListViewDesignerPreviewItem>()
{
	return UListViewDesignerPreviewItem::StaticClass();
}
UListViewDesignerPreviewItem::UListViewDesignerPreviewItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UListViewDesignerPreviewItem);
UListViewDesignerPreviewItem::~UListViewDesignerPreviewItem() {}
// End Class UListViewDesignerPreviewItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UListViewDesignerPreviewItem, UListViewDesignerPreviewItem::StaticClass, TEXT("UListViewDesignerPreviewItem"), &Z_Registration_Info_UClass_UListViewDesignerPreviewItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListViewDesignerPreviewItem), 2996528565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_1498948742(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
