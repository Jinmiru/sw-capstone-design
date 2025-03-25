// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Types/SlateVector2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateVector2() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDeprecateSlateVector2D();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin ScriptStruct FDeprecateSlateVector2D
static_assert(std::is_polymorphic<FDeprecateSlateVector2D>() == std::is_polymorphic<FVector2f>(), "USTRUCT FDeprecateSlateVector2D cannot be polymorphic unless super FVector2f is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeprecateSlateVector2D;
class UScriptStruct* FDeprecateSlateVector2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeprecateSlateVector2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeprecateSlateVector2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeprecateSlateVector2D, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("DeprecateSlateVector2D"));
	}
	return Z_Registration_Info_UScriptStruct_DeprecateSlateVector2D.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FDeprecateSlateVector2D>()
{
	return FDeprecateSlateVector2D::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDeprecateSlateVector2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Vector2D" },
		{ "HasNativeBreak", "/Script/Engine.KismetMathLibrary.BreakVector2D" },
		{ "HasNativeMake", "/Script/Engine.KismetMathLibrary.MakeVector2D" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Public/Types/SlateVector2.h" },
		{ "ScriptDefaultBreak", "" },
		{ "ScriptDefaultMake", "" },
		{ "ShortTooltip", "Vector2D (single-precision)" },
		{ "ToolTip", "Vector2D (single-precision)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeprecateSlateVector2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeprecateSlateVector2D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	Z_Construct_UScriptStruct_FVector2f,
	&NewStructOps,
	"DeprecateSlateVector2D",
	nullptr,
	0,
	sizeof(FDeprecateSlateVector2D),
	alignof(FDeprecateSlateVector2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000011),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeprecateSlateVector2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDeprecateSlateVector2D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDeprecateSlateVector2D()
{
	if (!Z_Registration_Info_UScriptStruct_DeprecateSlateVector2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeprecateSlateVector2D.InnerSingleton, Z_Construct_UScriptStruct_FDeprecateSlateVector2D_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DeprecateSlateVector2D.InnerSingleton;
}
// End ScriptStruct FDeprecateSlateVector2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateVector2_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDeprecateSlateVector2D::StaticStruct, Z_Construct_UScriptStruct_FDeprecateSlateVector2D_Statics::NewStructOps, TEXT("DeprecateSlateVector2D"), &Z_Registration_Info_UScriptStruct_DeprecateSlateVector2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeprecateSlateVector2D), 3213486062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateVector2_h_1322965141(TEXT("/Script/SlateCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateVector2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateVector2_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
