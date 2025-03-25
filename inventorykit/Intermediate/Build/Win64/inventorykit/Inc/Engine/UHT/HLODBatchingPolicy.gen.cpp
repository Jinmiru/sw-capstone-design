// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/HLOD/HLODBatchingPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODBatchingPolicy() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EHLODBatchingPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHLODBatchingPolicy;
static UEnum* EHLODBatchingPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHLODBatchingPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHLODBatchingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHLODBatchingPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHLODBatchingPolicy"));
	}
	return Z_Registration_Info_UEnum_EHLODBatchingPolicy.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHLODBatchingPolicy>()
{
	return EHLODBatchingPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Determines how the geometry of a component will be incorporated in proxy (simplified) HLODs. */" },
		{ "Instancing.Comment", "/** Batch this component geometry (using the lowest LOD) as a separate instanced static mesh component in the generated actor. */" },
		{ "Instancing.Name", "EHLODBatchingPolicy::Instancing" },
		{ "Instancing.ToolTip", "Batch this component geometry (using the lowest LOD) as a separate instanced static mesh component in the generated actor." },
		{ "MeshSection.Comment", "/** Batch this component geometry (using the lowest LOD) as a separate mesh section, grouping by material. */" },
		{ "MeshSection.Name", "EHLODBatchingPolicy::MeshSection" },
		{ "MeshSection.ToolTip", "Batch this component geometry (using the lowest LOD) as a separate mesh section, grouping by material." },
		{ "ModuleRelativePath", "Public/HLOD/HLODBatchingPolicy.h" },
		{ "None.Comment", "/** No batching to be performed, geometry is to be simplified. */" },
		{ "None.Name", "EHLODBatchingPolicy::None" },
		{ "None.ToolTip", "No batching to be performed, geometry is to be simplified." },
		{ "ToolTip", "Determines how the geometry of a component will be incorporated in proxy (simplified) HLODs." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHLODBatchingPolicy::None", (int64)EHLODBatchingPolicy::None },
		{ "EHLODBatchingPolicy::MeshSection", (int64)EHLODBatchingPolicy::MeshSection },
		{ "EHLODBatchingPolicy::Instancing", (int64)EHLODBatchingPolicy::Instancing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHLODBatchingPolicy",
	"EHLODBatchingPolicy",
	Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy()
{
	if (!Z_Registration_Info_UEnum_EHLODBatchingPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHLODBatchingPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHLODBatchingPolicy.InnerSingleton;
}
// End Enum EHLODBatchingPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHLODBatchingPolicy_StaticEnum, TEXT("EHLODBatchingPolicy"), &Z_Registration_Info_UEnum_EHLODBatchingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2028751023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_1951888378(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
