// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MRMesh/Public/MockDataMeshTrackerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockDataMeshTrackerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
MRMESH_API UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent();
MRMESH_API UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister();
MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
MRMESH_API UEnum* Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode();
MRMESH_API UFunction* Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MRMesh();
// End Cross Module References

// Begin Enum EMeshTrackerVertexColorMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode;
static UEnum* EMeshTrackerVertexColorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode, (UObject*)Z_Construct_UPackage__Script_MRMesh(), TEXT("EMeshTrackerVertexColorMode"));
	}
	return Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.OuterSingleton;
}
template<> MRMESH_API UEnum* StaticEnum<EMeshTrackerVertexColorMode>()
{
	return EMeshTrackerVertexColorMode_StaticEnum();
}
struct Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Block.Comment", "/*! Each block is given a color from a list. */" },
		{ "Block.DisplayName", "Blocks Colored" },
		{ "Block.Name", "EMeshTrackerVertexColorMode::Block" },
		{ "Block.ToolTip", "! Each block is given a color from a list." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Vertex color mode. */" },
		{ "Confidence.Comment", "/*! Vertex confidence is interpolated between two specified colors. */" },
		{ "Confidence.DisplayName", "Vertex Confidence" },
		{ "Confidence.Name", "EMeshTrackerVertexColorMode::Confidence" },
		{ "Confidence.ToolTip", "! Vertex confidence is interpolated between two specified colors." },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "None.Comment", "/** Vertex Color is not set. */" },
		{ "None.DisplayName", "No Vertex Color" },
		{ "None.Name", "EMeshTrackerVertexColorMode::None" },
		{ "None.ToolTip", "Vertex Color is not set." },
		{ "ToolTip", "Vertex color mode." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshTrackerVertexColorMode::None", (int64)EMeshTrackerVertexColorMode::None },
		{ "EMeshTrackerVertexColorMode::Confidence", (int64)EMeshTrackerVertexColorMode::Confidence },
		{ "EMeshTrackerVertexColorMode::Block", (int64)EMeshTrackerVertexColorMode::Block },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MRMesh,
	nullptr,
	"EMeshTrackerVertexColorMode",
	"EMeshTrackerVertexColorMode",
	Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode()
{
	if (!Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton, Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode.InnerSingleton;
}
// End Enum EMeshTrackerVertexColorMode

// Begin Delegate FOnMockDataMeshTrackerUpdated
struct Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics
{
	struct MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms
	{
		int32 Index;
		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector> Normals;
		TArray<float> Confidence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Delegate used by OnMeshUpdated().\n\x09@param Index The index of the mesh section in the ProceduralMeshComponent that was updated.\n\x09@param Vertices List of all vertices in the updated mesh section.\n\x09@param Triangles List of all triangles in the updated mesh section.\n\x09@param Normals List of the normals of all triangles in the updated mesh section.\n\x09@param Confidence List of the confidence values per vertex in the updated mesh section. This can be used to determine if the user needs to scan more.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Delegate used by OnMeshUpdated().\n@param Index The index of the mesh section in the ProceduralMeshComponent that was updated.\n@param Vertices List of all vertices in the updated mesh section.\n@param Triangles List of all triangles in the updated mesh section.\n@param Normals List of the normals of all triangles in the updated mesh section.\n@param Confidence List of the confidence values per vertex in the updated mesh section. This can be used to determine if the user needs to scan more." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Confidence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_Inner = { "Confidence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms, Confidence), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Confidence_MetaData), NewProp_Confidence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockDataMeshTrackerComponent, nullptr, "OnMockDataMeshTrackerUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMockDataMeshTrackerComponent::FOnMockDataMeshTrackerUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMockDataMeshTrackerUpdated, int32 Index, TArray<FVector> const& Vertices, TArray<int32> const& Triangles, TArray<FVector> const& Normals, TArray<float> const& Confidence)
{
	struct MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms
	{
		int32 Index;
		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector> Normals;
		TArray<float> Confidence;
	};
	MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms Parms;
	Parms.Index=Index;
	Parms.Vertices=Vertices;
	Parms.Triangles=Triangles;
	Parms.Normals=Normals;
	Parms.Confidence=Confidence;
	OnMockDataMeshTrackerUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMockDataMeshTrackerUpdated

// Begin Class UMockDataMeshTrackerComponent Function ConnectMRMesh
struct Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics
{
	struct MockDataMeshTrackerComponent_eventConnectMRMesh_Parms
	{
		UMRMeshComponent* InMRMeshPtr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09\x09Sets the procedural mesh component that will store and display the environmental mesh results.\n\x09\x09@param InMRMeshPtr The procedural mesh component to store the query result in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Sets the procedural mesh component that will store and display the environmental mesh results.\n@param InMRMeshPtr The procedural mesh component to store the query result in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMRMeshPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventConnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMRMeshPtr_MetaData), NewProp_InMRMeshPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockDataMeshTrackerComponent, nullptr, "ConnectMRMesh", nullptr, nullptr, Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::MockDataMeshTrackerComponent_eventConnectMRMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::MockDataMeshTrackerComponent_eventConnectMRMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMockDataMeshTrackerComponent::execConnectMRMesh)
{
	P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectMRMesh(Z_Param_InMRMeshPtr);
	P_NATIVE_END;
}
// End Class UMockDataMeshTrackerComponent Function ConnectMRMesh

// Begin Class UMockDataMeshTrackerComponent Function DisconnectMRMesh
struct Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics
{
	struct MockDataMeshTrackerComponent_eventDisconnectMRMesh_Parms
	{
		UMRMeshComponent* InMRMeshPtr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09\x09Unlinks the current procedural mesh component from the mesh tracking system.\n\x09\x09@param InMRMeshPtr The procedural mesh component to unlink from the mesh tracking system.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Unlinks the current procedural mesh component from the mesh tracking system.\n@param InMRMeshPtr The procedural mesh component to unlink from the mesh tracking system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMRMeshPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockDataMeshTrackerComponent_eventDisconnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMRMeshPtr_MetaData), NewProp_InMRMeshPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockDataMeshTrackerComponent, nullptr, "DisconnectMRMesh", nullptr, nullptr, Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::MockDataMeshTrackerComponent_eventDisconnectMRMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::MockDataMeshTrackerComponent_eventDisconnectMRMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMockDataMeshTrackerComponent::execDisconnectMRMesh)
{
	P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectMRMesh(Z_Param_InMRMeshPtr);
	P_NATIVE_END;
}
// End Class UMockDataMeshTrackerComponent Function DisconnectMRMesh

// Begin Class UMockDataMeshTrackerComponent
void UMockDataMeshTrackerComponent::StaticRegisterNativesUMockDataMeshTrackerComponent()
{
	UClass* Class = UMockDataMeshTrackerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectMRMesh", &UMockDataMeshTrackerComponent::execConnectMRMesh },
		{ "DisconnectMRMesh", &UMockDataMeshTrackerComponent::execDisconnectMRMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockDataMeshTrackerComponent);
UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent_NoRegister()
{
	return UMockDataMeshTrackerComponent::StaticClass();
}
struct Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n\x09The MeshTrackerComponent class manages requests for environmental mesh data, processes the results and provides\n\x09them to the calling system. The calling system is able request environmental mesh data within a specified area.\n\x09Various other search criteria can be set via this class's public properties.  Mesh data requests are processed\n\x09on a separate thread.  Once a mesh data request has been processed the calling system will be notified via an\n\x09""FOnMeshTrackerUpdated broadcast.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MockDataMeshTrackerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "The MeshTrackerComponent class manages requests for environmental mesh data, processes the results and provides\nthem to the calling system. The calling system is able request environmental mesh data within a specified area.\nVarious other search criteria can be set via this class's public properties.  Mesh data requests are processed\non a separate thread.  Once a mesh data request has been processed the calling system will be notified via an\nFOnMeshTrackerUpdated broadcast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMeshTrackerUpdated_MetaData[] = {
		{ "Comment", "/** Activated whenever new information about this mesh tracker is detected. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Activated whenever new information about this mesh tracker is detected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanWorld_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** Set to true to start scanning the world for meshes. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Set to true to start scanning the world for meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestNormals_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** If true, the system will generate normals for the triangle vertices. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "If true, the system will generate normals for the triangle vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestVertexConfidence_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/**\n\x09\x09If true, the system will generate the mesh confidence values for the triangle vertices.\n\x09\x09These confidence values can be used to determine if the user needs to scan more.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "If true, the system will generate the mesh confidence values for the triangle vertices.\nThese confidence values can be used to determine if the user needs to scan more." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMode_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/**\n\x09* Vertex Colors can be unused, or filled with several types of information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Vertex Colors can be unused, or filled with several types of information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockVertexColors_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** Colors through which we cycle when setting vertex color by block. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Colors through which we cycle when setting vertex color by block." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorFromConfidenceZero_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** Color mapped to confidence value of zero. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Color mapped to confidence value of zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorFromConfidenceOne_MetaData[] = {
		{ "Category", "Meshing" },
		{ "Comment", "/** Color mapped to confidence value of one. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Color mapped to confidence value of one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInterval_MetaData[] = {
		{ "Category", "Meshing|MockData" },
		{ "Comment", "/** Update Interval in Seconds. */" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "Update Interval in Seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MRMesh_MetaData[] = {
		{ "Comment", "/** MRMeshComponent can render and provide collision based on the Mesh data. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MockDataMeshTrackerComponent.h" },
		{ "ToolTip", "MRMeshComponent can render and provide collision based on the Mesh data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeshTrackerUpdated;
	static void NewProp_ScanWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ScanWorld;
	static void NewProp_RequestNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RequestNormals;
	static void NewProp_RequestVertexConfidence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RequestVertexConfidence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VertexColorMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockVertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockVertexColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorFromConfidenceZero;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorFromConfidenceOne;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MRMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMockDataMeshTrackerComponent_ConnectMRMesh, "ConnectMRMesh" }, // 504155262
		{ &Z_Construct_UFunction_UMockDataMeshTrackerComponent_DisconnectMRMesh, "DisconnectMRMesh" }, // 1159747703
		{ &Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, "OnMockDataMeshTrackerUpdated__DelegateSignature" }, // 759030037
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockDataMeshTrackerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated = { "OnMeshTrackerUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockDataMeshTrackerComponent, OnMeshTrackerUpdated), Z_Construct_UDelegateFunction_UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMeshTrackerUpdated_MetaData), NewProp_OnMeshTrackerUpdated_MetaData) }; // 759030037
void Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld_SetBit(void* Obj)
{
	((UMockDataMeshTrackerComponent*)Obj)->ScanWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld = { "ScanWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMockDataMeshTrackerComponent), &Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanWorld_MetaData), NewProp_ScanWorld_MetaData) };
void Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals_SetBit(void* Obj)
{
	((UMockDataMeshTrackerComponent*)Obj)->RequestNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals = { "RequestNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMockDataMeshTrackerComponent), &Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestNormals_MetaData), NewProp_RequestNormals_MetaData) };
void Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_SetBit(void* Obj)
{
	((UMockDataMeshTrackerComponent*)Obj)->RequestVertexConfidence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence = { "RequestVertexConfidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMockDataMeshTrackerComponent), &Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestVertexConfidence_MetaData), NewProp_RequestVertexConfidence_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode = { "VertexColorMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockDataMeshTrackerComponent, VertexColorMode), Z_Construct_UEnum_MRMesh_EMeshTrackerVertexColorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorMode_MetaData), NewProp_VertexColorMode_MetaData) }; // 3122698449
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors_Inner = { "BlockVertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors = { "BlockVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockDataMeshTrackerComponent, BlockVertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockVertexColors_MetaData), NewProp_BlockVertexColors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero = { "VertexColorFromConfidenceZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorFromConfidenceZero_MetaData), NewProp_VertexColorFromConfidenceZero_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne = { "VertexColorFromConfidenceOne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorFromConfidenceOne_MetaData), NewProp_VertexColorFromConfidenceOne_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockDataMeshTrackerComponent, UpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInterval_MetaData), NewProp_UpdateInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_MRMesh = { "MRMesh", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMockDataMeshTrackerComponent, MRMesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MRMesh_MetaData), NewProp_MRMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_ScanWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_BlockVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_UpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::NewProp_MRMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::ClassParams = {
	&UMockDataMeshTrackerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMockDataMeshTrackerComponent()
{
	if (!Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton, Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.OuterSingleton;
}
template<> MRMESH_API UClass* StaticClass<UMockDataMeshTrackerComponent>()
{
	return UMockDataMeshTrackerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMockDataMeshTrackerComponent);
// End Class UMockDataMeshTrackerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshTrackerVertexColorMode_StaticEnum, TEXT("EMeshTrackerVertexColorMode"), &Z_Registration_Info_UEnum_EMeshTrackerVertexColorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3122698449U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMockDataMeshTrackerComponent, UMockDataMeshTrackerComponent::StaticClass, TEXT("UMockDataMeshTrackerComponent"), &Z_Registration_Info_UClass_UMockDataMeshTrackerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockDataMeshTrackerComponent), 2810743536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_1081942766(TEXT("/Script/MRMesh"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
