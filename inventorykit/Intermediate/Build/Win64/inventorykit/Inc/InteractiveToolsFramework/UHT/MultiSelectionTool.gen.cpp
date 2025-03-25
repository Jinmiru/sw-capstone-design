// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/MultiSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiSelectionTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiSelectionTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiSelectionTool_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UMultiSelectionTool
void UMultiSelectionTool::StaticRegisterNativesUMultiSelectionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiSelectionTool);
UClass* Z_Construct_UClass_UMultiSelectionTool_NoRegister()
{
	return UMultiSelectionTool::StaticClass();
}
struct Z_Construct_UClass_UMultiSelectionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MultiSelectionTool.h" },
		{ "ModuleRelativePath", "Public/MultiSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/MultiSelectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiSelectionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiSelectionTool_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UToolTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultiSelectionTool_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiSelectionTool, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiSelectionTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiSelectionTool_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiSelectionTool_Statics::NewProp_Targets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMultiSelectionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMultiSelectionTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister, (int32)VTABLE_OFFSET(UMultiSelectionTool, IInteractiveToolCameraFocusAPI), false },  // 2792920601
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiSelectionTool_Statics::ClassParams = {
	&UMultiSelectionTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMultiSelectionTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiSelectionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiSelectionTool()
{
	if (!Z_Registration_Info_UClass_UMultiSelectionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiSelectionTool.OuterSingleton, Z_Construct_UClass_UMultiSelectionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiSelectionTool.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMultiSelectionTool>()
{
	return UMultiSelectionTool::StaticClass();
}
UMultiSelectionTool::UMultiSelectionTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiSelectionTool);
UMultiSelectionTool::~UMultiSelectionTool() {}
// End Class UMultiSelectionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiSelectionTool, UMultiSelectionTool::StaticClass, TEXT("UMultiSelectionTool"), &Z_Registration_Info_UClass_UMultiSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiSelectionTool), 736891539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_3378022854(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_MultiSelectionTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
