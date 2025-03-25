// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerLoadFilter();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerType();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDataLayerLoadFilter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLayerLoadFilter;
static UEnum* EDataLayerLoadFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerLoadFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDataLayerLoadFilter"));
	}
	return Z_Registration_Info_UEnum_EDataLayerLoadFilter.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDataLayerLoadFilter>()
{
	return EDataLayerLoadFilter_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDataLayerLoadFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClientOnly.Name", "EDataLayerLoadFilter::ClientOnly" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
		{ "None.Name", "EDataLayerLoadFilter::None" },
		{ "ServerOnly.Name", "EDataLayerLoadFilter::ServerOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataLayerLoadFilter::None", (int64)EDataLayerLoadFilter::None },
		{ "EDataLayerLoadFilter::ClientOnly", (int64)EDataLayerLoadFilter::ClientOnly },
		{ "EDataLayerLoadFilter::ServerOnly", (int64)EDataLayerLoadFilter::ServerOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataLayerLoadFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDataLayerLoadFilter",
	"EDataLayerLoadFilter",
	Z_Construct_UEnum_Engine_EDataLayerLoadFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerLoadFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerLoadFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDataLayerLoadFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDataLayerLoadFilter()
{
	if (!Z_Registration_Info_UEnum_EDataLayerLoadFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLayerLoadFilter.InnerSingleton, Z_Construct_UEnum_Engine_EDataLayerLoadFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataLayerLoadFilter.InnerSingleton;
}
// End Enum EDataLayerLoadFilter

// Begin Class UDataLayerAsset Function GetDebugColor
struct Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics
{
	struct DataLayerAsset_eventGetDebugColor_Parms
	{
		FColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerAsset_eventGetDebugColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerAsset, nullptr, "GetDebugColor", nullptr, nullptr, Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::DataLayerAsset_eventGetDebugColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::DataLayerAsset_eventGetDebugColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerAsset_GetDebugColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerAsset_GetDebugColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerAsset::execGetDebugColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FColor*)Z_Param__Result=P_THIS->GetDebugColor();
	P_NATIVE_END;
}
// End Class UDataLayerAsset Function GetDebugColor

// Begin Class UDataLayerAsset Function GetType
struct Z_Construct_UFunction_UDataLayerAsset_GetType_Statics
{
	struct DataLayerAsset_eventGetType_Parms
	{
		EDataLayerType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayerAsset_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerType, METADATA_PARAMS(0, nullptr) }; // 403574825
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerAsset, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::DataLayerAsset_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::DataLayerAsset_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerAsset_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerAsset_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerAsset::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerType*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// End Class UDataLayerAsset Function GetType

// Begin Class UDataLayerAsset Function IsClientOnly
struct Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics
{
	struct DataLayerAsset_eventIsClientOnly_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerAsset_eventIsClientOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerAsset_eventIsClientOnly_Parms), &Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerAsset, nullptr, "IsClientOnly", nullptr, nullptr, Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::DataLayerAsset_eventIsClientOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::DataLayerAsset_eventIsClientOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerAsset_IsClientOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerAsset_IsClientOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerAsset::execIsClientOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClientOnly();
	P_NATIVE_END;
}
// End Class UDataLayerAsset Function IsClientOnly

// Begin Class UDataLayerAsset Function IsRuntime
struct Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics
{
	struct DataLayerAsset_eventIsRuntime_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerAsset_eventIsRuntime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerAsset_eventIsRuntime_Parms), &Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerAsset, nullptr, "IsRuntime", nullptr, nullptr, Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::DataLayerAsset_eventIsRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::DataLayerAsset_eventIsRuntime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerAsset_IsRuntime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerAsset_IsRuntime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerAsset::execIsRuntime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRuntime();
	P_NATIVE_END;
}
// End Class UDataLayerAsset Function IsRuntime

// Begin Class UDataLayerAsset Function IsServerOnly
struct Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics
{
	struct DataLayerAsset_eventIsServerOnly_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayerAsset_eventIsServerOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayerAsset_eventIsServerOnly_Parms), &Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerAsset, nullptr, "IsServerOnly", nullptr, nullptr, Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::DataLayerAsset_eventIsServerOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::DataLayerAsset_eventIsServerOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataLayerAsset_IsServerOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerAsset_IsServerOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataLayerAsset::execIsServerOnly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsServerOnly();
	P_NATIVE_END;
}
// End Class UDataLayerAsset Function IsServerOnly

// Begin Class UDataLayerAsset
void UDataLayerAsset::StaticRegisterNativesUDataLayerAsset()
{
	UClass* Class = UDataLayerAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDebugColor", &UDataLayerAsset::execGetDebugColor },
		{ "GetType", &UDataLayerAsset::execGetType },
		{ "IsClientOnly", &UDataLayerAsset::execIsClientOnly },
		{ "IsRuntime", &UDataLayerAsset::execIsRuntime },
		{ "IsServerOnly", &UDataLayerAsset::execIsServerOnly },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerAsset);
UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister()
{
	return UDataLayerAsset::StaticClass();
}
struct Z_Construct_UClass_UDataLayerAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerAsset.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerType_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "/** Whether the Data Layer affects actor runtime loading */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
		{ "ToolTip", "Whether the Data Layer affects actor runtime loading" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsActorFilters_MetaData[] = {
		{ "Category", "Actor Filter" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadFilter_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataLayerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataLayerType;
	static void NewProp_bSupportsActorFilters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsActorFilters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayerAsset_GetDebugColor, "GetDebugColor" }, // 2193688595
		{ &Z_Construct_UFunction_UDataLayerAsset_GetType, "GetType" }, // 2088682852
		{ &Z_Construct_UFunction_UDataLayerAsset_IsClientOnly, "IsClientOnly" }, // 2837080640
		{ &Z_Construct_UFunction_UDataLayerAsset_IsRuntime, "IsRuntime" }, // 1132473244
		{ &Z_Construct_UFunction_UDataLayerAsset_IsServerOnly, "IsServerOnly" }, // 3503360382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType = { "DataLayerType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerAsset, DataLayerType), Z_Construct_UEnum_Engine_EDataLayerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerType_MetaData), NewProp_DataLayerType_MetaData) }; // 403574825
void Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_bSupportsActorFilters_SetBit(void* Obj)
{
	((UDataLayerAsset*)Obj)->bSupportsActorFilters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_bSupportsActorFilters = { "bSupportsActorFilters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataLayerAsset), &Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_bSupportsActorFilters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsActorFilters_MetaData), NewProp_bSupportsActorFilters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerAsset, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_LoadFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_LoadFilter = { "LoadFilter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataLayerAsset, LoadFilter), Z_Construct_UEnum_Engine_EDataLayerLoadFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadFilter_MetaData), NewProp_LoadFilter_MetaData) }; // 1059572098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DataLayerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_bSupportsActorFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_LoadFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerAsset_Statics::NewProp_LoadFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataLayerAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerAsset_Statics::ClassParams = {
	&UDataLayerAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataLayerAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerAsset_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataLayerAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataLayerAsset()
{
	if (!Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton, Z_Construct_UClass_UDataLayerAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataLayerAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataLayerAsset>()
{
	return UDataLayerAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerAsset);
UDataLayerAsset::~UDataLayerAsset() {}
// End Class UDataLayerAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataLayerLoadFilter_StaticEnum, TEXT("EDataLayerLoadFilter"), &Z_Registration_Info_UEnum_EDataLayerLoadFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1059572098U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerAsset, UDataLayerAsset::StaticClass, TEXT("UDataLayerAsset"), &Z_Registration_Info_UClass_UDataLayerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerAsset), 2833924703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_2805688110(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
