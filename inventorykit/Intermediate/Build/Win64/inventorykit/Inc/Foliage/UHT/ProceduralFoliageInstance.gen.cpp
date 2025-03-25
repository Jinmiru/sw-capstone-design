// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/ProceduralFoliageInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_ESimulationOverlap();
FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_ESimulationQuery();
FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Enum ESimulationOverlap
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationOverlap;
static UEnum* ESimulationOverlap_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationOverlap, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("ESimulationOverlap"));
	}
	return Z_Registration_Info_UEnum_ESimulationOverlap.OuterSingleton;
}
template<> FOLIAGE_API UEnum* StaticEnum<ESimulationOverlap::Type>()
{
	return ESimulationOverlap_StaticEnum();
}
struct Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CollisionOverlap.Comment", "/*Instances overlap with collision*/" },
		{ "CollisionOverlap.Name", "ESimulationOverlap::CollisionOverlap" },
		{ "CollisionOverlap.ToolTip", "Instances overlap with collision" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
		{ "None.Comment", "/*No overlap*/" },
		{ "None.Name", "ESimulationOverlap::None" },
		{ "None.ToolTip", "No overlap" },
		{ "ShadeOverlap.Comment", "/*Instances overlap with shade*/" },
		{ "ShadeOverlap.Name", "ESimulationOverlap::ShadeOverlap" },
		{ "ShadeOverlap.ToolTip", "Instances overlap with shade" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimulationOverlap::CollisionOverlap", (int64)ESimulationOverlap::CollisionOverlap },
		{ "ESimulationOverlap::ShadeOverlap", (int64)ESimulationOverlap::ShadeOverlap },
		{ "ESimulationOverlap::None", (int64)ESimulationOverlap::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	"ESimulationOverlap",
	"ESimulationOverlap::Type",
	Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Foliage_ESimulationOverlap()
{
	if (!Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton, Z_Construct_UEnum_Foliage_ESimulationOverlap_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimulationOverlap.InnerSingleton;
}
// End Enum ESimulationOverlap

// Begin Enum ESimulationQuery
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationQuery;
static UEnum* ESimulationQuery_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationQuery, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("ESimulationQuery"));
	}
	return Z_Registration_Info_UEnum_ESimulationQuery.OuterSingleton;
}
template<> FOLIAGE_API UEnum* StaticEnum<ESimulationQuery::Type>()
{
	return ESimulationQuery_StaticEnum();
}
struct Z_Construct_UEnum_Foliage_ESimulationQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnyOverlap.Comment", "/*any overlap*/" },
		{ "AnyOverlap.Name", "ESimulationQuery::AnyOverlap" },
		{ "AnyOverlap.ToolTip", "any overlap" },
		{ "BlueprintType", "true" },
		{ "CollisionOverlap.Comment", "/*Instances overlap with collision*/" },
		{ "CollisionOverlap.Name", "ESimulationQuery::CollisionOverlap" },
		{ "CollisionOverlap.ToolTip", "Instances overlap with collision" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ESimulationQuery::None" },
		{ "ShadeOverlap.Comment", "/*Instances overlap with shade*/" },
		{ "ShadeOverlap.Name", "ESimulationQuery::ShadeOverlap" },
		{ "ShadeOverlap.ToolTip", "Instances overlap with shade" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimulationQuery::None", (int64)ESimulationQuery::None },
		{ "ESimulationQuery::CollisionOverlap", (int64)ESimulationQuery::CollisionOverlap },
		{ "ESimulationQuery::ShadeOverlap", (int64)ESimulationQuery::ShadeOverlap },
		{ "ESimulationQuery::AnyOverlap", (int64)ESimulationQuery::AnyOverlap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	"ESimulationQuery",
	"ESimulationQuery::Type",
	Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Foliage_ESimulationQuery()
{
	if (!Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton, Z_Construct_UEnum_Foliage_ESimulationQuery_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimulationQuery.InnerSingleton;
}
// End Enum ESimulationQuery

// Begin ScriptStruct FProceduralFoliageInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance;
class UScriptStruct* FProceduralFoliageInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralFoliageInstance, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("ProceduralFoliageInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.OuterSingleton;
}
template<> FOLIAGE_API UScriptStruct* StaticStruct<FProceduralFoliageInstance>()
{
	return FProceduralFoliageInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Age;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralFoliageInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralFoliageInstance, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralFoliageInstance, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralFoliageInstance, Age), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Age_MetaData), NewProp_Age_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralFoliageInstance, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralFoliageInstance, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralFoliageInstance, Type), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	&NewStructOps,
	"ProceduralFoliageInstance",
	Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers),
	sizeof(FProceduralFoliageInstance),
	alignof(FProceduralFoliageInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.InnerSingleton, Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance.InnerSingleton;
}
// End ScriptStruct FProceduralFoliageInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESimulationOverlap_StaticEnum, TEXT("ESimulationOverlap"), &Z_Registration_Info_UEnum_ESimulationOverlap, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3566866695U) },
		{ ESimulationQuery_StaticEnum, TEXT("ESimulationQuery"), &Z_Registration_Info_UEnum_ESimulationQuery, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444982422U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralFoliageInstance::StaticStruct, Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewStructOps, TEXT("ProceduralFoliageInstance"), &Z_Registration_Info_UScriptStruct_ProceduralFoliageInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralFoliageInstance), 781241176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_259318078(TEXT("/Script/Foliage"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
