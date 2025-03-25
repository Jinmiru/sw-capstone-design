// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractionMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionMechanic() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UInteractionMechanic
void UInteractionMechanic::StaticRegisterNativesUInteractionMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionMechanic);
UClass* Z_Construct_UClass_UInteractionMechanic_NoRegister()
{
	return UInteractionMechanic::StaticClass();
}
struct Z_Construct_UClass_UInteractionMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractionMechanic implements a \"user interaction\". This is generally a subset of an InteractiveTool,\n * for example an interaction to draw a polygon could be used in many tools, but requires handling input events\n * and converting them to click points on a plane, handling various cases like closing a loop, undo/redo of points, etc.\n * Ideally all these aspects should be able to be wrapped up in an UInteractionMechanic that multiple Tools can use.\n * \n * (This class is still a work in progress)\n */" },
		{ "IncludePath", "InteractionMechanic.h" },
		{ "ModuleRelativePath", "Public/InteractionMechanic.h" },
		{ "ToolTip", "A UInteractionMechanic implements a \"user interaction\". This is generally a subset of an InteractiveTool,\nfor example an interaction to draw a polygon could be used in many tools, but requires handling input events\nand converting them to click points on a plane, handling various cases like closing a loop, undo/redo of points, etc.\nIdeally all these aspects should be able to be wrapped up in an UInteractionMechanic that multiple Tools can use.\n\n(This class is still a work in progress)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionMechanic_Statics::ClassParams = {
	&UInteractionMechanic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionMechanic()
{
	if (!Z_Registration_Info_UClass_UInteractionMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionMechanic.OuterSingleton, Z_Construct_UClass_UInteractionMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionMechanic.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractionMechanic>()
{
	return UInteractionMechanic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionMechanic);
UInteractionMechanic::~UInteractionMechanic() {}
// End Class UInteractionMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionMechanic, UInteractionMechanic::StaticClass, TEXT("UInteractionMechanic"), &Z_Registration_Info_UClass_UInteractionMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionMechanic), 382828046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_2221991952(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractionMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
