// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/BakeMeshAttributeVertexTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeMeshAttributeVertexTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeInputMeshProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeVertexTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeVertexTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UBakeMeshAttributeVertexToolBuilder
void UBakeMeshAttributeVertexToolBuilder::StaticRegisterNativesUBakeMeshAttributeVertexToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeVertexToolBuilder);
UClass* Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_NoRegister()
{
	return UBakeMeshAttributeVertexToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "BakeMeshAttributeVertexTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeVertexToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_Statics::ClassParams = {
	&UBakeMeshAttributeVertexToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder()
{
	if (!Z_Registration_Info_UClass_UBakeMeshAttributeVertexToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeVertexToolBuilder.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMeshAttributeVertexToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeVertexToolBuilder>()
{
	return UBakeMeshAttributeVertexToolBuilder::StaticClass();
}
UBakeMeshAttributeVertexToolBuilder::UBakeMeshAttributeVertexToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeVertexToolBuilder);
UBakeMeshAttributeVertexToolBuilder::~UBakeMeshAttributeVertexToolBuilder() {}
// End Class UBakeMeshAttributeVertexToolBuilder

// Begin Enum EBakeVertexOutput
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeVertexOutput;
static UEnum* EBakeVertexOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBakeVertexOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBakeVertexOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeVertexOutput"));
	}
	return Z_Registration_Info_UEnum_EBakeVertexOutput.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeVertexOutput>()
{
	return EBakeVertexOutput_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "PerChannel.Comment", "/* Bake vertex data to individual color channels */" },
		{ "PerChannel.Name", "EBakeVertexOutput::PerChannel" },
		{ "PerChannel.ToolTip", "Bake vertex data to individual color channels" },
		{ "RGBA.Comment", "/* Bake vertex data to RGBA */" },
		{ "RGBA.Name", "EBakeVertexOutput::RGBA" },
		{ "RGBA.ToolTip", "Bake vertex data to RGBA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBakeVertexOutput::RGBA", (int64)EBakeVertexOutput::RGBA },
		{ "EBakeVertexOutput::PerChannel", (int64)EBakeVertexOutput::PerChannel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EBakeVertexOutput",
	"EBakeVertexOutput",
	Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput()
{
	if (!Z_Registration_Info_UEnum_EBakeVertexOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeVertexOutput.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBakeVertexOutput.InnerSingleton;
}
// End Enum EBakeVertexOutput

// Begin Enum EBakeVertexChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeVertexChannel;
static UEnum* EBakeVertexChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBakeVertexChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBakeVertexChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeVertexChannel"));
	}
	return Z_Registration_Info_UEnum_EBakeVertexChannel.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeVertexChannel>()
{
	return EBakeVertexChannel_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.Name", "EBakeVertexChannel::A" },
		{ "B.Name", "EBakeVertexChannel::B" },
		{ "G.Name", "EBakeVertexChannel::G" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "R.Name", "EBakeVertexChannel::R" },
		{ "RGBA.Name", "EBakeVertexChannel::RGBA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBakeVertexChannel::R", (int64)EBakeVertexChannel::R },
		{ "EBakeVertexChannel::G", (int64)EBakeVertexChannel::G },
		{ "EBakeVertexChannel::B", (int64)EBakeVertexChannel::B },
		{ "EBakeVertexChannel::A", (int64)EBakeVertexChannel::A },
		{ "EBakeVertexChannel::RGBA", (int64)EBakeVertexChannel::RGBA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EBakeVertexChannel",
	"EBakeVertexChannel",
	Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel()
{
	if (!Z_Registration_Info_UEnum_EBakeVertexChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeVertexChannel.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBakeVertexChannel.InnerSingleton;
}
// End Enum EBakeVertexChannel

// Begin Class UBakeMeshAttributeVertexToolProperties
void UBakeMeshAttributeVertexToolProperties::StaticRegisterNativesUBakeMeshAttributeVertexToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeVertexToolProperties);
UClass* Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_NoRegister()
{
	return UBakeMeshAttributeVertexToolProperties::StaticClass();
}
struct Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeVertexTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The bake output mode */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "The bake output mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MeshModelingToolsExp.EBakeMapType" },
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The bake output type to generate */" },
		{ "EditCondition", "OutputMode == EBakeVertexOutput::RGBA" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "The bake output type to generate" },
		{ "ValidEnumValues", "TangentSpaceNormal, AmbientOcclusion, BentNormal, Curvature, Texture, ObjectSpaceNormal, FaceNormal, Position, MaterialID, PolyGroupID, MultiTexture, VertexColor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeR_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MeshModelingToolsExp.EBakeMapType" },
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The bake output type to generate in the Red channel */" },
		{ "EditCondition", "OutputMode == EBakeVertexOutput::PerChannel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "The bake output type to generate in the Red channel" },
		{ "ValidEnumValues", "None, AmbientOcclusion, Curvature, One, Zero" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeG_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MeshModelingToolsExp.EBakeMapType" },
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The bake output type to generate in the Green channel */" },
		{ "EditCondition", "OutputMode == EBakeVertexOutput::PerChannel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "The bake output type to generate in the Green channel" },
		{ "ValidEnumValues", "None, AmbientOcclusion, Curvature, One, Zero" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeB_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MeshModelingToolsExp.EBakeMapType" },
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The bake output type to generate in the Blue channel */" },
		{ "EditCondition", "OutputMode == EBakeVertexOutput::PerChannel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "The bake output type to generate in the Blue channel" },
		{ "ValidEnumValues", "None, AmbientOcclusion, Curvature, One, Zero" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeA_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MeshModelingToolsExp.EBakeMapType" },
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The bake output type to generate in the Alpha channel */" },
		{ "EditCondition", "OutputMode == EBakeVertexOutput::PerChannel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "The bake output type to generate in the Alpha channel" },
		{ "ValidEnumValues", "None, AmbientOcclusion, Curvature, One, Zero" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMode_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The vertex color channel to preview */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "The vertex color channel to preview" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitAtNormalSeams_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** If true, compute a separate vertex color for each unique normal on a vertex */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "If true, compute a separate vertex color for each unique normal on a vertex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitAtUVSeams_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** If true, Compute a separate vertex color for each unique UV on a vertex. */" },
		{ "DisplayName", "Split at UV Seams" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "If true, Compute a separate vertex color for each unique UV on a vertex." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputTypeR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputTypeG;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputTypeB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputTypeA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewMode;
	static void NewProp_bSplitAtNormalSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitAtNormalSeams;
	static void NewProp_bSplitAtUVSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitAtUVSeams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeVertexToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexToolProperties, OutputMode), Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 3252373995
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexToolProperties, OutputType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputTypeR = { "OutputTypeR", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexToolProperties, OutputTypeR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeR_MetaData), NewProp_OutputTypeR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputTypeG = { "OutputTypeG", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexToolProperties, OutputTypeG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeG_MetaData), NewProp_OutputTypeG_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputTypeB = { "OutputTypeB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexToolProperties, OutputTypeB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeB_MetaData), NewProp_OutputTypeB_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputTypeA = { "OutputTypeA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexToolProperties, OutputTypeA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeA_MetaData), NewProp_OutputTypeA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_PreviewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_PreviewMode = { "PreviewMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexToolProperties, PreviewMode), Z_Construct_UEnum_MeshModelingToolsExp_EBakeVertexChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMode_MetaData), NewProp_PreviewMode_MetaData) }; // 2243801212
void Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_bSplitAtNormalSeams_SetBit(void* Obj)
{
	((UBakeMeshAttributeVertexToolProperties*)Obj)->bSplitAtNormalSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_bSplitAtNormalSeams = { "bSplitAtNormalSeams", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBakeMeshAttributeVertexToolProperties), &Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_bSplitAtNormalSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitAtNormalSeams_MetaData), NewProp_bSplitAtNormalSeams_MetaData) };
void Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_bSplitAtUVSeams_SetBit(void* Obj)
{
	((UBakeMeshAttributeVertexToolProperties*)Obj)->bSplitAtUVSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_bSplitAtUVSeams = { "bSplitAtUVSeams", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBakeMeshAttributeVertexToolProperties), &Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_bSplitAtUVSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitAtUVSeams_MetaData), NewProp_bSplitAtUVSeams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputTypeR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputTypeG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputTypeB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_OutputTypeA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_PreviewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_PreviewMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_bSplitAtNormalSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::NewProp_bSplitAtUVSeams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::ClassParams = {
	&UBakeMeshAttributeVertexToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties()
{
	if (!Z_Registration_Info_UClass_UBakeMeshAttributeVertexToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeVertexToolProperties.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMeshAttributeVertexToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeVertexToolProperties>()
{
	return UBakeMeshAttributeVertexToolProperties::StaticClass();
}
UBakeMeshAttributeVertexToolProperties::UBakeMeshAttributeVertexToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeVertexToolProperties);
UBakeMeshAttributeVertexToolProperties::~UBakeMeshAttributeVertexToolProperties() {}
// End Class UBakeMeshAttributeVertexToolProperties

// Begin Class UBakeMeshAttributeVertexTool
void UBakeMeshAttributeVertexTool::StaticRegisterNativesUBakeMeshAttributeVertexTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeVertexTool);
UClass* Z_Construct_UClass_UBakeMeshAttributeVertexTool_NoRegister()
{
	return UBakeMeshAttributeVertexTool::StaticClass();
}
struct Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Vertex Baking Tool\n */" },
		{ "IncludePath", "BakeMeshAttributeVertexTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
		{ "ToolTip", "Vertex Baking Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMeshSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAlphaMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeVertexTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMeshSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewAlphaMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeVertexTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_InputMeshSettings = { "InputMeshSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexTool, InputMeshSettings), Z_Construct_UClass_UBakeInputMeshProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMeshSettings_MetaData), NewProp_InputMeshSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexTool, Settings), Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexTool, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterial_MetaData), NewProp_PreviewMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_PreviewAlphaMaterial = { "PreviewAlphaMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeVertexTool, PreviewAlphaMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAlphaMaterial_MetaData), NewProp_PreviewAlphaMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_InputMeshSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_PreviewMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::NewProp_PreviewAlphaMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBakeMeshAttributeTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::ClassParams = {
	&UBakeMeshAttributeVertexTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMeshAttributeVertexTool()
{
	if (!Z_Registration_Info_UClass_UBakeMeshAttributeVertexTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeVertexTool.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeVertexTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMeshAttributeVertexTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeVertexTool>()
{
	return UBakeMeshAttributeVertexTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeVertexTool);
UBakeMeshAttributeVertexTool::~UBakeMeshAttributeVertexTool() {}
// End Class UBakeMeshAttributeVertexTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeVertexTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBakeVertexOutput_StaticEnum, TEXT("EBakeVertexOutput"), &Z_Registration_Info_UEnum_EBakeVertexOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3252373995U) },
		{ EBakeVertexChannel_StaticEnum, TEXT("EBakeVertexChannel"), &Z_Registration_Info_UEnum_EBakeVertexChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2243801212U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBakeMeshAttributeVertexToolBuilder, UBakeMeshAttributeVertexToolBuilder::StaticClass, TEXT("UBakeMeshAttributeVertexToolBuilder"), &Z_Registration_Info_UClass_UBakeMeshAttributeVertexToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeVertexToolBuilder), 3468128673U) },
		{ Z_Construct_UClass_UBakeMeshAttributeVertexToolProperties, UBakeMeshAttributeVertexToolProperties::StaticClass, TEXT("UBakeMeshAttributeVertexToolProperties"), &Z_Registration_Info_UClass_UBakeMeshAttributeVertexToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeVertexToolProperties), 2708784834U) },
		{ Z_Construct_UClass_UBakeMeshAttributeVertexTool, UBakeMeshAttributeVertexTool::StaticClass, TEXT("UBakeMeshAttributeVertexTool"), &Z_Registration_Info_UClass_UBakeMeshAttributeVertexTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeVertexTool), 864702284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeVertexTool_h_4025356425(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeVertexTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeVertexTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeVertexTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeVertexTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
