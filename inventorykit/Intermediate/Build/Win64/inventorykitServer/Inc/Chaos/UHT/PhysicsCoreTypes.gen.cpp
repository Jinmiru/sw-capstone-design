// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/PhysicsCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCoreTypes() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosBufferMode();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosSolverTickMode();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosThreadingMode();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin Enum EChaosSolverTickMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosSolverTickMode;
static UEnum* EChaosSolverTickMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSolverTickMode, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EChaosSolverTickMode"));
	}
	return Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EChaosSolverTickMode>()
{
	return EChaosSolverTickMode_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Fixed.Name", "EChaosSolverTickMode::Fixed" },
		{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
		{ "Variable.Name", "EChaosSolverTickMode::Variable" },
		{ "VariableCapped.Name", "EChaosSolverTickMode::VariableCapped" },
		{ "VariableCappedWithTarget.Name", "EChaosSolverTickMode::VariableCappedWithTarget" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosSolverTickMode::Fixed", (int64)EChaosSolverTickMode::Fixed },
		{ "EChaosSolverTickMode::Variable", (int64)EChaosSolverTickMode::Variable },
		{ "EChaosSolverTickMode::VariableCapped", (int64)EChaosSolverTickMode::VariableCapped },
		{ "EChaosSolverTickMode::VariableCappedWithTarget", (int64)EChaosSolverTickMode::VariableCappedWithTarget },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EChaosSolverTickMode",
	"EChaosSolverTickMode",
	Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EChaosSolverTickMode()
{
	if (!Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton, Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton;
}
// End Enum EChaosSolverTickMode

// Begin Enum EChaosThreadingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosThreadingMode;
static UEnum* EChaosThreadingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosThreadingMode, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EChaosThreadingMode"));
	}
	return Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EChaosThreadingMode>()
{
	return EChaosThreadingMode_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DedicatedThread.Hidden", "" },
		{ "DedicatedThread.Name", "EChaosThreadingMode::DedicatedThread" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EChaosThreadingMode::Invalid" },
		{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EChaosThreadingMode::Num" },
		{ "SingleThread.Name", "EChaosThreadingMode::SingleThread" },
		{ "TaskGraph.Name", "EChaosThreadingMode::TaskGraph" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosThreadingMode::DedicatedThread", (int64)EChaosThreadingMode::DedicatedThread },
		{ "EChaosThreadingMode::TaskGraph", (int64)EChaosThreadingMode::TaskGraph },
		{ "EChaosThreadingMode::SingleThread", (int64)EChaosThreadingMode::SingleThread },
		{ "EChaosThreadingMode::Num", (int64)EChaosThreadingMode::Num },
		{ "EChaosThreadingMode::Invalid", (int64)EChaosThreadingMode::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EChaosThreadingMode",
	"EChaosThreadingMode",
	Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EChaosThreadingMode()
{
	if (!Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton, Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton;
}
// End Enum EChaosThreadingMode

// Begin Enum EChaosBufferMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosBufferMode;
static UEnum* EChaosBufferMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosBufferMode, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EChaosBufferMode"));
	}
	return Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EChaosBufferMode>()
{
	return EChaosBufferMode_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Double.Name", "EChaosBufferMode::Double" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EChaosBufferMode::Invalid" },
		{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EChaosBufferMode::Num" },
		{ "Triple.Name", "EChaosBufferMode::Triple" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosBufferMode::Double", (int64)EChaosBufferMode::Double },
		{ "EChaosBufferMode::Triple", (int64)EChaosBufferMode::Triple },
		{ "EChaosBufferMode::Num", (int64)EChaosBufferMode::Num },
		{ "EChaosBufferMode::Invalid", (int64)EChaosBufferMode::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EChaosBufferMode",
	"EChaosBufferMode",
	Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EChaosBufferMode()
{
	if (!Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton, Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton;
}
// End Enum EChaosBufferMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosSolverTickMode_StaticEnum, TEXT("EChaosSolverTickMode"), &Z_Registration_Info_UEnum_EChaosSolverTickMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3178789538U) },
		{ EChaosThreadingMode_StaticEnum, TEXT("EChaosThreadingMode"), &Z_Registration_Info_UEnum_EChaosThreadingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2490559148U) },
		{ EChaosBufferMode_StaticEnum, TEXT("EChaosBufferMode"), &Z_Registration_Info_UEnum_EChaosBufferMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1941288426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_3362818222(TEXT("/Script/Chaos"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
