// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseTools/ClickDragTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickDragTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragTool_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragToolBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UClickDragToolBuilder
void UClickDragToolBuilder::StaticRegisterNativesUClickDragToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClickDragToolBuilder);
UClass* Z_Construct_UClass_UClickDragToolBuilder_NoRegister()
{
	return UClickDragToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UClickDragToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UClickDragTool\n */" },
		{ "IncludePath", "BaseTools/ClickDragTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/ClickDragTool.h" },
		{ "ToolTip", "Builder for UClickDragTool" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickDragToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClickDragToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClickDragToolBuilder_Statics::ClassParams = {
	&UClickDragToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UClickDragToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClickDragToolBuilder()
{
	if (!Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton, Z_Construct_UClass_UClickDragToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClickDragToolBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UClickDragToolBuilder>()
{
	return UClickDragToolBuilder::StaticClass();
}
UClickDragToolBuilder::UClickDragToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClickDragToolBuilder);
UClickDragToolBuilder::~UClickDragToolBuilder() {}
// End Class UClickDragToolBuilder

// Begin Class UClickDragTool
void UClickDragTool::StaticRegisterNativesUClickDragTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClickDragTool);
UClass* Z_Construct_UClass_UClickDragTool_NoRegister()
{
	return UClickDragTool::StaticClass();
}
struct Z_Construct_UClass_UClickDragTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UClickDragTool is a base tool that basically just implements IClickDragBehaviorTarget,\n * and on setup registers a UClickDragInputBehavior. You can subclass this Tool to\n * implement basic click-drag type Tools. If you want to do more advanced things, \n * like handle modifier buttons/keys, you will need to implement IClickDragBehaviorTarget yourself\n */" },
		{ "IncludePath", "BaseTools/ClickDragTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/ClickDragTool.h" },
		{ "ToolTip", "UClickDragTool is a base tool that basically just implements IClickDragBehaviorTarget,\nand on setup registers a UClickDragInputBehavior. You can subclass this Tool to\nimplement basic click-drag type Tools. If you want to do more advanced things,\nlike handle modifier buttons/keys, you will need to implement IClickDragBehaviorTarget yourself" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClickDragTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClickDragTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClickDragTool_Statics::ClassParams = {
	&UClickDragTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClickDragTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UClickDragTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClickDragTool()
{
	if (!Z_Registration_Info_UClass_UClickDragTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClickDragTool.OuterSingleton, Z_Construct_UClass_UClickDragTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClickDragTool.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UClickDragTool>()
{
	return UClickDragTool::StaticClass();
}
UClickDragTool::UClickDragTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClickDragTool);
UClickDragTool::~UClickDragTool() {}
// End Class UClickDragTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClickDragToolBuilder, UClickDragToolBuilder::StaticClass, TEXT("UClickDragToolBuilder"), &Z_Registration_Info_UClass_UClickDragToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClickDragToolBuilder), 807845155U) },
		{ Z_Construct_UClass_UClickDragTool, UClickDragTool::StaticClass, TEXT("UClickDragTool"), &Z_Registration_Info_UClass_UClickDragTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClickDragTool), 1559888225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_2606339613(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_ClickDragTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
