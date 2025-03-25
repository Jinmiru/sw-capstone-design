// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRigTestData.h"
#include "ControlRig/Public/Rigs/RigHierarchyPose.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigTestData() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTestData();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTestData_NoRegister();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigTestDataFrame();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigTestDataVariable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FControlRigTestDataVariable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable;
class UScriptStruct* FControlRigTestDataVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigTestDataVariable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigTestDataVariable"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigTestDataVariable>()
{
	return FControlRigTestDataVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ControlRigTestDataVariable" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[] = {
		{ "Category", "ControlRigTestDataVariable" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "ControlRigTestDataVariable" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigTestDataVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigTestDataVariable, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigTestDataVariable, CPPType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPPType_MetaData), NewProp_CPPType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigTestDataVariable, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_CPPType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigTestDataVariable",
	Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::PropPointers),
	sizeof(FControlRigTestDataVariable),
	alignof(FControlRigTestDataVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigTestDataVariable()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.InnerSingleton, Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.InnerSingleton;
}
// End ScriptStruct FControlRigTestDataVariable

// Begin ScriptStruct FControlRigTestDataFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame;
class UScriptStruct* FControlRigTestDataFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigTestDataFrame, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigTestDataFrame"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigTestDataFrame>()
{
	return FControlRigTestDataFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteTime_MetaData[] = {
		{ "Category", "ControlRigTestDataFrame" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "Category", "ControlRigTestDataFrame" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "Category", "ControlRigTestDataFrame" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "ControlRigTestDataFrame" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AbsoluteTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigTestDataFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_AbsoluteTime = { "AbsoluteTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigTestDataFrame, AbsoluteTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteTime_MetaData), NewProp_AbsoluteTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigTestDataFrame, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigTestDataVariable, METADATA_PARAMS(0, nullptr) }; // 716267182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigTestDataFrame, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 716267182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRigTestDataFrame, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 269917463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_AbsoluteTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Pose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRigTestDataFrame",
	Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::PropPointers),
	sizeof(FControlRigTestDataFrame),
	alignof(FControlRigTestDataFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigTestDataFrame()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.InnerSingleton, Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.InnerSingleton;
}
// End ScriptStruct FControlRigTestDataFrame

// Begin Enum EControlRigTestDataPlaybackMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode;
static UEnum* EControlRigTestDataPlaybackMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigTestDataPlaybackMode"));
	}
	return Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigTestDataPlaybackMode>()
{
	return EControlRigTestDataPlaybackMode_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GroundTruth.Name", "EControlRigTestDataPlaybackMode::GroundTruth" },
		{ "Live.Name", "EControlRigTestDataPlaybackMode::Live" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigTestDataPlaybackMode::Max" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
		{ "ReplayInputs.Name", "EControlRigTestDataPlaybackMode::ReplayInputs" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigTestDataPlaybackMode::Live", (int64)EControlRigTestDataPlaybackMode::Live },
		{ "EControlRigTestDataPlaybackMode::ReplayInputs", (int64)EControlRigTestDataPlaybackMode::ReplayInputs },
		{ "EControlRigTestDataPlaybackMode::GroundTruth", (int64)EControlRigTestDataPlaybackMode::GroundTruth },
		{ "EControlRigTestDataPlaybackMode::Max", (int64)EControlRigTestDataPlaybackMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigTestDataPlaybackMode",
	"EControlRigTestDataPlaybackMode",
	Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode()
{
	if (!Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.InnerSingleton;
}
// End Enum EControlRigTestDataPlaybackMode

// Begin Class UControlRigTestData Function CreateNewAsset
struct Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics
{
	struct ControlRigTestData_eventCreateNewAsset_Parms
	{
		FString InDesiredPackagePath;
		FString InBlueprintPathName;
		UControlRigTestData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDesiredPackagePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InBlueprintPathName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_InDesiredPackagePath = { "InDesiredPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventCreateNewAsset_Parms, InDesiredPackagePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_InBlueprintPathName = { "InBlueprintPathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventCreateNewAsset_Parms, InBlueprintPathName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventCreateNewAsset_Parms, ReturnValue), Z_Construct_UClass_UControlRigTestData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_InDesiredPackagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_InBlueprintPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "CreateNewAsset", nullptr, nullptr, Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::ControlRigTestData_eventCreateNewAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::ControlRigTestData_eventCreateNewAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTestData_CreateNewAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execCreateNewAsset)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InDesiredPackagePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_InBlueprintPathName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UControlRigTestData**)Z_Param__Result=UControlRigTestData::CreateNewAsset(Z_Param_InDesiredPackagePath,Z_Param_InBlueprintPathName);
	P_NATIVE_END;
}
// End Class UControlRigTestData Function CreateNewAsset

// Begin Class UControlRigTestData Function GetFrameIndexForTime
struct Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics
{
	struct ControlRigTestData_eventGetFrameIndexForTime_Parms
	{
		double InSeconds;
		bool bInput;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "CPP_Default_bInput", "false" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InSeconds;
	static void NewProp_bInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInput;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventGetFrameIndexForTime_Parms, InSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput_SetBit(void* Obj)
{
	((ControlRigTestData_eventGetFrameIndexForTime_Parms*)Obj)->bInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput = { "bInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigTestData_eventGetFrameIndexForTime_Parms), &Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventGetFrameIndexForTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_InSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "GetFrameIndexForTime", nullptr, nullptr, Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::ControlRigTestData_eventGetFrameIndexForTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::ControlRigTestData_eventGetFrameIndexForTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execGetFrameIndexForTime)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InSeconds);
	P_GET_UBOOL(Z_Param_bInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFrameIndexForTime(Z_Param_InSeconds,Z_Param_bInput);
	P_NATIVE_END;
}
// End Class UControlRigTestData Function GetFrameIndexForTime

// Begin Class UControlRigTestData Function GetPlaybackMode
struct Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics
{
	struct ControlRigTestData_eventGetPlaybackMode_Parms
	{
		EControlRigTestDataPlaybackMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventGetPlaybackMode_Parms, ReturnValue), Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode, METADATA_PARAMS(0, nullptr) }; // 2030563918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "GetPlaybackMode", nullptr, nullptr, Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::ControlRigTestData_eventGetPlaybackMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::ControlRigTestData_eventGetPlaybackMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execGetPlaybackMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EControlRigTestDataPlaybackMode*)Z_Param__Result=P_THIS->GetPlaybackMode();
	P_NATIVE_END;
}
// End Class UControlRigTestData Function GetPlaybackMode

// Begin Class UControlRigTestData Function GetTimeRange
struct Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics
{
	struct ControlRigTestData_eventGetTimeRange_Parms
	{
		bool bInput;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "CPP_Default_bInput", "false" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_bInput_SetBit(void* Obj)
{
	((ControlRigTestData_eventGetTimeRange_Parms*)Obj)->bInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_bInput = { "bInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigTestData_eventGetTimeRange_Parms), &Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_bInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventGetTimeRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_bInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "GetTimeRange", nullptr, nullptr, Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::ControlRigTestData_eventGetTimeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::ControlRigTestData_eventGetTimeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTestData_GetTimeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execGetTimeRange)
{
	P_GET_UBOOL(Z_Param_bInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetTimeRange(Z_Param_bInput);
	P_NATIVE_END;
}
// End Class UControlRigTestData Function GetTimeRange

// Begin Class UControlRigTestData Function IsRecording
struct Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics
{
	struct ControlRigTestData_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigTestData_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigTestData_eventIsRecording_Parms), &Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "IsRecording", nullptr, nullptr, Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::ControlRigTestData_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::ControlRigTestData_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTestData_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// End Class UControlRigTestData Function IsRecording

// Begin Class UControlRigTestData Function IsReplaying
struct Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics
{
	struct ControlRigTestData_eventIsReplaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigTestData_eventIsReplaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigTestData_eventIsReplaying_Parms), &Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "IsReplaying", nullptr, nullptr, Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::ControlRigTestData_eventIsReplaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::ControlRigTestData_eventIsReplaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTestData_IsReplaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execIsReplaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReplaying();
	P_NATIVE_END;
}
// End Class UControlRigTestData Function IsReplaying

// Begin Class UControlRigTestData Function Record
struct Z_Construct_UFunction_UControlRigTestData_Record_Statics
{
	struct ControlRigTestData_eventRecord_Parms
	{
		UControlRig* InControlRig;
		double InRecordingDuration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "CPP_Default_InRecordingDuration", "0.000000" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InRecordingDuration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventRecord_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_InRecordingDuration = { "InRecordingDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventRecord_Parms, InRecordingDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigTestData_eventRecord_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigTestData_eventRecord_Parms), &Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_Record_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_InControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_InRecordingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_Record_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_Record_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "Record", nullptr, nullptr, Z_Construct_UFunction_UControlRigTestData_Record_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_Record_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTestData_Record_Statics::ControlRigTestData_eventRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_Record_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_Record_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTestData_Record_Statics::ControlRigTestData_eventRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTestData_Record()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_Record_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execRecord)
{
	P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InRecordingDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Record(Z_Param_InControlRig,Z_Param_InRecordingDuration);
	P_NATIVE_END;
}
// End Class UControlRigTestData Function Record

// Begin Class UControlRigTestData Function ReleaseReplay
struct Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "ReleaseReplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UControlRigTestData_ReleaseReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execReleaseReplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseReplay();
	P_NATIVE_END;
}
// End Class UControlRigTestData Function ReleaseReplay

// Begin Class UControlRigTestData Function SetupReplay
struct Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics
{
	struct ControlRigTestData_eventSetupReplay_Parms
	{
		UControlRig* InControlRig;
		bool bGroundTruth;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "CPP_Default_bGroundTruth", "true" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
	static void NewProp_bGroundTruth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroundTruth;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTestData_eventSetupReplay_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_bGroundTruth_SetBit(void* Obj)
{
	((ControlRigTestData_eventSetupReplay_Parms*)Obj)->bGroundTruth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_bGroundTruth = { "bGroundTruth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigTestData_eventSetupReplay_Parms), &Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_bGroundTruth_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigTestData_eventSetupReplay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigTestData_eventSetupReplay_Parms), &Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_InControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_bGroundTruth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "SetupReplay", nullptr, nullptr, Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::ControlRigTestData_eventSetupReplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::ControlRigTestData_eventSetupReplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTestData_SetupReplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTestData::execSetupReplay)
{
	P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
	P_GET_UBOOL(Z_Param_bGroundTruth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetupReplay(Z_Param_InControlRig,Z_Param_bGroundTruth);
	P_NATIVE_END;
}
// End Class UControlRigTestData Function SetupReplay

// Begin Class UControlRigTestData
void UControlRigTestData::StaticRegisterNativesUControlRigTestData()
{
	UClass* Class = UControlRigTestData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateNewAsset", &UControlRigTestData::execCreateNewAsset },
		{ "GetFrameIndexForTime", &UControlRigTestData::execGetFrameIndexForTime },
		{ "GetPlaybackMode", &UControlRigTestData::execGetPlaybackMode },
		{ "GetTimeRange", &UControlRigTestData::execGetTimeRange },
		{ "IsRecording", &UControlRigTestData::execIsRecording },
		{ "IsReplaying", &UControlRigTestData::execIsReplaying },
		{ "Record", &UControlRigTestData::execRecord },
		{ "ReleaseReplay", &UControlRigTestData::execReleaseReplay },
		{ "SetupReplay", &UControlRigTestData::execSetupReplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigTestData);
UClass* Z_Construct_UClass_UControlRigTestData_NoRegister()
{
	return UControlRigTestData::StaticClass();
}
struct Z_Construct_UClass_UControlRigTestData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ControlRigTestData.h" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigObjectPath_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initial_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFrames_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFrames_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesToSkip_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRigObjectPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Initial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputFrames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputFrames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToSkip_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FramesToSkip;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigTestData_CreateNewAsset, "CreateNewAsset" }, // 444085652
		{ &Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime, "GetFrameIndexForTime" }, // 1898717151
		{ &Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode, "GetPlaybackMode" }, // 3141673532
		{ &Z_Construct_UFunction_UControlRigTestData_GetTimeRange, "GetTimeRange" }, // 3544184462
		{ &Z_Construct_UFunction_UControlRigTestData_IsRecording, "IsRecording" }, // 25705229
		{ &Z_Construct_UFunction_UControlRigTestData_IsReplaying, "IsReplaying" }, // 2546067780
		{ &Z_Construct_UFunction_UControlRigTestData_Record, "Record" }, // 16269978
		{ &Z_Construct_UFunction_UControlRigTestData_ReleaseReplay, "ReleaseReplay" }, // 64975424
		{ &Z_Construct_UFunction_UControlRigTestData_SetupReplay, "SetupReplay" }, // 1044436237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigTestData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_ControlRigObjectPath = { "ControlRigObjectPath", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigTestData, ControlRigObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRigObjectPath_MetaData), NewProp_ControlRigObjectPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Initial = { "Initial", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigTestData, Initial), Z_Construct_UScriptStruct_FControlRigTestDataFrame, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initial_MetaData), NewProp_Initial_MetaData) }; // 670273687
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames_Inner = { "InputFrames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigTestDataFrame, METADATA_PARAMS(0, nullptr) }; // 670273687
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames = { "InputFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigTestData, InputFrames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFrames_MetaData), NewProp_InputFrames_MetaData) }; // 670273687
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames_Inner = { "OutputFrames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FControlRigTestDataFrame, METADATA_PARAMS(0, nullptr) }; // 670273687
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames = { "OutputFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigTestData, OutputFrames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFrames_MetaData), NewProp_OutputFrames_MetaData) }; // 670273687
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip_Inner = { "FramesToSkip", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigTestData, FramesToSkip), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesToSkip_MetaData), NewProp_FramesToSkip_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigTestData, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigTestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_ControlRigObjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Initial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigTestData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigTestData_Statics::ClassParams = {
	&UControlRigTestData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UControlRigTestData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigTestData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigTestData()
{
	if (!Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton, Z_Construct_UClass_UControlRigTestData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigTestData>()
{
	return UControlRigTestData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigTestData);
UControlRigTestData::~UControlRigTestData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigTestData)
// End Class UControlRigTestData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControlRigTestDataPlaybackMode_StaticEnum, TEXT("EControlRigTestDataPlaybackMode"), &Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2030563918U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlRigTestDataVariable::StaticStruct, Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewStructOps, TEXT("ControlRigTestDataVariable"), &Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigTestDataVariable), 716267182U) },
		{ FControlRigTestDataFrame::StaticStruct, Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewStructOps, TEXT("ControlRigTestDataFrame"), &Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigTestDataFrame), 670273687U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigTestData, UControlRigTestData::StaticClass, TEXT("UControlRigTestData"), &Z_Registration_Info_UClass_UControlRigTestData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigTestData), 3508065360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_1358716055(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
