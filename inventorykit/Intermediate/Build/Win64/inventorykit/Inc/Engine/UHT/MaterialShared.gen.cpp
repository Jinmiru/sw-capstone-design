// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MaterialShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialShared() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELWCFunctionKind();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ELWCFunctionKind
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELWCFunctionKind;
static UEnum* ELWCFunctionKind_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELWCFunctionKind, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELWCFunctionKind"));
	}
	return Z_Registration_Info_UEnum_ELWCFunctionKind.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELWCFunctionKind>()
{
	return ELWCFunctionKind_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELWCFunctionKind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "ELWCFunctionKind::Add" },
		{ "Constructor.Name", "ELWCFunctionKind::Constructor" },
		{ "Demote.Name", "ELWCFunctionKind::Demote" },
		{ "Divide.Name", "ELWCFunctionKind::Divide" },
		{ "Max.Name", "ELWCFunctionKind::Max" },
		{ "ModuleRelativePath", "Public/MaterialShared.h" },
		{ "MultiplyMatrixMatrix.Name", "ELWCFunctionKind::MultiplyMatrixMatrix" },
		{ "MultiplyVectorMatrix.Name", "ELWCFunctionKind::MultiplyVectorMatrix" },
		{ "MultiplyVectorVector.Name", "ELWCFunctionKind::MultiplyVectorVector" },
		{ "Other.Name", "ELWCFunctionKind::Other" },
		{ "Promote.Name", "ELWCFunctionKind::Promote" },
		{ "Subtract.Name", "ELWCFunctionKind::Subtract" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELWCFunctionKind::Constructor", (int64)ELWCFunctionKind::Constructor },
		{ "ELWCFunctionKind::Promote", (int64)ELWCFunctionKind::Promote },
		{ "ELWCFunctionKind::Demote", (int64)ELWCFunctionKind::Demote },
		{ "ELWCFunctionKind::Add", (int64)ELWCFunctionKind::Add },
		{ "ELWCFunctionKind::Subtract", (int64)ELWCFunctionKind::Subtract },
		{ "ELWCFunctionKind::Divide", (int64)ELWCFunctionKind::Divide },
		{ "ELWCFunctionKind::MultiplyVectorVector", (int64)ELWCFunctionKind::MultiplyVectorVector },
		{ "ELWCFunctionKind::MultiplyVectorMatrix", (int64)ELWCFunctionKind::MultiplyVectorMatrix },
		{ "ELWCFunctionKind::MultiplyMatrixMatrix", (int64)ELWCFunctionKind::MultiplyMatrixMatrix },
		{ "ELWCFunctionKind::Other", (int64)ELWCFunctionKind::Other },
		{ "ELWCFunctionKind::Max", (int64)ELWCFunctionKind::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELWCFunctionKind_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELWCFunctionKind",
	"ELWCFunctionKind",
	Z_Construct_UEnum_Engine_ELWCFunctionKind_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELWCFunctionKind_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELWCFunctionKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELWCFunctionKind_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELWCFunctionKind()
{
	if (!Z_Registration_Info_UEnum_ELWCFunctionKind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELWCFunctionKind.InnerSingleton, Z_Construct_UEnum_Engine_ELWCFunctionKind_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELWCFunctionKind.InnerSingleton;
}
// End Enum ELWCFunctionKind

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialShared_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELWCFunctionKind_StaticEnum, TEXT("ELWCFunctionKind"), &Z_Registration_Info_UEnum_ELWCFunctionKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2149016791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialShared_h_1086167624(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialShared_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
