// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMeshComponent Function GetMaterials
struct Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics
{
	struct MeshComponent_eventGetMaterials_Parms
	{
		TArray<UMaterialInterface*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventGetMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetMaterials", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::MeshComponent_eventGetMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::MeshComponent_eventGetMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execGetMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMaterialInterface*>*)Z_Param__Result=P_THIS->GetMaterials();
	P_NATIVE_END;
}
// End Class UMeshComponent Function GetMaterials

// Begin Class UMeshComponent Function GetOverlayMaterial
struct Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics
{
	struct MeshComponent_eventGetOverlayMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the overlay material used by this instance */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Get the overlay material used by this instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventGetOverlayMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetOverlayMaterial", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::MeshComponent_eventGetOverlayMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::MeshComponent_eventGetOverlayMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execGetOverlayMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetOverlayMaterial();
	P_NATIVE_END;
}
// End Class UMeshComponent Function GetOverlayMaterial

// Begin Class UMeshComponent Function GetOverlayMaterialMaxDrawDistance
struct Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics
{
	struct MeshComponent_eventGetOverlayMaterialMaxDrawDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the overlay material used by this instance */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Get the overlay material used by this instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventGetOverlayMaterialMaxDrawDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetOverlayMaterialMaxDrawDistance", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::MeshComponent_eventGetOverlayMaterialMaxDrawDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::MeshComponent_eventGetOverlayMaterialMaxDrawDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execGetOverlayMaterialMaxDrawDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOverlayMaterialMaxDrawDistance();
	P_NATIVE_END;
}
// End Class UMeshComponent Function GetOverlayMaterialMaxDrawDistance

// Begin Class UMeshComponent Function PrestreamMeshLODs
struct Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics
{
	struct MeshComponent_eventPrestreamMeshLODs_Parms
	{
		float Seconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09Tell the streaming system to start streaming in all LODs for the mesh.\n\x09*\x09Note: this function may set bIgnoreStreamingMipBias on this component enable the FastForceResident system.\n\x09 *  @return bool\x09\x09\x09\x09\x09\x09\x09True if streaming was successfully requested\n\x09 *\x09@param Seconds\x09\x09\x09\x09\x09\x09\x09Number of seconds to force all LODs to be resident\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Tell the streaming system to start streaming in all LODs for the mesh.\n Note: this function may set bIgnoreStreamingMipBias on this component enable the FastForceResident system.\n@return bool                                                        True if streaming was successfully requested\n@param Seconds                                                  Number of seconds to force all LODs to be resident" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventPrestreamMeshLODs_Parms, Seconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MeshComponent_eventPrestreamMeshLODs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshComponent_eventPrestreamMeshLODs_Parms), &Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::NewProp_Seconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "PrestreamMeshLODs", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::MeshComponent_eventPrestreamMeshLODs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::MeshComponent_eventPrestreamMeshLODs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execPrestreamMeshLODs)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PrestreamMeshLODs(Z_Param_Seconds);
	P_NATIVE_END;
}
// End Class UMeshComponent Function PrestreamMeshLODs

// Begin Class UMeshComponent Function PrestreamTextures
struct Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics
{
	struct MeshComponent_eventPrestreamTextures_Parms
	{
		float Seconds;
		bool bPrioritizeCharacterTextures;
		int32 CinematicTextureGroups;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09Tell the streaming system to start loading all textures with all mip-levels.\n\x09 *\x09@param Seconds\x09\x09\x09\x09\x09\x09\x09Number of seconds to force all mip-levels to be resident\n\x09 *\x09@param bPrioritizeCharacterTextures\x09\x09Whether character textures should be prioritized for a while by the streaming system\n\x09 *\x09@param CinematicTextureGroups\x09\x09\x09""Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "CPP_Default_CinematicTextureGroups", "0" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Tell the streaming system to start loading all textures with all mip-levels.\n@param Seconds                                                  Number of seconds to force all mip-levels to be resident\n@param bPrioritizeCharacterTextures             Whether character textures should be prioritized for a while by the streaming system\n@param CinematicTextureGroups                   Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
	static void NewProp_bPrioritizeCharacterTextures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrioritizeCharacterTextures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventPrestreamTextures_Parms, Seconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures_SetBit(void* Obj)
{
	((MeshComponent_eventPrestreamTextures_Parms*)Obj)->bPrioritizeCharacterTextures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures = { "bPrioritizeCharacterTextures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeshComponent_eventPrestreamTextures_Parms), &Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventPrestreamTextures_Parms, CinematicTextureGroups), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_Seconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_CinematicTextureGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "PrestreamTextures", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::MeshComponent_eventPrestreamTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::MeshComponent_eventPrestreamTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_PrestreamTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execPrestreamTextures)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
	P_GET_UBOOL(Z_Param_bPrioritizeCharacterTextures);
	P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bPrioritizeCharacterTextures,Z_Param_CinematicTextureGroups);
	P_NATIVE_END;
}
// End Class UMeshComponent Function PrestreamTextures

// Begin Class UMeshComponent Function SetOverlayMaterial
struct Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics
{
	struct MeshComponent_eventSetOverlayMaterial_Parms
	{
		UMaterialInterface* NewOverlayMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Change the overlay material used by this instance */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Change the overlay material used by this instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOverlayMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::NewProp_NewOverlayMaterial = { "NewOverlayMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventSetOverlayMaterial_Parms, NewOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::NewProp_NewOverlayMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetOverlayMaterial", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::MeshComponent_eventSetOverlayMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::MeshComponent_eventSetOverlayMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execSetOverlayMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewOverlayMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverlayMaterial(Z_Param_NewOverlayMaterial);
	P_NATIVE_END;
}
// End Class UMeshComponent Function SetOverlayMaterial

// Begin Class UMeshComponent Function SetOverlayMaterialMaxDrawDistance
struct Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics
{
	struct MeshComponent_eventSetOverlayMaterialMaxDrawDistance_Parms
	{
		float InMaxDrawDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Change the overlay material max draw distance used by this instance */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Change the overlay material max draw distance used by this instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxDrawDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::NewProp_InMaxDrawDistance = { "InMaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventSetOverlayMaterialMaxDrawDistance_Parms, InMaxDrawDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::NewProp_InMaxDrawDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetOverlayMaterialMaxDrawDistance", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::MeshComponent_eventSetOverlayMaterialMaxDrawDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::MeshComponent_eventSetOverlayMaterialMaxDrawDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execSetOverlayMaterialMaxDrawDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxDrawDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverlayMaterialMaxDrawDistance(Z_Param_InMaxDrawDistance);
	P_NATIVE_END;
}
// End Class UMeshComponent Function SetOverlayMaterialMaxDrawDistance

// Begin Class UMeshComponent Function SetScalarParameterValueOnMaterials
struct Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics
{
	struct MeshComponent_eventSetScalarParameterValueOnMaterials_Parms
	{
		FName ParameterName;
		float ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set all occurrences of Scalar Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Set all occurrences of Scalar Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms, ParameterValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetScalarParameterValueOnMaterials", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::MeshComponent_eventSetScalarParameterValueOnMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::MeshComponent_eventSetScalarParameterValueOnMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execSetScalarParameterValueOnMaterials)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScalarParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UMeshComponent Function SetScalarParameterValueOnMaterials

// Begin Class UMeshComponent Function SetVectorParameterValueOnMaterials
struct Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics
{
	struct MeshComponent_eventSetVectorParameterValueOnMaterials_Parms
	{
		FName ParameterName;
		FVector ParameterValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetVectorParameterValueOnMaterials", nullptr, nullptr, Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::MeshComponent_eventSetVectorParameterValueOnMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::MeshComponent_eventSetVectorParameterValueOnMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshComponent::execSetVectorParameterValueOnMaterials)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FVector,Z_Param_ParameterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue);
	P_NATIVE_END;
}
// End Class UMeshComponent Function SetVectorParameterValueOnMaterials

// Begin Class UMeshComponent
void UMeshComponent::StaticRegisterNativesUMeshComponent()
{
	UClass* Class = UMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaterials", &UMeshComponent::execGetMaterials },
		{ "GetOverlayMaterial", &UMeshComponent::execGetOverlayMaterial },
		{ "GetOverlayMaterialMaxDrawDistance", &UMeshComponent::execGetOverlayMaterialMaxDrawDistance },
		{ "PrestreamMeshLODs", &UMeshComponent::execPrestreamMeshLODs },
		{ "PrestreamTextures", &UMeshComponent::execPrestreamTextures },
		{ "SetOverlayMaterial", &UMeshComponent::execSetOverlayMaterial },
		{ "SetOverlayMaterialMaxDrawDistance", &UMeshComponent::execSetOverlayMaterialMaxDrawDistance },
		{ "SetScalarParameterValueOnMaterials", &UMeshComponent::execSetScalarParameterValueOnMaterials },
		{ "SetVectorParameterValueOnMaterials", &UMeshComponent::execSetVectorParameterValueOnMaterials },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshComponent);
UClass* Z_Construct_UClass_UMeshComponent_NoRegister()
{
	return UMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MeshComponent is an abstract base for any component that is an instance of a renderable collection of triangles.\n *\n * @see UStaticMeshComponent\n * @see USkeletalMeshComponent\n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Components/MeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "MeshComponent is an abstract base for any component that is an instance of a renderable collection of triangles.\n\n@see UStaticMeshComponent\n@see USkeletalMeshComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Material overrides." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Translucent material to blend on top of this mesh. Mesh will be rendered twice - once with a base material and once with overlay material */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Translucent material to blend on top of this mesh. Mesh will be rendered twice - once with a base material and once with overlay material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterialMaxDrawDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The max draw distance for overlay material. A distance of 0 indicates that overlay will be culled using primitive max distance. */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "The max draw distance for overlay material. A distance of 0 indicates that overlay will be culled using primitive max distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMaterialParameterCaching_MetaData[] = {
		{ "Category", "MaterialParameters" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayMaterialMaxDrawDistance;
	static void NewProp_bEnableMaterialParameterCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMaterialParameterCaching;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshComponent_GetMaterials, "GetMaterials" }, // 2000202261
		{ &Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial, "GetOverlayMaterial" }, // 2131935562
		{ &Z_Construct_UFunction_UMeshComponent_GetOverlayMaterialMaxDrawDistance, "GetOverlayMaterialMaxDrawDistance" }, // 377537802
		{ &Z_Construct_UFunction_UMeshComponent_PrestreamMeshLODs, "PrestreamMeshLODs" }, // 52803582
		{ &Z_Construct_UFunction_UMeshComponent_PrestreamTextures, "PrestreamTextures" }, // 2440950698
		{ &Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial, "SetOverlayMaterial" }, // 1831070359
		{ &Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance, "SetOverlayMaterialMaxDrawDistance" }, // 3911634522
		{ &Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials, "SetScalarParameterValueOnMaterials" }, // 2947213320
		{ &Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials, "SetVectorParameterValueOnMaterials" }, // 995324687
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0114040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshComponent, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0114040000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshComponent, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterialMaxDrawDistance = { "OverlayMaterialMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshComponent, OverlayMaterialMaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterialMaxDrawDistance_MetaData), NewProp_OverlayMaterialMaxDrawDistance_MetaData) };
void Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_SetBit(void* Obj)
{
	((UMeshComponent*)Obj)->bEnableMaterialParameterCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching = { "bEnableMaterialParameterCaching", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMeshComponent), &Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMaterialParameterCaching_MetaData), NewProp_bEnableMaterialParameterCaching_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterialMaxDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshComponent_Statics::ClassParams = {
	&UMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::PropPointers),
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshComponent()
{
	if (!Z_Registration_Info_UClass_UMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshComponent.OuterSingleton, Z_Construct_UClass_UMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMeshComponent>()
{
	return UMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshComponent);
UMeshComponent::~UMeshComponent() {}
// End Class UMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshComponent, UMeshComponent::StaticClass, TEXT("UMeshComponent"), &Z_Registration_Info_UClass_UMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshComponent), 1774282392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_535160020(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
