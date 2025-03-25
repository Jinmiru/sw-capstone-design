// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosVisualDebugger/Public/DataWrappers/ChaosVDQueryDataWrappers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDQueryDataWrappers() {}

// Begin Cross Module References
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDQueryFastData();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDQueryHitData();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDQueryVisitStep();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDWrapperDataBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ChaosVDRuntime();
// End Cross Module References

// Begin Enum EChaosVDSceneQueryType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDSceneQueryType;
static UEnum* EChaosVDSceneQueryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDSceneQueryType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDSceneQueryType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDSceneQueryType>()
{
	return EChaosVDSceneQueryType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EChaosVDSceneQueryType::Invalid" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "Overlap.Name", "EChaosVDSceneQueryType::Overlap" },
		{ "RayCast.Name", "EChaosVDSceneQueryType::RayCast" },
		{ "Sweep.Name", "EChaosVDSceneQueryType::Sweep" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDSceneQueryType::Invalid", (int64)EChaosVDSceneQueryType::Invalid },
		{ "EChaosVDSceneQueryType::Sweep", (int64)EChaosVDSceneQueryType::Sweep },
		{ "EChaosVDSceneQueryType::Overlap", (int64)EChaosVDSceneQueryType::Overlap },
		{ "EChaosVDSceneQueryType::RayCast", (int64)EChaosVDSceneQueryType::RayCast },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDSceneQueryType",
	"EChaosVDSceneQueryType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDSceneQueryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDSceneQueryType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDSceneQueryType.InnerSingleton;
}
// End Enum EChaosVDSceneQueryType

// Begin Enum EChaosVDSceneQueryMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDSceneQueryMode;
static UEnum* EChaosVDSceneQueryMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDSceneQueryMode"));
	}
	return Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDSceneQueryMode>()
{
	return EChaosVDSceneQueryMode_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EChaosVDSceneQueryMode::Invalid" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "Multi.Name", "EChaosVDSceneQueryMode::Multi" },
		{ "Single.Name", "EChaosVDSceneQueryMode::Single" },
		{ "Test.Name", "EChaosVDSceneQueryMode::Test" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDSceneQueryMode::Invalid", (int64)EChaosVDSceneQueryMode::Invalid },
		{ "EChaosVDSceneQueryMode::Single", (int64)EChaosVDSceneQueryMode::Single },
		{ "EChaosVDSceneQueryMode::Multi", (int64)EChaosVDSceneQueryMode::Multi },
		{ "EChaosVDSceneQueryMode::Test", (int64)EChaosVDSceneQueryMode::Test },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDSceneQueryMode",
	"EChaosVDSceneQueryMode",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode()
{
	if (!Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDSceneQueryMode.InnerSingleton;
}
// End Enum EChaosVDSceneQueryMode

// Begin ScriptStruct FChaosVDCollisionResponseParams
static_assert(std::is_polymorphic<FChaosVDCollisionResponseParams>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDCollisionResponseParams cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCollisionResponseParams;
class UScriptStruct* FChaosVDCollisionResponseParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionResponseParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCollisionResponseParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCollisionResponseParams"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionResponseParams.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCollisionResponseParams>()
{
	return FChaosVDCollisionResponseParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagsPerChannel_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlagsPerChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FlagsPerChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCollisionResponseParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::NewProp_FlagsPerChannel_Inner = { "FlagsPerChannel", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::NewProp_FlagsPerChannel = { "FlagsPerChannel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionResponseParams, FlagsPerChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagsPerChannel_MetaData), NewProp_FlagsPerChannel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::NewProp_FlagsPerChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::NewProp_FlagsPerChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDCollisionResponseParams",
	Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::PropPointers),
	sizeof(FChaosVDCollisionResponseParams),
	alignof(FChaosVDCollisionResponseParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionResponseParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCollisionResponseParams.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionResponseParams.InnerSingleton;
}
// End ScriptStruct FChaosVDCollisionResponseParams

// Begin ScriptStruct FChaosVDCollisionObjectQueryParams
static_assert(std::is_polymorphic<FChaosVDCollisionObjectQueryParams>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDCollisionObjectQueryParams cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCollisionObjectQueryParams;
class UScriptStruct* FChaosVDCollisionObjectQueryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionObjectQueryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCollisionObjectQueryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCollisionObjectQueryParams"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionObjectQueryParams.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCollisionObjectQueryParams>()
{
	return FChaosVDCollisionObjectQueryParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypesToQuery_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreMask_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypesToQuery;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IgnoreMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCollisionObjectQueryParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::NewProp_ObjectTypesToQuery = { "ObjectTypesToQuery", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionObjectQueryParams, ObjectTypesToQuery), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypesToQuery_MetaData), NewProp_ObjectTypesToQuery_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::NewProp_IgnoreMask = { "IgnoreMask", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionObjectQueryParams, IgnoreMask), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreMask_MetaData), NewProp_IgnoreMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::NewProp_ObjectTypesToQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::NewProp_IgnoreMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDCollisionObjectQueryParams",
	Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::PropPointers),
	sizeof(FChaosVDCollisionObjectQueryParams),
	alignof(FChaosVDCollisionObjectQueryParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionObjectQueryParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCollisionObjectQueryParams.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionObjectQueryParams.InnerSingleton;
}
// End ScriptStruct FChaosVDCollisionObjectQueryParams

// Begin Enum EChaosVDCollisionQueryParamsFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags;
static UEnum* EChaosVDCollisionQueryParamsFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDCollisionQueryParamsFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDCollisionQueryParamsFlags>()
{
	return EChaosVDCollisionQueryParamsFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FindInitialOverlaps.Comment", "/** Whether we want to find out initial overlap or not. If true, it will return if this was initial overlap. */" },
		{ "FindInitialOverlaps.Name", "EChaosVDCollisionQueryParamsFlags::FindInitialOverlaps" },
		{ "FindInitialOverlaps.ToolTip", "Whether we want to find out initial overlap or not. If true, it will return if this was initial overlap." },
		{ "IgnoreBlocks.Comment", "/** Whether to ignore blocking results. */" },
		{ "IgnoreBlocks.Name", "EChaosVDCollisionQueryParamsFlags::IgnoreBlocks" },
		{ "IgnoreBlocks.ToolTip", "Whether to ignore blocking results." },
		{ "IgnoreTouches.Comment", "/** Whether to ignore touch/overlap results. */" },
		{ "IgnoreTouches.Name", "EChaosVDCollisionQueryParamsFlags::IgnoreTouches" },
		{ "IgnoreTouches.ToolTip", "Whether to ignore touch/overlap results." },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "None.Name", "EChaosVDCollisionQueryParamsFlags::None" },
		{ "ReplaceHitWithSubComponents.Comment", "/** Extra filtering done on the query. See declaration for filtering logic */" },
		{ "ReplaceHitWithSubComponents.Name", "EChaosVDCollisionQueryParamsFlags::ReplaceHitWithSubComponents" },
		{ "ReplaceHitWithSubComponents.ToolTip", "Extra filtering done on the query. See declaration for filtering logic" },
		{ "ReturnFaceIndex.Comment", "/** Whether we want to return the triangle face index for complex static mesh traces */" },
		{ "ReturnFaceIndex.Name", "EChaosVDCollisionQueryParamsFlags::ReturnFaceIndex" },
		{ "ReturnFaceIndex.ToolTip", "Whether we want to return the triangle face index for complex static mesh traces" },
		{ "ReturnPhysicalMaterial.Comment", "/** Whether we want to include the physical material in the results. */" },
		{ "ReturnPhysicalMaterial.Name", "EChaosVDCollisionQueryParamsFlags::ReturnPhysicalMaterial" },
		{ "ReturnPhysicalMaterial.ToolTip", "Whether we want to include the physical material in the results." },
		{ "SkipNarrowPhase.Comment", "/** Whether to skip narrow phase checks (only for overlaps). */" },
		{ "SkipNarrowPhase.Name", "EChaosVDCollisionQueryParamsFlags::SkipNarrowPhase" },
		{ "SkipNarrowPhase.ToolTip", "Whether to skip narrow phase checks (only for overlaps)." },
		{ "TraceComplex.Comment", "/** Whether we should trace against complex collision */" },
		{ "TraceComplex.Name", "EChaosVDCollisionQueryParamsFlags::TraceComplex" },
		{ "TraceComplex.ToolTip", "Whether we should trace against complex collision" },
		{ "TraceIntoSubComponents.Comment", "/** Whether to ignore traces to the cluster union and trace against its children instead. */" },
		{ "TraceIntoSubComponents.Name", "EChaosVDCollisionQueryParamsFlags::TraceIntoSubComponents" },
		{ "TraceIntoSubComponents.ToolTip", "Whether to ignore traces to the cluster union and trace against its children instead." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDCollisionQueryParamsFlags::None", (int64)EChaosVDCollisionQueryParamsFlags::None },
		{ "EChaosVDCollisionQueryParamsFlags::TraceComplex", (int64)EChaosVDCollisionQueryParamsFlags::TraceComplex },
		{ "EChaosVDCollisionQueryParamsFlags::FindInitialOverlaps", (int64)EChaosVDCollisionQueryParamsFlags::FindInitialOverlaps },
		{ "EChaosVDCollisionQueryParamsFlags::ReturnFaceIndex", (int64)EChaosVDCollisionQueryParamsFlags::ReturnFaceIndex },
		{ "EChaosVDCollisionQueryParamsFlags::ReturnPhysicalMaterial", (int64)EChaosVDCollisionQueryParamsFlags::ReturnPhysicalMaterial },
		{ "EChaosVDCollisionQueryParamsFlags::IgnoreBlocks", (int64)EChaosVDCollisionQueryParamsFlags::IgnoreBlocks },
		{ "EChaosVDCollisionQueryParamsFlags::IgnoreTouches", (int64)EChaosVDCollisionQueryParamsFlags::IgnoreTouches },
		{ "EChaosVDCollisionQueryParamsFlags::SkipNarrowPhase", (int64)EChaosVDCollisionQueryParamsFlags::SkipNarrowPhase },
		{ "EChaosVDCollisionQueryParamsFlags::TraceIntoSubComponents", (int64)EChaosVDCollisionQueryParamsFlags::TraceIntoSubComponents },
		{ "EChaosVDCollisionQueryParamsFlags::ReplaceHitWithSubComponents", (int64)EChaosVDCollisionQueryParamsFlags::ReplaceHitWithSubComponents },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDCollisionQueryParamsFlags",
	"EChaosVDCollisionQueryParamsFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryParamsFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags.InnerSingleton;
}
// End Enum EChaosVDCollisionQueryParamsFlags

// Begin ScriptStruct FChaosVDCollisionQueryParams
static_assert(std::is_polymorphic<FChaosVDCollisionQueryParams>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDCollisionQueryParams cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCollisionQueryParams;
class UScriptStruct* FChaosVDCollisionQueryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionQueryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCollisionQueryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCollisionQueryParams"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionQueryParams.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCollisionQueryParams>()
{
	return FChaosVDCollisionQueryParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceTag_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Tag used to provide extra information or filtering for debugging of the trace (e.g. Collision Analyzer) */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Tag used to provide extra information or filtering for debugging of the trace (e.g. Collision Analyzer)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTag_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Tag used to indicate an owner for this trace */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Tag used to indicate an owner for this trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Whether we should trace against complex collision */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Whether we should trace against complex collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindInitialOverlaps_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Whether we want to find out initial overlap or not. If true, it will return if this was initial overlap. */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Whether we want to find out initial overlap or not. If true, it will return if this was initial overlap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnFaceIndex_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Whether we want to return the triangle face index for complex static mesh traces */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Whether we want to return the triangle face index for complex static mesh traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReturnPhysicalMaterial_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Whether we want to include the physical material in the results. */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Whether we want to include the physical material in the results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreBlocks_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Whether to ignore blocking results. */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Whether to ignore blocking results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTouches_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Whether to ignore touch/overlap results. */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Whether to ignore touch/overlap results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipNarrowPhase_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Whether to skip narrow phase checks (only for overlaps). */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Whether to skip narrow phase checks (only for overlaps)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceIntoSubComponents_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Whether to ignore traces to the cluster union and trace against its children instead. */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Whether to ignore traces to the cluster union and trace against its children instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceHitWithSubComponents_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** If bTraceIntoSubComponents is true, whether to replace the hit of the cluster union with its children instead. */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "If bTraceIntoSubComponents is true, whether to replace the hit of the cluster union with its children instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreMask_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** Extra filtering done on the query. See declaration for filtering logic */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "Extra filtering done on the query. See declaration for filtering logic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredActorsNames_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredComponentsNames_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TraceTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerTag;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static void NewProp_bFindInitialOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindInitialOverlaps;
	static void NewProp_bReturnFaceIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnFaceIndex;
	static void NewProp_bReturnPhysicalMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnPhysicalMaterial;
	static void NewProp_bIgnoreBlocks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreBlocks;
	static void NewProp_bIgnoreTouches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTouches;
	static void NewProp_bSkipNarrowPhase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipNarrowPhase;
	static void NewProp_bTraceIntoSubComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceIntoSubComponents;
	static void NewProp_bReplaceHitWithSubComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceHitWithSubComponents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IgnoreMask;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoredActorsNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredActorsNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoredComponentsNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredComponentsNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCollisionQueryParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_TraceTag = { "TraceTag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionQueryParams, TraceTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceTag_MetaData), NewProp_TraceTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_OwnerTag = { "OwnerTag", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionQueryParams, OwnerTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTag_MetaData), NewProp_OwnerTag_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplex_MetaData), NewProp_bTraceComplex_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bFindInitialOverlaps_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bFindInitialOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bFindInitialOverlaps = { "bFindInitialOverlaps", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bFindInitialOverlaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindInitialOverlaps_MetaData), NewProp_bFindInitialOverlaps_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnFaceIndex_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bReturnFaceIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnFaceIndex = { "bReturnFaceIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnFaceIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnFaceIndex_MetaData), NewProp_bReturnFaceIndex_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnPhysicalMaterial_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bReturnPhysicalMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnPhysicalMaterial = { "bReturnPhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnPhysicalMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReturnPhysicalMaterial_MetaData), NewProp_bReturnPhysicalMaterial_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreBlocks_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bIgnoreBlocks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreBlocks = { "bIgnoreBlocks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreBlocks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreBlocks_MetaData), NewProp_bIgnoreBlocks_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreTouches_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bIgnoreTouches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreTouches = { "bIgnoreTouches", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreTouches_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTouches_MetaData), NewProp_bIgnoreTouches_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bSkipNarrowPhase_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bSkipNarrowPhase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bSkipNarrowPhase = { "bSkipNarrowPhase", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bSkipNarrowPhase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipNarrowPhase_MetaData), NewProp_bSkipNarrowPhase_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceIntoSubComponents_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bTraceIntoSubComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceIntoSubComponents = { "bTraceIntoSubComponents", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceIntoSubComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceIntoSubComponents_MetaData), NewProp_bTraceIntoSubComponents_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReplaceHitWithSubComponents_SetBit(void* Obj)
{
	((FChaosVDCollisionQueryParams*)Obj)->bReplaceHitWithSubComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReplaceHitWithSubComponents = { "bReplaceHitWithSubComponents", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDCollisionQueryParams), &Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReplaceHitWithSubComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplaceHitWithSubComponents_MetaData), NewProp_bReplaceHitWithSubComponents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoreMask = { "IgnoreMask", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionQueryParams, IgnoreMask), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreMask_MetaData), NewProp_IgnoreMask_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoredActorsNames_Inner = { "IgnoredActorsNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoredActorsNames = { "IgnoredActorsNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionQueryParams, IgnoredActorsNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredActorsNames_MetaData), NewProp_IgnoredActorsNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoredComponentsNames_Inner = { "IgnoredComponentsNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoredComponentsNames = { "IgnoredComponentsNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionQueryParams, IgnoredComponentsNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredComponentsNames_MetaData), NewProp_IgnoredComponentsNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_TraceTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_OwnerTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bFindInitialOverlaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnFaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReturnPhysicalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreBlocks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bIgnoreTouches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bSkipNarrowPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bTraceIntoSubComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_bReplaceHitWithSubComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoreMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoredActorsNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoredActorsNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoredComponentsNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewProp_IgnoredComponentsNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDCollisionQueryParams",
	Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::PropPointers),
	sizeof(FChaosVDCollisionQueryParams),
	alignof(FChaosVDCollisionQueryParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionQueryParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCollisionQueryParams.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionQueryParams.InnerSingleton;
}
// End ScriptStruct FChaosVDCollisionQueryParams

// Begin Enum EChaosVDQueryFastDataParallelFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags;
static UEnum* EChaosVDQueryFastDataParallelFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDQueryFastDataParallelFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDQueryFastDataParallelFlags>()
{
	return EChaosVDQueryFastDataParallelFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "None.Name", "EChaosVDQueryFastDataParallelFlags::None" },
		{ "Parallel0.Name", "EChaosVDQueryFastDataParallelFlags::Parallel0" },
		{ "Parallel1.Name", "EChaosVDQueryFastDataParallelFlags::Parallel1" },
		{ "Parallel2.Name", "EChaosVDQueryFastDataParallelFlags::Parallel2" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDQueryFastDataParallelFlags::None", (int64)EChaosVDQueryFastDataParallelFlags::None },
		{ "EChaosVDQueryFastDataParallelFlags::Parallel0", (int64)EChaosVDQueryFastDataParallelFlags::Parallel0 },
		{ "EChaosVDQueryFastDataParallelFlags::Parallel1", (int64)EChaosVDQueryFastDataParallelFlags::Parallel1 },
		{ "EChaosVDQueryFastDataParallelFlags::Parallel2", (int64)EChaosVDQueryFastDataParallelFlags::Parallel2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDQueryFastDataParallelFlags",
	"EChaosVDQueryFastDataParallelFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDQueryFastDataParallelFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags.InnerSingleton;
}
// End Enum EChaosVDQueryFastDataParallelFlags

// Begin ScriptStruct FChaosVDQueryFastData
static_assert(std::is_polymorphic<FChaosVDQueryFastData>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDQueryFastData cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDQueryFastData;
class UScriptStruct* FChaosVDQueryFastData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDQueryFastData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDQueryFastData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDQueryFastData, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDQueryFastData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDQueryFastData.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDQueryFastData>()
{
	return FChaosVDQueryFastData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dir_MetaData[] = {
		{ "Category", "QueryFastData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvDir_MetaData[] = {
		{ "Category", "QueryFastData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLength_MetaData[] = {
		{ "Category", "QueryFastData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvCurrentLength_MetaData[] = {
		{ "Category", "QueryFastData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParallel0_MetaData[] = {
		{ "Category", "QueryFastData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParallel1_MetaData[] = {
		{ "Category", "QueryFastData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParallel2_MetaData[] = {
		{ "Category", "QueryFastData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvDir;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurrentLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InvCurrentLength;
	static void NewProp_bParallel0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParallel0;
	static void NewProp_bParallel1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParallel1;
	static void NewProp_bParallel2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParallel2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDQueryFastData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_Dir = { "Dir", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryFastData, Dir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dir_MetaData), NewProp_Dir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_InvDir = { "InvDir", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryFastData, InvDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvDir_MetaData), NewProp_InvDir_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_CurrentLength = { "CurrentLength", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryFastData, CurrentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLength_MetaData), NewProp_CurrentLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_InvCurrentLength = { "InvCurrentLength", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryFastData, InvCurrentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvCurrentLength_MetaData), NewProp_InvCurrentLength_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel0_SetBit(void* Obj)
{
	((FChaosVDQueryFastData*)Obj)->bParallel0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel0 = { "bParallel0", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDQueryFastData), &Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParallel0_MetaData), NewProp_bParallel0_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel1_SetBit(void* Obj)
{
	((FChaosVDQueryFastData*)Obj)->bParallel1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel1 = { "bParallel1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDQueryFastData), &Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParallel1_MetaData), NewProp_bParallel1_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel2_SetBit(void* Obj)
{
	((FChaosVDQueryFastData*)Obj)->bParallel2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel2 = { "bParallel2", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDQueryFastData), &Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParallel2_MetaData), NewProp_bParallel2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_Dir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_InvDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_CurrentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_InvCurrentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewProp_bParallel2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDQueryFastData",
	Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::PropPointers),
	sizeof(FChaosVDQueryFastData),
	alignof(FChaosVDQueryFastData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDQueryFastData()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDQueryFastData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDQueryFastData.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDQueryFastData.InnerSingleton;
}
// End ScriptStruct FChaosVDQueryFastData

// Begin ScriptStruct FChaosVDQueryHitData
static_assert(std::is_polymorphic<FChaosVDQueryHitData>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDQueryHitData cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDQueryHitData;
class UScriptStruct* FChaosVDQueryHitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDQueryHitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDQueryHitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDQueryHitData, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDQueryHitData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDQueryHitData.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDQueryHitData>()
{
	return FChaosVDQueryHitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceIdx_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldNormal_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceNormal_MetaData[] = {
		{ "Category", "QueryData" },
		{ "Comment", "/** This is not used for Line Traces */" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "ToolTip", "This is not used for Line Traces" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIdx;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Flags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FaceNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDQueryHitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryHitData, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_FaceIdx = { "FaceIdx", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryHitData, FaceIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceIdx_MetaData), NewProp_FaceIdx_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryHitData, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryHitData, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_WorldNormal = { "WorldNormal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryHitData, WorldNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldNormal_MetaData), NewProp_WorldNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_FaceNormal = { "FaceNormal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryHitData, FaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceNormal_MetaData), NewProp_FaceNormal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_FaceIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_WorldNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewProp_FaceNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDQueryHitData",
	Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::PropPointers),
	sizeof(FChaosVDQueryHitData),
	alignof(FChaosVDQueryHitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDQueryHitData()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDQueryHitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDQueryHitData.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDQueryHitData.InnerSingleton;
}
// End ScriptStruct FChaosVDQueryHitData

// Begin Enum EChaosVDCollisionQueryHitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType;
static UEnum* EChaosVDCollisionQueryHitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDCollisionQueryHitType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDCollisionQueryHitType>()
{
	return EChaosVDCollisionQueryHitType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Block.Name", "EChaosVDCollisionQueryHitType::Block" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "None.Name", "EChaosVDCollisionQueryHitType::None" },
		{ "Touch.Name", "EChaosVDCollisionQueryHitType::Touch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDCollisionQueryHitType::None", (int64)EChaosVDCollisionQueryHitType::None },
		{ "EChaosVDCollisionQueryHitType::Touch", (int64)EChaosVDCollisionQueryHitType::Touch },
		{ "EChaosVDCollisionQueryHitType::Block", (int64)EChaosVDCollisionQueryHitType::Block },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDCollisionQueryHitType",
	"EChaosVDCollisionQueryHitType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType.InnerSingleton;
}
// End Enum EChaosVDCollisionQueryHitType

// Begin Enum EChaosVDSceneQueryVisitorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType;
static UEnum* EChaosVDSceneQueryVisitorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDSceneQueryVisitorType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDSceneQueryVisitorType>()
{
	return EChaosVDSceneQueryVisitorType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BroadPhase.Name", "EChaosVDSceneQueryVisitorType::BroadPhase" },
		{ "Invalid.Name", "EChaosVDSceneQueryVisitorType::Invalid" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
		{ "NarrowPhase.Name", "EChaosVDSceneQueryVisitorType::NarrowPhase" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDSceneQueryVisitorType::Invalid", (int64)EChaosVDSceneQueryVisitorType::Invalid },
		{ "EChaosVDSceneQueryVisitorType::BroadPhase", (int64)EChaosVDSceneQueryVisitorType::BroadPhase },
		{ "EChaosVDSceneQueryVisitorType::NarrowPhase", (int64)EChaosVDSceneQueryVisitorType::NarrowPhase },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDSceneQueryVisitorType",
	"EChaosVDSceneQueryVisitorType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType.InnerSingleton;
}
// End Enum EChaosVDSceneQueryVisitorType

// Begin ScriptStruct FChaosVDQueryVisitStep
static_assert(std::is_polymorphic<FChaosVDQueryVisitStep>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDQueryVisitStep cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDQueryVisitStep;
class UScriptStruct* FChaosVDQueryVisitStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDQueryVisitStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDQueryVisitStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDQueryVisitStep, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDQueryVisitStep"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDQueryVisitStep.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDQueryVisitStep>()
{
	return FChaosVDQueryVisitStep::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SQ Visit Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeIndex_MetaData[] = {
		{ "Category", "SQ Visit Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "SQ Visit Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleTransform_MetaData[] = {
		{ "Category", "SQ Visit Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryFastData_MetaData[] = {
		{ "Category", "SQ Visit Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitType_MetaData[] = {
		{ "Category", "SQ Visit Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitData_MetaData[] = {
		{ "Category", "SQ Visit Data" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShapeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryFastData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HitType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDQueryVisitStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryVisitStep, Type), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryVisitorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1281429746
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_ShapeIndex = { "ShapeIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryVisitStep, ShapeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeIndex_MetaData), NewProp_ShapeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryVisitStep, ParticleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIndex_MetaData), NewProp_ParticleIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_ParticleTransform = { "ParticleTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryVisitStep, ParticleTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleTransform_MetaData), NewProp_ParticleTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_QueryFastData = { "QueryFastData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryVisitStep, QueryFastData), Z_Construct_UScriptStruct_FChaosVDQueryFastData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryFastData_MetaData), NewProp_QueryFastData_MetaData) }; // 1021007288
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_HitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_HitType = { "HitType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryVisitStep, HitType), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionQueryHitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitType_MetaData), NewProp_HitType_MetaData) }; // 229053612
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_HitData = { "HitData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryVisitStep, HitData), Z_Construct_UScriptStruct_FChaosVDQueryHitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitData_MetaData), NewProp_HitData_MetaData) }; // 3675534205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_ShapeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_ParticleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_ParticleTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_QueryFastData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_HitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_HitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewProp_HitData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDQueryVisitStep",
	Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::PropPointers),
	sizeof(FChaosVDQueryVisitStep),
	alignof(FChaosVDQueryVisitStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDQueryVisitStep()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDQueryVisitStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDQueryVisitStep.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDQueryVisitStep.InnerSingleton;
}
// End ScriptStruct FChaosVDQueryVisitStep

// Begin ScriptStruct FChaosVDQueryDataWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDQueryDataWrapper;
class UScriptStruct* FChaosVDQueryDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDQueryDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDQueryDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDQueryDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDQueryDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDQueryDataWrapper>()
{
	return FChaosVDQueryDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "CVD QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentQueryID_MetaData[] = {
		{ "Category", "CVD QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSolverID_MetaData[] = {
		{ "Category", "CVD QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRetryQuery_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryOrientation_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryParams_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionResponseParams_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectQueryParams_MetaData[] = {
		{ "Category", "RecordedQueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[] = {
		{ "Category", "QueryData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDQueryDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentQueryID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldSolverID;
	static void NewProp_bIsRetryQuery_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRetryQuery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryOrientation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionQueryParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionResponseParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionObjectQueryParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDQueryDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_ParentQueryID = { "ParentQueryID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, ParentQueryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentQueryID_MetaData), NewProp_ParentQueryID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_WorldSolverID = { "WorldSolverID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, WorldSolverID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSolverID_MetaData), NewProp_WorldSolverID_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_bIsRetryQuery_SetBit(void* Obj)
{
	((FChaosVDQueryDataWrapper*)Obj)->bIsRetryQuery = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_bIsRetryQuery = { "bIsRetryQuery", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDQueryDataWrapper), &Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_bIsRetryQuery_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRetryQuery_MetaData), NewProp_bIsRetryQuery_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_GeometryOrientation = { "GeometryOrientation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, GeometryOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryOrientation_MetaData), NewProp_GeometryOrientation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, Type), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1725932800
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, Mode), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDSceneQueryMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3657032627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, CollisionChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_CollisionQueryParams = { "CollisionQueryParams", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, CollisionQueryParams), Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionQueryParams_MetaData), NewProp_CollisionQueryParams_MetaData) }; // 2868575160
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_CollisionResponseParams = { "CollisionResponseParams", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, CollisionResponseParams), Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionResponseParams_MetaData), NewProp_CollisionResponseParams_MetaData) }; // 1107857883
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_CollisionObjectQueryParams = { "CollisionObjectQueryParams", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, CollisionObjectQueryParams), Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionObjectQueryParams_MetaData), NewProp_CollisionObjectQueryParams_MetaData) }; // 82273012
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosVDQueryVisitStep, METADATA_PARAMS(0, nullptr) }; // 1076034464
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDQueryDataWrapper, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hits_MetaData), NewProp_Hits_MetaData) }; // 1076034464
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_ParentQueryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_WorldSolverID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_bIsRetryQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_GeometryOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_CollisionQueryParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_CollisionResponseParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_CollisionObjectQueryParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewProp_Hits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDQueryDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDQueryDataWrapper),
	alignof(FChaosVDQueryDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDQueryDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDQueryDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDQueryDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDQueryDataWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosVDSceneQueryType_StaticEnum, TEXT("EChaosVDSceneQueryType"), &Z_Registration_Info_UEnum_EChaosVDSceneQueryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1725932800U) },
		{ EChaosVDSceneQueryMode_StaticEnum, TEXT("EChaosVDSceneQueryMode"), &Z_Registration_Info_UEnum_EChaosVDSceneQueryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3657032627U) },
		{ EChaosVDCollisionQueryParamsFlags_StaticEnum, TEXT("EChaosVDCollisionQueryParamsFlags"), &Z_Registration_Info_UEnum_EChaosVDCollisionQueryParamsFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 367861571U) },
		{ EChaosVDQueryFastDataParallelFlags_StaticEnum, TEXT("EChaosVDQueryFastDataParallelFlags"), &Z_Registration_Info_UEnum_EChaosVDQueryFastDataParallelFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3808280249U) },
		{ EChaosVDCollisionQueryHitType_StaticEnum, TEXT("EChaosVDCollisionQueryHitType"), &Z_Registration_Info_UEnum_EChaosVDCollisionQueryHitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 229053612U) },
		{ EChaosVDSceneQueryVisitorType_StaticEnum, TEXT("EChaosVDSceneQueryVisitorType"), &Z_Registration_Info_UEnum_EChaosVDSceneQueryVisitorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1281429746U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosVDCollisionResponseParams::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics::NewStructOps, TEXT("ChaosVDCollisionResponseParams"), &Z_Registration_Info_UScriptStruct_ChaosVDCollisionResponseParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCollisionResponseParams), 1107857883U) },
		{ FChaosVDCollisionObjectQueryParams::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics::NewStructOps, TEXT("ChaosVDCollisionObjectQueryParams"), &Z_Registration_Info_UScriptStruct_ChaosVDCollisionObjectQueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCollisionObjectQueryParams), 82273012U) },
		{ FChaosVDCollisionQueryParams::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics::NewStructOps, TEXT("ChaosVDCollisionQueryParams"), &Z_Registration_Info_UScriptStruct_ChaosVDCollisionQueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCollisionQueryParams), 2868575160U) },
		{ FChaosVDQueryFastData::StaticStruct, Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics::NewStructOps, TEXT("ChaosVDQueryFastData"), &Z_Registration_Info_UScriptStruct_ChaosVDQueryFastData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDQueryFastData), 1021007288U) },
		{ FChaosVDQueryHitData::StaticStruct, Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics::NewStructOps, TEXT("ChaosVDQueryHitData"), &Z_Registration_Info_UScriptStruct_ChaosVDQueryHitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDQueryHitData), 3675534205U) },
		{ FChaosVDQueryVisitStep::StaticStruct, Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics::NewStructOps, TEXT("ChaosVDQueryVisitStep"), &Z_Registration_Info_UScriptStruct_ChaosVDQueryVisitStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDQueryVisitStep), 1076034464U) },
		{ FChaosVDQueryDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics::NewStructOps, TEXT("ChaosVDQueryDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDQueryDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDQueryDataWrapper), 2181557028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_1841765972(TEXT("/Script/ChaosVDRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
