// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementArc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementArc() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArc();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArc_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircleBase();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementArc
void UGizmoElementArc::StaticRegisterNativesUGizmoElementArc()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementArc);
UClass* Z_Construct_UClass_UGizmoElementArc_NoRegister()
{
	return UGizmoElementArc::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementArc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a thick arc based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementArc.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArc.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a thick arc based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[] = {
		{ "Comment", "// Arc inner radius.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArc.h" },
		{ "ToolTip", "Arc inner radius." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InnerRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementArc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UGizmoElementArc_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementArc, InnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerRadius_MetaData), NewProp_InnerRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementArc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArc_Statics::NewProp_InnerRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArc_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementArc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementCircleBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementArc_Statics::ClassParams = {
	&UGizmoElementArc::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementArc_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArc_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArc_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementArc_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementArc()
{
	if (!Z_Registration_Info_UClass_UGizmoElementArc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementArc.OuterSingleton, Z_Construct_UClass_UGizmoElementArc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementArc.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementArc>()
{
	return UGizmoElementArc::StaticClass();
}
UGizmoElementArc::UGizmoElementArc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementArc);
UGizmoElementArc::~UGizmoElementArc() {}
// End Class UGizmoElementArc

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementArc, UGizmoElementArc::StaticClass, TEXT("UGizmoElementArc"), &Z_Registration_Info_UClass_UGizmoElementArc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementArc), 4232069467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_689945658(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArc_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
