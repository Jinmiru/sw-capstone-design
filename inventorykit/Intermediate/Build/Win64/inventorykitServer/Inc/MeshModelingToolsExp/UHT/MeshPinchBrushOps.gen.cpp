// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Sculpting/MeshPinchBrushOps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPinchBrushOps() {}

// Begin Cross Module References
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPinchBrushOpProps();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPinchBrushOpProps_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UPinchBrushOpProps
void UPinchBrushOpProps::StaticRegisterNativesUPinchBrushOpProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPinchBrushOpProps);
UClass* Z_Construct_UClass_UPinchBrushOpProps_NoRegister()
{
	return UPinchBrushOpProps::StaticClass();
}
struct Z_Construct_UClass_UPinchBrushOpProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshPinchBrushOps.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPinchBrushOps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "PinchBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Brush */" },
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPinchBrushOps.h" },
		{ "ToolTip", "Strength of the Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "PinchBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPinchBrushOps.h" },
		{ "ToolTip", "Amount of falloff to apply" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "PinchBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along surface normal */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPinchBrushOps.h" },
		{ "ToolTip", "Depth of Brush into surface along surface normal" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerpDamping_MetaData[] = {
		{ "Category", "PinchBrush" },
		{ "Comment", "/** When enabled, brush will damp motion of vertices that would move perpendicular to brush stroke direction */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshPinchBrushOps.h" },
		{ "ToolTip", "When enabled, brush will damp motion of vertices that would move perpendicular to brush stroke direction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static void NewProp_bPerpDamping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerpDamping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPinchBrushOpProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPinchBrushOpProps, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPinchBrushOpProps, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPinchBrushOpProps, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
void Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_bPerpDamping_SetBit(void* Obj)
{
	((UPinchBrushOpProps*)Obj)->bPerpDamping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_bPerpDamping = { "bPerpDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPinchBrushOpProps), &Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_bPerpDamping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerpDamping_MetaData), NewProp_bPerpDamping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPinchBrushOpProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinchBrushOpProps_Statics::NewProp_bPerpDamping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPinchBrushOpProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPinchBrushOpProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptBrushOpProps,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPinchBrushOpProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPinchBrushOpProps_Statics::ClassParams = {
	&UPinchBrushOpProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPinchBrushOpProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPinchBrushOpProps_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPinchBrushOpProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UPinchBrushOpProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPinchBrushOpProps()
{
	if (!Z_Registration_Info_UClass_UPinchBrushOpProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPinchBrushOpProps.OuterSingleton, Z_Construct_UClass_UPinchBrushOpProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPinchBrushOpProps.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPinchBrushOpProps>()
{
	return UPinchBrushOpProps::StaticClass();
}
UPinchBrushOpProps::UPinchBrushOpProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPinchBrushOpProps);
UPinchBrushOpProps::~UPinchBrushOpProps() {}
// End Class UPinchBrushOpProps

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPinchBrushOps_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPinchBrushOpProps, UPinchBrushOpProps::StaticClass, TEXT("UPinchBrushOpProps"), &Z_Registration_Info_UClass_UPinchBrushOpProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPinchBrushOpProps), 1824307537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPinchBrushOps_h_1027677701(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPinchBrushOps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshPinchBrushOps_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
