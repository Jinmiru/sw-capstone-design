// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigSpline/Public/ControlRigSplineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSplineTypes() {}

// Begin Cross Module References
CONTROLRIGSPLINE_API UEnum* Z_Construct_UEnum_ControlRigSpline_ESplineType();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSplineImpl();
UPackage* Z_Construct_UPackage__Script_ControlRigSpline();
// End Cross Module References

// Begin Enum ESplineType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineType;
static UEnum* ESplineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESplineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESplineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRigSpline_ESplineType, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("ESplineType"));
	}
	return Z_Registration_Info_UEnum_ESplineType.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UEnum* StaticEnum<ESplineType>()
{
	return ESplineType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BSpline.Comment", "/** The smooth curve will pass through the first and last control points */" },
		{ "BSpline.Name", "ESplineType::BSpline" },
		{ "BSpline.ToolTip", "The smooth curve will pass through the first and last control points" },
		{ "Hermite.Comment", "/** The curve will pass through the control points */" },
		{ "Hermite.Name", "ESplineType::Hermite" },
		{ "Hermite.ToolTip", "The curve will pass through the control points" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ESplineType::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/ControlRigSplineTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESplineType::BSpline", (int64)ESplineType::BSpline },
		{ "ESplineType::Hermite", (int64)ESplineType::Hermite },
		{ "ESplineType::Max", (int64)ESplineType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRigSpline,
	nullptr,
	"ESplineType",
	"ESplineType",
	Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRigSpline_ESplineType()
{
	if (!Z_Registration_Info_UEnum_ESplineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineType.InnerSingleton, Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESplineType.InnerSingleton;
}
// End Enum ESplineType

// Begin ScriptStruct FControlRigSplineImpl
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSplineImpl;
class UScriptStruct* FControlRigSplineImpl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSplineImpl, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("ControlRigSplineImpl"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FControlRigSplineImpl>()
{
	return FControlRigSplineImpl::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSplineImpl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	nullptr,
	&NewStructOps,
	"ControlRigSplineImpl",
	nullptr,
	0,
	sizeof(FControlRigSplineImpl),
	alignof(FControlRigSplineImpl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigSplineImpl()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.InnerSingleton;
}
// End ScriptStruct FControlRigSplineImpl

// Begin ScriptStruct FControlRigSpline
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSpline;
class UScriptStruct* FControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("ControlRigSpline"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FControlRigSpline>()
{
	return FControlRigSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlRigSplineTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	nullptr,
	&NewStructOps,
	"ControlRigSpline",
	nullptr,
	0,
	sizeof(FControlRigSpline),
	alignof(FControlRigSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigSpline()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSpline.InnerSingleton;
}
// End ScriptStruct FControlRigSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESplineType_StaticEnum, TEXT("ESplineType"), &Z_Registration_Info_UEnum_ESplineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1972097248U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlRigSplineImpl::StaticStruct, Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::NewStructOps, TEXT("ControlRigSplineImpl"), &Z_Registration_Info_UScriptStruct_ControlRigSplineImpl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSplineImpl), 4201409572U) },
		{ FControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FControlRigSpline_Statics::NewStructOps, TEXT("ControlRigSpline"), &Z_Registration_Info_UScriptStruct_ControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSpline), 4039582013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_1485833152(TEXT("/Script/ControlRigSpline"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
