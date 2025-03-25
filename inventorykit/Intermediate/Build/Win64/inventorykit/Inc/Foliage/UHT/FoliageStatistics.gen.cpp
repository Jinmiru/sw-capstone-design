// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/FoliageStatistics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageStatistics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageStatistics();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageStatistics_NoRegister();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class UFoliageStatistics Function FoliageOverlappingBoxCount
struct Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics
{
	struct FoliageStatistics_eventFoliageOverlappingBoxCount_Parms
	{
		UObject* WorldContextObject;
		const UStaticMesh* StaticMesh;
		FBox Box;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "Comment", "/** \n\x09 *\x09Gets the number of instances overlapping a provided box\n\x09 *\x09@param StaticMesh Mesh to count\n\x09 *\x09@param Box Box to overlap\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageStatistics.h" },
		{ "ToolTip", "Gets the number of instances overlapping a provided box\n@param StaticMesh Mesh to count\n@param Box Box to overlap" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoliageStatistics, nullptr, "FoliageOverlappingBoxCount", nullptr, nullptr, Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::FoliageStatistics_eventFoliageOverlappingBoxCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::FoliageStatistics_eventFoliageOverlappingBoxCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFoliageStatistics::execFoliageOverlappingBoxCount)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_STRUCT(FBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingBoxCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_Box);
	P_NATIVE_END;
}
// End Class UFoliageStatistics Function FoliageOverlappingBoxCount

// Begin Class UFoliageStatistics Function FoliageOverlappingBoxTransforms
struct Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics
{
	struct FoliageStatistics_eventFoliageOverlappingBoxTransforms_Parms
	{
		UObject* WorldContextObject;
		const UStaticMesh* StaticMesh;
		FBox Box;
		TArray<FTransform> OutTransforms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "Comment", "/** \n\x09 *  Get the transform of every instance overlapping the provided FBox\n\x09 *\x09@param StaticMesh Mesh to get instances of\n\x09 *\x09@param Box Box to use for overlap\n\x09 *\x09@param OutTransforms Array to populate with transforms\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageStatistics.h" },
		{ "ToolTip", "Get the transform of every instance overlapping the provided FBox\n    @param StaticMesh Mesh to get instances of\n    @param Box Box to use for overlap\n    @param OutTransforms Array to populate with transforms" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxTransforms_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxTransforms_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxTransforms_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_OutTransforms_Inner = { "OutTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_OutTransforms = { "OutTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingBoxTransforms_Parms, OutTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_OutTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::NewProp_OutTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoliageStatistics, nullptr, "FoliageOverlappingBoxTransforms", nullptr, nullptr, Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::FoliageStatistics_eventFoliageOverlappingBoxTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::FoliageStatistics_eventFoliageOverlappingBoxTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFoliageStatistics::execFoliageOverlappingBoxTransforms)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_STRUCT(FBox,Z_Param_Box);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFoliageStatistics::FoliageOverlappingBoxTransforms(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_Box,Z_Param_Out_OutTransforms);
	P_NATIVE_END;
}
// End Class UFoliageStatistics Function FoliageOverlappingBoxTransforms

// Begin Class UFoliageStatistics Function FoliageOverlappingSphereCount
struct Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics
{
	struct FoliageStatistics_eventFoliageOverlappingSphereCount_Parms
	{
		UObject* WorldContextObject;
		const UStaticMesh* StaticMesh;
		FVector CenterPosition;
		float Radius;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "Comment", "/**\n\x09* Counts how many foliage instances overlap a given sphere\n\x09*\n\x09* @param\x09Mesh\x09\x09\x09The static mesh we are interested in counting\n\x09* @param\x09""CenterPosition\x09The center position of the sphere\n\x09* @param\x09Radius\x09\x09\x09The radius of the sphere.\n\x09*\n\x09* return number of foliage instances with their mesh set to Mesh that overlap the sphere\n\x09*/" },
		{ "ModuleRelativePath", "Public/FoliageStatistics.h" },
		{ "ToolTip", "Counts how many foliage instances overlap a given sphere\n\n@param        Mesh                    The static mesh we are interested in counting\n@param        CenterPosition  The center position of the sphere\n@param        Radius                  The radius of the sphere.\n\nreturn number of foliage instances with their mesh set to Mesh that overlap the sphere" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_CenterPosition = { "CenterPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, CenterPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FoliageStatistics_eventFoliageOverlappingSphereCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_CenterPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoliageStatistics, nullptr, "FoliageOverlappingSphereCount", nullptr, nullptr, Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::FoliageStatistics_eventFoliageOverlappingSphereCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::FoliageStatistics_eventFoliageOverlappingSphereCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFoliageStatistics::execFoliageOverlappingSphereCount)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_STRUCT(FVector,Z_Param_CenterPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFoliageStatistics::FoliageOverlappingSphereCount(Z_Param_WorldContextObject,Z_Param_StaticMesh,Z_Param_CenterPosition,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class UFoliageStatistics Function FoliageOverlappingSphereCount

// Begin Class UFoliageStatistics
void UFoliageStatistics::StaticRegisterNativesUFoliageStatistics()
{
	UClass* Class = UFoliageStatistics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FoliageOverlappingBoxCount", &UFoliageStatistics::execFoliageOverlappingBoxCount },
		{ "FoliageOverlappingBoxTransforms", &UFoliageStatistics::execFoliageOverlappingBoxTransforms },
		{ "FoliageOverlappingSphereCount", &UFoliageStatistics::execFoliageOverlappingSphereCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageStatistics);
UClass* Z_Construct_UClass_UFoliageStatistics_NoRegister()
{
	return UFoliageStatistics::StaticClass();
}
struct Z_Construct_UClass_UFoliageStatistics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FoliageStatistics.h" },
		{ "ModuleRelativePath", "Public/FoliageStatistics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxCount, "FoliageOverlappingBoxCount" }, // 2577263744
		{ &Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingBoxTransforms, "FoliageOverlappingBoxTransforms" }, // 1140129249
		{ &Z_Construct_UFunction_UFoliageStatistics_FoliageOverlappingSphereCount, "FoliageOverlappingSphereCount" }, // 583154480
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageStatistics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFoliageStatistics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageStatistics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageStatistics_Statics::ClassParams = {
	&UFoliageStatistics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageStatistics_Statics::Class_MetaDataParams), Z_Construct_UClass_UFoliageStatistics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFoliageStatistics()
{
	if (!Z_Registration_Info_UClass_UFoliageStatistics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageStatistics.OuterSingleton, Z_Construct_UClass_UFoliageStatistics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFoliageStatistics.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UFoliageStatistics>()
{
	return UFoliageStatistics::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageStatistics);
UFoliageStatistics::~UFoliageStatistics() {}
// End Class UFoliageStatistics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageStatistics, UFoliageStatistics::StaticClass, TEXT("UFoliageStatistics"), &Z_Registration_Info_UClass_UFoliageStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageStatistics), 2693395682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_3146276086(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
