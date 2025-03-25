// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStructConversionType();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDouble();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterID();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalf();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector2();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector3();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector4();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterMap();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPosition();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRandInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStructConversionStep();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWildcard();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitter();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraWildcard
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraWildcard;
class UScriptStruct* FNiagaraWildcard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraWildcard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraWildcard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraWildcard, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraWildcard"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraWildcard.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraWildcard>()
{
	return FNiagaraWildcard::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraWildcard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// basic type struct definitions\n" },
		{ "DisplayName", "Wildcard" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "basic type struct definitions" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraWildcard>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraWildcard",
	nullptr,
	0,
	sizeof(FNiagaraWildcard),
	alignof(FNiagaraWildcard),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWildcard()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraWildcard.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraWildcard.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraWildcard.InnerSingleton;
}
// End ScriptStruct FNiagaraWildcard

// Begin ScriptStruct FNiagaraFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraFloat;
class UScriptStruct* FNiagaraFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFloat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraFloat"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraFloat.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraFloat>()
{
	return FNiagaraFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "float" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraFloat, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraFloat",
	Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers),
	sizeof(FNiagaraFloat),
	alignof(FNiagaraFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraFloat.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraFloat.InnerSingleton;
}
// End ScriptStruct FNiagaraFloat

// Begin ScriptStruct FNiagaraInt32
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraInt32;
class UScriptStruct* FNiagaraInt32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInt32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraInt32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInt32, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInt32"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInt32.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInt32>()
{
	return FNiagaraInt32::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraInt32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "int32" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInt32>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraInt32, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInt32_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraInt32",
	Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers),
	sizeof(FNiagaraInt32),
	alignof(FNiagaraInt32),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInt32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraInt32.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraInt32_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInt32.InnerSingleton;
}
// End ScriptStruct FNiagaraInt32

// Begin ScriptStruct FNiagaraBool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBool;
class UScriptStruct* FNiagaraBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBool, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBool"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBool.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBool>()
{
	return FNiagaraBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "bool" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Must be either FNiagaraBool::True or FNiagaraBool::False.\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Must be either FNiagaraBool::True or FNiagaraBool::False." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraBool, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraBool",
	Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers),
	sizeof(FNiagaraBool),
	alignof(FNiagaraBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBool.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBool.InnerSingleton;
}
// End ScriptStruct FNiagaraBool

// Begin ScriptStruct FNiagaraPosition
static_assert(std::is_polymorphic<FNiagaraPosition>() == std::is_polymorphic<FVector3f>(), "USTRUCT FNiagaraPosition cannot be polymorphic unless super FVector3f is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPosition;
class UScriptStruct* FNiagaraPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPosition, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPosition"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPosition.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPosition>()
{
	return FNiagaraPosition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Position" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPosition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPosition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FVector3f,
	&NewStructOps,
	"NiagaraPosition",
	nullptr,
	0,
	sizeof(FNiagaraPosition),
	alignof(FNiagaraPosition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000011),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPosition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraPosition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPosition()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPosition.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPosition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPosition.InnerSingleton;
}
// End ScriptStruct FNiagaraPosition

// Begin ScriptStruct FNiagaraHalf
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHalf;
class UScriptStruct* FNiagaraHalf::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalf.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHalf.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalf, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalf"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalf.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalf>()
{
	return FNiagaraHalf::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraHalf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Half" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalf>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalf, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalf_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraHalf",
	Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers),
	sizeof(FNiagaraHalf),
	alignof(FNiagaraHalf),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraHalf_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalf()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalf.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHalf.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHalf_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalf.InnerSingleton;
}
// End ScriptStruct FNiagaraHalf

// Begin ScriptStruct FNiagaraHalfVector2
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHalfVector2;
class UScriptStruct* FNiagaraHalfVector2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector2, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector2"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector2>()
{
	return FNiagaraHalfVector2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector2" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_x;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector2, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector2, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraHalfVector2",
	Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers),
	sizeof(FNiagaraHalfVector2),
	alignof(FNiagaraHalfVector2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector2()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.InnerSingleton;
}
// End ScriptStruct FNiagaraHalfVector2

// Begin ScriptStruct FNiagaraHalfVector3
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHalfVector3;
class UScriptStruct* FNiagaraHalfVector3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector3, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector3"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector3>()
{
	return FNiagaraHalfVector3::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector3" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_x;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_y;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector3>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector3, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector3, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector3, z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_z_MetaData), NewProp_z_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraHalfVector3",
	Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers),
	sizeof(FNiagaraHalfVector3),
	alignof(FNiagaraHalfVector3),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector3()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.InnerSingleton;
}
// End ScriptStruct FNiagaraHalfVector3

// Begin ScriptStruct FNiagaraHalfVector4
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHalfVector4;
class UScriptStruct* FNiagaraHalfVector4::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector4, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector4"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector4>()
{
	return FNiagaraHalfVector4::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector4" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_x;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_y;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_z;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_w;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector4>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector4, x), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_x_MetaData), NewProp_x_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector4, y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_y_MetaData), NewProp_y_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector4, z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_z_MetaData), NewProp_z_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraHalfVector4, w), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_w_MetaData), NewProp_w_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraHalfVector4",
	Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers),
	sizeof(FNiagaraHalfVector4),
	alignof(FNiagaraHalfVector4),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector4()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.InnerSingleton;
}
// End ScriptStruct FNiagaraHalfVector4

// Begin ScriptStruct FNiagaraNumeric
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraNumeric;
class UScriptStruct* FNiagaraNumeric::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraNumeric.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraNumeric.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraNumeric, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraNumeric"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraNumeric.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraNumeric>()
{
	return FNiagaraNumeric::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraNumeric_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraNumeric>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraNumeric",
	nullptr,
	0,
	sizeof(FNiagaraNumeric),
	alignof(FNiagaraNumeric),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraNumeric.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraNumeric.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraNumeric.InnerSingleton;
}
// End ScriptStruct FNiagaraNumeric

// Begin ScriptStruct FNiagaraParameterMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterMap;
class UScriptStruct* FNiagaraParameterMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterMap, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterMap"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterMap.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterMap>()
{
	return FNiagaraParameterMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraParameterMap",
	nullptr,
	0,
	sizeof(FNiagaraParameterMap),
	alignof(FNiagaraParameterMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterMap()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterMap.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterMap.InnerSingleton;
}
// End ScriptStruct FNiagaraParameterMap

// Begin ScriptStruct FNiagaraDouble
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDouble;
class UScriptStruct* FNiagaraDouble::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDouble.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDouble.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDouble, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDouble"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDouble.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDouble>()
{
	return FNiagaraDouble::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDouble_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// only used for LWC conversions, not supported by Niagara yet\n" },
		{ "DisplayName", "double" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "only used for LWC conversions, not supported by Niagara yet" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDouble>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDouble, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDouble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDouble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDouble_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDouble",
	Z_Construct_UScriptStruct_FNiagaraDouble_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDouble_Statics::PropPointers),
	sizeof(FNiagaraDouble),
	alignof(FNiagaraDouble),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDouble_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDouble_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDouble()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDouble.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDouble.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDouble_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDouble.InnerSingleton;
}
// End ScriptStruct FNiagaraDouble

// Begin ScriptStruct FNiagaraMatrix
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMatrix;
class UScriptStruct* FNiagaraMatrix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMatrix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMatrix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMatrix, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMatrix"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMatrix.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMatrix>()
{
	return FNiagaraMatrix::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraMatrix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Matrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row0_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row2_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row3_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMatrix>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0 = { "Row0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMatrix, Row0), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row0_MetaData), NewProp_Row0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMatrix, Row1), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row1_MetaData), NewProp_Row1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2 = { "Row2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMatrix, Row2), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row2_MetaData), NewProp_Row2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3 = { "Row3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMatrix, Row3), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row3_MetaData), NewProp_Row3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraMatrix",
	Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers),
	sizeof(FNiagaraMatrix),
	alignof(FNiagaraMatrix),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMatrix.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMatrix.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMatrix.InnerSingleton;
}
// End ScriptStruct FNiagaraMatrix

// Begin ScriptStruct FNiagaraEmitterID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterID;
class UScriptStruct* FNiagaraEmitterID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterID, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterID"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterID.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterID>()
{
	return FNiagaraEmitterID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "EmitterID" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterID, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEmitterID",
	Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::PropPointers),
	sizeof(FNiagaraEmitterID),
	alignof(FNiagaraEmitterID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterID()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterID.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterID.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterID

// Begin ScriptStruct FNiagaraAssetVersion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraAssetVersion;
class UScriptStruct* FNiagaraAssetVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAssetVersion, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraAssetVersion"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraAssetVersion>()
{
	return FNiagaraAssetVersion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MajorVersion_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The major version is used to track breaking changes between asset versions */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The major version is used to track breaking changes between asset versions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinorVersion_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The minor version is used to track non-breaking changes between asset versions */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The minor version is used to track non-breaking changes between asset versions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionGuid_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The guid is used to keep track of specific asset version references. The minor and major versions do not provide enough uniqueness to guard against collisions when e.g. the same version was created in different branches. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The guid is used to keep track of specific asset version references. The minor and major versions do not provide enough uniqueness to guard against collisions when e.g. the same version was created in different branches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisibleInVersionSelector_MetaData[] = {
		{ "Comment", "/** If false then this version is not visible in the version selector dropdown menu of the stack. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If false then this version is not visible in the version selector dropdown menu of the stack." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MajorVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinorVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionGuid;
	static void NewProp_bIsVisibleInVersionSelector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisibleInVersionSelector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraAssetVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion = { "MajorVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetVersion, MajorVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MajorVersion_MetaData), NewProp_MajorVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion = { "MinorVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetVersion, MinorVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinorVersion_MetaData), NewProp_MinorVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid = { "VersionGuid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraAssetVersion, VersionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionGuid_MetaData), NewProp_VersionGuid_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_SetBit(void* Obj)
{
	((FNiagaraAssetVersion*)Obj)->bIsVisibleInVersionSelector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector = { "bIsVisibleInVersionSelector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraAssetVersion), &Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisibleInVersionSelector_MetaData), NewProp_bIsVisibleInVersionSelector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraAssetVersion",
	Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers),
	sizeof(FNiagaraAssetVersion),
	alignof(FNiagaraAssetVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.InnerSingleton;
}
// End ScriptStruct FNiagaraAssetVersion

// Begin Enum ENiagaraStructConversionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStructConversionType;
static UEnum* ENiagaraStructConversionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStructConversionType"));
	}
	return Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStructConversionType>()
{
	return ENiagaraStructConversionType_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CopyOnly.Name", "ENiagaraStructConversionType::CopyOnly" },
		{ "DoubleToFloat.Comment", "// no conversion, just copy the data\n" },
		{ "DoubleToFloat.Name", "ENiagaraStructConversionType::DoubleToFloat" },
		{ "DoubleToFloat.ToolTip", "no conversion, just copy the data" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "Quat.Name", "ENiagaraStructConversionType::Quat" },
		{ "Vector2.Name", "ENiagaraStructConversionType::Vector2" },
		{ "Vector3.Name", "ENiagaraStructConversionType::Vector3" },
		{ "Vector4.Name", "ENiagaraStructConversionType::Vector4" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraStructConversionType::CopyOnly", (int64)ENiagaraStructConversionType::CopyOnly },
		{ "ENiagaraStructConversionType::DoubleToFloat", (int64)ENiagaraStructConversionType::DoubleToFloat },
		{ "ENiagaraStructConversionType::Vector2", (int64)ENiagaraStructConversionType::Vector2 },
		{ "ENiagaraStructConversionType::Vector3", (int64)ENiagaraStructConversionType::Vector3 },
		{ "ENiagaraStructConversionType::Vector4", (int64)ENiagaraStructConversionType::Vector4 },
		{ "ENiagaraStructConversionType::Quat", (int64)ENiagaraStructConversionType::Quat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraStructConversionType",
	"ENiagaraStructConversionType",
	Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraStructConversionType()
{
	if (!Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton;
}
// End Enum ENiagaraStructConversionType

// Begin ScriptStruct FNiagaraStructConversionStep
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep;
class UScriptStruct* FNiagaraStructConversionStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStructConversionStep, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraStructConversionStep"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraStructConversionStep>()
{
	return FNiagaraStructConversionStep::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LWCBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LWCOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LWCBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LWCOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SimulationBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SimulationOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConversionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStructConversionStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCBytes = { "LWCBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStructConversionStep, LWCBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LWCBytes_MetaData), NewProp_LWCBytes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCOffset = { "LWCOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStructConversionStep, LWCOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LWCOffset_MetaData), NewProp_LWCOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationBytes = { "SimulationBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStructConversionStep, SimulationBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationBytes_MetaData), NewProp_SimulationBytes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationOffset = { "SimulationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStructConversionStep, SimulationOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationOffset_MetaData), NewProp_SimulationOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType = { "ConversionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraStructConversionStep, ConversionType), Z_Construct_UEnum_Niagara_ENiagaraStructConversionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionType_MetaData), NewProp_ConversionType_MetaData) }; // 634651622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraStructConversionStep",
	Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::PropPointers),
	sizeof(FNiagaraStructConversionStep),
	alignof(FNiagaraStructConversionStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStructConversionStep()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.InnerSingleton;
}
// End ScriptStruct FNiagaraStructConversionStep

// Begin ScriptStruct FNiagaraLwcStructConverter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter;
class UScriptStruct* FNiagaraLwcStructConverter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraLwcStructConverter"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraLwcStructConverter>()
{
	return FNiagaraLwcStructConverter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Can convert struct data from custom structs containing LWC data such as FVector3d into struct data suitable for Niagara simulations and vice versa. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Can convert struct data from custom structs containing LWC data such as FVector3d into struct data suitable for Niagara simulations and vice versa." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LWCSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SWCSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSteps_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LWCSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SWCSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSteps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConversionSteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraLwcStructConverter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_LWCSize = { "LWCSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraLwcStructConverter, LWCSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LWCSize_MetaData), NewProp_LWCSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_SWCSize = { "SWCSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraLwcStructConverter, SWCSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SWCSize_MetaData), NewProp_SWCSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps_Inner = { "ConversionSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraStructConversionStep, METADATA_PARAMS(0, nullptr) }; // 3386431474
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps = { "ConversionSteps", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraLwcStructConverter, ConversionSteps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversionSteps_MetaData), NewProp_ConversionSteps_MetaData) }; // 3386431474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_LWCSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_SWCSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraLwcStructConverter",
	Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::PropPointers),
	sizeof(FNiagaraLwcStructConverter),
	alignof(FNiagaraLwcStructConverter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.InnerSingleton;
}
// End ScriptStruct FNiagaraLwcStructConverter

// Begin ScriptStruct FNiagaraSpawnInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo;
class UScriptStruct* FNiagaraSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSpawnInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSpawnInfo>()
{
	return FNiagaraSpawnInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data controlling the spawning of particles */" },
		{ "DisplayName", "Spawn Info" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraClearEachFrame", "true" },
		{ "ToolTip", "Data controlling the spawning of particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** How many particles to spawn. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "How many particles to spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpStartDt_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** The sub frame delta time at which to spawn the first particle. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The sub frame delta time at which to spawn the first particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntervalDt_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** The sub frame delta time between each particle. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The sub frame delta time between each particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroup_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/**\n\x09 * An integer used to identify this spawn info.\n\x09 * Typically this is unused.\n\x09 * An example usage is when using multiple spawn modules to spawn from multiple discreet locations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "An integer used to identify this spawn info.\nTypically this is unused.\nAn example usage is when using multiple spawn modules to spawn from multiple discreet locations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpStartDt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntervalDt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSpawnInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt = { "InterpStartDt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, InterpStartDt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpStartDt_MetaData), NewProp_InterpStartDt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt = { "IntervalDt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, IntervalDt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntervalDt_MetaData), NewProp_IntervalDt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup = { "SpawnGroup", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSpawnInfo, SpawnGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnGroup_MetaData), NewProp_SpawnGroup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSpawnInfo",
	Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers),
	sizeof(FNiagaraSpawnInfo),
	alignof(FNiagaraSpawnInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraSpawnInfo

// Begin ScriptStruct FNiagaraID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraID;
class UScriptStruct* FNiagaraID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraID, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraID"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraID.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraID>()
{
	return FNiagaraID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Niagara ID" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "ID" },
		{ "Comment", "/** \n\x09Index in the indirection table for this particle. Allows fast access to this particles data.\n\x09Is always unique among currently living particles but will be reused after the particle dies.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Index in the indirection table for this particle. Allows fast access to this particles data.\nIs always unique among currently living particles but will be reused after the particle dies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcquireTag_MetaData[] = {
		{ "Category", "ID" },
		{ "Comment", "/** \n\x09""A unique tag for when this ID was acquired. \n\x09""Allows us to differentiate between particles when one dies and another reuses it's Index.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "A unique tag for when this ID was acquired.\nAllows us to differentiate between particles when one dies and another reuses it's Index." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AcquireTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraID, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag = { "AcquireTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraID, AcquireTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcquireTag_MetaData), NewProp_AcquireTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraID",
	Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers),
	sizeof(FNiagaraID),
	alignof(FNiagaraID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraID.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraID.InnerSingleton;
}
// End ScriptStruct FNiagaraID

// Begin ScriptStruct FNiagaraRandInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRandInfo;
class UScriptStruct* FNiagaraRandInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRandInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRandInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRandInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRandInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRandInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRandInfo>()
{
	return FNiagaraRandInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed1_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed2_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed3_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRandInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1 = { "Seed1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed1_MetaData), NewProp_Seed1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2 = { "Seed2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed2_MetaData), NewProp_Seed2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3 = { "Seed3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRandInfo, Seed3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed3_MetaData), NewProp_Seed3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraRandInfo",
	Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers),
	sizeof(FNiagaraRandInfo),
	alignof(FNiagaraRandInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRandInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRandInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRandInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRandInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraRandInfo

// Begin ScriptStruct FNiagaraTypeLayoutInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo;
class UScriptStruct* FNiagaraTypeLayoutInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeLayoutInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeLayoutInfo>()
{
	return FNiagaraTypeLayoutInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about how this type should be laid out in an FNiagaraDataSet */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Information about how this type should be laid out in an FNiagaraDataSet" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFloatComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInt32Components_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHalfComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumFloatComponents;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumInt32Components;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumHalfComponents;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ComponentsOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeLayoutInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_NumFloatComponents = { "NumFloatComponents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, NumFloatComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFloatComponents_MetaData), NewProp_NumFloatComponents_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_NumInt32Components = { "NumInt32Components", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, NumInt32Components), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInt32Components_MetaData), NewProp_NumInt32Components_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_NumHalfComponents = { "NumHalfComponents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, NumHalfComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHalfComponents_MetaData), NewProp_NumHalfComponents_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_ComponentsOffsets_Inner = { "ComponentsOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_ComponentsOffsets = { "ComponentsOffsets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, ComponentsOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentsOffsets_MetaData), NewProp_ComponentsOffsets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_NumFloatComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_NumInt32Components,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_NumHalfComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_ComponentsOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_ComponentsOffsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraTypeLayoutInfo",
	Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers),
	sizeof(FNiagaraTypeLayoutInfo),
	alignof(FNiagaraTypeLayoutInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraTypeLayoutInfo

// Begin Enum ENiagaraNumericOutputTypeSelectionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode;
static UEnum* ENiagaraNumericOutputTypeSelectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraNumericOutputTypeSelectionMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraNumericOutputTypeSelectionMode>()
{
	return ENiagaraNumericOutputTypeSelectionMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines different modes for selecting the output numeric type of a function or operation based on the types of the inputs. */" },
		{ "Custom.Comment", "/** Selects the type based on custom logic from the node. */" },
		{ "Custom.Name", "ENiagaraNumericOutputTypeSelectionMode::Custom" },
		{ "Custom.ToolTip", "Selects the type based on custom logic from the node." },
		{ "Largest.Comment", "/** Select the largest of the numeric inputs. */" },
		{ "Largest.Name", "ENiagaraNumericOutputTypeSelectionMode::Largest" },
		{ "Largest.ToolTip", "Select the largest of the numeric inputs." },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "None.Comment", "/** Output type selection not supported. */" },
		{ "None.Hidden", "" },
		{ "None.Name", "ENiagaraNumericOutputTypeSelectionMode::None" },
		{ "None.ToolTip", "Output type selection not supported." },
		{ "Scalar.Comment", "/** Selects the base scalar type for this numeric inputs. */" },
		{ "Scalar.Name", "ENiagaraNumericOutputTypeSelectionMode::Scalar" },
		{ "Scalar.ToolTip", "Selects the base scalar type for this numeric inputs." },
		{ "Smallest.Comment", "/** Select the smallest of the numeric inputs. */" },
		{ "Smallest.Name", "ENiagaraNumericOutputTypeSelectionMode::Smallest" },
		{ "Smallest.ToolTip", "Select the smallest of the numeric inputs." },
		{ "ToolTip", "Defines different modes for selecting the output numeric type of a function or operation based on the types of the inputs." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraNumericOutputTypeSelectionMode::None", (int64)ENiagaraNumericOutputTypeSelectionMode::None },
		{ "ENiagaraNumericOutputTypeSelectionMode::Largest", (int64)ENiagaraNumericOutputTypeSelectionMode::Largest },
		{ "ENiagaraNumericOutputTypeSelectionMode::Smallest", (int64)ENiagaraNumericOutputTypeSelectionMode::Smallest },
		{ "ENiagaraNumericOutputTypeSelectionMode::Scalar", (int64)ENiagaraNumericOutputTypeSelectionMode::Scalar },
		{ "ENiagaraNumericOutputTypeSelectionMode::Custom", (int64)ENiagaraNumericOutputTypeSelectionMode::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraNumericOutputTypeSelectionMode",
	"ENiagaraNumericOutputTypeSelectionMode",
	Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton;
}
// End Enum ENiagaraNumericOutputTypeSelectionMode

// Begin Enum ENiagaraExecutionStateSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraExecutionStateSource;
static UEnum* ENiagaraExecutionStateSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraExecutionStateSource"));
	}
	return Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraExecutionStateSource>()
{
	return ENiagaraExecutionStateSource_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** \nThe source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence. \nIf this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion\n*/" },
		{ "Internal.Comment", "/** Misc internal state. For example becoming inactive after we finish our set loops. */" },
		{ "Internal.Name", "ENiagaraExecutionStateSource::Internal" },
		{ "Internal.ToolTip", "Misc internal state. For example becoming inactive after we finish our set loops." },
		{ "InternalCompletion.Comment", "/** Internal completion logic. Has to take highest precedence for completion to be ensured. */" },
		{ "InternalCompletion.Name", "ENiagaraExecutionStateSource::InternalCompletion" },
		{ "InternalCompletion.ToolTip", "Internal completion logic. Has to take highest precedence for completion to be ensured." },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "Owner.Comment", "/** State requested by the owner. Takes precedence over everything but internal completion logic. */" },
		{ "Owner.Name", "ENiagaraExecutionStateSource::Owner" },
		{ "Owner.ToolTip", "State requested by the owner. Takes precedence over everything but internal completion logic." },
		{ "Scalability.Comment", "/** State set by Scalability logic. Lowest precedence. */" },
		{ "Scalability.Name", "ENiagaraExecutionStateSource::Scalability" },
		{ "Scalability.ToolTip", "State set by Scalability logic. Lowest precedence." },
		{ "ToolTip", "The source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence.\nIf this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraExecutionStateSource::Scalability", (int64)ENiagaraExecutionStateSource::Scalability },
		{ "ENiagaraExecutionStateSource::Internal", (int64)ENiagaraExecutionStateSource::Internal },
		{ "ENiagaraExecutionStateSource::Owner", (int64)ENiagaraExecutionStateSource::Owner },
		{ "ENiagaraExecutionStateSource::InternalCompletion", (int64)ENiagaraExecutionStateSource::InternalCompletion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraExecutionStateSource",
	"ENiagaraExecutionStateSource",
	Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource()
{
	if (!Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton;
}
// End Enum ENiagaraExecutionStateSource

// Begin Enum ENiagaraExecutionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraExecutionState;
static UEnum* ENiagaraExecutionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraExecutionState"));
	}
	return Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraExecutionState>()
{
	return ENiagaraExecutionState_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Comment", "/**  Run all scripts. Allow spawning.*/" },
		{ "Active.Name", "ENiagaraExecutionState::Active" },
		{ "Active.ToolTip", "Run all scripts. Allow spawning." },
		{ "Complete.Comment", "/** Complete. When the system or all emitters are complete the effect is considered finished. */" },
		{ "Complete.Name", "ENiagaraExecutionState::Complete" },
		{ "Complete.ToolTip", "Complete. When the system or all emitters are complete the effect is considered finished." },
		{ "Disabled.Comment", "/** Emitter only. Emitter is disabled. Will not tick or render again until a full re initialization of the system. */" },
		{ "Disabled.Hidden", "" },
		{ "Disabled.Name", "ENiagaraExecutionState::Disabled" },
		{ "Disabled.ToolTip", "Emitter only. Emitter is disabled. Will not tick or render again until a full re initialization of the system." },
		{ "Inactive.Comment", "/** Run all scripts but suppress any new spawning.*/" },
		{ "Inactive.Name", "ENiagaraExecutionState::Inactive" },
		{ "Inactive.ToolTip", "Run all scripts but suppress any new spawning." },
		{ "InactiveClear.Comment", "/** Clear all existing particles and move to inactive.*/" },
		{ "InactiveClear.Name", "ENiagaraExecutionState::InactiveClear" },
		{ "InactiveClear.ToolTip", "Clear all existing particles and move to inactive." },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "Num.Comment", "// insert new states before\n" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "ENiagaraExecutionState::Num" },
		{ "Num.ToolTip", "insert new states before" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraExecutionState::Active", (int64)ENiagaraExecutionState::Active },
		{ "ENiagaraExecutionState::Inactive", (int64)ENiagaraExecutionState::Inactive },
		{ "ENiagaraExecutionState::InactiveClear", (int64)ENiagaraExecutionState::InactiveClear },
		{ "ENiagaraExecutionState::Complete", (int64)ENiagaraExecutionState::Complete },
		{ "ENiagaraExecutionState::Disabled", (int64)ENiagaraExecutionState::Disabled },
		{ "ENiagaraExecutionState::Num", (int64)ENiagaraExecutionState::Num },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraExecutionState",
	"ENiagaraExecutionState",
	Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState()
{
	if (!Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton;
}
// End Enum ENiagaraExecutionState

// Begin Enum ENiagaraCoordinateSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCoordinateSpace;
static UEnum* ENiagaraCoordinateSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCoordinateSpace"));
	}
	return Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCoordinateSpace>()
{
	return ENiagaraCoordinateSpace_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Local.Comment", "/** Use the local coordinate space*/" },
		{ "Local.Name", "ENiagaraCoordinateSpace::Local" },
		{ "Local.ToolTip", "Use the local coordinate space" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "Simulation.Comment", "/** Use the coordinate space specified by the Emitter*/" },
		{ "Simulation.Name", "ENiagaraCoordinateSpace::Simulation" },
		{ "Simulation.ToolTip", "Use the coordinate space specified by the Emitter" },
		{ "World.Comment", "/** Use the world coordinate space*/" },
		{ "World.Name", "ENiagaraCoordinateSpace::World" },
		{ "World.ToolTip", "Use the world coordinate space" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraCoordinateSpace::Simulation", (int64)ENiagaraCoordinateSpace::Simulation },
		{ "ENiagaraCoordinateSpace::World", (int64)ENiagaraCoordinateSpace::World },
		{ "ENiagaraCoordinateSpace::Local", (int64)ENiagaraCoordinateSpace::Local },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraCoordinateSpace",
	"ENiagaraCoordinateSpace",
	Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton;
}
// End Enum ENiagaraCoordinateSpace

// Begin Enum ENiagaraPythonUpdateScriptReference
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference;
static UEnum* ENiagaraPythonUpdateScriptReference_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPythonUpdateScriptReference"));
	}
	return Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPythonUpdateScriptReference>()
{
	return ENiagaraPythonUpdateScriptReference_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DirectTextEntry.Name", "ENiagaraPythonUpdateScriptReference::DirectTextEntry" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "None.Name", "ENiagaraPythonUpdateScriptReference::None" },
		{ "ScriptAsset.Name", "ENiagaraPythonUpdateScriptReference::ScriptAsset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraPythonUpdateScriptReference::None", (int64)ENiagaraPythonUpdateScriptReference::None },
		{ "ENiagaraPythonUpdateScriptReference::ScriptAsset", (int64)ENiagaraPythonUpdateScriptReference::ScriptAsset },
		{ "ENiagaraPythonUpdateScriptReference::DirectTextEntry", (int64)ENiagaraPythonUpdateScriptReference::DirectTextEntry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraPythonUpdateScriptReference",
	"ENiagaraPythonUpdateScriptReference",
	Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference()
{
	if (!Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton;
}
// End Enum ENiagaraPythonUpdateScriptReference

// Begin Enum ENiagaraOrientationAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraOrientationAxis;
static UEnum* ENiagaraOrientationAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraOrientationAxis"));
	}
	return Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraOrientationAxis>()
{
	return ENiagaraOrientationAxis_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "XAxis.DisplayName", "X Axis" },
		{ "XAxis.Name", "ENiagaraOrientationAxis::XAxis" },
		{ "YAxis.DisplayName", "Y Axis" },
		{ "YAxis.Name", "ENiagaraOrientationAxis::YAxis" },
		{ "ZAxis.DisplayName", "Z Axis" },
		{ "ZAxis.Name", "ENiagaraOrientationAxis::ZAxis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraOrientationAxis::XAxis", (int64)ENiagaraOrientationAxis::XAxis },
		{ "ENiagaraOrientationAxis::YAxis", (int64)ENiagaraOrientationAxis::YAxis },
		{ "ENiagaraOrientationAxis::ZAxis", (int64)ENiagaraOrientationAxis::ZAxis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraOrientationAxis",
	"ENiagaraOrientationAxis",
	Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis()
{
	if (!Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton;
}
// End Enum ENiagaraOrientationAxis

// Begin ScriptStruct FNiagaraTypeDefinition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition;
class UScriptStruct* FNiagaraTypeDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinition, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeDefinition>()
{
	return FNiagaraTypeDefinition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassStructOrEnum_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/*\n\x09Underlying type for this variable, use FUnderlyingType to determine type without casting\n\x09This can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc.\n\x09In occasional situations this may be a UClass when we're dealing with DataInterface etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Underlying type for this variable, use FUnderlyingType to determine type without casting\nThis can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc.\nIn occasional situations this may be a UClass when we're dealing with DataInterface etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "// See enumeration FUnderlyingType for possible values\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "See enumeration FUnderlyingType for possible values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClassStructOrEnum;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_UnderlyingType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enum;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum = { "ClassStructOrEnum", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, ClassStructOrEnum), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassStructOrEnum_MetaData), NewProp_ClassStructOrEnum_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType = { "UnderlyingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, UnderlyingType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnderlyingType_MetaData), NewProp_UnderlyingType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, Flags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, Struct_DEPRECATED), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeDefinition, Enum_DEPRECATED), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enum_MetaData), NewProp_Enum_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Flags,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraTypeDefinition",
	Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers),
	sizeof(FNiagaraTypeDefinition),
	alignof(FNiagaraTypeDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.InnerSingleton;
}
// End ScriptStruct FNiagaraTypeDefinition

// Begin ScriptStruct FNiagaraTypeDefinitionHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle;
class UScriptStruct* FNiagaraTypeDefinitionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeDefinitionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeDefinitionHandle>()
{
	return FNiagaraTypeDefinitionHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredTypeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegisteredTypeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeDefinitionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex = { "RegisteredTypeIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraTypeDefinitionHandle, RegisteredTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredTypeIndex_MetaData), NewProp_RegisteredTypeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraTypeDefinitionHandle",
	Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers),
	sizeof(FNiagaraTypeDefinitionHandle),
	alignof(FNiagaraTypeDefinitionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.InnerSingleton;
}
// End ScriptStruct FNiagaraTypeDefinitionHandle

// Begin ScriptStruct FNiagaraVariableBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableBase;
class UScriptStruct* FNiagaraVariableBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableBase, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableBase"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableBase.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableBase>()
{
	return FNiagaraVariableBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeDefHandle_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeDef_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeDefHandle;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TypeDef;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableBase, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle = { "TypeDefHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableBase, TypeDefHandle), Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeDefHandle_MetaData), NewProp_TypeDefHandle_MetaData) }; // 3891610982
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef = { "TypeDef", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariableBase, TypeDef_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeDef_MetaData), NewProp_TypeDef_MetaData) }; // 3904496483
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraVariableBase",
	Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers),
	sizeof(FNiagaraVariableBase),
	alignof(FNiagaraVariableBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableBase.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableBase.InnerSingleton;
}
// End ScriptStruct FNiagaraVariableBase

// Begin ScriptStruct FNiagaraVariable
static_assert(std::is_polymorphic<FNiagaraVariable>() == std::is_polymorphic<FNiagaraVariableBase>(), "USTRUCT FNiagaraVariable cannot be polymorphic unless super FNiagaraVariableBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariable;
class UScriptStruct* FNiagaraVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariable, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariable"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariable.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariable>()
{
	return FNiagaraVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarData_MetaData[] = {
		{ "Comment", "//This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled?\n//TODO: Remove storage here entirely and move everything to an FNiagaraParameterStore.\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled?\nTODO: Remove storage here entirely and move everything to an FNiagaraParameterStore." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_VarData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VarData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_Inner = { "VarData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData = { "VarData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraVariable, VarData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarData_MetaData), NewProp_VarData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraVariableBase,
	&NewStructOps,
	"NiagaraVariable",
	Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers),
	sizeof(FNiagaraVariable),
	alignof(FNiagaraVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariable.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariable.InnerSingleton;
}
// End ScriptStruct FNiagaraVariable

// Begin ScriptStruct FVersionedNiagaraEmitter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter;
class UScriptStruct* FVersionedNiagaraEmitter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("VersionedNiagaraEmitter"));
	}
	return Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVersionedNiagaraEmitter>()
{
	return FVersionedNiagaraEmitter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct combining an emitter with a specific version.*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Struct combining an emitter with a specific version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Emitter_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Emitter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersionedNiagaraEmitter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Emitter = { "Emitter", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitter, Emitter), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Emitter_MetaData), NewProp_Emitter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionedNiagaraEmitter, Version), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Emitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"VersionedNiagaraEmitter",
	Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::PropPointers),
	sizeof(FVersionedNiagaraEmitter),
	alignof(FVersionedNiagaraEmitter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitter()
{
	if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.InnerSingleton, Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.InnerSingleton;
}
// End ScriptStruct FVersionedNiagaraEmitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraStructConversionType_StaticEnum, TEXT("ENiagaraStructConversionType"), &Z_Registration_Info_UEnum_ENiagaraStructConversionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 634651622U) },
		{ ENiagaraNumericOutputTypeSelectionMode_StaticEnum, TEXT("ENiagaraNumericOutputTypeSelectionMode"), &Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1381706057U) },
		{ ENiagaraExecutionStateSource_StaticEnum, TEXT("ENiagaraExecutionStateSource"), &Z_Registration_Info_UEnum_ENiagaraExecutionStateSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1760584597U) },
		{ ENiagaraExecutionState_StaticEnum, TEXT("ENiagaraExecutionState"), &Z_Registration_Info_UEnum_ENiagaraExecutionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1650936255U) },
		{ ENiagaraCoordinateSpace_StaticEnum, TEXT("ENiagaraCoordinateSpace"), &Z_Registration_Info_UEnum_ENiagaraCoordinateSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1588285965U) },
		{ ENiagaraPythonUpdateScriptReference_StaticEnum, TEXT("ENiagaraPythonUpdateScriptReference"), &Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3904598484U) },
		{ ENiagaraOrientationAxis_StaticEnum, TEXT("ENiagaraOrientationAxis"), &Z_Registration_Info_UEnum_ENiagaraOrientationAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4243756277U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraWildcard::StaticStruct, Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::NewStructOps, TEXT("NiagaraWildcard"), &Z_Registration_Info_UScriptStruct_NiagaraWildcard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraWildcard), 2325549383U) },
		{ FNiagaraFloat::StaticStruct, Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewStructOps, TEXT("NiagaraFloat"), &Z_Registration_Info_UScriptStruct_NiagaraFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraFloat), 797667594U) },
		{ FNiagaraInt32::StaticStruct, Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewStructOps, TEXT("NiagaraInt32"), &Z_Registration_Info_UScriptStruct_NiagaraInt32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraInt32), 1627266156U) },
		{ FNiagaraBool::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewStructOps, TEXT("NiagaraBool"), &Z_Registration_Info_UScriptStruct_NiagaraBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBool), 3671842851U) },
		{ FNiagaraPosition::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPosition_Statics::NewStructOps, TEXT("NiagaraPosition"), &Z_Registration_Info_UScriptStruct_NiagaraPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPosition), 1561759608U) },
		{ FNiagaraHalf::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewStructOps, TEXT("NiagaraHalf"), &Z_Registration_Info_UScriptStruct_NiagaraHalf, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHalf), 2324021665U) },
		{ FNiagaraHalfVector2::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewStructOps, TEXT("NiagaraHalfVector2"), &Z_Registration_Info_UScriptStruct_NiagaraHalfVector2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHalfVector2), 1511758676U) },
		{ FNiagaraHalfVector3::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewStructOps, TEXT("NiagaraHalfVector3"), &Z_Registration_Info_UScriptStruct_NiagaraHalfVector3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHalfVector3), 1603685172U) },
		{ FNiagaraHalfVector4::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewStructOps, TEXT("NiagaraHalfVector4"), &Z_Registration_Info_UScriptStruct_NiagaraHalfVector4, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHalfVector4), 2597194093U) },
		{ FNiagaraNumeric::StaticStruct, Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::NewStructOps, TEXT("NiagaraNumeric"), &Z_Registration_Info_UScriptStruct_NiagaraNumeric, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraNumeric), 191486400U) },
		{ FNiagaraParameterMap::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::NewStructOps, TEXT("NiagaraParameterMap"), &Z_Registration_Info_UScriptStruct_NiagaraParameterMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterMap), 1535537635U) },
		{ FNiagaraDouble::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewStructOps, TEXT("NiagaraDouble"), &Z_Registration_Info_UScriptStruct_NiagaraDouble, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDouble), 1726535236U) },
		{ FNiagaraMatrix::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewStructOps, TEXT("NiagaraMatrix"), &Z_Registration_Info_UScriptStruct_NiagaraMatrix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMatrix), 4050939365U) },
		{ FNiagaraEmitterID::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::NewStructOps, TEXT("NiagaraEmitterID"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterID), 2240107315U) },
		{ FNiagaraAssetVersion::StaticStruct, Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewStructOps, TEXT("NiagaraAssetVersion"), &Z_Registration_Info_UScriptStruct_NiagaraAssetVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraAssetVersion), 1747924701U) },
		{ FNiagaraStructConversionStep::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewStructOps, TEXT("NiagaraStructConversionStep"), &Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStructConversionStep), 3386431474U) },
		{ FNiagaraLwcStructConverter::StaticStruct, Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewStructOps, TEXT("NiagaraLwcStructConverter"), &Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraLwcStructConverter), 2532603979U) },
		{ FNiagaraSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewStructOps, TEXT("NiagaraSpawnInfo"), &Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSpawnInfo), 3526298124U) },
		{ FNiagaraID::StaticStruct, Z_Construct_UScriptStruct_FNiagaraID_Statics::NewStructOps, TEXT("NiagaraID"), &Z_Registration_Info_UScriptStruct_NiagaraID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraID), 978329198U) },
		{ FNiagaraRandInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewStructOps, TEXT("NiagaraRandInfo"), &Z_Registration_Info_UScriptStruct_NiagaraRandInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRandInfo), 3944324825U) },
		{ FNiagaraTypeLayoutInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewStructOps, TEXT("NiagaraTypeLayoutInfo"), &Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraTypeLayoutInfo), 2093377881U) },
		{ FNiagaraTypeDefinition::StaticStruct, Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewStructOps, TEXT("NiagaraTypeDefinition"), &Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraTypeDefinition), 3904496483U) },
		{ FNiagaraTypeDefinitionHandle::StaticStruct, Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewStructOps, TEXT("NiagaraTypeDefinitionHandle"), &Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraTypeDefinitionHandle), 3891610982U) },
		{ FNiagaraVariableBase::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewStructOps, TEXT("NiagaraVariableBase"), &Z_Registration_Info_UScriptStruct_NiagaraVariableBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableBase), 2955719795U) },
		{ FNiagaraVariable::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewStructOps, TEXT("NiagaraVariable"), &Z_Registration_Info_UScriptStruct_NiagaraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariable), 2475164134U) },
		{ FVersionedNiagaraEmitter::StaticStruct, Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewStructOps, TEXT("VersionedNiagaraEmitter"), &Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersionedNiagaraEmitter), 1570330652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_3374207496(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
