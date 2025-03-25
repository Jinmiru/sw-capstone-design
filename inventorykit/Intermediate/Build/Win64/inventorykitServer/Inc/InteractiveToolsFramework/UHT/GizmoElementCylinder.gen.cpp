// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementCylinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementCylinder() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCylinder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCylinder_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementCylinder
void UGizmoElementCylinder::StaticRegisterNativesUGizmoElementCylinder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementCylinder);
UClass* Z_Construct_UClass_UGizmoElementCylinder_NoRegister()
{
	return UGizmoElementCylinder::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementCylinder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a solid 3D cylinder based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementCylinder.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a solid 3D cylinder based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Comment", "// Location of center of cylinder's base circle.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Location of center of cylinder's base circle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Comment", "// Cylinder axis direction.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Cylinder axis direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Comment", "// Cylinder height.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Cylinder height." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Comment", "// Cylinder radius.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Cylinder radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[] = {
		{ "Comment", "// Number of sides for tessellating cylinder.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCylinder.h" },
		{ "ToolTip", "Number of sides for tessellating cylinder." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementCylinder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCylinder, Base), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCylinder, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCylinder, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCylinder, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementCylinder, NumSides), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSides_MetaData), NewProp_NumSides_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementCylinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCylinder_Statics::NewProp_NumSides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementCylinder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementCylinder_Statics::ClassParams = {
	&UGizmoElementCylinder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementCylinder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCylinder_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementCylinder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementCylinder()
{
	if (!Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton, Z_Construct_UClass_UGizmoElementCylinder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementCylinder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementCylinder>()
{
	return UGizmoElementCylinder::StaticClass();
}
UGizmoElementCylinder::UGizmoElementCylinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementCylinder);
UGizmoElementCylinder::~UGizmoElementCylinder() {}
// End Class UGizmoElementCylinder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementCylinder, UGizmoElementCylinder::StaticClass, TEXT("UGizmoElementCylinder"), &Z_Registration_Info_UClass_UGizmoElementCylinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementCylinder), 2227427895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_2131788672(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCylinder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
