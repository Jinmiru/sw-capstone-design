// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVector() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDistribution();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
ENGINE_API UClass* Z_Construct_UClass_UDistributionVector_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector4Distribution();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorDistribution();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDistributionVectorLockFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistributionVectorLockFlags;
static UEnum* EDistributionVectorLockFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDistributionVectorLockFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDistributionVectorLockFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDistributionVectorLockFlags"));
	}
	return Z_Registration_Info_UEnum_EDistributionVectorLockFlags.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDistributionVectorLockFlags>()
{
	return EDistributionVectorLockFlags_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EDVLF_MAX.Name", "EDVLF_MAX" },
		{ "EDVLF_None.DisplayName", "None" },
		{ "EDVLF_None.Name", "EDVLF_None" },
		{ "EDVLF_XY.DisplayName", "XY" },
		{ "EDVLF_XY.Name", "EDVLF_XY" },
		{ "EDVLF_XYZ.DisplayName", "XYZ" },
		{ "EDVLF_XYZ.Name", "EDVLF_XYZ" },
		{ "EDVLF_XZ.DisplayName", "XZ" },
		{ "EDVLF_XZ.Name", "EDVLF_XZ" },
		{ "EDVLF_YZ.DisplayName", "YZ" },
		{ "EDVLF_YZ.Name", "EDVLF_YZ" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDVLF_None", (int64)EDVLF_None },
		{ "EDVLF_XY", (int64)EDVLF_XY },
		{ "EDVLF_XZ", (int64)EDVLF_XZ },
		{ "EDVLF_YZ", (int64)EDVLF_YZ },
		{ "EDVLF_XYZ", (int64)EDVLF_XYZ },
		{ "EDVLF_MAX", (int64)EDVLF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDistributionVectorLockFlags",
	"EDistributionVectorLockFlags",
	Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags()
{
	if (!Z_Registration_Info_UEnum_EDistributionVectorLockFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistributionVectorLockFlags.InnerSingleton, Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDistributionVectorLockFlags.InnerSingleton;
}
// End Enum EDistributionVectorLockFlags

// Begin Enum EDistributionVectorMirrorFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags;
static UEnum* EDistributionVectorMirrorFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDistributionVectorMirrorFlags"));
	}
	return Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDistributionVectorMirrorFlags>()
{
	return EDistributionVectorMirrorFlags_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EDVMF_Different.DisplayName", "Different" },
		{ "EDVMF_Different.Name", "EDVMF_Different" },
		{ "EDVMF_MAX.Name", "EDVMF_MAX" },
		{ "EDVMF_Mirror.DisplayName", "Mirror" },
		{ "EDVMF_Mirror.Name", "EDVMF_Mirror" },
		{ "EDVMF_Same.DisplayName", "Same" },
		{ "EDVMF_Same.Name", "EDVMF_Same" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDVMF_Same", (int64)EDVMF_Same },
		{ "EDVMF_Different", (int64)EDVMF_Different },
		{ "EDVMF_Mirror", (int64)EDVMF_Mirror },
		{ "EDVMF_MAX", (int64)EDVMF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDistributionVectorMirrorFlags",
	"EDistributionVectorMirrorFlags",
	Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags()
{
	if (!Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.InnerSingleton, Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags.InnerSingleton;
}
// End Enum EDistributionVectorMirrorFlags

// Begin ScriptStruct FVectorDistribution
struct Z_Construct_UScriptStruct_FVectorDistribution_Statics
{
	struct FDistributionLookupTable
	{
		float TimeScale;
		float TimeBias;
		TArray<float> Values;
		uint8 Op;
		uint8 EntryCount;
		uint8 EntryStride;
		uint8 SubEntryStride;
		uint8 LockFlag;
	};

	static_assert(sizeof(FDistributionLookupTable) < MAX_uint16);
	static_assert(alignof(FDistributionLookupTable) < MAX_uint8);
	struct FVectorDistribution
	{
		FDistributionLookupTable Table;
	};

	static_assert(sizeof(FVectorDistribution) < MAX_uint16);
	static_assert(alignof(FVectorDistribution) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Type-safe vector distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Type-safe vector distribution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Table;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Table_MetaData), NewProp_Table_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorDistribution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	nullptr,
	"VectorDistribution",
	Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers),
	sizeof(FVectorDistribution),
	alignof(FVectorDistribution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVectorDistribution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVectorDistribution()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorDistribution_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FVectorDistribution

// Begin ScriptStruct FVector4Distribution
struct Z_Construct_UScriptStruct_FVector4Distribution_Statics
{
	struct FDistributionLookupTable
	{
		float TimeScale;
		float TimeBias;
		TArray<float> Values;
		uint8 Op;
		uint8 EntryCount;
		uint8 EntryStride;
		uint8 SubEntryStride;
		uint8 LockFlag;
	};

	static_assert(sizeof(FDistributionLookupTable) < MAX_uint16);
	static_assert(alignof(FDistributionLookupTable) < MAX_uint8);
	struct FVector4Distribution
	{
		FDistributionLookupTable Table;
	};

	static_assert(sizeof(FVector4Distribution) < MAX_uint16);
	static_assert(alignof(FVector4Distribution) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Type-safe 4-vector distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Type-safe 4-vector distribution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Table;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4Distribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Table_MetaData), NewProp_Table_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4Distribution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	nullptr,
	"Vector4Distribution",
	Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers),
	sizeof(FVector4Distribution),
	alignof(FVector4Distribution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector4Distribution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector4Distribution()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector4Distribution_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FVector4Distribution

// Begin ScriptStruct FRawDistributionVector
static_assert(std::is_polymorphic<FRawDistributionVector>() == std::is_polymorphic<FRawDistribution>(), "USTRUCT FRawDistributionVector cannot be polymorphic unless super FRawDistribution is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawDistributionVector;
class UScriptStruct* FRawDistributionVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawDistributionVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawDistributionVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionVector, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RawDistributionVector"));
	}
	return Z_Registration_Info_UScriptStruct_RawDistributionVector.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRawDistributionVector>()
{
	return FRawDistributionVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRawDistributionVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValueVec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueVec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[] = {
		{ "Category", "RawDistributionVector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinValueVec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxValueVec;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Distribution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawDistributionVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawDistributionVector, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawDistributionVector, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec = { "MinValueVec", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawDistributionVector, MinValueVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValueVec_MetaData), NewProp_MinValueVec_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec = { "MaxValueVec", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawDistributionVector, MaxValueVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValueVec_MetaData), NewProp_MaxValueVec_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0114000002080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRawDistributionVector, Distribution), Z_Construct_UClass_UDistributionVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distribution_MetaData), NewProp_Distribution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRawDistribution,
	&NewStructOps,
	"RawDistributionVector",
	Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers),
	sizeof(FRawDistributionVector),
	alignof(FRawDistributionVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRawDistributionVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector()
{
	if (!Z_Registration_Info_UScriptStruct_RawDistributionVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawDistributionVector.InnerSingleton, Z_Construct_UScriptStruct_FRawDistributionVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RawDistributionVector.InnerSingleton;
}
// End ScriptStruct FRawDistributionVector

// Begin Class UDistributionVector
void UDistributionVector::StaticRegisterNativesUDistributionVector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVector);
UClass* Z_Construct_UClass_UDistributionVector_NoRegister()
{
	return UDistributionVector::StaticClass();
}
struct Z_Construct_UClass_UDistributionVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Distributions/DistributionVector.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeBaked_MetaData[] = {
		{ "Category", "Baked" },
		{ "Comment", "/** Can this variable be baked out to a FRawDistribution? Should be true 99% of the time*/" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Can this variable be baked out to a FRawDistribution? Should be true 99% of the time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[] = {
		{ "Comment", "/** Set internally when the distribution is updated so that that FRawDistribution can know to update itself*/" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Set internally when the distribution is updated so that that FRawDistribution can know to update itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakedDataSuccesfully_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCanBeBaked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeBaked;
	static void NewProp_bIsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
	static void NewProp_bBakedDataSuccesfully_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakedDataSuccesfully;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_SetBit(void* Obj)
{
	((UDistributionVector*)Obj)->bCanBeBaked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked = { "bCanBeBaked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeBaked_MetaData), NewProp_bCanBeBaked_MetaData) };
void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_SetBit(void* Obj)
{
	((UDistributionVector*)Obj)->bIsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDirty_MetaData), NewProp_bIsDirty_MetaData) };
void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_SetBit(void* Obj)
{
	((UDistributionVector*)Obj)->bBakedDataSuccesfully = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully = { "bBakedDataSuccesfully", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakedDataSuccesfully_MetaData), NewProp_bBakedDataSuccesfully_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDistributionVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDistribution,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVector_Statics::ClassParams = {
	&UDistributionVector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDistributionVector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::PropPointers),
	0,
	0x002830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UDistributionVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDistributionVector()
{
	if (!Z_Registration_Info_UClass_UDistributionVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVector.OuterSingleton, Z_Construct_UClass_UDistributionVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDistributionVector.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDistributionVector>()
{
	return UDistributionVector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVector);
UDistributionVector::~UDistributionVector() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UDistributionVector)
// End Class UDistributionVector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDistributionVectorLockFlags_StaticEnum, TEXT("EDistributionVectorLockFlags"), &Z_Registration_Info_UEnum_EDistributionVectorLockFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2057503009U) },
		{ EDistributionVectorMirrorFlags_StaticEnum, TEXT("EDistributionVectorMirrorFlags"), &Z_Registration_Info_UEnum_EDistributionVectorMirrorFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1880704965U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRawDistributionVector::StaticStruct, Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewStructOps, TEXT("RawDistributionVector"), &Z_Registration_Info_UScriptStruct_RawDistributionVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawDistributionVector), 1238237137U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVector, UDistributionVector::StaticClass, TEXT("UDistributionVector"), &Z_Registration_Info_UClass_UDistributionVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVector), 368875443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_1095873460(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
