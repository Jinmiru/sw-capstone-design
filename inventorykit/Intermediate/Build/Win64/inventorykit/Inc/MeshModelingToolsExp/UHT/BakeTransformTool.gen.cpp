// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/BakeTransformTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeTransformTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UBakeTransformToolBuilder
void UBakeTransformToolBuilder::StaticRegisterNativesUBakeTransformToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeTransformToolBuilder);
UClass* Z_Construct_UClass_UBakeTransformToolBuilder_NoRegister()
{
	return UBakeTransformToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UBakeTransformToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BakeTransformTool.h" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeTransformToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBakeTransformToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeTransformToolBuilder_Statics::ClassParams = {
	&UBakeTransformToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeTransformToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeTransformToolBuilder()
{
	if (!Z_Registration_Info_UClass_UBakeTransformToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeTransformToolBuilder.OuterSingleton, Z_Construct_UClass_UBakeTransformToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeTransformToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeTransformToolBuilder>()
{
	return UBakeTransformToolBuilder::StaticClass();
}
UBakeTransformToolBuilder::UBakeTransformToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeTransformToolBuilder);
UBakeTransformToolBuilder::~UBakeTransformToolBuilder() {}
// End Class UBakeTransformToolBuilder

// Begin Enum EBakeScaleMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeScaleMethod;
static UEnum* EBakeScaleMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBakeScaleMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBakeScaleMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeScaleMethod"));
	}
	return Z_Registration_Info_UEnum_EBakeScaleMethod.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeScaleMethod>()
{
	return EBakeScaleMethod_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BakeFullScale.Comment", "// bake all scale information, so the component has scale of 1 on all axes\n" },
		{ "BakeFullScale.Name", "EBakeScaleMethod::BakeFullScale" },
		{ "BakeFullScale.ToolTip", "bake all scale information, so the component has scale of 1 on all axes" },
		{ "BakeNonuniformScale.Comment", "// bake the non-uniform scale, so the component has a uniform scale\n" },
		{ "BakeNonuniformScale.Name", "EBakeScaleMethod::BakeNonuniformScale" },
		{ "BakeNonuniformScale.ToolTip", "bake the non-uniform scale, so the component has a uniform scale" },
		{ "DoNotBakeScale.Comment", "// do not bake any scaling\n" },
		{ "DoNotBakeScale.Name", "EBakeScaleMethod::DoNotBakeScale" },
		{ "DoNotBakeScale.ToolTip", "do not bake any scaling" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBakeScaleMethod::BakeFullScale", (int64)EBakeScaleMethod::BakeFullScale },
		{ "EBakeScaleMethod::BakeNonuniformScale", (int64)EBakeScaleMethod::BakeNonuniformScale },
		{ "EBakeScaleMethod::DoNotBakeScale", (int64)EBakeScaleMethod::DoNotBakeScale },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EBakeScaleMethod",
	"EBakeScaleMethod",
	Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod()
{
	if (!Z_Registration_Info_UEnum_EBakeScaleMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeScaleMethod.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBakeScaleMethod.InnerSingleton;
}
// End Enum EBakeScaleMethod

// Begin Class UBakeTransformToolProperties
void UBakeTransformToolProperties::StaticRegisterNativesUBakeTransformToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeTransformToolProperties);
UClass* Z_Construct_UClass_UBakeTransformToolProperties_NoRegister()
{
	return UBakeTransformToolProperties::StaticClass();
}
struct Z_Construct_UClass_UBakeTransformToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties\n */" },
		{ "IncludePath", "BakeTransformTool.h" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Standard properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToAllLODs_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If checked, the baked transform will be applied to all available LODs. Has no effect on selections without LODs. */" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "If checked, the baked transform will be applied to all available LODs. Has no effect on selections without LODs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeRotation_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Bake rotation */" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Bake rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakeScale_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Bake scale */" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Bake scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterPivot_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Recenter pivot after baking transform */" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Recenter pivot after baking transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNoScale_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// This variable is used to enable/disable the \"DoNotBakeScale\" option in the BakeScale enum\n// It is marked as visible only so that the FBakeTransformToolDetails can read it; it will be hidden by that DetailCustomization\n" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "This variable is used to enable/disable the \"DoNotBakeScale\" option in the BakeScale enum\nIt is marked as visible only so that the FBakeTransformToolDetails can read it; it will be hidden by that DetailCustomization" },
	};
#endif // WITH_METADATA
	static void NewProp_bApplyToAllLODs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLODs;
	static void NewProp_bBakeRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BakeScale_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeScale;
	static void NewProp_bRecenterPivot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterPivot;
	static void NewProp_bAllowNoScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNoScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeTransformToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bApplyToAllLODs_SetBit(void* Obj)
{
	((UBakeTransformToolProperties*)Obj)->bApplyToAllLODs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bApplyToAllLODs = { "bApplyToAllLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBakeTransformToolProperties), &Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bApplyToAllLODs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyToAllLODs_MetaData), NewProp_bApplyToAllLODs_MetaData) };
void Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation_SetBit(void* Obj)
{
	((UBakeTransformToolProperties*)Obj)->bBakeRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation = { "bBakeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBakeTransformToolProperties), &Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeRotation_MetaData), NewProp_bBakeRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale = { "BakeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeTransformToolProperties, BakeScale), Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakeScale_MetaData), NewProp_BakeScale_MetaData) }; // 802548505
void Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot_SetBit(void* Obj)
{
	((UBakeTransformToolProperties*)Obj)->bRecenterPivot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot = { "bRecenterPivot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBakeTransformToolProperties), &Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecenterPivot_MetaData), NewProp_bRecenterPivot_MetaData) };
void Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale_SetBit(void* Obj)
{
	((UBakeTransformToolProperties*)Obj)->bAllowNoScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale = { "bAllowNoScale", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBakeTransformToolProperties), &Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNoScale_MetaData), NewProp_bAllowNoScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeTransformToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bApplyToAllLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeTransformToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::ClassParams = {
	&UBakeTransformToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBakeTransformToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeTransformToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeTransformToolProperties()
{
	if (!Z_Registration_Info_UClass_UBakeTransformToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeTransformToolProperties.OuterSingleton, Z_Construct_UClass_UBakeTransformToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeTransformToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeTransformToolProperties>()
{
	return UBakeTransformToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeTransformToolProperties);
UBakeTransformToolProperties::~UBakeTransformToolProperties() {}
// End Class UBakeTransformToolProperties

// Begin Class UBakeTransformTool
void UBakeTransformTool::StaticRegisterNativesUBakeTransformTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeTransformTool);
UClass* Z_Construct_UClass_UBakeTransformTool_NoRegister()
{
	return UBakeTransformTool::StaticClass();
}
struct Z_Construct_UClass_UBakeTransformTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple tool to bake scene transform on meshes into the mesh assets\n */" },
		{ "IncludePath", "BakeTransformTool.h" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Simple tool to bake scene transform on meshes into the mesh assets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeTransformTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeTransformTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeTransformTool, BasicProperties), Z_Construct_UClass_UBakeTransformToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeTransformTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformTool_Statics::NewProp_BasicProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeTransformTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBakeTransformTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UBakeTransformTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeTransformTool_Statics::ClassParams = {
	&UBakeTransformTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBakeTransformTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeTransformTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeTransformTool()
{
	if (!Z_Registration_Info_UClass_UBakeTransformTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeTransformTool.OuterSingleton, Z_Construct_UClass_UBakeTransformTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeTransformTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeTransformTool>()
{
	return UBakeTransformTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeTransformTool);
UBakeTransformTool::~UBakeTransformTool() {}
// End Class UBakeTransformTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBakeScaleMethod_StaticEnum, TEXT("EBakeScaleMethod"), &Z_Registration_Info_UEnum_EBakeScaleMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 802548505U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBakeTransformToolBuilder, UBakeTransformToolBuilder::StaticClass, TEXT("UBakeTransformToolBuilder"), &Z_Registration_Info_UClass_UBakeTransformToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeTransformToolBuilder), 4157595503U) },
		{ Z_Construct_UClass_UBakeTransformToolProperties, UBakeTransformToolProperties::StaticClass, TEXT("UBakeTransformToolProperties"), &Z_Registration_Info_UClass_UBakeTransformToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeTransformToolProperties), 4110356969U) },
		{ Z_Construct_UClass_UBakeTransformTool, UBakeTransformTool::StaticClass, TEXT("UBakeTransformTool"), &Z_Registration_Info_UClass_UBakeTransformTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeTransformTool), 179566903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_3891552706(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
