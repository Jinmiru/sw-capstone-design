// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Public/StaticMeshComponentLODInfo.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPaintedVertex();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPaintedVertex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaintedVertex;
class UScriptStruct* FPaintedVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaintedVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaintedVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintedVertex, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PaintedVertex"));
	}
	return Z_Registration_Info_UScriptStruct_PaintedVertex.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPaintedVertex>()
{
	return FPaintedVertex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaintedVertex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Cached vertex information at the time the mesh was painted. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Cached vertex information at the time the mesh was painted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintedVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintedVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintedVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaintedVertex, Normal), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewProp_Normal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintedVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PaintedVertex",
	Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::PropPointers),
	sizeof(FPaintedVertex),
	alignof(FPaintedVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintedVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaintedVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaintedVertex()
{
	if (!Z_Registration_Info_UScriptStruct_PaintedVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaintedVertex.InnerSingleton, Z_Construct_UScriptStruct_FPaintedVertex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaintedVertex.InnerSingleton;
}
// End ScriptStruct FPaintedVertex

// Begin Class UStaticMeshComponent Function GetInitialEvaluateWorldPositionOffset
struct Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics
{
	struct StaticMeshComponent_eventGetInitialEvaluateWorldPositionOffset_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|LOD" },
		{ "Comment", "/** Get the initial value of bEvaluateWorldPositionOffset. This is the value when BeginPlay() was last called, or if UpdateInitialEvaluateWorldPositionOffset is called. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Get the initial value of bEvaluateWorldPositionOffset. This is the value when BeginPlay() was last called, or if UpdateInitialEvaluateWorldPositionOffset is called." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StaticMeshComponent_eventGetInitialEvaluateWorldPositionOffset_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticMeshComponent_eventGetInitialEvaluateWorldPositionOffset_Parms), &Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "GetInitialEvaluateWorldPositionOffset", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::StaticMeshComponent_eventGetInitialEvaluateWorldPositionOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::StaticMeshComponent_eventGetInitialEvaluateWorldPositionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execGetInitialEvaluateWorldPositionOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInitialEvaluateWorldPositionOffset();
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function GetInitialEvaluateWorldPositionOffset

// Begin Class UStaticMeshComponent Function GetLocalBounds
struct Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics
{
	struct StaticMeshComponent_eventGetLocalBounds_Parms
	{
		FVector Min;
		FVector Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|StaticMesh" },
		{ "Comment", "/** \n\x09 * Get Local bounds\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Get Local bounds" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshComponent_eventGetLocalBounds_Parms, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshComponent_eventGetLocalBounds_Parms, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "GetLocalBounds", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::StaticMeshComponent_eventGetLocalBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::StaticMeshComponent_eventGetLocalBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execGetLocalBounds)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Min);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLocalBounds(Z_Param_Out_Min,Z_Param_Out_Max);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function GetLocalBounds

// Begin Class UStaticMeshComponent Function OnRep_StaticMesh
struct Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics
{
	struct StaticMeshComponent_eventOnRep_StaticMesh_Parms
	{
		UStaticMesh* OldStaticMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldStaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::NewProp_OldStaticMesh = { "OldStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshComponent_eventOnRep_StaticMesh_Parms, OldStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::NewProp_OldStaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "OnRep_StaticMesh", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::StaticMeshComponent_eventOnRep_StaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::StaticMeshComponent_eventOnRep_StaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execOnRep_StaticMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_OldStaticMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaticMesh(Z_Param_OldStaticMesh);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function OnRep_StaticMesh

// Begin Class UStaticMeshComponent Function SetDistanceFieldSelfShadowBias
struct Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics
{
	struct StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "/** Sets the component's DistanceFieldSelfShadowBias.  bOverrideDistanceFieldSelfShadowBias must be enabled for this to have an effect. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Sets the component's DistanceFieldSelfShadowBias.  bOverrideDistanceFieldSelfShadowBias must be enabled for this to have an effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetDistanceFieldSelfShadowBias", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::StaticMeshComponent_eventSetDistanceFieldSelfShadowBias_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execSetDistanceFieldSelfShadowBias)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDistanceFieldSelfShadowBias(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function SetDistanceFieldSelfShadowBias

// Begin Class UStaticMeshComponent Function SetEvaluateWorldPositionOffset
struct Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics
{
	struct StaticMeshComponent_eventSetEvaluateWorldPositionOffset_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|LOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((StaticMeshComponent_eventSetEvaluateWorldPositionOffset_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticMeshComponent_eventSetEvaluateWorldPositionOffset_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetEvaluateWorldPositionOffset", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::StaticMeshComponent_eventSetEvaluateWorldPositionOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::StaticMeshComponent_eventSetEvaluateWorldPositionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execSetEvaluateWorldPositionOffset)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEvaluateWorldPositionOffset(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function SetEvaluateWorldPositionOffset

// Begin Class UStaticMeshComponent Function SetEvaluateWorldPositionOffsetInRayTracing
struct Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics
{
	struct StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetEvaluateWorldPositionOffsetInRayTracing", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::StaticMeshComponent_eventSetEvaluateWorldPositionOffsetInRayTracing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execSetEvaluateWorldPositionOffsetInRayTracing)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEvaluateWorldPositionOffsetInRayTracing(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function SetEvaluateWorldPositionOffsetInRayTracing

// Begin Class UStaticMeshComponent Function SetForceDisableNanite
struct Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics
{
	struct StaticMeshComponent_eventSetForceDisableNanite_Parms
	{
		bool bInForceDisableNanite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Force disabling of Nanite rendering. When true, Will swap to the the fallback mesh instead. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Force disabling of Nanite rendering. When true, Will swap to the the fallback mesh instead." },
	};
#endif // WITH_METADATA
	static void NewProp_bInForceDisableNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInForceDisableNanite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::NewProp_bInForceDisableNanite_SetBit(void* Obj)
{
	((StaticMeshComponent_eventSetForceDisableNanite_Parms*)Obj)->bInForceDisableNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::NewProp_bInForceDisableNanite = { "bInForceDisableNanite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticMeshComponent_eventSetForceDisableNanite_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::NewProp_bInForceDisableNanite_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::NewProp_bInForceDisableNanite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetForceDisableNanite", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::StaticMeshComponent_eventSetForceDisableNanite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::StaticMeshComponent_eventSetForceDisableNanite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execSetForceDisableNanite)
{
	P_GET_UBOOL(Z_Param_bInForceDisableNanite);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForceDisableNanite(Z_Param_bInForceDisableNanite);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function SetForceDisableNanite

// Begin Class UStaticMeshComponent Function SetForcedLodModel
struct Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics
{
	struct StaticMeshComponent_eventSetForcedLodModel_Parms
	{
		int32 NewForcedLodModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|LOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewForcedLodModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::NewProp_NewForcedLodModel = { "NewForcedLodModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshComponent_eventSetForcedLodModel_Parms, NewForcedLodModel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::NewProp_NewForcedLodModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetForcedLodModel", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::StaticMeshComponent_eventSetForcedLodModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::StaticMeshComponent_eventSetForcedLodModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execSetForcedLodModel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewForcedLodModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForcedLodModel(Z_Param_NewForcedLodModel);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function SetForcedLodModel

// Begin Class UStaticMeshComponent Function SetReverseCulling
struct Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics
{
	struct StaticMeshComponent_eventSetReverseCulling_Parms
	{
		bool ReverseCulling;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "/** \n\x09 * Set forced reverse culling\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Set forced reverse culling" },
	};
#endif // WITH_METADATA
	static void NewProp_ReverseCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReverseCulling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling_SetBit(void* Obj)
{
	((StaticMeshComponent_eventSetReverseCulling_Parms*)Obj)->ReverseCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling = { "ReverseCulling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticMeshComponent_eventSetReverseCulling_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::NewProp_ReverseCulling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetReverseCulling", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::StaticMeshComponent_eventSetReverseCulling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::StaticMeshComponent_eventSetReverseCulling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execSetReverseCulling)
{
	P_GET_UBOOL(Z_Param_ReverseCulling);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReverseCulling(Z_Param_ReverseCulling);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function SetReverseCulling

// Begin Class UStaticMeshComponent Function SetStaticMesh
struct Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics
{
	struct StaticMeshComponent_eventSetStaticMesh_Parms
	{
		UStaticMesh* NewMesh;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|StaticMesh" },
		{ "Comment", "/** Change the StaticMesh used by this instance. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Change the StaticMesh used by this instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshComponent_eventSetStaticMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StaticMeshComponent_eventSetStaticMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticMeshComponent_eventSetStaticMesh_Parms), &Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_NewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::StaticMeshComponent_eventSetStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::StaticMeshComponent_eventSetStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execSetStaticMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetStaticMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function SetStaticMesh

// Begin Class UStaticMeshComponent Function SetWorldPositionOffsetDisableDistance
struct Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics
{
	struct StaticMeshComponent_eventSetWorldPositionOffsetDisableDistance_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|LOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticMeshComponent_eventSetWorldPositionOffsetDisableDistance_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "SetWorldPositionOffsetDisableDistance", nullptr, nullptr, Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::StaticMeshComponent_eventSetWorldPositionOffsetDisableDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::StaticMeshComponent_eventSetWorldPositionOffsetDisableDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execSetWorldPositionOffsetDisableDistance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWorldPositionOffsetDisableDistance(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function SetWorldPositionOffsetDisableDistance

// Begin Class UStaticMeshComponent Function UpdateInitialEvaluateWorldPositionOffset
struct Z_Construct_UFunction_UStaticMeshComponent_UpdateInitialEvaluateWorldPositionOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|LOD" },
		{ "Comment", "/** This manually updates the initial value of bEvaluateWorldPositionOffset to be the current value.\n\x09 *\x09This is useful if the default value of bEvaluateWorldPositionOffset is changed after constructing\n\x09 *\x09the component. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "This manually updates the initial value of bEvaluateWorldPositionOffset to be the current value.\n    This is useful if the default value of bEvaluateWorldPositionOffset is changed after constructing\n    the component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshComponent_UpdateInitialEvaluateWorldPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshComponent, nullptr, "UpdateInitialEvaluateWorldPositionOffset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshComponent_UpdateInitialEvaluateWorldPositionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticMeshComponent_UpdateInitialEvaluateWorldPositionOffset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStaticMeshComponent_UpdateInitialEvaluateWorldPositionOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshComponent_UpdateInitialEvaluateWorldPositionOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticMeshComponent::execUpdateInitialEvaluateWorldPositionOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInitialEvaluateWorldPositionOffset();
	P_NATIVE_END;
}
// End Class UStaticMeshComponent Function UpdateInitialEvaluateWorldPositionOffset

// Begin Class UStaticMeshComponent
void UStaticMeshComponent::StaticRegisterNativesUStaticMeshComponent()
{
	UClass* Class = UStaticMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInitialEvaluateWorldPositionOffset", &UStaticMeshComponent::execGetInitialEvaluateWorldPositionOffset },
		{ "GetLocalBounds", &UStaticMeshComponent::execGetLocalBounds },
		{ "OnRep_StaticMesh", &UStaticMeshComponent::execOnRep_StaticMesh },
		{ "SetDistanceFieldSelfShadowBias", &UStaticMeshComponent::execSetDistanceFieldSelfShadowBias },
		{ "SetEvaluateWorldPositionOffset", &UStaticMeshComponent::execSetEvaluateWorldPositionOffset },
		{ "SetEvaluateWorldPositionOffsetInRayTracing", &UStaticMeshComponent::execSetEvaluateWorldPositionOffsetInRayTracing },
		{ "SetForceDisableNanite", &UStaticMeshComponent::execSetForceDisableNanite },
		{ "SetForcedLodModel", &UStaticMeshComponent::execSetForcedLodModel },
		{ "SetReverseCulling", &UStaticMeshComponent::execSetReverseCulling },
		{ "SetStaticMesh", &UStaticMeshComponent::execSetStaticMesh },
		{ "SetWorldPositionOffsetDisableDistance", &UStaticMeshComponent::execSetWorldPositionOffsetDisableDistance },
		{ "UpdateInitialEvaluateWorldPositionOffset", &UStaticMeshComponent::execUpdateInitialEvaluateWorldPositionOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshComponent);
UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister()
{
	return UStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n * StaticMeshComponent is used to create an instance of a UStaticMesh.\n * A static mesh is a piece of geometry that consists of a static set of polygons.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n * @see UStaticMesh\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/StaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "StaticMeshComponent is used to create an instance of a UStaticMesh.\nA static mesh is a piece of geometry that consists of a static set of polygons.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n@see UStaticMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1). */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If 0, auto-select LOD level. if >0, force to (ForcedLodModel-1)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousLODLevel_MetaData[] = {
		{ "Comment", "/** LOD that was desired for rendering this StaticMeshComponent last frame. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property is deprecated and no longer supported." },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "LOD that was desired for rendering this StaticMeshComponent last frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** \n\x09 * Specifies the smallest LOD that will be used for this component.  \n\x09 * This is ignored if ForcedLodModel is enabled.\n\x09 */" },
		{ "editcondition", "bOverrideMinLOD" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nThis is ignored if ForcedLodModel is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubDivisionStepSize_MetaData[] = {
		{ "Comment", "/** Subdivision step size for static vertex lighting.\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Subdivision step size for static vertex lighting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColorOverride_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Wireframe color to use if bOverrideWireframeColor is true */" },
		{ "editcondition", "bOverrideWireframeColor" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Wireframe color to use if bOverrideWireframeColor is true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNaniteForMasked_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Forces this component to always use Nanite for masked materials, even if FNaniteSettings::bAllowMaskedMaterials=false */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Forces this component to always use Nanite for masked materials, even if FNaniteSettings::bAllowMaskedMaterials=false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisallowNanite_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Forces this component to use fallback mesh for rendering if Nanite is enabled on the mesh. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Forces this component to use fallback mesh for rendering if Nanite is enabled on the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisableNanite_MetaData[] = {
		{ "Comment", "/** Forces this component to use fallback mesh for rendering if Nanite is enabled on the mesh (run-time override) */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Forces this component to use fallback mesh for rendering if Nanite is enabled on the mesh (run-time override)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Whether to evaluate World Position Offset. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to evaluate World Position Offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorldPositionOffsetWritesVelocity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Whether world position offset turns on velocity writes.\n\x09 * If the WPO isn't static then setting false may give incorrect motion vectors.\n\x09 * But if we know that the WPO is static then setting false may save performance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether world position offset turns on velocity writes.\nIf the WPO isn't static then setting false may give incorrect motion vectors.\nBut if we know that the WPO is static then setting false may save performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffsetInRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** \n\x09 * Whether to evaluate World Position Offset for ray tracing. \n\x09 * This is only used when running with r.RayTracing.Geometry.StaticMeshes.WPO=1 \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to evaluate World Position Offset for ray tracing.\nThis is only used when running with r.RayTracing.Geometry.StaticMeshes.WPO=1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffsetDisableDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Distance at which to disable World Position Offset for an entire instance (0 = Never disable WPO).\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Distance at which to disable World Position Offset for an entire instance (0 = Never disable WPO)." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorSection_MetaData[] = {
		{ "Comment", "/** The section currently selected in the Editor. Used for highlighting */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The section currently selected in the Editor. Used for highlighting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedEditorMaterial_MetaData[] = {
		{ "Comment", "/** The material currently selected in the Editor. Used for highlighting */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The material currently selected in the Editor. Used for highlighting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndexPreview_MetaData[] = {
		{ "Comment", "/** Index of the section to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool **/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Index of the section to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndexPreview_MetaData[] = {
		{ "Comment", "/** Index of the material to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool **/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Index of the material to preview. If set to INDEX_NONE, all section will be rendered. Used for isolating in Static Mesh Tool *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshImportVersion_MetaData[] = {
		{ "Comment", "/*\n\x09 * The import version of the static mesh when it was assign this is update when:\n\x09 * - The user assign a new staticmesh to the component\n\x09 * - The component is serialize (IsSaving)\n\x09 * - Default value is BeforeImportStaticMeshVersionWasAdded\n\x09 *\n\x09 * If when the component get load (PostLoad) the version of the attach staticmesh is newer\n\x09 * then this value, we will remap the material override because the order of the materials list\n\x09 * in the staticmesh can be changed. Hopefully there is a remap table save in the staticmesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "* The import version of the static mesh when it was assign this is update when:\n* - The user assign a new staticmesh to the component\n* - The component is serialize (IsSaving)\n* - Default value is BeforeImportStaticMeshVersionWasAdded\n*\n* If when the component get load (PostLoad) the version of the attach staticmesh is newer\n* then this value, we will remap the material override because the order of the materials list\n* in the staticmesh can be changed. Hopefully there is a remap table save in the staticmesh." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWireframeColor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, WireframeColorOverride will be used. If false, color is determined based on mobility and physics simulation settings */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, WireframeColorOverride will be used. If false, color is determined based on mobility and physics simulation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Whether to override the MinLOD setting of the static mesh asset with the MinLOD of this component. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the MinLOD setting of the static mesh asset with the MinLOD of this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideNavigationExport_MetaData[] = {
		{ "Comment", "/** If true, bForceNavigationObstacle flag will take priority over navigation data stored in StaticMesh */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, bForceNavigationObstacle flag will take priority over navigation data stored in StaticMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNavigationObstacle_MetaData[] = {
		{ "Comment", "/** Allows overriding navigation export behavior per component: full collisions or dynamic obstacle */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Allows overriding navigation export behavior per component: full collisions or dynamic obstacle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisallowMeshPaintPerInstance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, mesh painting is disallowed on this instance. Set if vertex colors are overridden in a construction script. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "If true, mesh painting is disallowed on this instance. Set if vertex colors are overridden in a construction script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInstanceForTextureStreaming_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "Comment", "/**\n\x09 *\x09Ignore this instance of this static mesh when calculating streaming information.\n\x09 *\x09This can be useful when doing things like applying character textures to static geometry,\n\x09 *\x09to avoid them using distance-based streaming.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Ignore this instance of this static mesh when calculating streaming information.\nThis can be useful when doing things like applying character textures to static geometry,\nto avoid them using distance-based streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether to override the lightmap resolution defined in the static mesh. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the lightmap resolution defined in the static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDistanceFieldIndirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the mesh distance field representation (when present) for shadowing indirect lighting (from lightmaps or skylight) on Movable components.\n\x09 * This works like capsule shadows on skeletal meshes, except using the mesh distance field so no physics asset is required.\n\x09 * The StaticMesh must have 'Generate Mesh Distance Field' enabled, or the project must have 'Generate Mesh Distance Fields' enabled for this feature to work.\n\x09 */" },
		{ "DisplayName", "Distance Field Indirect Shadow" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to use the mesh distance field representation (when present) for shadowing indirect lighting (from lightmaps or skylight) on Movable components.\nThis works like capsule shadows on skeletal meshes, except using the mesh distance field so no physics asset is required.\nThe StaticMesh must have 'Generate Mesh Distance Field' enabled, or the project must have 'Generate Mesh Distance Fields' enabled for this feature to work." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Whether to override the DistanceFieldSelfShadowBias setting of the static mesh asset with the DistanceFieldSelfShadowBias of this component. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to override the DistanceFieldSelfShadowBias setting of the static mesh asset with the DistanceFieldSelfShadowBias of this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSubDivisions_MetaData[] = {
		{ "Comment", "/** Whether to use subdivisions or just the triangle's vertices.\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Whether to use subdivisions or just the triangle's vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Use the collision profile specified in the StaticMesh asset.*/" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Use the collision profile specified in the StaticMesh asset." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomOverrideVertexColorPerLOD_MetaData[] = {
		{ "Comment", "/** The component has some custom painting on LODs or not. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The component has some custom painting on LODs or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayPhysicalMaterialMasks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayNaniteFallbackMesh_MetaData[] = {
		{ "Comment", "/** For Nanite enabled meshes, we'll only show the proxy mesh if this is true */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "For Nanite enabled meshes, we'll only show the proxy mesh if this is true" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortTriangles_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Enable dynamic sort mesh's triangles to remove ordering issue when rendered with a translucent material */" },
		{ "DisplayName", "Sort Triangles" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Enable dynamic sort mesh's triangles to remove ordering issue when rendered with a translucent material" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseCulling_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09 * Controls whether the static mesh component's backface culling should be reversed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Controls whether the static mesh component's backface culling should be reversed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ClampMax", "4096" },
		{ "Comment", "/** Light map resolution to use on this component, used if bOverrideLightMapRes is true and there is a valid StaticMesh. */" },
		{ "editcondition", "bOverrideLightMapRes" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Light map resolution to use on this component, used if bOverrideLightMapRes is true and there is a valid StaticMesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Controls how dark the dynamic indirect shadow can be.\n\x09 */" },
		{ "DisplayName", "Distance Field Indirect Shadow Min Visibility" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Controls how dark the dynamic indirect shadow can be." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "TextureStreaming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Allows adjusting the desired resolution of streaming textures that uses UV 0.  1.0 is the default, whereas a higher value increases the streamed-in resolution." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IrrelevantLights_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODData_MetaData[] = {
		{ "Comment", "/** Static mesh LOD data.  Contains static lighting data along with instanced mesh vertex colors. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Static mesh LOD data.  Contains static lighting data along with instanced mesh vertex colors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureData_MetaData[] = {
		{ "Comment", "/** The list of texture, bounds and scales. As computed in the texture streaming build process. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The list of texture, bounds and scales. As computed in the texture streaming build process." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshDerivedDataKey_MetaData[] = {
		{ "Comment", "/** Derived data key of the static mesh, used to determine if an update from the source static mesh is required. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Derived data key of the static mesh, used to determine if an update from the source static mesh is required." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialStreamingRelativeBoxes_MetaData[] = {
		{ "Comment", "/** Material Bounds used for texture streaming. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Material Bounds used for texture streaming." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousLODLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubDivisionStepSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColorOverride;
	static void NewProp_bForceNaniteForMasked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNaniteForMasked;
	static void NewProp_bDisallowNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisallowNanite;
	static void NewProp_bForceDisableNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisableNanite;
	static void NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffset;
	static void NewProp_bWorldPositionOffsetWritesVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldPositionOffsetWritesVelocity;
	static void NewProp_bEvaluateWorldPositionOffsetInRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffsetInRayTracing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPositionOffsetDisableDistance;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedEditorSection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedEditorMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndexPreview;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndexPreview;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshImportVersion;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bOverrideWireframeColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWireframeColor;
	static void NewProp_bOverrideMinLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLOD;
	static void NewProp_bOverrideNavigationExport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideNavigationExport;
	static void NewProp_bForceNavigationObstacle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNavigationObstacle;
	static void NewProp_bDisallowMeshPaintPerInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisallowMeshPaintPerInstance;
	static void NewProp_bIgnoreInstanceForTextureStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInstanceForTextureStreaming;
	static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
	static void NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDistanceFieldIndirectShadow;
	static void NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDistanceFieldSelfShadowBias;
	static void NewProp_bUseSubDivisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSubDivisions;
	static void NewProp_bUseDefaultCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCollision;
#if WITH_EDITORONLY_DATA
	static void NewProp_bCustomOverrideVertexColorPerLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomOverrideVertexColorPerLOD;
	static void NewProp_bDisplayVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayVertexColors;
	static void NewProp_bDisplayPhysicalMaterialMasks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayPhysicalMaterialMasks;
	static void NewProp_bDisplayNaniteFallbackMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayNaniteFallbackMesh;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bSortTriangles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortTriangles;
	static void NewProp_bReverseCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseCulling;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldIndirectShadowMinVisibility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IrrelevantLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IrrelevantLights;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingTextureData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StaticMeshDerivedDataKey;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaterialStreamingRelativeBoxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialStreamingRelativeBoxes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshComponent_GetInitialEvaluateWorldPositionOffset, "GetInitialEvaluateWorldPositionOffset" }, // 2129166164
		{ &Z_Construct_UFunction_UStaticMeshComponent_GetLocalBounds, "GetLocalBounds" }, // 3742869521
		{ &Z_Construct_UFunction_UStaticMeshComponent_OnRep_StaticMesh, "OnRep_StaticMesh" }, // 3931809542
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetDistanceFieldSelfShadowBias, "SetDistanceFieldSelfShadowBias" }, // 1041857139
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffset, "SetEvaluateWorldPositionOffset" }, // 2293942369
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetEvaluateWorldPositionOffsetInRayTracing, "SetEvaluateWorldPositionOffsetInRayTracing" }, // 1696949502
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetForceDisableNanite, "SetForceDisableNanite" }, // 4022667319
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetForcedLodModel, "SetForcedLodModel" }, // 2519066934
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetReverseCulling, "SetReverseCulling" }, // 4292878517
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetStaticMesh, "SetStaticMesh" }, // 639353470
		{ &Z_Construct_UFunction_UStaticMeshComponent_SetWorldPositionOffsetDisableDistance, "SetWorldPositionOffsetDisableDistance" }, // 638400646
		{ &Z_Construct_UFunction_UStaticMeshComponent_UpdateInitialEvaluateWorldPositionOffset, "UpdateInitialEvaluateWorldPositionOffset" }, // 144004701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel = { "ForcedLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, ForcedLodModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedLodModel_MetaData), NewProp_ForcedLodModel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel = { "PreviousLODLevel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, PreviousLODLevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousLODLevel_MetaData), NewProp_PreviousLODLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, MinLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLOD_MetaData), NewProp_MinLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize = { "SubDivisionStepSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, SubDivisionStepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubDivisionStepSize_MetaData), NewProp_SubDivisionStepSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh = { "StaticMesh", "OnRep_StaticMesh", (EPropertyFlags)0x0144000100000035, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride = { "WireframeColorOverride", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, WireframeColorOverride), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeColorOverride_MetaData), NewProp_WireframeColorOverride_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNaniteForMasked_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bForceNaniteForMasked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNaniteForMasked = { "bForceNaniteForMasked", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNaniteForMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNaniteForMasked_MetaData), NewProp_bForceNaniteForMasked_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowNanite_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bDisallowNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowNanite = { "bDisallowNanite", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisallowNanite_MetaData), NewProp_bDisallowNanite_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceDisableNanite_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bForceDisableNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceDisableNanite = { "bForceDisableNanite", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceDisableNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceDisableNanite_MetaData), NewProp_bForceDisableNanite_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bEvaluateWorldPositionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset = { "bEvaluateWorldPositionOffset", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateWorldPositionOffset_MetaData), NewProp_bEvaluateWorldPositionOffset_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bWorldPositionOffsetWritesVelocity_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bWorldPositionOffsetWritesVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bWorldPositionOffsetWritesVelocity = { "bWorldPositionOffsetWritesVelocity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bWorldPositionOffsetWritesVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorldPositionOffsetWritesVelocity_MetaData), NewProp_bWorldPositionOffsetWritesVelocity_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffsetInRayTracing_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bEvaluateWorldPositionOffsetInRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffsetInRayTracing = { "bEvaluateWorldPositionOffsetInRayTracing", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffsetInRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateWorldPositionOffsetInRayTracing_MetaData), NewProp_bEvaluateWorldPositionOffsetInRayTracing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WorldPositionOffsetDisableDistance = { "WorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, WorldPositionOffsetDisableDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOffsetDisableDistance_MetaData), NewProp_WorldPositionOffsetDisableDistance_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection = { "SelectedEditorSection", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, SelectedEditorSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedEditorSection_MetaData), NewProp_SelectedEditorSection_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial = { "SelectedEditorMaterial", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, SelectedEditorMaterial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedEditorMaterial_MetaData), NewProp_SelectedEditorMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview = { "SectionIndexPreview", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, SectionIndexPreview), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionIndexPreview_MetaData), NewProp_SectionIndexPreview_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview = { "MaterialIndexPreview", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, MaterialIndexPreview), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndexPreview_MetaData), NewProp_MaterialIndexPreview_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion = { "StaticMeshImportVersion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, StaticMeshImportVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshImportVersion_MetaData), NewProp_StaticMeshImportVersion_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bOverrideWireframeColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor = { "bOverrideWireframeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideWireframeColor_MetaData), NewProp_bOverrideWireframeColor_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bOverrideMinLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD = { "bOverrideMinLOD", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMinLOD_MetaData), NewProp_bOverrideMinLOD_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bOverrideNavigationExport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport = { "bOverrideNavigationExport", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideNavigationExport_MetaData), NewProp_bOverrideNavigationExport_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bForceNavigationObstacle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle = { "bForceNavigationObstacle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNavigationObstacle_MetaData), NewProp_bForceNavigationObstacle_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bDisallowMeshPaintPerInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance = { "bDisallowMeshPaintPerInstance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisallowMeshPaintPerInstance_MetaData), NewProp_bDisallowMeshPaintPerInstance_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bIgnoreInstanceForTextureStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming = { "bIgnoreInstanceForTextureStreaming", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreInstanceForTextureStreaming_MetaData), NewProp_bIgnoreInstanceForTextureStreaming_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bOverrideLightMapRes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLightMapRes_MetaData), NewProp_bOverrideLightMapRes_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bCastDistanceFieldIndirectShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow = { "bCastDistanceFieldIndirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDistanceFieldIndirectShadow_MetaData), NewProp_bCastDistanceFieldIndirectShadow_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bOverrideDistanceFieldSelfShadowBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias = { "bOverrideDistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData), NewProp_bOverrideDistanceFieldSelfShadowBias_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bUseSubDivisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions = { "bUseSubDivisions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSubDivisions_MetaData), NewProp_bUseSubDivisions_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bUseDefaultCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision = { "bUseDefaultCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultCollision_MetaData), NewProp_bUseDefaultCollision_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bCustomOverrideVertexColorPerLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD = { "bCustomOverrideVertexColorPerLOD", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomOverrideVertexColorPerLOD_MetaData), NewProp_bCustomOverrideVertexColorPerLOD_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bDisplayVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors = { "bDisplayVertexColors", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayVertexColors_MetaData), NewProp_bDisplayVertexColors_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bDisplayPhysicalMaterialMasks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks = { "bDisplayPhysicalMaterialMasks", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayPhysicalMaterialMasks_MetaData), NewProp_bDisplayPhysicalMaterialMasks_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayNaniteFallbackMesh_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bDisplayNaniteFallbackMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayNaniteFallbackMesh = { "bDisplayNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayNaniteFallbackMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayNaniteFallbackMesh_MetaData), NewProp_bDisplayNaniteFallbackMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bSortTriangles_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bSortTriangles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bSortTriangles = { "bSortTriangles", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bSortTriangles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortTriangles_MetaData), NewProp_bSortTriangles_MetaData) };
void Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_SetBit(void* Obj)
{
	((UStaticMeshComponent*)Obj)->bReverseCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling = { "bReverseCulling", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UStaticMeshComponent), &Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseCulling_MetaData), NewProp_bReverseCulling_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, OverriddenLightMapRes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverriddenLightMapRes_MetaData), NewProp_OverriddenLightMapRes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility = { "DistanceFieldIndirectShadowMinVisibility", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, DistanceFieldIndirectShadowMinVisibility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData), NewProp_DistanceFieldIndirectShadowMinVisibility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, DistanceFieldSelfShadowBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldSelfShadowBias_MetaData), NewProp_DistanceFieldSelfShadowBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData), NewProp_StreamingDistanceMultiplier_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_Inner = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, IrrelevantLights_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IrrelevantLights_MetaData), NewProp_IrrelevantLights_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_Inner = { "LODData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, METADATA_PARAMS(0, nullptr) }; // 4131006263
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData = { "LODData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, LODData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODData_MetaData), NewProp_LODData_MetaData) }; // 4131006263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_Inner = { "StreamingTextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, METADATA_PARAMS(0, nullptr) }; // 1727274560
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData = { "StreamingTextureData", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, StreamingTextureData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingTextureData_MetaData), NewProp_StreamingTextureData_MetaData) }; // 1727274560
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey = { "StaticMeshDerivedDataKey", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, StaticMeshDerivedDataKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshDerivedDataKey_MetaData), NewProp_StaticMeshDerivedDataKey_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner = { "MaterialStreamingRelativeBoxes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes = { "MaterialStreamingRelativeBoxes", nullptr, (EPropertyFlags)0x0010000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, MaterialStreamingRelativeBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialStreamingRelativeBoxes_MetaData), NewProp_MaterialStreamingRelativeBoxes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticMeshComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmassSettings_MetaData), NewProp_LightmassSettings_MetaData) }; // 675185212
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_ForcedLodModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_PreviousLODLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SubDivisionStepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WireframeColorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNaniteForMasked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceDisableNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bWorldPositionOffsetWritesVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bEvaluateWorldPositionOffsetInRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_WorldPositionOffsetDisableDistance,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SelectedEditorMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_SectionIndexPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialIndexPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshImportVersion,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideWireframeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideMinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideNavigationExport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bForceNavigationObstacle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisallowMeshPaintPerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bIgnoreInstanceForTextureStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCastDistanceFieldIndirectShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bOverrideDistanceFieldSelfShadowBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseSubDivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bUseDefaultCollision,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bCustomOverrideVertexColorPerLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayPhysicalMaterialMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bDisplayNaniteFallbackMesh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bSortTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_bReverseCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_OverriddenLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldIndirectShadowMinVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_DistanceFieldSelfShadowBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingDistanceMultiplier,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_IrrelevantLights,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LODData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StreamingTextureData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_StaticMeshDerivedDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_MaterialStreamingRelativeBoxes,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshComponent_Statics::NewProp_LightmassSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshComponent_Statics::ClassParams = {
	&UStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticMeshComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UStaticMeshComponent>()
{
	return UStaticMeshComponent::StaticClass();
}
void UStaticMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StaticMesh(TEXT("StaticMesh"));
	const bool bIsValid = true
		&& Name_StaticMesh == ClassReps[(int32)ENetFields_Private::StaticMesh].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UStaticMeshComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshComponent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshComponent)
// End Class UStaticMeshComponent

// Begin ScriptStruct FStaticMeshVertexColorLODData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshVertexColorLODData;
class UScriptStruct* FStaticMeshVertexColorLODData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshVertexColorLODData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshVertexColorLODData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshVertexColorLODData"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshVertexColorLODData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshVertexColorLODData>()
{
	return FStaticMeshVertexColorLODData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Vertex data stored per-LOD */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Vertex data stored per-LOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintedVertices_MetaData[] = {
		{ "Comment", "/** copy of painted vertex data */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "copy of painted vertex data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexBufferColors_MetaData[] = {
		{ "Comment", "/** Copy of vertex buffer colors */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Copy of vertex buffer colors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Comment", "/** Index of the LOD that this data came from */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Index of the LOD that this data came from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintedVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintedVertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexBufferColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexBufferColors;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshVertexColorLODData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices_Inner = { "PaintedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaintedVertex, METADATA_PARAMS(0, nullptr) }; // 1364269286
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices = { "PaintedVertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshVertexColorLODData, PaintedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintedVertices_MetaData), NewProp_PaintedVertices_MetaData) }; // 1364269286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors_Inner = { "VertexBufferColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors = { "VertexBufferColors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshVertexColorLODData, VertexBufferColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexBufferColors_MetaData), NewProp_VertexBufferColors_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshVertexColorLODData, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_PaintedVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_VertexBufferColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewProp_LODIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StaticMeshVertexColorLODData",
	Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::PropPointers),
	sizeof(FStaticMeshVertexColorLODData),
	alignof(FStaticMeshVertexColorLODData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshVertexColorLODData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshVertexColorLODData.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshVertexColorLODData.InnerSingleton;
}
// End ScriptStruct FStaticMeshVertexColorLODData

// Begin ScriptStruct FStaticMeshComponentInstanceData
static_assert(std::is_polymorphic<FStaticMeshComponentInstanceData>() == std::is_polymorphic<FPrimitiveComponentInstanceData>(), "USTRUCT FStaticMeshComponentInstanceData cannot be polymorphic unless super FPrimitiveComponentInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshComponentInstanceData;
class UScriptStruct* FStaticMeshComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshComponentInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshComponentInstanceData>()
{
	return FStaticMeshComponentInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Comment", "/** Mesh being used by component */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Mesh being used by component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorLODs_MetaData[] = {
		{ "Comment", "/** Array of cached vertex colors for each LOD */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Array of cached vertex colors for each LOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStaticLighting_MetaData[] = {
		{ "Comment", "/** Used to store lightmap data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureData_MetaData[] = {
		{ "Comment", "/** Texture streaming build data */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Texture streaming build data" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialStreamingRelativeBoxes_MetaData[] = {
		{ "Comment", "/** Texture streaming editor data (for viewmodes) */" },
		{ "ModuleRelativePath", "Classes/Components/StaticMeshComponent.h" },
		{ "ToolTip", "Texture streaming editor data (for viewmodes)" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorLODs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColorLODs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStaticLighting_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedStaticLighting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingTextureData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaterialStreamingRelativeBoxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialStreamingRelativeBoxes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshComponentInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs_Inner = { "VertexColorLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData, METADATA_PARAMS(0, nullptr) }; // 3597745611
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs = { "VertexColorLODs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, VertexColorLODs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorLODs_MetaData), NewProp_VertexColorLODs_MetaData) }; // 3597745611
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_Inner = { "CachedStaticLighting", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting = { "CachedStaticLighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, CachedStaticLighting), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStaticLighting_MetaData), NewProp_CachedStaticLighting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData_Inner = { "StreamingTextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, METADATA_PARAMS(0, nullptr) }; // 1727274560
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData = { "StreamingTextureData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, StreamingTextureData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingTextureData_MetaData), NewProp_StreamingTextureData_MetaData) }; // 1727274560
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner = { "MaterialStreamingRelativeBoxes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes = { "MaterialStreamingRelativeBoxes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshComponentInstanceData, MaterialStreamingRelativeBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialStreamingRelativeBoxes_MetaData), NewProp_MaterialStreamingRelativeBoxes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_VertexColorLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_StreamingTextureData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewProp_MaterialStreamingRelativeBoxes,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData,
	&NewStructOps,
	"StaticMeshComponentInstanceData",
	Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::PropPointers),
	sizeof(FStaticMeshComponentInstanceData),
	alignof(FStaticMeshComponentInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshComponentInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshComponentInstanceData.InnerSingleton;
}
// End ScriptStruct FStaticMeshComponentInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaintedVertex::StaticStruct, Z_Construct_UScriptStruct_FPaintedVertex_Statics::NewStructOps, TEXT("PaintedVertex"), &Z_Registration_Info_UScriptStruct_PaintedVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaintedVertex), 1364269286U) },
		{ FStaticMeshVertexColorLODData::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics::NewStructOps, TEXT("StaticMeshVertexColorLODData"), &Z_Registration_Info_UScriptStruct_StaticMeshVertexColorLODData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshVertexColorLODData), 3597745611U) },
		{ FStaticMeshComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics::NewStructOps, TEXT("StaticMeshComponentInstanceData"), &Z_Registration_Info_UScriptStruct_StaticMeshComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshComponentInstanceData), 3965121207U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshComponent, UStaticMeshComponent::StaticClass, TEXT("UStaticMeshComponent"), &Z_Registration_Info_UClass_UStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshComponent), 283516264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_541545822(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
