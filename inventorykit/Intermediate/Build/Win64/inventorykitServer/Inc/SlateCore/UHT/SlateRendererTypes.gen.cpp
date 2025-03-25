// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Rendering/SlateRendererTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateRendererTypes() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlatePostRT();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Enum ESlatePostRT
static_assert(!int64(ESlatePostRT::None)||!int64(ESlatePostRT::ESlatePostRT_0)||!int64(ESlatePostRT::ESlatePostRT_1)||!int64(ESlatePostRT::ESlatePostRT_2)||!int64(ESlatePostRT::ESlatePostRT_3)||!int64(ESlatePostRT::ESlatePostRT_4), "'ESlatePostRT' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlatePostRT;
static UEnum* ESlatePostRT_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlatePostRT.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlatePostRT.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlatePostRT, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlatePostRT"));
	}
	return Z_Registration_Info_UEnum_ESlatePostRT.OuterSingleton;
}
template<> SLATECORE_API UEnum* StaticEnum<ESlatePostRT>()
{
	return ESlatePostRT_StaticEnum();
}
struct Z_Construct_UEnum_SlateCore_ESlatePostRT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Bitfield used to mark if a slate post RT is used or not\n */" },
		{ "ESlatePostRT_0.Name", "ESlatePostRT::ESlatePostRT_0" },
		{ "ESlatePostRT_1.Name", "ESlatePostRT::ESlatePostRT_1" },
		{ "ESlatePostRT_2.Name", "ESlatePostRT::ESlatePostRT_2" },
		{ "ESlatePostRT_3.Name", "ESlatePostRT::ESlatePostRT_3" },
		{ "ESlatePostRT_4.Name", "ESlatePostRT::ESlatePostRT_4" },
		{ "ModuleRelativePath", "Public/Rendering/SlateRendererTypes.h" },
		{ "None.Name", "ESlatePostRT::None" },
		{ "Num.Name", "ESlatePostRT::Num" },
		{ "ToolTip", "Bitfield used to mark if a slate post RT is used or not" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlatePostRT::None", (int64)ESlatePostRT::None },
		{ "ESlatePostRT::ESlatePostRT_0", (int64)ESlatePostRT::ESlatePostRT_0 },
		{ "ESlatePostRT::ESlatePostRT_1", (int64)ESlatePostRT::ESlatePostRT_1 },
		{ "ESlatePostRT::ESlatePostRT_2", (int64)ESlatePostRT::ESlatePostRT_2 },
		{ "ESlatePostRT::ESlatePostRT_3", (int64)ESlatePostRT::ESlatePostRT_3 },
		{ "ESlatePostRT::ESlatePostRT_4", (int64)ESlatePostRT::ESlatePostRT_4 },
		{ "ESlatePostRT::Num", (int64)ESlatePostRT::Num },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlatePostRT_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	"ESlatePostRT",
	"ESlatePostRT",
	Z_Construct_UEnum_SlateCore_ESlatePostRT_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlatePostRT_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlatePostRT_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SlateCore_ESlatePostRT_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SlateCore_ESlatePostRT()
{
	if (!Z_Registration_Info_UEnum_ESlatePostRT.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlatePostRT.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlatePostRT_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlatePostRT.InnerSingleton;
}
// End Enum ESlatePostRT

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Rendering_SlateRendererTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESlatePostRT_StaticEnum, TEXT("ESlatePostRT"), &Z_Registration_Info_UEnum_ESlatePostRT, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 968732184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Rendering_SlateRendererTypes_h_478370455(TEXT("/Script/SlateCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Rendering_SlateRendererTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Rendering_SlateRendererTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
