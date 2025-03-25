// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendableInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface();
ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendableLocation();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EBlendableLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlendableLocation;
static UEnum* EBlendableLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlendableLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlendableLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendableLocation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlendableLocation"));
	}
	return Z_Registration_Info_UEnum_EBlendableLocation.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBlendableLocation>()
{
	return EBlendableLocation_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBlendableLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BL_AfterTonemapping.Hidden", "" },
		{ "BL_AfterTonemapping.Name", "BL_AfterTonemapping" },
		{ "BL_BeforeTonemapping.Hidden", "" },
		{ "BL_BeforeTonemapping.Name", "BL_BeforeTonemapping" },
		{ "BL_BeforeTranslucency.Comment", "// Olds names that needs to be kept forever to ensure asset serialization to work correctly when UENUM() switched from serializing int to names.\n" },
		{ "BL_BeforeTranslucency.Hidden", "" },
		{ "BL_BeforeTranslucency.Name", "BL_BeforeTranslucency" },
		{ "BL_BeforeTranslucency.ToolTip", "Olds names that needs to be kept forever to ensure asset serialization to work correctly when UENUM() switched from serializing int to names." },
		{ "BL_MAX.Hidden", "" },
		{ "BL_MAX.Name", "BL_MAX" },
		{ "BL_ReplacingTonemapper.Comment", "/** Post process material replacing the tone mapper, to modify the scene color.\n\x09 * Runs at display resolution with TSR or TAAU, rendering resolution otherwise.\n\x09 * Inputs are always linear color space.\n\x09 *\n\x09 * Input0:former pass scene color,\n\x09 * Input1:AfterDOF translucency.\n\x09 */" },
		{ "BL_ReplacingTonemapper.DisplayName", "Replacing the Tonemapper" },
		{ "BL_ReplacingTonemapper.Name", "BL_ReplacingTonemapper" },
		{ "BL_ReplacingTonemapper.ToolTip", "Post process material replacing the tone mapper, to modify the scene color.\nRuns at display resolution with TSR or TAAU, rendering resolution otherwise.\nInputs are always linear color space.\n\nInput0:former pass scene color,\nInput1:AfterDOF translucency." },
		{ "BL_SceneColorAfterDOF.Comment", "/** Post process material location to modify the scene color, between DOF and AfterDOF translucency.\n\x09 * Always run at rendering resolution.\n\x09 * Inputs and output always in linear color space.\n\x09 *\n\x09 * Input0:former pass scene color, excluding AfterDOF translucency\n\x09 * Input1:AfterDOF translucency.\n\x09 */" },
		{ "BL_SceneColorAfterDOF.DisplayName", "Scene Color After DOF" },
		{ "BL_SceneColorAfterDOF.Name", "BL_SceneColorAfterDOF" },
		{ "BL_SceneColorAfterDOF.ToolTip", "Post process material location to modify the scene color, between DOF and AfterDOF translucency.\nAlways run at rendering resolution.\nInputs and output always in linear color space.\n\nInput0:former pass scene color, excluding AfterDOF translucency\nInput1:AfterDOF translucency." },
		{ "BL_SceneColorAfterTonemapping.Comment", "/** Post process material location to modify the scene color, after tone mapper.\n\x09 * Runs at display resolution with TSR or TAAU, rendering resolution otherwise.\n\x09 * Inputs and output in different color spaces, based rendering settings for instance (sRGB/Rec709, HDR or even Linear Color).\n\x09 *\n\x09 * Input0:former pass scene color,\n\x09 * Input1:AfterDOF translucency.\n\x09 */" },
		{ "BL_SceneColorAfterTonemapping.DisplayName", "Scene Color After Tonemapping" },
		{ "BL_SceneColorAfterTonemapping.Name", "BL_SceneColorAfterTonemapping" },
		{ "BL_SceneColorAfterTonemapping.ToolTip", "Post process material location to modify the scene color, after tone mapper.\nRuns at display resolution with TSR or TAAU, rendering resolution otherwise.\nInputs and output in different color spaces, based rendering settings for instance (sRGB/Rec709, HDR or even Linear Color).\n\nInput0:former pass scene color,\nInput1:AfterDOF translucency." },
		{ "BL_SceneColorBeforeBloom.Comment", "/** Post process material location to modify the scene color, before bloom.\n\x09 * Runs at display resolution with TSR or TAAU, rendering resolution otherwise.\n\x09 * Inputs and output always in linear color space.\n\x09 *\n\x09 * Input0:former pass scene color,\n\x09 */" },
		{ "BL_SceneColorBeforeBloom.DisplayName", "Scene Color Before Bloom" },
		{ "BL_SceneColorBeforeBloom.Name", "BL_SceneColorBeforeBloom" },
		{ "BL_SceneColorBeforeBloom.ToolTip", "Post process material location to modify the scene color, before bloom.\nRuns at display resolution with TSR or TAAU, rendering resolution otherwise.\nInputs and output always in linear color space.\n\nInput0:former pass scene color," },
		{ "BL_SceneColorBeforeDOF.Comment", "/** Post process material location to modify the scene color, between translucency distortion and DOF.\n\x09 * Always run at rendering resolution.\n\x09 * Inputs and output always in linear color space.\n\x09 *\n\x09 * Input0:former pass scene color, excluding AfterDOF translucency\n\x09 * Input1:AfterDOF translucency.\n\x09 */" },
		{ "BL_SceneColorBeforeDOF.DisplayName", "Scene Color Before DOF" },
		{ "BL_SceneColorBeforeDOF.Name", "BL_SceneColorBeforeDOF" },
		{ "BL_SceneColorBeforeDOF.ToolTip", "Post process material location to modify the scene color, between translucency distortion and DOF.\nAlways run at rendering resolution.\nInputs and output always in linear color space.\n\nInput0:former pass scene color, excluding AfterDOF translucency\nInput1:AfterDOF translucency." },
		{ "BL_SSRInput.Comment", "/** Post process material location to compose a backplate into SSR, between TSR/TAA and next frame's SSR.\n\x09 * Runs at display resolution with TSR or TAAU, rendering resolution otherwise.\n\x09 * Inputs and output always in linear color space.\n\x09 *\n\x09 * Input0:TAA/TSR output,\n\x09 */" },
		{ "BL_SSRInput.DisplayName", "SSR Input" },
		{ "BL_SSRInput.Name", "BL_SSRInput" },
		{ "BL_SSRInput.ToolTip", "Post process material location to compose a backplate into SSR, between TSR/TAA and next frame's SSR.\nRuns at display resolution with TSR or TAAU, rendering resolution otherwise.\nInputs and output always in linear color space.\n\nInput0:TAA/TSR output," },
		{ "BL_TranslucencyAfterDOF.Comment", "/** Post process material location to modify the AfterDOF translucency, before composition into the scene color.\n\x09 * Always run at rendering resolution.\n\x09 * Inputs and output always in linear color space.\n\x09 *\n\x09 * Input0:scene color without translucency, after DOF,\n\x09 * Input1:AfterDOF translucency.\n\x09 */" },
		{ "BL_TranslucencyAfterDOF.DisplayName", "Translucency After DOF" },
		{ "BL_TranslucencyAfterDOF.Name", "BL_TranslucencyAfterDOF" },
		{ "BL_TranslucencyAfterDOF.ToolTip", "Post process material location to modify the AfterDOF translucency, before composition into the scene color.\nAlways run at rendering resolution.\nInputs and output always in linear color space.\n\nInput0:scene color without translucency, after DOF,\nInput1:AfterDOF translucency." },
		{ "Comment", "/** Where to place a post process material in the post processing chain. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlendableInterface.h" },
		{ "ToolTip", "Where to place a post process material in the post processing chain." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "BL_SceneColorBeforeDOF", (int64)BL_SceneColorBeforeDOF },
		{ "BL_SceneColorAfterDOF", (int64)BL_SceneColorAfterDOF },
		{ "BL_TranslucencyAfterDOF", (int64)BL_TranslucencyAfterDOF },
		{ "BL_SSRInput", (int64)BL_SSRInput },
		{ "BL_SceneColorBeforeBloom", (int64)BL_SceneColorBeforeBloom },
		{ "BL_ReplacingTonemapper", (int64)BL_ReplacingTonemapper },
		{ "BL_SceneColorAfterTonemapping", (int64)BL_SceneColorAfterTonemapping },
		{ "BL_MAX", (int64)BL_MAX },
		{ "BL_BeforeTranslucency", (int64)BL_BeforeTranslucency },
		{ "BL_BeforeTonemapping", (int64)BL_BeforeTonemapping },
		{ "BL_AfterTonemapping", (int64)BL_AfterTonemapping },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlendableLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBlendableLocation",
	"EBlendableLocation",
	Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBlendableLocation()
{
	if (!Z_Registration_Info_UEnum_EBlendableLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlendableLocation.InnerSingleton, Z_Construct_UEnum_Engine_EBlendableLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlendableLocation.InnerSingleton;
}
// End Enum EBlendableLocation

// Begin Interface UBlendableInterface
void UBlendableInterface::StaticRegisterNativesUBlendableInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendableInterface);
UClass* Z_Construct_UClass_UBlendableInterface_NoRegister()
{
	return UBlendableInterface::StaticClass();
}
struct Z_Construct_UClass_UBlendableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlendableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBlendableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlendableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendableInterface_Statics::ClassParams = {
	&UBlendableInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlendableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlendableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlendableInterface()
{
	if (!Z_Registration_Info_UClass_UBlendableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendableInterface.OuterSingleton, Z_Construct_UClass_UBlendableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlendableInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBlendableInterface>()
{
	return UBlendableInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendableInterface);
UBlendableInterface::~UBlendableInterface() {}
// End Interface UBlendableInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlendableLocation_StaticEnum, TEXT("EBlendableLocation"), &Z_Registration_Info_UEnum_EBlendableLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2991443878U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlendableInterface, UBlendableInterface::StaticClass, TEXT("UBlendableInterface"), &Z_Registration_Info_UClass_UBlendableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendableInterface), 641621593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_665519512(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
