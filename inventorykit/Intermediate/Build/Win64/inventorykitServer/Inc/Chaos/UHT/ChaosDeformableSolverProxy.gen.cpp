// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/Chaos/Deformable/ChaosDeformableSolverProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformableSolverProxy() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin Enum ChaosDeformableSimSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ChaosDeformableSimSpace;
static UEnum* ChaosDeformableSimSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ChaosDeformableSimSpace"));
	}
	return Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<ChaosDeformableSimSpace>()
{
	return ChaosDeformableSimSpace_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bone.Comment", "// Component fails on Mac\n" },
		{ "Bone.DisplayName", "Bone" },
		{ "Bone.Name", "Bone" },
		{ "Bone.ToolTip", "Component fails on Mac" },
		{ "Comment", "/**\n* Supported simulation spaces for the ChaosDeformable solver.\n*/" },
		{ "ComponentXf.DisplayName", "Component" },
		{ "ComponentXf.Name", "ComponentXf" },
		{ "ModuleRelativePath", "Public/Chaos/Deformable/ChaosDeformableSolverProxy.h" },
		{ "ToolTip", "Supported simulation spaces for the ChaosDeformable solver." },
		{ "World.DisplayName", "World" },
		{ "World.Name", "World" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "World", (int64)World },
		{ "ComponentXf", (int64)ComponentXf },
		{ "Bone", (int64)Bone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"ChaosDeformableSimSpace",
	"ChaosDeformableSimSpace",
	Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace()
{
	if (!Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton, Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton;
}
// End Enum ChaosDeformableSimSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ChaosDeformableSimSpace_StaticEnum, TEXT("ChaosDeformableSimSpace"), &Z_Registration_Info_UEnum_ChaosDeformableSimSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1618284853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_2065435798(TEXT("/Script/Chaos"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
