// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/LODSyncComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODSyncComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_ULODSyncComponent();
ENGINE_API UClass* Z_Construct_UClass_ULODSyncComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESyncOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSync();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLODMappingData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FLODMappingData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LODMappingData;
class UScriptStruct* FLODMappingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LODMappingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LODMappingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODMappingData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LODMappingData"));
	}
	return Z_Registration_Info_UScriptStruct_LODMappingData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLODMappingData>()
{
	return FLODMappingData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLODMappingData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mapping_MetaData[] = {
		{ "Category", "FLODMappingData" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseMapping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mapping_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Mapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InverseMapping_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InverseMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODMappingData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_Inner = { "Mapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping = { "Mapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLODMappingData, Mapping), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mapping_MetaData), NewProp_Mapping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_Inner = { "InverseMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping = { "InverseMapping", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLODMappingData, InverseMapping), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseMapping_MetaData), NewProp_InverseMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_Mapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODMappingData_Statics::NewProp_InverseMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODMappingData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LODMappingData",
	Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::PropPointers),
	sizeof(FLODMappingData),
	alignof(FLODMappingData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODMappingData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLODMappingData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLODMappingData()
{
	if (!Z_Registration_Info_UScriptStruct_LODMappingData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LODMappingData.InnerSingleton, Z_Construct_UScriptStruct_FLODMappingData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LODMappingData.InnerSingleton;
}
// End ScriptStruct FLODMappingData

// Begin Enum ESyncOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESyncOption;
static UEnum* ESyncOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESyncOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESyncOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESyncOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESyncOption"));
	}
	return Z_Registration_Info_UEnum_ESyncOption.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESyncOption>()
{
	return ESyncOption_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESyncOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/** It is disabled, it doesn't do anything */" },
		{ "Disabled.Name", "ESyncOption::Disabled" },
		{ "Disabled.ToolTip", "It is disabled, it doesn't do anything" },
		{ "Drive.Comment", "/** Drive LOD from this component. It will contribute to the change of LOD */" },
		{ "Drive.Name", "ESyncOption::Drive" },
		{ "Drive.ToolTip", "Drive LOD from this component. It will contribute to the change of LOD" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "Passive.Comment", "/** It follows what's currently driven by other components. It doesn't contribute to the change of LOD*/" },
		{ "Passive.Name", "ESyncOption::Passive" },
		{ "Passive.ToolTip", "It follows what's currently driven by other components. It doesn't contribute to the change of LOD" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESyncOption::Drive", (int64)ESyncOption::Drive },
		{ "ESyncOption::Passive", (int64)ESyncOption::Passive },
		{ "ESyncOption::Disabled", (int64)ESyncOption::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESyncOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESyncOption",
	"ESyncOption",
	Z_Construct_UEnum_Engine_ESyncOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESyncOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESyncOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESyncOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESyncOption()
{
	if (!Z_Registration_Info_UEnum_ESyncOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESyncOption.InnerSingleton, Z_Construct_UEnum_Engine_ESyncOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESyncOption.InnerSingleton;
}
// End Enum ESyncOption

// Begin ScriptStruct FComponentSync
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSync;
class UScriptStruct* FComponentSync::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSync.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSync.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSync, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSync"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSync.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentSync>()
{
	return FComponentSync::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComponentSync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "FComponentSync" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncOption_MetaData[] = {
		{ "Category", "FComponentSync" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SyncOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SyncOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSync>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentSync, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption = { "SyncOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentSync, SyncOption), Z_Construct_UEnum_Engine_ESyncOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncOption_MetaData), NewProp_SyncOption_MetaData) }; // 3410064885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSync_Statics::NewProp_SyncOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSync_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ComponentSync",
	Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::PropPointers),
	sizeof(FComponentSync),
	alignof(FComponentSync),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSync_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentSync_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentSync()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSync.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSync.InnerSingleton, Z_Construct_UScriptStruct_FComponentSync_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComponentSync.InnerSingleton;
}
// End ScriptStruct FComponentSync

// Begin Class ULODSyncComponent Function GetLODSyncDebugText
struct Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics
{
	struct LODSyncComponent_eventGetLODSyncDebugText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** Returns a string detailing  */" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Returns a string detailing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LODSyncComponent_eventGetLODSyncDebugText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULODSyncComponent, nullptr, "GetLODSyncDebugText", nullptr, nullptr, Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::LODSyncComponent_eventGetLODSyncDebugText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::LODSyncComponent_eventGetLODSyncDebugText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULODSyncComponent::execGetLODSyncDebugText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetLODSyncDebugText();
	P_NATIVE_END;
}
// End Class ULODSyncComponent Function GetLODSyncDebugText

// Begin Class ULODSyncComponent
void ULODSyncComponent::StaticRegisterNativesULODSyncComponent()
{
	UClass* Class = ULODSyncComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLODSyncDebugText", &ULODSyncComponent::execGetLODSyncDebugText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULODSyncComponent);
UClass* Z_Construct_UClass_ULODSyncComponent_NoRegister()
{
	return ULODSyncComponent::StaticClass();
}
struct Z_Construct_UClass_ULODSyncComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Component" },
		{ "Comment", "/**\n * Implement an Actor component for LOD Sync of different components\n *\n * This is a component that allows multiple different components to sync together of their LOD\n *\n * This allows to find the highest LOD of all the parts, and sync to that LOD\n */" },
		{ "IncludePath", "Components/LODSyncComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Implement an Actor component for LOD Sync of different components\n\nThis is a component that allows multiple different components to sync together of their LOD\n\nThis allows to find the highest LOD of all the parts, and sync to that LOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLODs_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// if -1, it's default and it will calculate the max number of LODs from all sub components\n// if not, it is a number of LODs (not the max index of LODs)\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "if -1, it's default and it will calculate the max number of LODs from all sub components\nif not, it is a number of LODs (not the max index of LODs)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// if -1, it's automatically switching\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "if -1, it's automatically switching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// Minimum LOD to use when syncing components\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Minimum LOD to use when syncing components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToSync_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** \n\x09 *\x09""Array of components whose LOD may drive or be driven by this component.\n\x09 *  Components that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\n\x09 *  visible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "Array of components whose LOD may drive or be driven by this component.\nComponents that are flagged as 'Drive' are treated as being in priority order, with the last component having highest priority. The highest priority\nvisible component will set the LOD for all other components. If no components are visible, then the highest priority non-visible component will set LOD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLODMapping_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "// by default, the mapping will be one to one\n// but if you want custom, add here. \n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "by default, the mapping will be one to one\nbut if you want custom, add here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumLODs_MetaData[] = {
		{ "Comment", "// num of LODs\n" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "num of LODs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriveComponents_MetaData[] = {
		{ "Comment", "// component that drives the LOD\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "component that drives the LOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubComponents_MetaData[] = {
		{ "Comment", "// all the components that ticks\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/LODSyncComponent.h" },
		{ "ToolTip", "all the components that ticks" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLOD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentsToSync_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToSync;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLODMapping_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomLODMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CustomLODMapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumLODs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DriveComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DriveComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULODSyncComponent_GetLODSyncDebugText, "GetLODSyncDebugText" }, // 3299060624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULODSyncComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, NumLODs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLODs_MetaData), NewProp_NumLODs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, ForcedLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedLOD_MetaData), NewProp_ForcedLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, MinLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLOD_MetaData), NewProp_MinLOD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_Inner = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComponentSync, METADATA_PARAMS(0, nullptr) }; // 3834391981
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync = { "ComponentsToSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, ComponentsToSync), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentsToSync_MetaData), NewProp_ComponentsToSync_MetaData) }; // 3834391981
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_ValueProp = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLODMappingData, METADATA_PARAMS(0, nullptr) }; // 2466313553
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_Key_KeyProp = { "CustomLODMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping = { "CustomLODMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, CustomLODMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLODMapping_MetaData), NewProp_CustomLODMapping_MetaData) }; // 2466313553
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD = { "CurrentLOD", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, CurrentLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLOD_MetaData), NewProp_CurrentLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs = { "CurrentNumLODs", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, CurrentNumLODs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNumLODs_MetaData), NewProp_CurrentNumLODs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_Inner = { "DriveComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents = { "DriveComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, DriveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriveComponents_MetaData), NewProp_DriveComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_Inner = { "SubComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents = { "SubComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULODSyncComponent, SubComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubComponents_MetaData), NewProp_SubComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_NumLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ForcedLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_MinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_ComponentsToSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CustomLODMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_CurrentNumLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_DriveComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULODSyncComponent_Statics::NewProp_SubComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULODSyncComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULODSyncComponent_Statics::ClassParams = {
	&ULODSyncComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULODSyncComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULODSyncComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULODSyncComponent()
{
	if (!Z_Registration_Info_UClass_ULODSyncComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULODSyncComponent.OuterSingleton, Z_Construct_UClass_ULODSyncComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULODSyncComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULODSyncComponent>()
{
	return ULODSyncComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULODSyncComponent);
ULODSyncComponent::~ULODSyncComponent() {}
// End Class ULODSyncComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESyncOption_StaticEnum, TEXT("ESyncOption"), &Z_Registration_Info_UEnum_ESyncOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3410064885U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLODMappingData::StaticStruct, Z_Construct_UScriptStruct_FLODMappingData_Statics::NewStructOps, TEXT("LODMappingData"), &Z_Registration_Info_UScriptStruct_LODMappingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLODMappingData), 2466313553U) },
		{ FComponentSync::StaticStruct, Z_Construct_UScriptStruct_FComponentSync_Statics::NewStructOps, TEXT("ComponentSync"), &Z_Registration_Info_UScriptStruct_ComponentSync, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSync), 3834391981U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULODSyncComponent, ULODSyncComponent::StaticClass, TEXT("ULODSyncComponent"), &Z_Registration_Info_UClass_ULODSyncComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULODSyncComponent), 236524027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_2659035752(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LODSyncComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
