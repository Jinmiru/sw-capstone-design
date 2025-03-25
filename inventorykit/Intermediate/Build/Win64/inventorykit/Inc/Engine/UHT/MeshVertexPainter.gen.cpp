// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/MeshVertexPainter/MeshVertexPainter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPainter() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EVertexPaintAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexPaintAxis;
static UEnum* EVertexPaintAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVertexPaintAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVertexPaintAxis"));
	}
	return Z_Registration_Info_UEnum_EVertexPaintAxis.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVertexPaintAxis>()
{
	return EVertexPaintAxis_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MeshVertexPainter/MeshVertexPainter.h" },
		{ "X.Name", "EVertexPaintAxis::X" },
		{ "Y.Name", "EVertexPaintAxis::Y" },
		{ "Z.Name", "EVertexPaintAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVertexPaintAxis::X", (int64)EVertexPaintAxis::X },
		{ "EVertexPaintAxis::Y", (int64)EVertexPaintAxis::Y },
		{ "EVertexPaintAxis::Z", (int64)EVertexPaintAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVertexPaintAxis",
	"EVertexPaintAxis",
	Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVertexPaintAxis()
{
	if (!Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton, Z_Construct_UEnum_Engine_EVertexPaintAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVertexPaintAxis.InnerSingleton;
}
// End Enum EVertexPaintAxis

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVertexPaintAxis_StaticEnum, TEXT("EVertexPaintAxis"), &Z_Registration_Info_UEnum_EVertexPaintAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3774337131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_1624782743(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
