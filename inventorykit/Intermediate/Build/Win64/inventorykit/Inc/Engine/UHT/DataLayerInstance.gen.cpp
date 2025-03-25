// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerType();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDataLayerRuntimeState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLayerRuntimeState;
static UEnum* EDataLayerRuntimeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerRuntimeState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDataLayerRuntimeState"));
	}
	return Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDataLayerRuntimeState>()
{
	return EDataLayerRuntimeState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Activated.Comment", "// Activated (meaning loaded and visible)\n" },
		{ "Activated.Name", "EDataLayerRuntimeState::Activated" },
		{ "Activated.ToolTip", "Activated (meaning loaded and visible)" },
		{ "BlueprintType", "true" },
		{ "Loaded.Comment", "// Loaded (meaning loaded but not visible)\n" },
		{ "Loaded.Name", "EDataLayerRuntimeState::Loaded" },
		{ "Loaded.ToolTip", "Loaded (meaning loaded but not visible)" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "Unloaded.Comment", "// Unloaded\n" },
		{ "Unloaded.Name", "EDataLayerRuntimeState::Unloaded" },
		{ "Unloaded.ToolTip", "Unloaded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataLayerRuntimeState::Unloaded", (int64)EDataLayerRuntimeState::Unloaded },
		{ "EDataLayerRuntimeState::Loaded", (int64)EDataLayerRuntimeState::Loaded },
		{ "EDataLayerRuntimeState::Activated", (int64)EDataLayerRuntimeState::Activated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDataLayerRuntimeState",
	"EDataLayerRuntimeState",
	Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState()
{
	if (!Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton, Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton;
}
// End Enum EDataLayerRuntimeState

// Begin Class UDataLayerInstance Function GetAsset
struct Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics
{
	struct DataLayerInstance_eventGetAsset_Parms
	{
		const UDataLayerAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerInstance_eventGetAsset_Parms, ReturnValue), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetAsset", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::DataLayerInstance_eventGetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::DataLayerInstance_eventGetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_GetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execGetAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UDataLayerAsset**)Z_Param__Result=P_THIS->GetAsset();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function GetAsset

// Begin Class UDataLayerInstance Function GetDataLayerFullName
struct Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics
{
	struct DataLayerInstance_eventGetDataLayerFullName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerInstance_eventGetDataLayerFullName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetDataLayerFullName", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::DataLayerInstance_eventGetDataLayerFullName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::DataLayerInstance_eventGetDataLayerFullName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execGetDataLayerFullName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDataLayerFullName();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function GetDataLayerFullName

// Begin Class UDataLayerInstance Function GetDataLayerShortName
struct Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics
{
	struct DataLayerInstance_eventGetDataLayerShortName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerInstance_eventGetDataLayerShortName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetDataLayerShortName", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::DataLayerInstance_eventGetDataLayerShortName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::DataLayerInstance_eventGetDataLayerShortName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execGetDataLayerShortName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDataLayerShortName();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function GetDataLayerShortName

// Begin Class UDataLayerInstance Function GetDebugColor
struct Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics
{
	struct DataLayerInstance_eventGetDebugColor_Parms
	{
		FColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerInstance_eventGetDebugColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetDebugColor", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::DataLayerInstance_eventGetDebugColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::DataLayerInstance_eventGetDebugColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_GetDebugColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetDebugColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execGetDebugColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FColor*)Z_Param__Result=P_THIS->GetDebugColor();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function GetDebugColor

// Begin Class UDataLayerInstance Function GetInitialRuntimeState
struct Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics
{
	struct DataLayerInstance_eventGetInitialRuntimeState_Parms
	{
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerInstance_eventGetInitialRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetInitialRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::DataLayerInstance_eventGetInitialRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::DataLayerInstance_eventGetInitialRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execGetInitialRuntimeState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetInitialRuntimeState();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function GetInitialRuntimeState

// Begin Class UDataLayerInstance Function GetType
struct Z_Construct_UFunction_UDataLayerInstance_GetType_Statics
{
	struct DataLayerInstance_eventGetType_Parms
	{
		EDataLayerType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerInstance_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerType, METADATA_PARAMS(0, nullptr) }; // 403574825
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::DataLayerInstance_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::DataLayerInstance_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerType*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function GetType

// Begin Class UDataLayerInstance Function IsClientOnly
struct Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics
{
	struct DataLayerInstance_eventIsClientOnly_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerInstance_eventIsClientOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerInstance_eventIsClientOnly_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsClientOnly", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::DataLayerInstance_eventIsClientOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::DataLayerInstance_eventIsClientOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_IsClientOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsClientOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execIsClientOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClientOnly();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function IsClientOnly

// Begin Class UDataLayerInstance Function IsEffectiveVisible
struct Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics
{
	struct DataLayerInstance_eventIsEffectiveVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerInstance_eventIsEffectiveVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerInstance_eventIsEffectiveVisible_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsEffectiveVisible", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::DataLayerInstance_eventIsEffectiveVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::DataLayerInstance_eventIsEffectiveVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execIsEffectiveVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEffectiveVisible();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function IsEffectiveVisible

// Begin Class UDataLayerInstance Function IsInitiallyVisible
struct Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics
{
	struct DataLayerInstance_eventIsInitiallyVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerInstance_eventIsInitiallyVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerInstance_eventIsInitiallyVisible_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsInitiallyVisible", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::DataLayerInstance_eventIsInitiallyVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::DataLayerInstance_eventIsInitiallyVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execIsInitiallyVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitiallyVisible();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function IsInitiallyVisible

// Begin Class UDataLayerInstance Function IsRuntime
struct Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics
{
	struct DataLayerInstance_eventIsRuntime_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerInstance_eventIsRuntime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerInstance_eventIsRuntime_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsRuntime", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::DataLayerInstance_eventIsRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::DataLayerInstance_eventIsRuntime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_IsRuntime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsRuntime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execIsRuntime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRuntime();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function IsRuntime

// Begin Class UDataLayerInstance Function IsServerOnly
struct Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics
{
	struct DataLayerInstance_eventIsServerOnly_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerInstance_eventIsServerOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerInstance_eventIsServerOnly_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsServerOnly", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::DataLayerInstance_eventIsServerOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::DataLayerInstance_eventIsServerOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_IsServerOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsServerOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execIsServerOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsServerOnly();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function IsServerOnly

// Begin Class UDataLayerInstance Function IsVisible
struct Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics
{
	struct DataLayerInstance_eventIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerInstance_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerInstance_eventIsVisible_Parms), &Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerInstance, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::DataLayerInstance_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::DataLayerInstance_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerInstance_IsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerInstance_IsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerInstance::execIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible();
	P_NATIVE_END;
}
// End Class UDataLayerInstance Function IsVisible

// Begin Class UDataLayerInstance
void UDataLayerInstance::StaticRegisterNativesUDataLayerInstance()
{
	UClass* Class = UDataLayerInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAsset", &UDataLayerInstance::execGetAsset },
		{ "GetDataLayerFullName", &UDataLayerInstance::execGetDataLayerFullName },
		{ "GetDataLayerShortName", &UDataLayerInstance::execGetDataLayerShortName },
		{ "GetDebugColor", &UDataLayerInstance::execGetDebugColor },
		{ "GetInitialRuntimeState", &UDataLayerInstance::execGetInitialRuntimeState },
		{ "GetType", &UDataLayerInstance::execGetType },
		{ "IsClientOnly", &UDataLayerInstance::execIsClientOnly },
		{ "IsEffectiveVisible", &UDataLayerInstance::execIsEffectiveVisible },
		{ "IsInitiallyVisible", &UDataLayerInstance::execIsInitiallyVisible },
		{ "IsRuntime", &UDataLayerInstance::execIsRuntime },
		{ "IsServerOnly", &UDataLayerInstance::execIsServerOnly },
		{ "IsVisible", &UDataLayerInstance::execIsVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerInstance);
UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister()
{
	return UDataLayerInstance::StaticClass();
}
struct Z_Construct_UClass_UDataLayerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Data Layer|Advanced" },
		{ "AutoExpandCategories", "Data Layer|Editor Data Layer|Advanced|Runtime" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** Whether actors associated with the DataLayer are visible in the viewport */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Whether actors associated with the DataLayer are visible in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyVisible_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyLoadedInEditor_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user */" },
		{ "DisplayName", "Is Initially Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditor_MetaData[] = {
		{ "Comment", "/** Wheter the data layer is loaded in editor (user setting) */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Wheter the data layer is loaded in editor (user setting)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData[] = {
		{ "Comment", "/** Whether this data layer editor visibility was changed by a user operation */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Whether this data layer editor visibility was changed by a user operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
		{ "Comment", "/** Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRuntimeState_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Initial runtime state of this data layer instance. Only supported if it's runtime and not client/server only. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
		{ "ToolTip", "Initial runtime state of this data layer instance. Only supported if it's runtime and not client/server only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerInstance.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bIsInitiallyVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyVisible;
	static void NewProp_bIsInitiallyLoadedInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyLoadedInEditor;
	static void NewProp_bIsLoadedInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditor;
	static void NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditorChangedByUserOperation;
	static void NewProp_bIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialRuntimeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialRuntimeState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayerInstance_GetAsset, "GetAsset" }, // 3217845596
		{ &Z_Construct_UFunction_UDataLayerInstance_GetDataLayerFullName, "GetDataLayerFullName" }, // 459250087
		{ &Z_Construct_UFunction_UDataLayerInstance_GetDataLayerShortName, "GetDataLayerShortName" }, // 1088405811
		{ &Z_Construct_UFunction_UDataLayerInstance_GetDebugColor, "GetDebugColor" }, // 4105765628
		{ &Z_Construct_UFunction_UDataLayerInstance_GetInitialRuntimeState, "GetInitialRuntimeState" }, // 3634513923
		{ &Z_Construct_UFunction_UDataLayerInstance_GetType, "GetType" }, // 2029522050
		{ &Z_Construct_UFunction_UDataLayerInstance_IsClientOnly, "IsClientOnly" }, // 3674836118
		{ &Z_Construct_UFunction_UDataLayerInstance_IsEffectiveVisible, "IsEffectiveVisible" }, // 2153382342
		{ &Z_Construct_UFunction_UDataLayerInstance_IsInitiallyVisible, "IsInitiallyVisible" }, // 117130857
		{ &Z_Construct_UFunction_UDataLayerInstance_IsRuntime, "IsRuntime" }, // 2328799474
		{ &Z_Construct_UFunction_UDataLayerInstance_IsServerOnly, "IsServerOnly" }, // 2939808813
		{ &Z_Construct_UFunction_UDataLayerInstance_IsVisible, "IsVisible" }, // 3647385620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((UDataLayerInstance*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible_SetBit(void* Obj)
{
	((UDataLayerInstance*)Obj)->bIsInitiallyVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible = { "bIsInitiallyVisible", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitiallyVisible_MetaData), NewProp_bIsInitiallyVisible_MetaData) };
void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor_SetBit(void* Obj)
{
	((UDataLayerInstance*)Obj)->bIsInitiallyLoadedInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor = { "bIsInitiallyLoadedInEditor", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitiallyLoadedInEditor_MetaData), NewProp_bIsInitiallyLoadedInEditor_MetaData) };
void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor_SetBit(void* Obj)
{
	((UDataLayerInstance*)Obj)->bIsLoadedInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor = { "bIsLoadedInEditor", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadedInEditor_MetaData), NewProp_bIsLoadedInEditor_MetaData) };
void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit(void* Obj)
{
	((UDataLayerInstance*)Obj)->bIsLoadedInEditorChangedByUserOperation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation = { "bIsLoadedInEditorChangedByUserOperation", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData), NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData) };
void Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked_SetBit(void* Obj)
{
	((UDataLayerInstance*)Obj)->bIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDataLayerInstance), &Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocked_MetaData), NewProp_bIsLocked_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState = { "InitialRuntimeState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerInstance, InitialRuntimeState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRuntimeState_MetaData), NewProp_InitialRuntimeState_MetaData) }; // 10031493
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerInstance, Parent), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerInstance, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsInitiallyLoadedInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_bIsLocked,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_InitialRuntimeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerInstance_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataLayerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerInstance_Statics::ClassParams = {
	&UDataLayerInstance::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataLayerInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::PropPointers),
	0,
	0x000804A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLayerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataLayerInstance()
{
	if (!Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton, Z_Construct_UClass_UDataLayerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLayerInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataLayerInstance>()
{
	return UDataLayerInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerInstance);
UDataLayerInstance::~UDataLayerInstance() {}
// End Class UDataLayerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataLayerRuntimeState_StaticEnum, TEXT("EDataLayerRuntimeState"), &Z_Registration_Info_UEnum_EDataLayerRuntimeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 10031493U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerInstance, UDataLayerInstance::StaticClass, TEXT("UDataLayerInstance"), &Z_Registration_Info_UClass_UDataLayerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerInstance), 2136429342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_1995459418(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
