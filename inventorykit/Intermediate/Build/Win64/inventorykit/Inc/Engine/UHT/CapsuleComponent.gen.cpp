// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCapsuleComponent Function GetScaledCapsuleHalfHeight
struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics
{
	struct CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Returns the capsule half-height scaled by the component scale. This includes both the cylinder and hemisphere cap.\n\x09 * @return The capsule half-height scaled by the component scale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule half-height scaled by the component scale. This includes both the cylinder and hemisphere cap.\n@return The capsule half-height scaled by the component scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleHalfHeight", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetScaledCapsuleHalfHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleHalfHeight();
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetScaledCapsuleHalfHeight

// Begin Class UCapsuleComponent Function GetScaledCapsuleHalfHeight_WithoutHemisphere
struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics
{
	struct CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/** \n\x09* Returns the capsule half-height minus radius (to exclude the hemisphere), scaled by the component scale.\n\x09* From the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.\n\x09* @return The capsule half-height minus radius, scaled by the component scale.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule half-height minus radius (to exclude the hemisphere), scaled by the component scale.\nFrom the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.\n@return The capsule half-height minus radius, scaled by the component scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleHalfHeight_WithoutHemisphere", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetScaledCapsuleHalfHeight_WithoutHemisphere)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleHalfHeight_WithoutHemisphere();
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetScaledCapsuleHalfHeight_WithoutHemisphere

// Begin Class UCapsuleComponent Function GetScaledCapsuleRadius
struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics
{
	struct CapsuleComponent_eventGetScaledCapsuleRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Returns the capsule radius scaled by the component scale.\n\x09 * @return The capsule radius scaled by the component scale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius scaled by the component scale.\n@return The capsule radius scaled by the component scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleRadius", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::CapsuleComponent_eventGetScaledCapsuleRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::CapsuleComponent_eventGetScaledCapsuleRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetScaledCapsuleRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleRadius();
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetScaledCapsuleRadius

// Begin Class UCapsuleComponent Function GetScaledCapsuleSize
struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics
{
	struct CapsuleComponent_eventGetScaledCapsuleSize_Parms
	{
		float OutRadius;
		float OutHalfHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.\n\x09 * @param OutRadius Radius of the capsule, scaled by the component scale.\n\x09 * @param OutHalfHeight Half-height of the capsule, scaled by the component scale. Includes the hemisphere end cap.\n\x09 * @return The capsule radius and half-height scaled by the component scale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.\n@param OutRadius Radius of the capsule, scaled by the component scale.\n@param OutHalfHeight Half-height of the capsule, scaled by the component scale. Includes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_Parms, OutRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::NewProp_OutHalfHeight = { "OutHalfHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_Parms, OutHalfHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::NewProp_OutRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::NewProp_OutHalfHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleSize", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::CapsuleComponent_eventGetScaledCapsuleSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::CapsuleComponent_eventGetScaledCapsuleSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetScaledCapsuleSize)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRadius);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutHalfHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetScaledCapsuleSize(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeight);
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetScaledCapsuleSize

// Begin Class UCapsuleComponent Function GetScaledCapsuleSize_WithoutHemisphere
struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics
{
	struct CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms
	{
		float OutRadius;
		float OutHalfHeightWithoutHemisphere;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Returns the capsule radius and half-height scaled by the component scale. Half-height excludes the hemisphere end cap.\n\x09 * @param OutRadius Radius of the capsule, ignoring component scaling.\n\x09 * @param OutHalfHeightWithoutHemisphere Half-height of the capsule, scaled by the component scale. Excludes the hemisphere end cap.\n\x09 * @return The capsule radius and half-height scaled by the component scale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height excludes the hemisphere end cap.\n@param OutRadius Radius of the capsule, ignoring component scaling.\n@param OutHalfHeightWithoutHemisphere Half-height of the capsule, scaled by the component scale. Excludes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeightWithoutHemisphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms, OutRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutHalfHeightWithoutHemisphere = { "OutHalfHeightWithoutHemisphere", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms, OutHalfHeightWithoutHemisphere), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutHalfHeightWithoutHemisphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleSize_WithoutHemisphere", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetScaledCapsuleSize_WithoutHemisphere)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRadius);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutHalfHeightWithoutHemisphere);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetScaledCapsuleSize_WithoutHemisphere(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeightWithoutHemisphere);
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetScaledCapsuleSize_WithoutHemisphere

// Begin Class UCapsuleComponent Function GetShapeScale
struct Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics
{
	struct CapsuleComponent_eventGetShapeScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n\x09 * @return the scale used by this shape.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n@return the scale used by this shape." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetShapeScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetShapeScale", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::CapsuleComponent_eventGetShapeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::CapsuleComponent_eventGetShapeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetShapeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetShapeScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShapeScale();
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetShapeScale

// Begin Class UCapsuleComponent Function GetUnscaledCapsuleHalfHeight
struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics
{
	struct CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Returns the capsule half-height, ignoring component scaling. This includes the hemisphere end cap.\n\x09 * @return The capsule radius, ignoring component scaling.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule half-height, ignoring component scaling. This includes the hemisphere end cap.\n@return The capsule radius, ignoring component scaling." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleHalfHeight", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetUnscaledCapsuleHalfHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleHalfHeight();
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetUnscaledCapsuleHalfHeight

// Begin Class UCapsuleComponent Function GetUnscaledCapsuleHalfHeight_WithoutHemisphere
struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics
{
	struct CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/** \n\x09* Returns the capsule half-height minus radius (to exclude the hemisphere), ignoring component scaling. This excludes the hemisphere end cap.\n\x09* From the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.\n\x09* @return The capsule half-height minus radius, ignoring component scaling.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule half-height minus radius (to exclude the hemisphere), ignoring component scaling. This excludes the hemisphere end cap.\nFrom the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.\n@return The capsule half-height minus radius, ignoring component scaling." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleHalfHeight_WithoutHemisphere", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetUnscaledCapsuleHalfHeight_WithoutHemisphere)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetUnscaledCapsuleHalfHeight_WithoutHemisphere

// Begin Class UCapsuleComponent Function GetUnscaledCapsuleRadius
struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics
{
	struct CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Returns the capsule radius, ignoring component scaling.\n\x09 * @return the capsule radius, ignoring component scaling.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius, ignoring component scaling.\n@return the capsule radius, ignoring component scaling." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleRadius", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetUnscaledCapsuleRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleRadius();
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetUnscaledCapsuleRadius

// Begin Class UCapsuleComponent Function GetUnscaledCapsuleSize
struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics
{
	struct CapsuleComponent_eventGetUnscaledCapsuleSize_Parms
	{
		float OutRadius;
		float OutHalfHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.\n\x09 * @param OutRadius Radius of the capsule, scaled by the component scale.\n\x09 * @param OutHalfHeight Half-height of the capsule, scaled by the component scale. Includes the hemisphere end cap.\n\x09 * @return The capsule radius and half-height scaled by the component scale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.\n@param OutRadius Radius of the capsule, scaled by the component scale.\n@param OutHalfHeight Half-height of the capsule, scaled by the component scale. Includes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_Parms, OutRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::NewProp_OutHalfHeight = { "OutHalfHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_Parms, OutHalfHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::NewProp_OutRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::NewProp_OutHalfHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleSize", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::CapsuleComponent_eventGetUnscaledCapsuleSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::CapsuleComponent_eventGetUnscaledCapsuleSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetUnscaledCapsuleSize)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRadius);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutHalfHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUnscaledCapsuleSize(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeight);
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetUnscaledCapsuleSize

// Begin Class UCapsuleComponent Function GetUnscaledCapsuleSize_WithoutHemisphere
struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics
{
	struct CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms
	{
		float OutRadius;
		float OutHalfHeightWithoutHemisphere;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Returns the capsule radius and half-height, ignoring component scaling. Half-height excludes the hemisphere end cap.\n\x09 * @param OutRadius Radius of the capsule, ignoring component scaling.\n\x09 * @param OutHalfHeightWithoutHemisphere Half-height of the capsule, scaled by the component scale. Excludes the hemisphere end cap.\n\x09 * @return The capsule radius and half-height (excluding hemisphere end cap), ignoring component scaling.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius and half-height, ignoring component scaling. Half-height excludes the hemisphere end cap.\n@param OutRadius Radius of the capsule, ignoring component scaling.\n@param OutHalfHeightWithoutHemisphere Half-height of the capsule, scaled by the component scale. Excludes the hemisphere end cap.\n@return The capsule radius and half-height (excluding hemisphere end cap), ignoring component scaling." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeightWithoutHemisphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms, OutRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutHalfHeightWithoutHemisphere = { "OutHalfHeightWithoutHemisphere", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms, OutHalfHeightWithoutHemisphere), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutHalfHeightWithoutHemisphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleSize_WithoutHemisphere", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execGetUnscaledCapsuleSize_WithoutHemisphere)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRadius);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutHalfHeightWithoutHemisphere);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUnscaledCapsuleSize_WithoutHemisphere(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeightWithoutHemisphere);
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function GetUnscaledCapsuleSize_WithoutHemisphere

// Begin Class UCapsuleComponent Function SetCapsuleHalfHeight
struct Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics
{
	struct CapsuleComponent_eventSetCapsuleHalfHeight_Parms
	{
		float HalfHeight;
		bool bUpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Set the capsule half-height. This is the unscaled half-height, before component scale is applied.\n\x09 * If this capsule collides, updates touching array for owner actor.\n\x09 * @param\x09HalfHeight : half-height, from capsule center to end of top or bottom hemisphere. \n\x09 * @param\x09""bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor.\n\x09 */" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Set the capsule half-height. This is the unscaled half-height, before component scale is applied.\nIf this capsule collides, updates touching array for owner actor.\n@param       HalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleHalfHeight_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
{
	((CapsuleComponent_eventSetCapsuleHalfHeight_Parms*)Obj)->bUpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CapsuleComponent_eventSetCapsuleHalfHeight_Parms), &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_bUpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "SetCapsuleHalfHeight", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::CapsuleComponent_eventSetCapsuleHalfHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::CapsuleComponent_eventSetCapsuleHalfHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execSetCapsuleHalfHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
	P_GET_UBOOL(Z_Param_bUpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCapsuleHalfHeight(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps);
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function SetCapsuleHalfHeight

// Begin Class UCapsuleComponent Function SetCapsuleRadius
struct Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics
{
	struct CapsuleComponent_eventSetCapsuleRadius_Parms
	{
		float Radius;
		bool bUpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/**\n\x09 * Set the capsule radius. This is the unscaled radius, before component scale is applied.\n\x09 * If this capsule collides, updates touching array for owner actor.\n\x09 * @param\x09Radius : radius of end-cap hemispheres and center cylinder.\n\x09 * @param\x09""bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor.\n\x09 */" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Set the capsule radius. This is the unscaled radius, before component scale is applied.\nIf this capsule collides, updates touching array for owner actor.\n@param       Radius : radius of end-cap hemispheres and center cylinder.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
{
	((CapsuleComponent_eventSetCapsuleRadius_Parms*)Obj)->bUpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CapsuleComponent_eventSetCapsuleRadius_Parms), &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_bUpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "SetCapsuleRadius", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::CapsuleComponent_eventSetCapsuleRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::CapsuleComponent_eventSetCapsuleRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execSetCapsuleRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bUpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCapsuleRadius(Z_Param_Radius,Z_Param_bUpdateOverlaps);
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function SetCapsuleRadius

// Begin Class UCapsuleComponent Function SetCapsuleSize
struct Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics
{
	struct CapsuleComponent_eventSetCapsuleSize_Parms
	{
		float InRadius;
		float InHalfHeight;
		bool bUpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/** \n\x09 * Change the capsule size. This is the unscaled size, before component scale is applied.\n\x09 * @param\x09InRadius : radius of end-cap hemispheres and center cylinder.\n\x09 * @param\x09InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere. \n\x09 * @param\x09""bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor.\n\x09 */" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Change the capsule size. This is the unscaled size, before component scale is applied.\n@param       InRadius : radius of end-cap hemispheres and center cylinder.\n@param       InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InHalfHeight;
	static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleSize_Parms, InRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_InHalfHeight = { "InHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleSize_Parms, InHalfHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
{
	((CapsuleComponent_eventSetCapsuleSize_Parms*)Obj)->bUpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CapsuleComponent_eventSetCapsuleSize_Parms), &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_InRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_InHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_bUpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "SetCapsuleSize", nullptr, nullptr, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::CapsuleComponent_eventSetCapsuleSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::CapsuleComponent_eventSetCapsuleSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCapsuleComponent::execSetCapsuleSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InHalfHeight);
	P_GET_UBOOL(Z_Param_bUpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCapsuleSize(Z_Param_InRadius,Z_Param_InHalfHeight,Z_Param_bUpdateOverlaps);
	P_NATIVE_END;
}
// End Class UCapsuleComponent Function SetCapsuleSize

// Begin Class UCapsuleComponent
void UCapsuleComponent::StaticRegisterNativesUCapsuleComponent()
{
	UClass* Class = UCapsuleComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScaledCapsuleHalfHeight", &UCapsuleComponent::execGetScaledCapsuleHalfHeight },
		{ "GetScaledCapsuleHalfHeight_WithoutHemisphere", &UCapsuleComponent::execGetScaledCapsuleHalfHeight_WithoutHemisphere },
		{ "GetScaledCapsuleRadius", &UCapsuleComponent::execGetScaledCapsuleRadius },
		{ "GetScaledCapsuleSize", &UCapsuleComponent::execGetScaledCapsuleSize },
		{ "GetScaledCapsuleSize_WithoutHemisphere", &UCapsuleComponent::execGetScaledCapsuleSize_WithoutHemisphere },
		{ "GetShapeScale", &UCapsuleComponent::execGetShapeScale },
		{ "GetUnscaledCapsuleHalfHeight", &UCapsuleComponent::execGetUnscaledCapsuleHalfHeight },
		{ "GetUnscaledCapsuleHalfHeight_WithoutHemisphere", &UCapsuleComponent::execGetUnscaledCapsuleHalfHeight_WithoutHemisphere },
		{ "GetUnscaledCapsuleRadius", &UCapsuleComponent::execGetUnscaledCapsuleRadius },
		{ "GetUnscaledCapsuleSize", &UCapsuleComponent::execGetUnscaledCapsuleSize },
		{ "GetUnscaledCapsuleSize_WithoutHemisphere", &UCapsuleComponent::execGetUnscaledCapsuleSize_WithoutHemisphere },
		{ "SetCapsuleHalfHeight", &UCapsuleComponent::execSetCapsuleHalfHeight },
		{ "SetCapsuleRadius", &UCapsuleComponent::execSetCapsuleRadius },
		{ "SetCapsuleSize", &UCapsuleComponent::execSetCapsuleSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCapsuleComponent);
UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister()
{
	return UCapsuleComponent::StaticClass();
}
struct Z_Construct_UClass_UCapsuleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "Comment", "/** \n * A capsule generally used for simple collision. Bounds are rendered as lines in the editor.\n */" },
		{ "DisplayName", "Capsule Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/CapsuleComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "A capsule generally used for simple collision. Bounds are rendered as lines in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 *\x09Half-height, from center of capsule to the end of top or bottom hemisphere.  \n\x09 *\x09This cannot be less than CapsuleRadius.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Half-height, from center of capsule to the end of top or bottom hemisphere.\nThis cannot be less than CapsuleRadius." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 *\x09Radius of cap hemispheres and center cylinder. \n\x09 *\x09This cannot be more than CapsuleHalfHeight.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Radius of cap hemispheres and center cylinder.\nThis cannot be more than CapsuleHalfHeight." },
		{ "UIMin", "0" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHeight;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight, "GetScaledCapsuleHalfHeight" }, // 894045926
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere, "GetScaledCapsuleHalfHeight_WithoutHemisphere" }, // 1361088766
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius, "GetScaledCapsuleRadius" }, // 1833416850
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize, "GetScaledCapsuleSize" }, // 3682278495
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere, "GetScaledCapsuleSize_WithoutHemisphere" }, // 1176046928
		{ &Z_Construct_UFunction_UCapsuleComponent_GetShapeScale, "GetShapeScale" }, // 381860476
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight, "GetUnscaledCapsuleHalfHeight" }, // 7208613
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere, "GetUnscaledCapsuleHalfHeight_WithoutHemisphere" }, // 3932074569
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius, "GetUnscaledCapsuleRadius" }, // 3421583257
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize, "GetUnscaledCapsuleSize" }, // 2780237129
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere, "GetUnscaledCapsuleSize_WithoutHemisphere" }, // 3250787399
		{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight, "SetCapsuleHalfHeight" }, // 1315055657
		{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius, "SetCapsuleRadius" }, // 3840957238
		{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize, "SetCapsuleSize" }, // 2094378512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapsuleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x002008000000001d, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapsuleComponent, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData), NewProp_CapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x002008000000001d, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapsuleComponent, CapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRadius_MetaData), NewProp_CapsuleRadius_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHeight = { "CapsuleHeight", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCapsuleComponent, CapsuleHeight_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHeight_MetaData), NewProp_CapsuleHeight_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCapsuleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleRadius,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHeight,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCapsuleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UShapeComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCapsuleComponent_Statics::ClassParams = {
	&UCapsuleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCapsuleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCapsuleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCapsuleComponent()
{
	if (!Z_Registration_Info_UClass_UCapsuleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCapsuleComponent.OuterSingleton, Z_Construct_UClass_UCapsuleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCapsuleComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCapsuleComponent>()
{
	return UCapsuleComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCapsuleComponent);
UCapsuleComponent::~UCapsuleComponent() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCapsuleComponent)
#endif // WITH_EDITORONLY_DATA
// End Class UCapsuleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCapsuleComponent, UCapsuleComponent::StaticClass, TEXT("UCapsuleComponent"), &Z_Registration_Info_UClass_UCapsuleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCapsuleComponent), 86203054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_3421422603(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
