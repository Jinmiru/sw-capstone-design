// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/VoxelBlendMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBlendMeshesTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelBlendMeshesTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelBlendMeshesTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelBlendMeshesToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelBlendMeshesToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVoxelBlendMeshesToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum EVoxelBlendOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelBlendOperation;
static UEnum* EVoxelBlendOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelBlendOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelBlendOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EVoxelBlendOperation"));
	}
	return Z_Registration_Info_UEnum_EVoxelBlendOperation.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EVoxelBlendOperation>()
{
	return EVoxelBlendOperation_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** CSG-style blend operations */" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "Subtract.Comment", "/** Smoothed subtraction of all shapes from the first selected shape */" },
		{ "Subtract.Name", "EVoxelBlendOperation::Subtract" },
		{ "Subtract.ToolTip", "Smoothed subtraction of all shapes from the first selected shape" },
		{ "ToolTip", "CSG-style blend operations" },
		{ "Union.Comment", "/** Smoothed union of all shapes */" },
		{ "Union.Name", "EVoxelBlendOperation::Union" },
		{ "Union.ToolTip", "Smoothed union of all shapes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelBlendOperation::Union", (int64)EVoxelBlendOperation::Union },
		{ "EVoxelBlendOperation::Subtract", (int64)EVoxelBlendOperation::Subtract },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EVoxelBlendOperation",
	"EVoxelBlendOperation",
	Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation()
{
	if (!Z_Registration_Info_UEnum_EVoxelBlendOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelBlendOperation.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelBlendOperation.InnerSingleton;
}
// End Enum EVoxelBlendOperation

// Begin Class UVoxelBlendMeshesToolProperties
void UVoxelBlendMeshesToolProperties::StaticRegisterNativesUVoxelBlendMeshesToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelBlendMeshesToolProperties);
UClass* Z_Construct_UClass_UVoxelBlendMeshesToolProperties_NoRegister()
{
	return UVoxelBlendMeshesToolProperties::StaticClass();
}
struct Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties of the blend operation\n */" },
		{ "IncludePath", "VoxelBlendMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "ToolTip", "Properties of the blend operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendPower_MetaData[] = {
		{ "Category", "Blend" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Blend power controls the shape of the blend between shapes */" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "ToolTip", "Blend power controls the shape of the blend between shapes" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFalloff_MetaData[] = {
		{ "Category", "Blend" },
		{ "ClampMax", "1000" },
		{ "ClampMin", ".001" },
		{ "Comment", "/** Blend falloff controls the size of the blend region */" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "ToolTip", "Blend falloff controls the size of the blend region" },
		{ "UIMax", "100" },
		{ "UIMin", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** How to combine the shapes */" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "ToolTip", "How to combine the shapes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVoxWrap_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "Comment", "/** Apply a \"VoxWrap\" operation to input mesh(es) before computing the blend.  Fixes results for inputs with holes and/or self-intersections. */" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "ToolTip", "Apply a \"VoxWrap\" operation to input mesh(es) before computing the blend.  Fixes results for inputs with holes and/or self-intersections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveInternalsAfterVoxWrap_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "Comment", "/** Remove internal surfaces from the VoxWrap output, before computing the blend. */" },
		{ "EditCondition", "bVoxWrap == true" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "ToolTip", "Remove internal surfaces from the VoxWrap output, before computing the blend." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThickenShells_MetaData[] = {
		{ "Category", "VoxWrapPreprocess" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thicken open-boundary surfaces (extrude them inwards) before VoxWrapping them. Units are in world space. If 0 then no extrusion is applied. */" },
		{ "EditCondition", "bVoxWrap == true" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "ToolTip", "Thicken open-boundary surfaces (extrude them inwards) before VoxWrapping them. Units are in world space. If 0 then no extrusion is applied." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BlendPower;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BlendFalloff;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static void NewProp_bVoxWrap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoxWrap;
	static void NewProp_bRemoveInternalsAfterVoxWrap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveInternalsAfterVoxWrap;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ThickenShells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlendMeshesToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_BlendPower = { "BlendPower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBlendMeshesToolProperties, BlendPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendPower_MetaData), NewProp_BlendPower_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_BlendFalloff = { "BlendFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBlendMeshesToolProperties, BlendFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFalloff_MetaData), NewProp_BlendFalloff_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBlendMeshesToolProperties, Operation), Z_Construct_UEnum_MeshModelingToolsExp_EVoxelBlendOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 1632266036
void Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_bVoxWrap_SetBit(void* Obj)
{
	((UVoxelBlendMeshesToolProperties*)Obj)->bVoxWrap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_bVoxWrap = { "bVoxWrap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelBlendMeshesToolProperties), &Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_bVoxWrap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVoxWrap_MetaData), NewProp_bVoxWrap_MetaData) };
void Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_SetBit(void* Obj)
{
	((UVoxelBlendMeshesToolProperties*)Obj)->bRemoveInternalsAfterVoxWrap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap = { "bRemoveInternalsAfterVoxWrap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelBlendMeshesToolProperties), &Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveInternalsAfterVoxWrap_MetaData), NewProp_bRemoveInternalsAfterVoxWrap_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_ThickenShells = { "ThickenShells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBlendMeshesToolProperties, ThickenShells), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThickenShells_MetaData), NewProp_ThickenShells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_BlendPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_BlendFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_bVoxWrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_bRemoveInternalsAfterVoxWrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::NewProp_ThickenShells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::ClassParams = {
	&UVoxelBlendMeshesToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelBlendMeshesToolProperties()
{
	if (!Z_Registration_Info_UClass_UVoxelBlendMeshesToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBlendMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UVoxelBlendMeshesToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelBlendMeshesToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelBlendMeshesToolProperties>()
{
	return UVoxelBlendMeshesToolProperties::StaticClass();
}
UVoxelBlendMeshesToolProperties::UVoxelBlendMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlendMeshesToolProperties);
UVoxelBlendMeshesToolProperties::~UVoxelBlendMeshesToolProperties() {}
// End Class UVoxelBlendMeshesToolProperties

// Begin Class UVoxelBlendMeshesTool
void UVoxelBlendMeshesTool::StaticRegisterNativesUVoxelBlendMeshesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelBlendMeshesTool);
UClass* Z_Construct_UClass_UVoxelBlendMeshesTool_NoRegister()
{
	return UVoxelBlendMeshesTool::StaticClass();
}
struct Z_Construct_UClass_UVoxelBlendMeshesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool to smoothly blend meshes together\n */" },
		{ "IncludePath", "VoxelBlendMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
		{ "ToolTip", "Tool to smoothly blend meshes together" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlendMeshesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::NewProp_BlendProperties = { "BlendProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBlendMeshesTool, BlendProperties), Z_Construct_UClass_UVoxelBlendMeshesToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProperties_MetaData), NewProp_BlendProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::NewProp_BlendProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseVoxelTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::ClassParams = {
	&UVoxelBlendMeshesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelBlendMeshesTool()
{
	if (!Z_Registration_Info_UClass_UVoxelBlendMeshesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBlendMeshesTool.OuterSingleton, Z_Construct_UClass_UVoxelBlendMeshesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelBlendMeshesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelBlendMeshesTool>()
{
	return UVoxelBlendMeshesTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlendMeshesTool);
UVoxelBlendMeshesTool::~UVoxelBlendMeshesTool() {}
// End Class UVoxelBlendMeshesTool

// Begin Class UVoxelBlendMeshesToolBuilder
void UVoxelBlendMeshesToolBuilder::StaticRegisterNativesUVoxelBlendMeshesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelBlendMeshesToolBuilder);
UClass* Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_NoRegister()
{
	return UVoxelBlendMeshesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelBlendMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelBlendMeshesTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlendMeshesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_Statics::ClassParams = {
	&UVoxelBlendMeshesToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelBlendMeshesToolBuilder()
{
	if (!Z_Registration_Info_UClass_UVoxelBlendMeshesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBlendMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UVoxelBlendMeshesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelBlendMeshesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVoxelBlendMeshesToolBuilder>()
{
	return UVoxelBlendMeshesToolBuilder::StaticClass();
}
UVoxelBlendMeshesToolBuilder::UVoxelBlendMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlendMeshesToolBuilder);
UVoxelBlendMeshesToolBuilder::~UVoxelBlendMeshesToolBuilder() {}
// End Class UVoxelBlendMeshesToolBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelBlendMeshesTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelBlendOperation_StaticEnum, TEXT("EVoxelBlendOperation"), &Z_Registration_Info_UEnum_EVoxelBlendOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1632266036U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelBlendMeshesToolProperties, UVoxelBlendMeshesToolProperties::StaticClass, TEXT("UVoxelBlendMeshesToolProperties"), &Z_Registration_Info_UClass_UVoxelBlendMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBlendMeshesToolProperties), 3651889591U) },
		{ Z_Construct_UClass_UVoxelBlendMeshesTool, UVoxelBlendMeshesTool::StaticClass, TEXT("UVoxelBlendMeshesTool"), &Z_Registration_Info_UClass_UVoxelBlendMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBlendMeshesTool), 2749274984U) },
		{ Z_Construct_UClass_UVoxelBlendMeshesToolBuilder, UVoxelBlendMeshesToolBuilder::StaticClass, TEXT("UVoxelBlendMeshesToolBuilder"), &Z_Registration_Info_UClass_UVoxelBlendMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBlendMeshesToolBuilder), 635079689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelBlendMeshesTool_h_1052213083(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelBlendMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelBlendMeshesTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelBlendMeshesTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VoxelBlendMeshesTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
