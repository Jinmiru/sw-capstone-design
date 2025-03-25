// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMMathLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMMirrorSettings();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Enum ERigVMAnimEasingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMAnimEasingType;
static UEnum* ERigVMAnimEasingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigVMAnimEasingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigVMAnimEasingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMAnimEasingType"));
	}
	return Z_Registration_Info_UEnum_ERigVMAnimEasingType.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigVMAnimEasingType>()
{
	return ERigVMAnimEasingType_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BackEaseIn.Name", "ERigVMAnimEasingType::BackEaseIn" },
		{ "BackEaseInOut.Name", "ERigVMAnimEasingType::BackEaseInOut" },
		{ "BackEaseOut.Name", "ERigVMAnimEasingType::BackEaseOut" },
		{ "BounceEaseIn.Name", "ERigVMAnimEasingType::BounceEaseIn" },
		{ "BounceEaseInOut.Name", "ERigVMAnimEasingType::BounceEaseInOut" },
		{ "BounceEaseOut.Name", "ERigVMAnimEasingType::BounceEaseOut" },
		{ "CircularEaseIn.Name", "ERigVMAnimEasingType::CircularEaseIn" },
		{ "CircularEaseInOut.Name", "ERigVMAnimEasingType::CircularEaseInOut" },
		{ "CircularEaseOut.Name", "ERigVMAnimEasingType::CircularEaseOut" },
		{ "CubicEaseIn.Name", "ERigVMAnimEasingType::CubicEaseIn" },
		{ "CubicEaseInOut.Name", "ERigVMAnimEasingType::CubicEaseInOut" },
		{ "CubicEaseOut.Name", "ERigVMAnimEasingType::CubicEaseOut" },
		{ "ElasticEaseIn.Name", "ERigVMAnimEasingType::ElasticEaseIn" },
		{ "ElasticEaseInOut.Name", "ERigVMAnimEasingType::ElasticEaseInOut" },
		{ "ElasticEaseOut.Name", "ERigVMAnimEasingType::ElasticEaseOut" },
		{ "ExponentialEaseIn.Name", "ERigVMAnimEasingType::ExponentialEaseIn" },
		{ "ExponentialEaseInOut.Name", "ERigVMAnimEasingType::ExponentialEaseInOut" },
		{ "ExponentialEaseOut.Name", "ERigVMAnimEasingType::ExponentialEaseOut" },
		{ "Linear.Name", "ERigVMAnimEasingType::Linear" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "QuadraticEaseIn.Name", "ERigVMAnimEasingType::QuadraticEaseIn" },
		{ "QuadraticEaseInOut.Name", "ERigVMAnimEasingType::QuadraticEaseInOut" },
		{ "QuadraticEaseOut.Name", "ERigVMAnimEasingType::QuadraticEaseOut" },
		{ "QuarticEaseIn.Name", "ERigVMAnimEasingType::QuarticEaseIn" },
		{ "QuarticEaseInOut.Name", "ERigVMAnimEasingType::QuarticEaseInOut" },
		{ "QuarticEaseOut.Name", "ERigVMAnimEasingType::QuarticEaseOut" },
		{ "QuinticEaseIn.Name", "ERigVMAnimEasingType::QuinticEaseIn" },
		{ "QuinticEaseInOut.Name", "ERigVMAnimEasingType::QuinticEaseInOut" },
		{ "QuinticEaseOut.Name", "ERigVMAnimEasingType::QuinticEaseOut" },
		{ "RigVMTypeAllowed", "" },
		{ "SineEaseIn.Name", "ERigVMAnimEasingType::SineEaseIn" },
		{ "SineEaseInOut.Name", "ERigVMAnimEasingType::SineEaseInOut" },
		{ "SineEaseOut.Name", "ERigVMAnimEasingType::SineEaseOut" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigVMAnimEasingType::Linear", (int64)ERigVMAnimEasingType::Linear },
		{ "ERigVMAnimEasingType::QuadraticEaseIn", (int64)ERigVMAnimEasingType::QuadraticEaseIn },
		{ "ERigVMAnimEasingType::QuadraticEaseOut", (int64)ERigVMAnimEasingType::QuadraticEaseOut },
		{ "ERigVMAnimEasingType::QuadraticEaseInOut", (int64)ERigVMAnimEasingType::QuadraticEaseInOut },
		{ "ERigVMAnimEasingType::CubicEaseIn", (int64)ERigVMAnimEasingType::CubicEaseIn },
		{ "ERigVMAnimEasingType::CubicEaseOut", (int64)ERigVMAnimEasingType::CubicEaseOut },
		{ "ERigVMAnimEasingType::CubicEaseInOut", (int64)ERigVMAnimEasingType::CubicEaseInOut },
		{ "ERigVMAnimEasingType::QuarticEaseIn", (int64)ERigVMAnimEasingType::QuarticEaseIn },
		{ "ERigVMAnimEasingType::QuarticEaseOut", (int64)ERigVMAnimEasingType::QuarticEaseOut },
		{ "ERigVMAnimEasingType::QuarticEaseInOut", (int64)ERigVMAnimEasingType::QuarticEaseInOut },
		{ "ERigVMAnimEasingType::QuinticEaseIn", (int64)ERigVMAnimEasingType::QuinticEaseIn },
		{ "ERigVMAnimEasingType::QuinticEaseOut", (int64)ERigVMAnimEasingType::QuinticEaseOut },
		{ "ERigVMAnimEasingType::QuinticEaseInOut", (int64)ERigVMAnimEasingType::QuinticEaseInOut },
		{ "ERigVMAnimEasingType::SineEaseIn", (int64)ERigVMAnimEasingType::SineEaseIn },
		{ "ERigVMAnimEasingType::SineEaseOut", (int64)ERigVMAnimEasingType::SineEaseOut },
		{ "ERigVMAnimEasingType::SineEaseInOut", (int64)ERigVMAnimEasingType::SineEaseInOut },
		{ "ERigVMAnimEasingType::CircularEaseIn", (int64)ERigVMAnimEasingType::CircularEaseIn },
		{ "ERigVMAnimEasingType::CircularEaseOut", (int64)ERigVMAnimEasingType::CircularEaseOut },
		{ "ERigVMAnimEasingType::CircularEaseInOut", (int64)ERigVMAnimEasingType::CircularEaseInOut },
		{ "ERigVMAnimEasingType::ExponentialEaseIn", (int64)ERigVMAnimEasingType::ExponentialEaseIn },
		{ "ERigVMAnimEasingType::ExponentialEaseOut", (int64)ERigVMAnimEasingType::ExponentialEaseOut },
		{ "ERigVMAnimEasingType::ExponentialEaseInOut", (int64)ERigVMAnimEasingType::ExponentialEaseInOut },
		{ "ERigVMAnimEasingType::ElasticEaseIn", (int64)ERigVMAnimEasingType::ElasticEaseIn },
		{ "ERigVMAnimEasingType::ElasticEaseOut", (int64)ERigVMAnimEasingType::ElasticEaseOut },
		{ "ERigVMAnimEasingType::ElasticEaseInOut", (int64)ERigVMAnimEasingType::ElasticEaseInOut },
		{ "ERigVMAnimEasingType::BackEaseIn", (int64)ERigVMAnimEasingType::BackEaseIn },
		{ "ERigVMAnimEasingType::BackEaseOut", (int64)ERigVMAnimEasingType::BackEaseOut },
		{ "ERigVMAnimEasingType::BackEaseInOut", (int64)ERigVMAnimEasingType::BackEaseInOut },
		{ "ERigVMAnimEasingType::BounceEaseIn", (int64)ERigVMAnimEasingType::BounceEaseIn },
		{ "ERigVMAnimEasingType::BounceEaseOut", (int64)ERigVMAnimEasingType::BounceEaseOut },
		{ "ERigVMAnimEasingType::BounceEaseInOut", (int64)ERigVMAnimEasingType::BounceEaseInOut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigVMAnimEasingType",
	"ERigVMAnimEasingType",
	Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType()
{
	if (!Z_Registration_Info_UEnum_ERigVMAnimEasingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMAnimEasingType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMAnimEasingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigVMAnimEasingType.InnerSingleton;
}
// End Enum ERigVMAnimEasingType

// Begin ScriptStruct FRigVMFourPointBezier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFourPointBezier;
class UScriptStruct* FRigVMFourPointBezier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFourPointBezier, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFourPointBezier"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFourPointBezier>()
{
	return FRigVMFourPointBezier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[] = {
		{ "Category", "Bezier" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FStructPropertyParams NewProp_D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFourPointBezier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFourPointBezier, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFourPointBezier, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFourPointBezier, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFourPointBezier, D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_D_MetaData), NewProp_D_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewProp_D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMFourPointBezier",
	Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::PropPointers),
	sizeof(FRigVMFourPointBezier),
	alignof(FRigVMFourPointBezier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFourPointBezier.InnerSingleton;
}
// End ScriptStruct FRigVMFourPointBezier

// Begin ScriptStruct FRigVMMirrorSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMMirrorSettings;
class UScriptStruct* FRigVMMirrorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMMirrorSettings, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMMirrorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMMirrorSettings>()
{
	return FRigVMMirrorSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the axis to mirror against\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "the axis to mirror against" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisToFlip_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the axis to flip for rotations\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "the axis to flip for rotations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchString_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the string to search for\n" },
		{ "DisplayName", "Search" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "the string to search for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceString_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// the string to replace the search occurrences with\n" },
		{ "DisplayName", "Replace" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "the string to replace the search occurrences with" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToFlip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplaceString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMMirrorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMMirrorSettings, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorAxis_MetaData), NewProp_MirrorAxis_MetaData) }; // 342925220
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_AxisToFlip = { "AxisToFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMMirrorSettings, AxisToFlip), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisToFlip_MetaData), NewProp_AxisToFlip_MetaData) }; // 342925220
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_SearchString = { "SearchString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMMirrorSettings, SearchString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchString_MetaData), NewProp_SearchString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_ReplaceString = { "ReplaceString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMMirrorSettings, ReplaceString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplaceString_MetaData), NewProp_ReplaceString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_MirrorAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_AxisToFlip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_SearchString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewProp_ReplaceString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMMirrorSettings",
	Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::PropPointers),
	sizeof(FRigVMMirrorSettings),
	alignof(FRigVMMirrorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMMirrorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMMirrorSettings.InnerSingleton;
}
// End ScriptStruct FRigVMMirrorSettings

// Begin Enum ERigVMSimPointIntegrateType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType;
static UEnum* ERigVMSimPointIntegrateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMSimPointIntegrateType"));
	}
	return Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigVMSimPointIntegrateType>()
{
	return ERigVMSimPointIntegrateType_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "RigVMTypeAllowed", "" },
		{ "SemiExplicitEuler.Name", "ERigVMSimPointIntegrateType::SemiExplicitEuler" },
		{ "Verlet.Name", "ERigVMSimPointIntegrateType::Verlet" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigVMSimPointIntegrateType::Verlet", (int64)ERigVMSimPointIntegrateType::Verlet },
		{ "ERigVMSimPointIntegrateType::SemiExplicitEuler", (int64)ERigVMSimPointIntegrateType::SemiExplicitEuler },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigVMSimPointIntegrateType",
	"ERigVMSimPointIntegrateType",
	Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType()
{
	if (!Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType.InnerSingleton;
}
// End Enum ERigVMSimPointIntegrateType

// Begin ScriptStruct FRigVMSimPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMSimPoint;
class UScriptStruct* FRigVMSimPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMSimPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMSimPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSimPoint, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMSimPoint"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMSimPoint.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMSimPoint>()
{
	return FRigVMSimPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMSimPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The mass of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "The mass of the point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * Size of the point - only used for collision\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "Size of the point - only used for collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The linear damping of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "The linear damping of the point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritMotion_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * Defines how much the point will inherit motion from its input.\n\x09 * This does not have an effect on passive (mass == 0.0) points.\n\x09 * Values can be higher than 1 due to timestep - but they are clamped internally.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "Defines how much the point will inherit motion from its input.\nThis does not have an effect on passive (mass == 0.0) points.\nValues can be higher than 1 due to timestep - but they are clamped internally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The position of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "The position of the point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The velocity of the point per second\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Math/RigVMMathLibrary.h" },
		{ "ToolTip", "The velocity of the point per second" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritMotion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMSimPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMSimPoint, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMSimPoint, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMSimPoint, LinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearDamping_MetaData), NewProp_LinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_InheritMotion = { "InheritMotion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMSimPoint, InheritMotion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritMotion_MetaData), NewProp_InheritMotion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMSimPoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMSimPoint, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_InheritMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewProp_LinearVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMSimPoint",
	Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::PropPointers),
	sizeof(FRigVMSimPoint),
	alignof(FRigVMSimPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMSimPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMSimPoint.InnerSingleton, Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMSimPoint.InnerSingleton;
}
// End ScriptStruct FRigVMSimPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigVMAnimEasingType_StaticEnum, TEXT("ERigVMAnimEasingType"), &Z_Registration_Info_UEnum_ERigVMAnimEasingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3483435321U) },
		{ ERigVMSimPointIntegrateType_StaticEnum, TEXT("ERigVMSimPointIntegrateType"), &Z_Registration_Info_UEnum_ERigVMSimPointIntegrateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 713805871U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFourPointBezier::StaticStruct, Z_Construct_UScriptStruct_FRigVMFourPointBezier_Statics::NewStructOps, TEXT("RigVMFourPointBezier"), &Z_Registration_Info_UScriptStruct_RigVMFourPointBezier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFourPointBezier), 2766953902U) },
		{ FRigVMMirrorSettings::StaticStruct, Z_Construct_UScriptStruct_FRigVMMirrorSettings_Statics::NewStructOps, TEXT("RigVMMirrorSettings"), &Z_Registration_Info_UScriptStruct_RigVMMirrorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMMirrorSettings), 2535337673U) },
		{ FRigVMSimPoint::StaticStruct, Z_Construct_UScriptStruct_FRigVMSimPoint_Statics::NewStructOps, TEXT("RigVMSimPoint"), &Z_Registration_Info_UScriptStruct_RigVMSimPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMSimPoint), 1765622201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_1639189263(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMMathLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
