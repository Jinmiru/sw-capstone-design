// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/VoxelMorphologyMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMorphologyMeshesTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EMorphologyOperation();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UVoxelMorphologyMeshesToolProperties
void UVoxelMorphologyMeshesToolProperties::StaticRegisterNativesUVoxelMorphologyMeshesToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMorphologyMeshesToolProperties);
UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_NoRegister()
{
	return UVoxelMorphologyMeshesToolProperties::StaticClass();
}
struct Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties of the morphology tool\n */" },
		{ "IncludePath", "VoxelMorphologyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Properties of the morphology tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Which offset (or morphology) operation to apply */" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Which offset (or morphology) operation to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Offset" },
		{ "ClampMax", "1000" },
		{ "ClampMin", ".001" },
		{ "Comment", "/** Distance to offset the mesh */" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Distance to offset the mesh" },
		{ "UIMax", "100" },
		{ "UIMin", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVoxWrap_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "Comment", "/** Apply a \"VoxWrap\" operation to input mesh(es) before computing the morphology.  Fixes results for inputs with holes and/or self-intersections. */" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Apply a \"VoxWrap\" operation to input mesh(es) before computing the morphology.  Fixes results for inputs with holes and/or self-intersections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveInternalsAfterVoxWrap_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "Comment", "/** Remove internal surfaces from the VoxWrap output, before computing the morphology. */" },
		{ "EditCondition", "bVoxWrap == true" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Remove internal surfaces from the VoxWrap output, before computing the morphology." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThickenShells_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thicken open-boundary surfaces (extrude them inwards) before VoxWrapping them. Units are in world space. If 0, no extrusion is applied. */" },
		{ "EditCondition", "bVoxWrap == true" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Thicken open-boundary surfaces (extrude them inwards) before VoxWrapping them. Units are in world space. If 0, no extrusion is applied." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static void NewProp_bVoxWrap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoxWrap;
	static void NewProp_bRemoveInternalsAfterVoxWrap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveInternalsAfterVoxWrap;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ThickenShells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMorphologyMeshesToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMorphologyMeshesToolProperties, Operation), Z_Construct_UEnum_ModelingOperators_EMorphologyOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 4240544727
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMorphologyMeshesToolProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
void Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap_SetBit(void* Obj)
{
	((UVoxelMorphologyMeshesToolProperties*)Obj)->bVoxWrap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap = { "bVoxWrap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMorphologyMeshesToolProperties), &Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVoxWrap_MetaData), NewProp_bVoxWrap_MetaData) };
void Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_SetBit(void* Obj)
{
	((UVoxelMorphologyMeshesToolProperties*)Obj)->bRemoveInternalsAfterVoxWrap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap = { "bRemoveInternalsAfterVoxWrap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMorphologyMeshesToolProperties), &Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveInternalsAfterVoxWrap_MetaData), NewProp_bRemoveInternalsAfterVoxWrap_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_ThickenShells = { "ThickenShells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMorphologyMeshesToolProperties, ThickenShells), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThickenShells_MetaData), NewProp_ThickenShells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bVoxWrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::NewProp_ThickenShells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::ClassParams = {
	&UVoxelMorphologyMeshesToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties()
{
	if (!Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelMorphologyMeshesToolProperties>()
{
	return UVoxelMorphologyMeshesToolProperties::StaticClass();
}
UVoxelMorphologyMeshesToolProperties::UVoxelMorphologyMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMorphologyMeshesToolProperties);
UVoxelMorphologyMeshesToolProperties::~UVoxelMorphologyMeshesToolProperties() {}
// End Class UVoxelMorphologyMeshesToolProperties

// Begin Class UVoxelMorphologyMeshesTool
void UVoxelMorphologyMeshesTool::StaticRegisterNativesUVoxelMorphologyMeshesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMorphologyMeshesTool);
UClass* Z_Construct_UClass_UVoxelMorphologyMeshesTool_NoRegister()
{
	return UVoxelMorphologyMeshesTool::StaticClass();
}
struct Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Morphology tool -- dilate, contract, close, open operations on the input shape\n */" },
		{ "IncludePath", "VoxelMorphologyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
		{ "ToolTip", "Morphology tool -- dilate, contract, close, open operations on the input shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphologyProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MorphologyProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMorphologyMeshesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::NewProp_MorphologyProperties = { "MorphologyProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMorphologyMeshesTool, MorphologyProperties), Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphologyProperties_MetaData), NewProp_MorphologyProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::NewProp_MorphologyProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseVoxelTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::ClassParams = {
	&UVoxelMorphologyMeshesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMorphologyMeshesTool()
{
	if (!Z_Registration_Info_UClass_UVoxelMorphologyMeshesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMorphologyMeshesTool.OuterSingleton, Z_Construct_UClass_UVoxelMorphologyMeshesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMorphologyMeshesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelMorphologyMeshesTool>()
{
	return UVoxelMorphologyMeshesTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMorphologyMeshesTool);
UVoxelMorphologyMeshesTool::~UVoxelMorphologyMeshesTool() {}
// End Class UVoxelMorphologyMeshesTool

// Begin Class UVoxelMorphologyMeshesToolBuilder
void UVoxelMorphologyMeshesToolBuilder::StaticRegisterNativesUVoxelMorphologyMeshesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelMorphologyMeshesToolBuilder);
UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_NoRegister()
{
	return UVoxelMorphologyMeshesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelMorphologyMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelMorphologyMeshesTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMorphologyMeshesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::ClassParams = {
	&UVoxelMorphologyMeshesToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder()
{
	if (!Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelMorphologyMeshesToolBuilder>()
{
	return UVoxelMorphologyMeshesToolBuilder::StaticClass();
}
UVoxelMorphologyMeshesToolBuilder::UVoxelMorphologyMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMorphologyMeshesToolBuilder);
UVoxelMorphologyMeshesToolBuilder::~UVoxelMorphologyMeshesToolBuilder() {}
// End Class UVoxelMorphologyMeshesToolBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMorphologyMeshesToolProperties, UVoxelMorphologyMeshesToolProperties::StaticClass, TEXT("UVoxelMorphologyMeshesToolProperties"), &Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMorphologyMeshesToolProperties), 3110233673U) },
		{ Z_Construct_UClass_UVoxelMorphologyMeshesTool, UVoxelMorphologyMeshesTool::StaticClass, TEXT("UVoxelMorphologyMeshesTool"), &Z_Registration_Info_UClass_UVoxelMorphologyMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMorphologyMeshesTool), 3890671007U) },
		{ Z_Construct_UClass_UVoxelMorphologyMeshesToolBuilder, UVoxelMorphologyMeshesToolBuilder::StaticClass, TEXT("UVoxelMorphologyMeshesToolBuilder"), &Z_Registration_Info_UClass_UVoxelMorphologyMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMorphologyMeshesToolBuilder), 4138701196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_14405540(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelMorphologyMeshesTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
