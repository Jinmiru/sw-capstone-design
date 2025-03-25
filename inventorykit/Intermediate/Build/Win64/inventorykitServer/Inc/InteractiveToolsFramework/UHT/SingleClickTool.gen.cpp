// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseTools/SingleClickTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleClickTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickToolBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class USingleClickToolBuilder
void USingleClickToolBuilder::StaticRegisterNativesUSingleClickToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleClickToolBuilder);
UClass* Z_Construct_UClass_USingleClickToolBuilder_NoRegister()
{
	return USingleClickToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USingleClickToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for USingleClickTool\n */" },
		{ "IncludePath", "BaseTools/SingleClickTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleClickTool.h" },
		{ "ToolTip", "Builder for USingleClickTool" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleClickToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USingleClickToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleClickToolBuilder_Statics::ClassParams = {
	&USingleClickToolBuilder::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleClickToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleClickToolBuilder()
{
	if (!Z_Registration_Info_UClass_USingleClickToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleClickToolBuilder.OuterSingleton, Z_Construct_UClass_USingleClickToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleClickToolBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleClickToolBuilder>()
{
	return USingleClickToolBuilder::StaticClass();
}
USingleClickToolBuilder::USingleClickToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleClickToolBuilder);
USingleClickToolBuilder::~USingleClickToolBuilder() {}
// End Class USingleClickToolBuilder

// Begin Class USingleClickTool
void USingleClickTool::StaticRegisterNativesUSingleClickTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleClickTool);
UClass* Z_Construct_UClass_USingleClickTool_NoRegister()
{
	return USingleClickTool::StaticClass();
}
struct Z_Construct_UClass_USingleClickTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleClickTool is perhaps the simplest possible interactive tool. It simply\n * reacts to default primary button clicks for the active device (eg left-mouse clicks).\n * \n * The function ::IsHitByClick() determines what is clickable by this Tool. The default is\n * to return true, which means the click will activate anywhere (the Tool itself has no\n * notion of Actors, Components, etc). You can override this function to, for example,\n * filter out clicks that don't hit a target object, etc.\n * \n * The function ::OnClicked() implements the action that will occur when a click happens.\n * You must override this to implement any kind of useful behavior.\n */" },
		{ "IncludePath", "BaseTools/SingleClickTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleClickTool.h" },
		{ "ToolTip", "USingleClickTool is perhaps the simplest possible interactive tool. It simply\nreacts to default primary button clicks for the active device (eg left-mouse clicks).\n\nThe function ::IsHitByClick() determines what is clickable by this Tool. The default is\nto return true, which means the click will activate anywhere (the Tool itself has no\nnotion of Actors, Components, etc). You can override this function to, for example,\nfilter out clicks that don't hit a target object, etc.\n\nThe function ::OnClicked() implements the action that will occur when a click happens.\nYou must override this to implement any kind of useful behavior." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleClickTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USingleClickTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleClickTool_Statics::ClassParams = {
	&USingleClickTool::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleClickTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleClickTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleClickTool()
{
	if (!Z_Registration_Info_UClass_USingleClickTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleClickTool.OuterSingleton, Z_Construct_UClass_USingleClickTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleClickTool.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleClickTool>()
{
	return USingleClickTool::StaticClass();
}
USingleClickTool::USingleClickTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleClickTool);
USingleClickTool::~USingleClickTool() {}
// End Class USingleClickTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleClickToolBuilder, USingleClickToolBuilder::StaticClass, TEXT("USingleClickToolBuilder"), &Z_Registration_Info_UClass_USingleClickToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleClickToolBuilder), 465544500U) },
		{ Z_Construct_UClass_USingleClickTool, USingleClickTool::StaticClass, TEXT("USingleClickTool"), &Z_Registration_Info_UClass_USingleClickTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleClickTool), 1904028938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_3303622444(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_SingleClickTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
