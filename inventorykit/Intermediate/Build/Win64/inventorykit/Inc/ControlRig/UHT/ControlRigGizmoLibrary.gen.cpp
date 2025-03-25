// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRigGizmoLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigGizmoLibrary() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigShapeDefinition();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FControlRigShapeDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition;
class UScriptStruct* FControlRigShapeDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigShapeDefinition, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigShapeDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigShapeDefinition>()
{
	return FControlRigShapeDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeName_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShapeName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigShapeDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_ShapeName = { "ShapeName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigShapeDefinition, ShapeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeName_MetaData), NewProp_ShapeName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigShapeDefinition, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigShapeDefinition, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_ShapeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigShapeDefinition",
	Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::PropPointers),
	sizeof(FControlRigShapeDefinition),
	alignof(FControlRigShapeDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigShapeDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.InnerSingleton, Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition.InnerSingleton;
}
// End ScriptStruct FControlRigShapeDefinition

// Begin Class UControlRigShapeLibrary
void UControlRigShapeLibrary::StaticRegisterNativesUControlRigShapeLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigShapeLibrary);
UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister()
{
	return UControlRigShapeLibrary::StaticClass();
}
struct Z_Construct_UClass_UControlRigShapeLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Control Rig Shape Library" },
		{ "IncludePath", "ControlRigGizmoLibrary.h" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShape_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "DisplayName", "Override Material" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XRayMaterial_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialColorParameter_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[] = {
		{ "Category", "ShapeLibrary" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultShape;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_XRayMaterial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialColorParameter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shapes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigShapeLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultShape = { "DefaultShape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigShapeLibrary, DefaultShape), Z_Construct_UScriptStruct_FControlRigShapeDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultShape_MetaData), NewProp_DefaultShape_MetaData) }; // 2517449593
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigShapeLibrary, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_XRayMaterial = { "XRayMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigShapeLibrary, XRayMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XRayMaterial_MetaData), NewProp_XRayMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_MaterialColorParameter = { "MaterialColorParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigShapeLibrary, MaterialColorParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialColorParameter_MetaData), NewProp_MaterialColorParameter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigShapeDefinition, METADATA_PARAMS(0, nullptr) }; // 2517449593
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigShapeLibrary, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shapes_MetaData), NewProp_Shapes_MetaData) }; // 2517449593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigShapeLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_XRayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_MaterialColorParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibrary_Statics::NewProp_Shapes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigShapeLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigShapeLibrary_Statics::ClassParams = {
	&UControlRigShapeLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UControlRigShapeLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigShapeLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigShapeLibrary()
{
	if (!Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton, Z_Construct_UClass_UControlRigShapeLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigShapeLibrary.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigShapeLibrary>()
{
	return UControlRigShapeLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigShapeLibrary);
UControlRigShapeLibrary::~UControlRigShapeLibrary() {}
// End Class UControlRigShapeLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlRigShapeDefinition::StaticStruct, Z_Construct_UScriptStruct_FControlRigShapeDefinition_Statics::NewStructOps, TEXT("ControlRigShapeDefinition"), &Z_Registration_Info_UScriptStruct_ControlRigShapeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigShapeDefinition), 2517449593U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigShapeLibrary, UControlRigShapeLibrary::StaticClass, TEXT("UControlRigShapeLibrary"), &Z_Registration_Info_UClass_UControlRigShapeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigShapeLibrary), 2409590996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_3158771137(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
