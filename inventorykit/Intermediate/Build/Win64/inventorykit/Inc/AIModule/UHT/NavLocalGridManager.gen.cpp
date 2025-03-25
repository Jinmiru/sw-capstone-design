// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLocalGridManager() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager();
AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UNavLocalGridManager Function AddLocalNavigationGridForBox
struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics
{
	struct NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms
	{
		UObject* WorldContextObject;
		FVector Location;
		FVector Extent;
		FRotator Rotation;
		int32 Radius2D;
		float Height;
		bool bRebuildGrids;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Extent", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "CPP_Default_Rotation", "" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radius2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_bRebuildGrids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D = { "Radius2D", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Radius2D), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius2D_MetaData), NewProp_Radius2D_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
{
	((NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms*)Obj)->bRebuildGrids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "AddLocalNavigationGridForBox", nullptr, nullptr, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavLocalGridManager::execAddLocalNavigationGridForBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT(FVector,Z_Param_Extent);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radius2D);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_UBOOL(Z_Param_bRebuildGrids);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForBox(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Extent,Z_Param_Rotation,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids);
	P_NATIVE_END;
}
// End Class UNavLocalGridManager Function AddLocalNavigationGridForBox

// Begin Class UNavLocalGridManager Function AddLocalNavigationGridForCapsule
struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics
{
	struct NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms
	{
		UObject* WorldContextObject;
		FVector Location;
		float CapsuleRadius;
		float CapsuleHalfHeight;
		int32 Radius2D;
		float Height;
		bool bRebuildGrids;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radius2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_bRebuildGrids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, CapsuleRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, CapsuleHalfHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D = { "Radius2D", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Radius2D), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius2D_MetaData), NewProp_Radius2D_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
{
	((NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms*)Obj)->bRebuildGrids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "AddLocalNavigationGridForCapsule", nullptr, nullptr, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavLocalGridManager::execAddLocalNavigationGridForCapsule)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleHalfHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radius2D);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_UBOOL(Z_Param_bRebuildGrids);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForCapsule(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_CapsuleRadius,Z_Param_CapsuleHalfHeight,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids);
	P_NATIVE_END;
}
// End Class UNavLocalGridManager Function AddLocalNavigationGridForCapsule

// Begin Class UNavLocalGridManager Function AddLocalNavigationGridForPoint
struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics
{
	struct NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms
	{
		UObject* WorldContextObject;
		FVector Location;
		int32 Radius2D;
		float Height;
		bool bRebuildGrids;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** creates new grid data for single point */" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "creates new grid data for single point" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radius2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_bRebuildGrids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D = { "Radius2D", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Radius2D), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius2D_MetaData), NewProp_Radius2D_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
{
	((NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms*)Obj)->bRebuildGrids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "AddLocalNavigationGridForPoint", nullptr, nullptr, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavLocalGridManager::execAddLocalNavigationGridForPoint)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radius2D);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_UBOOL(Z_Param_bRebuildGrids);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForPoint(Z_Param_WorldContextObject,Z_Param_Out_Location,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids);
	P_NATIVE_END;
}
// End Class UNavLocalGridManager Function AddLocalNavigationGridForPoint

// Begin Class UNavLocalGridManager Function AddLocalNavigationGridForPoints
struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics
{
	struct NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms
	{
		UObject* WorldContextObject;
		TArray<FVector> Locations;
		int32 Radius2D;
		float Height;
		bool bRebuildGrids;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** creates single grid data for set of points */" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "creates single grid data for set of points" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radius2D;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_bRebuildGrids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Locations_MetaData), NewProp_Locations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D = { "Radius2D", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Radius2D), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius2D_MetaData), NewProp_Radius2D_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
{
	((NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms*)Obj)->bRebuildGrids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "AddLocalNavigationGridForPoints", nullptr, nullptr, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavLocalGridManager::execAddLocalNavigationGridForPoints)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radius2D);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_UBOOL(Z_Param_bRebuildGrids);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UNavLocalGridManager::AddLocalNavigationGridForPoints(Z_Param_WorldContextObject,Z_Param_Out_Locations,Z_Param_Radius2D,Z_Param_Height,Z_Param_bRebuildGrids);
	P_NATIVE_END;
}
// End Class UNavLocalGridManager Function AddLocalNavigationGridForPoints

// Begin Class UNavLocalGridManager Function FindLocalNavigationGridPath
struct Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics
{
	struct NavLocalGridManager_eventFindLocalNavigationGridPath_Parms
	{
		UObject* WorldContextObject;
		FVector Start;
		FVector End;
		TArray<FVector> PathPoints;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavLocalGridManager_eventFindLocalNavigationGridPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms), &Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "FindLocalNavigationGridPath", nullptr, nullptr, Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NavLocalGridManager_eventFindLocalNavigationGridPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NavLocalGridManager_eventFindLocalNavigationGridPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavLocalGridManager::execFindLocalNavigationGridPath)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PathPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNavLocalGridManager::FindLocalNavigationGridPath(Z_Param_WorldContextObject,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_PathPoints);
	P_NATIVE_END;
}
// End Class UNavLocalGridManager Function FindLocalNavigationGridPath

// Begin Class UNavLocalGridManager Function RemoveLocalNavigationGrid
struct Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics
{
	struct NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms
	{
		UObject* WorldContextObject;
		int32 GridId;
		bool bRebuildGrids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridId;
	static void NewProp_bRebuildGrids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_GridId = { "GridId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms, GridId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
{
	((NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms*)Obj)->bRebuildGrids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids = { "bRebuildGrids", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms), &Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_GridId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "RemoveLocalNavigationGrid", nullptr, nullptr, Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavLocalGridManager::execRemoveLocalNavigationGrid)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_GridId);
	P_GET_UBOOL(Z_Param_bRebuildGrids);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNavLocalGridManager::RemoveLocalNavigationGrid(Z_Param_WorldContextObject,Z_Param_GridId,Z_Param_bRebuildGrids);
	P_NATIVE_END;
}
// End Class UNavLocalGridManager Function RemoveLocalNavigationGrid

// Begin Class UNavLocalGridManager Function SetLocalNavigationGridDensity
struct Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics
{
	struct NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms
	{
		UObject* WorldContextObject;
		float CellSize;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms, CellSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms), &Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, nullptr, "SetLocalNavigationGridDensity", nullptr, nullptr, Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavLocalGridManager::execSetLocalNavigationGridDensity)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CellSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNavLocalGridManager::SetLocalNavigationGridDensity(Z_Param_WorldContextObject,Z_Param_CellSize);
	P_NATIVE_END;
}
// End Class UNavLocalGridManager Function SetLocalNavigationGridDensity

// Begin Class UNavLocalGridManager
void UNavLocalGridManager::StaticRegisterNativesUNavLocalGridManager()
{
	UClass* Class = UNavLocalGridManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLocalNavigationGridForBox", &UNavLocalGridManager::execAddLocalNavigationGridForBox },
		{ "AddLocalNavigationGridForCapsule", &UNavLocalGridManager::execAddLocalNavigationGridForCapsule },
		{ "AddLocalNavigationGridForPoint", &UNavLocalGridManager::execAddLocalNavigationGridForPoint },
		{ "AddLocalNavigationGridForPoints", &UNavLocalGridManager::execAddLocalNavigationGridForPoints },
		{ "FindLocalNavigationGridPath", &UNavLocalGridManager::execFindLocalNavigationGridPath },
		{ "RemoveLocalNavigationGrid", &UNavLocalGridManager::execRemoveLocalNavigationGrid },
		{ "SetLocalNavigationGridDensity", &UNavLocalGridManager::execSetLocalNavigationGridDensity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLocalGridManager);
UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister()
{
	return UNavLocalGridManager::StaticClass();
}
struct Z_Construct_UClass_UNavLocalGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Manager for local navigation grids\n * \n *  Builds non overlapping grid from multiple sources, that can be used later for pathfinding.\n *  Check also: UGridPathFollowingComponent, FNavLocalGridData\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Navigation/NavLocalGridManager.h" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "Manager for local navigation grids\n\nBuilds non overlapping grid from multiple sources, that can be used later for pathfinding.\nCheck also: UGridPathFollowingComponent, FNavLocalGridData" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox, "AddLocalNavigationGridForBox" }, // 330271575
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule, "AddLocalNavigationGridForCapsule" }, // 2997111352
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint, "AddLocalNavigationGridForPoint" }, // 1973625471
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints, "AddLocalNavigationGridForPoints" }, // 1719071255
		{ &Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath, "FindLocalNavigationGridPath" }, // 711712098
		{ &Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid, "RemoveLocalNavigationGrid" }, // 680638657
		{ &Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity, "SetLocalNavigationGridDensity" }, // 2569028253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLocalGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavLocalGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLocalGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLocalGridManager_Statics::ClassParams = {
	&UNavLocalGridManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavLocalGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavLocalGridManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavLocalGridManager()
{
	if (!Z_Registration_Info_UClass_UNavLocalGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLocalGridManager.OuterSingleton, Z_Construct_UClass_UNavLocalGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavLocalGridManager.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UNavLocalGridManager>()
{
	return UNavLocalGridManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLocalGridManager);
UNavLocalGridManager::~UNavLocalGridManager() {}
// End Class UNavLocalGridManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavLocalGridManager, UNavLocalGridManager::StaticClass, TEXT("UNavLocalGridManager"), &Z_Registration_Info_UClass_UNavLocalGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLocalGridManager), 1584169249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_2447924939(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
