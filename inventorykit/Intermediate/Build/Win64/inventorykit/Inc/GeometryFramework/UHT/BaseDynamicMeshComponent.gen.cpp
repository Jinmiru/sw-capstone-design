// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GeometryFramework/Public/Components/BaseDynamicMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseDynamicMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode();
GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode();
GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolFrameworkComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References

// Begin Enum EDynamicMeshComponentTangentsMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode;
static UEnum* EDynamicMeshComponentTangentsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshComponentTangentsMode"));
	}
	return Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentTangentsMode>()
{
	return EDynamicMeshComponentTangentsMode_StaticEnum();
}
struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoCalculated.Comment", "/** Tangents will be automatically calculated on demand. Note that mesh changes due to tangents calculation will *not* be broadcast via MeshChange events! */" },
		{ "AutoCalculated.Name", "EDynamicMeshComponentTangentsMode::AutoCalculated" },
		{ "AutoCalculated.ToolTip", "Tangents will be automatically calculated on demand. Note that mesh changes due to tangents calculation will *not* be broadcast via MeshChange events!" },
		{ "Comment", "/**\n * Tangent calculation modes\n */" },
		{ "Default.Comment", "/** Tangents mode will be set to the most commonly-useful default -- currently \"From Dynamic Mesh\" */" },
		{ "Default.Name", "EDynamicMeshComponentTangentsMode::Default" },
		{ "Default.ToolTip", "Tangents mode will be set to the most commonly-useful default -- currently \"From Dynamic Mesh\"" },
		{ "ExternallyProvided.Comment", "/** Tangents are externally provided via the FDynamicMesh3 AttributeSet */" },
		{ "ExternallyProvided.DisplayName", "From Dynamic Mesh" },
		{ "ExternallyProvided.Name", "EDynamicMeshComponentTangentsMode::ExternallyProvided" },
		{ "ExternallyProvided.ToolTip", "Tangents are externally provided via the FDynamicMesh3 AttributeSet" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "NoTangents.Comment", "/** Tangents are not used/available, proceed accordingly (eg generate arbitrary orthogonal basis) */" },
		{ "NoTangents.Name", "EDynamicMeshComponentTangentsMode::NoTangents" },
		{ "NoTangents.ToolTip", "Tangents are not used/available, proceed accordingly (eg generate arbitrary orthogonal basis)" },
		{ "ToolTip", "Tangent calculation modes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDynamicMeshComponentTangentsMode::NoTangents", (int64)EDynamicMeshComponentTangentsMode::NoTangents },
		{ "EDynamicMeshComponentTangentsMode::AutoCalculated", (int64)EDynamicMeshComponentTangentsMode::AutoCalculated },
		{ "EDynamicMeshComponentTangentsMode::ExternallyProvided", (int64)EDynamicMeshComponentTangentsMode::ExternallyProvided },
		{ "EDynamicMeshComponentTangentsMode::Default", (int64)EDynamicMeshComponentTangentsMode::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
	nullptr,
	"EDynamicMeshComponentTangentsMode",
	"EDynamicMeshComponentTangentsMode",
	Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode()
{
	if (!Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentTangentsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode.InnerSingleton;
}
// End Enum EDynamicMeshComponentTangentsMode

// Begin Enum EDynamicMeshComponentColorOverrideMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode;
static UEnum* EDynamicMeshComponentColorOverrideMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshComponentColorOverrideMode"));
	}
	return Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentColorOverrideMode>()
{
	return EDynamicMeshComponentColorOverrideMode_StaticEnum();
}
struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Color Override Modes\n */" },
		{ "Constant.Comment", "/** Constant Color is displayed */" },
		{ "Constant.Name", "EDynamicMeshComponentColorOverrideMode::Constant" },
		{ "Constant.ToolTip", "Constant Color is displayed" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "None.Comment", "/** No Color Override enabled */" },
		{ "None.Name", "EDynamicMeshComponentColorOverrideMode::None" },
		{ "None.ToolTip", "No Color Override enabled" },
		{ "Polygroups.Comment", "/** Polygroup Colors are displayed */" },
		{ "Polygroups.Name", "EDynamicMeshComponentColorOverrideMode::Polygroups" },
		{ "Polygroups.ToolTip", "Polygroup Colors are displayed" },
		{ "ToolTip", "Color Override Modes" },
		{ "VertexColors.Comment", "/** Vertex Colors are displayed */" },
		{ "VertexColors.Name", "EDynamicMeshComponentColorOverrideMode::VertexColors" },
		{ "VertexColors.ToolTip", "Vertex Colors are displayed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDynamicMeshComponentColorOverrideMode::None", (int64)EDynamicMeshComponentColorOverrideMode::None },
		{ "EDynamicMeshComponentColorOverrideMode::VertexColors", (int64)EDynamicMeshComponentColorOverrideMode::VertexColors },
		{ "EDynamicMeshComponentColorOverrideMode::Polygroups", (int64)EDynamicMeshComponentColorOverrideMode::Polygroups },
		{ "EDynamicMeshComponentColorOverrideMode::Constant", (int64)EDynamicMeshComponentColorOverrideMode::Constant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
	nullptr,
	"EDynamicMeshComponentColorOverrideMode",
	"EDynamicMeshComponentColorOverrideMode",
	Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode()
{
	if (!Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode.InnerSingleton;
}
// End Enum EDynamicMeshComponentColorOverrideMode

// Begin Enum EDynamicMeshVertexColorTransformMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode;
static UEnum* EDynamicMeshVertexColorTransformMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshVertexColorTransformMode"));
	}
	return Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshVertexColorTransformMode>()
{
	return EDynamicMeshVertexColorTransformMode_StaticEnum();
}
struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Color Transform to apply to Vertex Colors when converting from internal DynamicMesh\n * Color attributes (eg Color Overlay stored in FVector4f) to RHI Render Buffers (FColor).\n * \n * Note that UStaticMesh assumes the Source Mesh colors are Linear and always converts to SRGB.\n */" },
		{ "LinearToSRGB.Comment", "/** Assume Vertex Colors are in Linear space and transform to SRGB */" },
		{ "LinearToSRGB.Name", "EDynamicMeshVertexColorTransformMode::LinearToSRGB" },
		{ "LinearToSRGB.ToolTip", "Assume Vertex Colors are in Linear space and transform to SRGB" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "NoTransform.Comment", "/** Do not apply any color-space transform to Vertex Colors */" },
		{ "NoTransform.Name", "EDynamicMeshVertexColorTransformMode::NoTransform" },
		{ "NoTransform.ToolTip", "Do not apply any color-space transform to Vertex Colors" },
		{ "SRGBToLinear.Comment", "/** Assume Vertex Colors are in SRGB space and convert to Linear */" },
		{ "SRGBToLinear.Name", "EDynamicMeshVertexColorTransformMode::SRGBToLinear" },
		{ "SRGBToLinear.ToolTip", "Assume Vertex Colors are in SRGB space and convert to Linear" },
		{ "ToolTip", "Color Transform to apply to Vertex Colors when converting from internal DynamicMesh\nColor attributes (eg Color Overlay stored in FVector4f) to RHI Render Buffers (FColor).\n\nNote that UStaticMesh assumes the Source Mesh colors are Linear and always converts to SRGB." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDynamicMeshVertexColorTransformMode::NoTransform", (int64)EDynamicMeshVertexColorTransformMode::NoTransform },
		{ "EDynamicMeshVertexColorTransformMode::LinearToSRGB", (int64)EDynamicMeshVertexColorTransformMode::LinearToSRGB },
		{ "EDynamicMeshVertexColorTransformMode::SRGBToLinear", (int64)EDynamicMeshVertexColorTransformMode::SRGBToLinear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
	nullptr,
	"EDynamicMeshVertexColorTransformMode",
	"EDynamicMeshVertexColorTransformMode",
	Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode()
{
	if (!Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode.InnerSingleton;
}
// End Enum EDynamicMeshVertexColorTransformMode

// Begin Class UBaseDynamicMeshComponent Function ClearOverrideRenderMaterial
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Clear any active override render material\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Clear any active override render material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "ClearOverrideRenderMaterial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execClearOverrideRenderMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearOverrideRenderMaterial();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function ClearOverrideRenderMaterial

// Begin Class UBaseDynamicMeshComponent Function ClearSecondaryRenderMaterial
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Clear any active secondary render material\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Clear any active secondary render material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "ClearSecondaryRenderMaterial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execClearSecondaryRenderMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSecondaryRenderMaterial();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function ClearSecondaryRenderMaterial

// Begin Class UBaseDynamicMeshComponent Function GetColorOverrideMode
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics
{
	struct BaseDynamicMeshComponent_eventGetColorOverrideMode_Parms
	{
		EDynamicMeshComponentColorOverrideMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * @return active Color Override mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active Color Override mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetColorOverrideMode_Parms, ReturnValue), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, METADATA_PARAMS(0, nullptr) }; // 508974641
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetColorOverrideMode", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::BaseDynamicMeshComponent_eventGetColorOverrideMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::BaseDynamicMeshComponent_eventGetColorOverrideMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetColorOverrideMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDynamicMeshComponentColorOverrideMode*)Z_Param__Result=P_THIS->GetColorOverrideMode();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetColorOverrideMode

// Begin Class UBaseDynamicMeshComponent Function GetConstantOverrideColor
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics
{
	struct BaseDynamicMeshComponent_eventGetConstantOverrideColor_Parms
	{
		FColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * @return active Color used for Constant Color Override Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active Color used for Constant Color Override Mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetConstantOverrideColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetConstantOverrideColor", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::BaseDynamicMeshComponent_eventGetConstantOverrideColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::BaseDynamicMeshComponent_eventGetConstantOverrideColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetConstantOverrideColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FColor*)Z_Param__Result=P_THIS->GetConstantOverrideColor();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetConstantOverrideColor

// Begin Class UBaseDynamicMeshComponent Function GetDynamicMesh
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics
{
	struct BaseDynamicMeshComponent_eventGetDynamicMesh_Parms
	{
		UDynamicMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return the child UDynamicMesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return the child UDynamicMesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetDynamicMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetDynamicMesh", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::BaseDynamicMeshComponent_eventGetDynamicMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::BaseDynamicMeshComponent_eventGetDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetDynamicMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicMesh**)Z_Param__Result=P_THIS->GetDynamicMesh();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetDynamicMesh

// Begin Class UBaseDynamicMeshComponent Function GetEnableRaytracing
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics
{
	struct BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return true if raytracing support is currently enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return true if raytracing support is currently enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetEnableRaytracing", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::BaseDynamicMeshComponent_eventGetEnableRaytracing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetEnableRaytracing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnableRaytracing();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetEnableRaytracing

// Begin Class UBaseDynamicMeshComponent Function GetEnableWireframeRenderPass
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics
{
	struct BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return true if wireframe rendering pass is enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return true if wireframe rendering pass is enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetEnableWireframeRenderPass", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::BaseDynamicMeshComponent_eventGetEnableWireframeRenderPass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetEnableWireframeRenderPass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnableWireframeRenderPass();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetEnableWireframeRenderPass

// Begin Class UBaseDynamicMeshComponent Function GetFlatShadingEnabled
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics
{
	struct BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * @return active Color used for Constant Color Override Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active Color used for Constant Color Override Mode" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetFlatShadingEnabled", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::BaseDynamicMeshComponent_eventGetFlatShadingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetFlatShadingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFlatShadingEnabled();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetFlatShadingEnabled

// Begin Class UBaseDynamicMeshComponent Function GetOverrideRenderMaterial
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics
{
	struct BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms
	{
		int32 MaterialIndex;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return active override render material for the given MaterialIndex\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active override render material for the given MaterialIndex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms, MaterialIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetOverrideRenderMaterial", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventGetOverrideRenderMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetOverrideRenderMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetOverrideRenderMaterial(Z_Param_MaterialIndex);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetOverrideRenderMaterial

// Begin Class UBaseDynamicMeshComponent Function GetSecondaryBuffersVisibility
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics
{
	struct BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return true if secondary buffers are currently set to be visible\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return true if secondary buffers are currently set to be visible" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetSecondaryBuffersVisibility", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::BaseDynamicMeshComponent_eventGetSecondaryBuffersVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetSecondaryBuffersVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSecondaryBuffersVisibility();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetSecondaryBuffersVisibility

// Begin Class UBaseDynamicMeshComponent Function GetSecondaryRenderMaterial
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics
{
	struct BaseDynamicMeshComponent_eventGetSecondaryRenderMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return active secondary render material\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active secondary render material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetSecondaryRenderMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetSecondaryRenderMaterial", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::BaseDynamicMeshComponent_eventGetSecondaryRenderMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::BaseDynamicMeshComponent_eventGetSecondaryRenderMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetSecondaryRenderMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetSecondaryRenderMaterial();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetSecondaryRenderMaterial

// Begin Class UBaseDynamicMeshComponent Function GetShadowsEnabled
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics
{
	struct BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetShadowsEnabled", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::BaseDynamicMeshComponent_eventGetShadowsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetShadowsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetShadowsEnabled();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetShadowsEnabled

// Begin Class UBaseDynamicMeshComponent Function GetVertexColorSpaceTransformMode
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics
{
	struct BaseDynamicMeshComponent_eventGetVertexColorSpaceTransformMode_Parms
	{
		EDynamicMeshVertexColorTransformMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * @return active Color Override mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return active Color Override mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventGetVertexColorSpaceTransformMode_Parms, ReturnValue), Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode, METADATA_PARAMS(0, nullptr) }; // 39028495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetVertexColorSpaceTransformMode", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::BaseDynamicMeshComponent_eventGetVertexColorSpaceTransformMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::BaseDynamicMeshComponent_eventGetVertexColorSpaceTransformMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetVertexColorSpaceTransformMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDynamicMeshVertexColorTransformMode*)Z_Param__Result=P_THIS->GetVertexColorSpaceTransformMode();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetVertexColorSpaceTransformMode

// Begin Class UBaseDynamicMeshComponent Function GetViewModeOverridesEnabled
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics
{
	struct BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "GetViewModeOverridesEnabled", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::BaseDynamicMeshComponent_eventGetViewModeOverridesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execGetViewModeOverridesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetViewModeOverridesEnabled();
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function GetViewModeOverridesEnabled

// Begin Class UBaseDynamicMeshComponent Function HasOverrideRenderMaterial
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics
{
	struct BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms
	{
		int32 k;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * @return true if an override render material is currently enabled for the given MaterialIndex\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "@return true if an override render material is currently enabled for the given MaterialIndex" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_k;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms, k), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_k,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "HasOverrideRenderMaterial", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventHasOverrideRenderMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execHasOverrideRenderMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_k);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasOverrideRenderMaterial(Z_Param_k);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function HasOverrideRenderMaterial

// Begin Class UBaseDynamicMeshComponent Function SetColorOverrideMode
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics
{
	struct BaseDynamicMeshComponent_eventSetColorOverrideMode_Parms
	{
		EDynamicMeshComponentColorOverrideMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Configure the active Color Override\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure the active Color Override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetColorOverrideMode_Parms, NewMode), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, METADATA_PARAMS(0, nullptr) }; // 508974641
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetColorOverrideMode", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::BaseDynamicMeshComponent_eventSetColorOverrideMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::BaseDynamicMeshComponent_eventSetColorOverrideMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetColorOverrideMode)
{
	P_GET_ENUM(EDynamicMeshComponentColorOverrideMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetColorOverrideMode

// Begin Class UBaseDynamicMeshComponent Function SetConstantOverrideColor
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics
{
	struct BaseDynamicMeshComponent_eventSetConstantOverrideColor_Parms
	{
		FColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Configure the Color used with Constant Color Override Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure the Color used with Constant Color Override Mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetConstantOverrideColor_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetConstantOverrideColor", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::BaseDynamicMeshComponent_eventSetConstantOverrideColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::BaseDynamicMeshComponent_eventSetConstantOverrideColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetConstantOverrideColor)
{
	P_GET_STRUCT(FColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConstantOverrideColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetConstantOverrideColor

// Begin Class UBaseDynamicMeshComponent Function SetEnableFlatShading
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics
{
	struct BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Configure the Color used with Constant Color Override Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure the Color used with Constant Color Override Mode" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetEnableFlatShading", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::BaseDynamicMeshComponent_eventSetEnableFlatShading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetEnableFlatShading)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableFlatShading(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetEnableFlatShading

// Begin Class UBaseDynamicMeshComponent Function SetEnableRaytracing
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics
{
	struct BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms
	{
		bool bSetEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Enable/Disable raytracing support. This is an expensive call as it flushes\n\x09 * the rendering queue and forces an immediate rebuild of the SceneProxy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Enable/Disable raytracing support. This is an expensive call as it flushes\nthe rendering queue and forces an immediate rebuild of the SceneProxy." },
	};
#endif // WITH_METADATA
	static void NewProp_bSetEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::NewProp_bSetEnabled_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms*)Obj)->bSetEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::NewProp_bSetEnabled = { "bSetEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::NewProp_bSetEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::NewProp_bSetEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetEnableRaytracing", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::BaseDynamicMeshComponent_eventSetEnableRaytracing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetEnableRaytracing)
{
	P_GET_UBOOL(Z_Param_bSetEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableRaytracing(Z_Param_bSetEnabled);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetEnableRaytracing

// Begin Class UBaseDynamicMeshComponent Function SetEnableWireframeRenderPass
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics
{
	struct BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Configure whether wireframe rendering is enabled or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure whether wireframe rendering is enabled or not" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetEnableWireframeRenderPass", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::BaseDynamicMeshComponent_eventSetEnableWireframeRenderPass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetEnableWireframeRenderPass)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableWireframeRenderPass(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetEnableWireframeRenderPass

// Begin Class UBaseDynamicMeshComponent Function SetOverrideRenderMaterial
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics
{
	struct BaseDynamicMeshComponent_eventSetOverrideRenderMaterial_Parms
	{
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set an active override render material. This should replace all materials during rendering.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Set an active override render material. This should replace all materials during rendering." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetOverrideRenderMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetOverrideRenderMaterial", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventSetOverrideRenderMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::BaseDynamicMeshComponent_eventSetOverrideRenderMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetOverrideRenderMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverrideRenderMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetOverrideRenderMaterial

// Begin Class UBaseDynamicMeshComponent Function SetSecondaryBuffersVisibility
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics
{
	struct BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms
	{
		bool bSetVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Show/Hide the secondary triangle buffers. Does not invalidate SceneProxy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Show/Hide the secondary triangle buffers. Does not invalidate SceneProxy." },
	};
#endif // WITH_METADATA
	static void NewProp_bSetVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::NewProp_bSetVisible_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms*)Obj)->bSetVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::NewProp_bSetVisible = { "bSetVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::NewProp_bSetVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::NewProp_bSetVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetSecondaryBuffersVisibility", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::BaseDynamicMeshComponent_eventSetSecondaryBuffersVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetSecondaryBuffersVisibility)
{
	P_GET_UBOOL(Z_Param_bSetVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSecondaryBuffersVisibility(Z_Param_bSetVisible);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetSecondaryBuffersVisibility

// Begin Class UBaseDynamicMeshComponent Function SetSecondaryRenderMaterial
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics
{
	struct BaseDynamicMeshComponent_eventSetSecondaryRenderMaterial_Parms
	{
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "Comment", "/**\n\x09 * Set an active secondary render material. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Set an active secondary render material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetSecondaryRenderMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetSecondaryRenderMaterial", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::BaseDynamicMeshComponent_eventSetSecondaryRenderMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::BaseDynamicMeshComponent_eventSetSecondaryRenderMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetSecondaryRenderMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSecondaryRenderMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetSecondaryRenderMaterial

// Begin Class UBaseDynamicMeshComponent Function SetShadowsEnabled
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics
{
	struct BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetShadowsEnabled", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::BaseDynamicMeshComponent_eventSetShadowsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetShadowsEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowsEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetShadowsEnabled

// Begin Class UBaseDynamicMeshComponent Function SetVertexColorSpaceTransformMode
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics
{
	struct BaseDynamicMeshComponent_eventSetVertexColorSpaceTransformMode_Parms
	{
		EDynamicMeshVertexColorTransformMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Configure the active Color Space Transform Mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Configure the active Color Space Transform Mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseDynamicMeshComponent_eventSetVertexColorSpaceTransformMode_Parms, NewMode), Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode, METADATA_PARAMS(0, nullptr) }; // 39028495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetVertexColorSpaceTransformMode", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::BaseDynamicMeshComponent_eventSetVertexColorSpaceTransformMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::BaseDynamicMeshComponent_eventSetVertexColorSpaceTransformMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetVertexColorSpaceTransformMode)
{
	P_GET_ENUM(EDynamicMeshVertexColorTransformMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetVertexColorSpaceTransformMode

// Begin Class UBaseDynamicMeshComponent Function SetViewModeOverridesEnabled
struct Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics
{
	struct BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh Component" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms), &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseDynamicMeshComponent, nullptr, "SetViewModeOverridesEnabled", nullptr, nullptr, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::BaseDynamicMeshComponent_eventSetViewModeOverridesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseDynamicMeshComponent::execSetViewModeOverridesEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewModeOverridesEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UBaseDynamicMeshComponent Function SetViewModeOverridesEnabled

// Begin Class UBaseDynamicMeshComponent
void UBaseDynamicMeshComponent::StaticRegisterNativesUBaseDynamicMeshComponent()
{
	UClass* Class = UBaseDynamicMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearOverrideRenderMaterial", &UBaseDynamicMeshComponent::execClearOverrideRenderMaterial },
		{ "ClearSecondaryRenderMaterial", &UBaseDynamicMeshComponent::execClearSecondaryRenderMaterial },
		{ "GetColorOverrideMode", &UBaseDynamicMeshComponent::execGetColorOverrideMode },
		{ "GetConstantOverrideColor", &UBaseDynamicMeshComponent::execGetConstantOverrideColor },
		{ "GetDynamicMesh", &UBaseDynamicMeshComponent::execGetDynamicMesh },
		{ "GetEnableRaytracing", &UBaseDynamicMeshComponent::execGetEnableRaytracing },
		{ "GetEnableWireframeRenderPass", &UBaseDynamicMeshComponent::execGetEnableWireframeRenderPass },
		{ "GetFlatShadingEnabled", &UBaseDynamicMeshComponent::execGetFlatShadingEnabled },
		{ "GetOverrideRenderMaterial", &UBaseDynamicMeshComponent::execGetOverrideRenderMaterial },
		{ "GetSecondaryBuffersVisibility", &UBaseDynamicMeshComponent::execGetSecondaryBuffersVisibility },
		{ "GetSecondaryRenderMaterial", &UBaseDynamicMeshComponent::execGetSecondaryRenderMaterial },
		{ "GetShadowsEnabled", &UBaseDynamicMeshComponent::execGetShadowsEnabled },
		{ "GetVertexColorSpaceTransformMode", &UBaseDynamicMeshComponent::execGetVertexColorSpaceTransformMode },
		{ "GetViewModeOverridesEnabled", &UBaseDynamicMeshComponent::execGetViewModeOverridesEnabled },
		{ "HasOverrideRenderMaterial", &UBaseDynamicMeshComponent::execHasOverrideRenderMaterial },
		{ "SetColorOverrideMode", &UBaseDynamicMeshComponent::execSetColorOverrideMode },
		{ "SetConstantOverrideColor", &UBaseDynamicMeshComponent::execSetConstantOverrideColor },
		{ "SetEnableFlatShading", &UBaseDynamicMeshComponent::execSetEnableFlatShading },
		{ "SetEnableRaytracing", &UBaseDynamicMeshComponent::execSetEnableRaytracing },
		{ "SetEnableWireframeRenderPass", &UBaseDynamicMeshComponent::execSetEnableWireframeRenderPass },
		{ "SetOverrideRenderMaterial", &UBaseDynamicMeshComponent::execSetOverrideRenderMaterial },
		{ "SetSecondaryBuffersVisibility", &UBaseDynamicMeshComponent::execSetSecondaryBuffersVisibility },
		{ "SetSecondaryRenderMaterial", &UBaseDynamicMeshComponent::execSetSecondaryRenderMaterial },
		{ "SetShadowsEnabled", &UBaseDynamicMeshComponent::execSetShadowsEnabled },
		{ "SetVertexColorSpaceTransformMode", &UBaseDynamicMeshComponent::execSetVertexColorSpaceTransformMode },
		{ "SetViewModeOverridesEnabled", &UBaseDynamicMeshComponent::execSetViewModeOverridesEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseDynamicMeshComponent);
UClass* Z_Construct_UClass_UBaseDynamicMeshComponent_NoRegister()
{
	return UBaseDynamicMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UBaseDynamicMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * UBaseDynamicMeshComponent is a base interface for a UMeshComponent based on a UDynamicMesh.\n */" },
		{ "HideCategories", "LOD Mobility Trigger" },
		{ "IncludePath", "Components/BaseDynamicMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "UBaseDynamicMeshComponent is a base interface for a UMeshComponent based on a UDynamicMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitShowWireframe_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * If true, render the Wireframe on top of the Shaded Mesh\n\x09 */" },
		{ "DisplayName", "Wireframe Overlay" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "If true, render the Wireframe on top of the Shaded Mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Constant Color used when Override Color Mode is set to Constant\n\x09 */" },
		{ "DisplayName", "Wireframe Color" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Constant Color used when Override Color Mode is set to Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMode_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "DisplayName", "Color Override" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantColor_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Constant Color used when Override Color Mode is set to Constant\n\x09 */" },
		{ "DisplayName", "Constant Color" },
		{ "EditCondition", "ColorMode==EDynamicMeshComponentColorOverrideMode::Constant" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Constant Color used when Override Color Mode is set to Constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceMode_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Color Space Transform that will be applied to the colors stored in the DynamicMesh Attribute Color Overlay when\n\x09 * constructing render buffers. \n\x09 * Default is \"No Transform\", ie color R/G/B/A will be independently converted from 32-bit float to 8-bit by direct mapping.\n\x09 * LinearToSRGB mode will apply SRGB conversion, ie assumes colors in the Mesh are in Linear space. This will produce the same behavior as UStaticMesh.\n\x09 * SRGBToLinear mode will invert SRGB conversion, ie assumes colors in the Mesh are in SRGB space. \n\x09 */" },
		{ "DisplayName", "Vertex Color Space" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Color Space Transform that will be applied to the colors stored in the DynamicMesh Attribute Color Overlay when\nconstructing render buffers.\nDefault is \"No Transform\", ie color R/G/B/A will be independently converted from 32-bit float to 8-bit by direct mapping.\nLinearToSRGB mode will apply SRGB conversion, ie assumes colors in the Mesh are in Linear space. This will produce the same behavior as UStaticMesh.\nSRGBToLinear mode will invert SRGB conversion, ie assumes colors in the Mesh are in SRGB space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFlatShading_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Enable use of per-triangle facet normals in place of mesh normals\n\x09 */" },
		{ "DisplayName", "Flat Shading" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Enable use of per-triangle facet normals in place of mesh normals" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableViewModeOverrides_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/** \n\x09 * This flag controls whether Editor View Mode Overrides are enabled for this mesh. For example, this controls hidden-line removal on the wireframe \n\x09 * in Wireframe View Mode, and whether the normal map will be disabled in Lighting-Only View Mode, as well as various other things.\n\x09 * Use SetViewModeOverridesEnabled() to control this setting in Blueprints/C++.\n\x09 */" },
		{ "DisplayName", "View Mode Overrides" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "This flag controls whether Editor View Mode Overrides are enabled for this mesh. For example, this controls hidden-line removal on the wireframe\nin Wireframe View Mode, and whether the normal map will be disabled in Lighting-Only View Mode, as well as various other things.\nUse SetViewModeOverridesEnabled() to control this setting in Blueprints/C++." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRenderMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRenderMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRaytracing_MetaData[] = {
		{ "Category", "Dynamic Mesh Component|Rendering" },
		{ "Comment", "/**\n\x09 * Enable/disable Raytracing support on this Mesh, if Raytracing is currently enabled in the Project Settings.\n\x09 * Use SetEnableRaytracing() to configure this flag in Blueprints/C++.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
		{ "ToolTip", "Enable/disable Raytracing support on this Mesh, if Raytracing is currently enabled in the Project Settings.\nUse SetEnableRaytracing() to configure this flag in Blueprints/C++." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/BaseDynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bExplicitShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitShowWireframe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpaceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpaceMode;
	static void NewProp_bEnableFlatShading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFlatShading;
	static void NewProp_bEnableViewModeOverrides_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableViewModeOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideRenderMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryRenderMaterial;
	static void NewProp_bEnableRaytracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRaytracing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearOverrideRenderMaterial, "ClearOverrideRenderMaterial" }, // 932454696
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial, "ClearSecondaryRenderMaterial" }, // 2980172976
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetColorOverrideMode, "GetColorOverrideMode" }, // 2602090435
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetConstantOverrideColor, "GetConstantOverrideColor" }, // 1887483573
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetDynamicMesh, "GetDynamicMesh" }, // 101006042
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableRaytracing, "GetEnableRaytracing" }, // 851736744
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetEnableWireframeRenderPass, "GetEnableWireframeRenderPass" }, // 2238133625
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetFlatShadingEnabled, "GetFlatShadingEnabled" }, // 1568605191
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetOverrideRenderMaterial, "GetOverrideRenderMaterial" }, // 3800087108
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility, "GetSecondaryBuffersVisibility" }, // 3140436871
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetSecondaryRenderMaterial, "GetSecondaryRenderMaterial" }, // 2151449632
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetShadowsEnabled, "GetShadowsEnabled" }, // 1885064402
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetVertexColorSpaceTransformMode, "GetVertexColorSpaceTransformMode" }, // 3223229433
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_GetViewModeOverridesEnabled, "GetViewModeOverridesEnabled" }, // 2283491676
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_HasOverrideRenderMaterial, "HasOverrideRenderMaterial" }, // 4069038164
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetColorOverrideMode, "SetColorOverrideMode" }, // 2830573143
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetConstantOverrideColor, "SetConstantOverrideColor" }, // 863922892
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableFlatShading, "SetEnableFlatShading" }, // 122983700
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableRaytracing, "SetEnableRaytracing" }, // 1701405274
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetEnableWireframeRenderPass, "SetEnableWireframeRenderPass" }, // 666560049
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetOverrideRenderMaterial, "SetOverrideRenderMaterial" }, // 4078676647
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility, "SetSecondaryBuffersVisibility" }, // 2303696295
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetSecondaryRenderMaterial, "SetSecondaryRenderMaterial" }, // 884957656
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetShadowsEnabled, "SetShadowsEnabled" }, // 733746254
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetVertexColorSpaceTransformMode, "SetVertexColorSpaceTransformMode" }, // 3915498533
		{ &Z_Construct_UFunction_UBaseDynamicMeshComponent_SetViewModeOverridesEnabled, "SetViewModeOverridesEnabled" }, // 384268892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseDynamicMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe_SetBit(void* Obj)
{
	((UBaseDynamicMeshComponent*)Obj)->bExplicitShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe = { "bExplicitShowWireframe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseDynamicMeshComponent), &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExplicitShowWireframe_MetaData), NewProp_bExplicitShowWireframe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDynamicMeshComponent, WireframeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeColor_MetaData), NewProp_WireframeColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode = { "ColorMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDynamicMeshComponent, ColorMode), Z_Construct_UEnum_GeometryFramework_EDynamicMeshComponentColorOverrideMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMode_MetaData), NewProp_ColorMode_MetaData) }; // 508974641
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ConstantColor = { "ConstantColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDynamicMeshComponent, ConstantColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantColor_MetaData), NewProp_ConstantColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorSpaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorSpaceMode = { "ColorSpaceMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDynamicMeshComponent, ColorSpaceMode), Z_Construct_UEnum_GeometryFramework_EDynamicMeshVertexColorTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSpaceMode_MetaData), NewProp_ColorSpaceMode_MetaData) }; // 39028495
void Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading_SetBit(void* Obj)
{
	((UBaseDynamicMeshComponent*)Obj)->bEnableFlatShading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading = { "bEnableFlatShading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseDynamicMeshComponent), &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFlatShading_MetaData), NewProp_bEnableFlatShading_MetaData) };
void Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides_SetBit(void* Obj)
{
	((UBaseDynamicMeshComponent*)Obj)->bEnableViewModeOverrides = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides = { "bEnableViewModeOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseDynamicMeshComponent), &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableViewModeOverrides_MetaData), NewProp_bEnableViewModeOverrides_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_OverrideRenderMaterial = { "OverrideRenderMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDynamicMeshComponent, OverrideRenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideRenderMaterial_MetaData), NewProp_OverrideRenderMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_SecondaryRenderMaterial = { "SecondaryRenderMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDynamicMeshComponent, SecondaryRenderMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryRenderMaterial_MetaData), NewProp_SecondaryRenderMaterial_MetaData) };
void Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing_SetBit(void* Obj)
{
	((UBaseDynamicMeshComponent*)Obj)->bEnableRaytracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing = { "bEnableRaytracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseDynamicMeshComponent), &Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRaytracing_MetaData), NewProp_bEnableRaytracing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials_Inner = { "BaseMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials = { "BaseMaterials", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseDynamicMeshComponent, BaseMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMaterials_MetaData), NewProp_BaseMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bExplicitShowWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_WireframeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ConstantColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorSpaceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_ColorSpaceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableFlatShading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableViewModeOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_OverrideRenderMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_SecondaryRenderMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_bEnableRaytracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::NewProp_BaseMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UToolFrameworkComponent_NoRegister, (int32)VTABLE_OFFSET(UBaseDynamicMeshComponent, IToolFrameworkComponent), false },  // 1682361775
	{ Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UBaseDynamicMeshComponent, IMeshVertexCommandChangeTarget), false },  // 2644474088
	{ Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UBaseDynamicMeshComponent, IMeshCommandChangeTarget), false },  // 1479512687
	{ Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UBaseDynamicMeshComponent, IMeshReplacementCommandChangeTarget), false },  // 945490776
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::ClassParams = {
	&UBaseDynamicMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseDynamicMeshComponent()
{
	if (!Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton, Z_Construct_UClass_UBaseDynamicMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseDynamicMeshComponent.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UBaseDynamicMeshComponent>()
{
	return UBaseDynamicMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseDynamicMeshComponent);
UBaseDynamicMeshComponent::~UBaseDynamicMeshComponent() {}
// End Class UBaseDynamicMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDynamicMeshComponentTangentsMode_StaticEnum, TEXT("EDynamicMeshComponentTangentsMode"), &Z_Registration_Info_UEnum_EDynamicMeshComponentTangentsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2825355924U) },
		{ EDynamicMeshComponentColorOverrideMode_StaticEnum, TEXT("EDynamicMeshComponentColorOverrideMode"), &Z_Registration_Info_UEnum_EDynamicMeshComponentColorOverrideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 508974641U) },
		{ EDynamicMeshVertexColorTransformMode_StaticEnum, TEXT("EDynamicMeshVertexColorTransformMode"), &Z_Registration_Info_UEnum_EDynamicMeshVertexColorTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 39028495U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseDynamicMeshComponent, UBaseDynamicMeshComponent::StaticClass, TEXT("UBaseDynamicMeshComponent"), &Z_Registration_Info_UClass_UBaseDynamicMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseDynamicMeshComponent), 328974551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_3958805998(TEXT("/Script/GeometryFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
