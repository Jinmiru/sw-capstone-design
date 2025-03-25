// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPathTracingBufferTexture.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPathTracingBufferTexture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPathTracingBufferTextureId();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EPathTracingBufferTextureId
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathTracingBufferTextureId;
static UEnum* EPathTracingBufferTextureId_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathTracingBufferTextureId.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathTracingBufferTextureId.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPathTracingBufferTextureId, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPathTracingBufferTextureId"));
	}
	return Z_Registration_Info_UEnum_EPathTracingBufferTextureId.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPathTracingBufferTextureId>()
{
	return EPathTracingBufferTextureId_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPathTracingBufferTextureId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingBufferTexture.h" },
		{ "PTBT_Albedo.Comment", "/** Albedo (Path Tracing). Average albedo at the current sample count. */" },
		{ "PTBT_Albedo.DisplayName", "Albedo (Path Tracing)" },
		{ "PTBT_Albedo.Name", "PTBT_Albedo" },
		{ "PTBT_Albedo.ToolTip", "Albedo (Path Tracing). Average albedo at the current sample count." },
		{ "PTBT_DenoisedRadiance.Comment", "/** Normal (Path Tracing). Stores the denoised radiance if denoising is turned on and complete for the current frame, otherwise, black. */" },
		{ "PTBT_DenoisedRadiance.DisplayName", "Denoised radiance (Path Tracing)" },
		{ "PTBT_DenoisedRadiance.Name", "PTBT_DenoisedRadiance" },
		{ "PTBT_DenoisedRadiance.ToolTip", "Normal (Path Tracing). Stores the denoised radiance if denoising is turned on and complete for the current frame, otherwise, black." },
		{ "PTBT_Normal.Comment", "/** Normal (Path Tracing). Average normal at the current sample count. */" },
		{ "PTBT_Normal.DisplayName", "Normal (Path Tracing)" },
		{ "PTBT_Normal.Name", "PTBT_Normal" },
		{ "PTBT_Normal.ToolTip", "Normal (Path Tracing). Average normal at the current sample count." },
		{ "PTBT_Radiance.Comment", "/** Radiance (Path Tracing). The raw radiance. */" },
		{ "PTBT_Radiance.DisplayName", "Radiance (Path Tracing)" },
		{ "PTBT_Radiance.Name", "PTBT_Radiance" },
		{ "PTBT_Radiance.ToolTip", "Radiance (Path Tracing). The raw radiance." },
		{ "PTBT_Variance.Comment", "/** Variance (Path Tracing). Path tracing variance stored as standard derivation. Variance can be per channel variance or \n\x09\x09variance of luminance, albedo, and normal based on the path tracing configuration. Hooking up this buffer can increase additional\n\x09\x09""cost.\n\x09*/" },
		{ "PTBT_Variance.DisplayName", "Variance (Path Tracing)" },
		{ "PTBT_Variance.Name", "PTBT_Variance" },
		{ "PTBT_Variance.ToolTip", "Variance (Path Tracing). Path tracing variance stored as standard derivation. Variance can be per channel variance or\n              variance of luminance, albedo, and normal based on the path tracing configuration. Hooking up this buffer can increase additional\n              cost." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PTBT_Radiance", (int64)PTBT_Radiance },
		{ "PTBT_DenoisedRadiance", (int64)PTBT_DenoisedRadiance },
		{ "PTBT_Albedo", (int64)PTBT_Albedo },
		{ "PTBT_Normal", (int64)PTBT_Normal },
		{ "PTBT_Variance", (int64)PTBT_Variance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPathTracingBufferTextureId_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPathTracingBufferTextureId",
	"EPathTracingBufferTextureId",
	Z_Construct_UEnum_Engine_EPathTracingBufferTextureId_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPathTracingBufferTextureId_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPathTracingBufferTextureId_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPathTracingBufferTextureId_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPathTracingBufferTextureId()
{
	if (!Z_Registration_Info_UEnum_EPathTracingBufferTextureId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathTracingBufferTextureId.InnerSingleton, Z_Construct_UEnum_Engine_EPathTracingBufferTextureId_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathTracingBufferTextureId.InnerSingleton;
}
// End Enum EPathTracingBufferTextureId

// Begin Class UMaterialExpressionPathTracingBufferTexture
void UMaterialExpressionPathTracingBufferTexture::StaticRegisterNativesUMaterialExpressionPathTracingBufferTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPathTracingBufferTexture);
UClass* Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_NoRegister()
{
	return UMaterialExpressionPathTracingBufferTexture::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Path tracing buffer is only accessable in postprocess material. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPathTracingBufferTexture.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingBufferTexture.h" },
		{ "ToolTip", "Path tracing buffer is only accessable in postprocess material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingBufferTexture.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracingBufferTextureId_MetaData[] = {
		{ "Category", "UMaterialExpressionPathTracingBufferTexture" },
		{ "Comment", "/** Which path tracing buffer texture we want to make a lookup into.*/" },
		{ "DisplayName", "Buffer Texture (Path Tracing)" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingBufferTexture.h" },
		{ "ToolTip", "Which path tracing buffer texture we want to make a lookup into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathTracingBufferTextureId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPathTracingBufferTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingBufferTexture, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::NewProp_PathTracingBufferTextureId = { "PathTracingBufferTextureId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPathTracingBufferTexture, PathTracingBufferTextureId), Z_Construct_UEnum_Engine_EPathTracingBufferTextureId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracingBufferTextureId_MetaData), NewProp_PathTracingBufferTextureId_MetaData) }; // 3786413953
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::NewProp_PathTracingBufferTextureId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::ClassParams = {
	&UMaterialExpressionPathTracingBufferTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPathTracingBufferTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPathTracingBufferTexture.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPathTracingBufferTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPathTracingBufferTexture>()
{
	return UMaterialExpressionPathTracingBufferTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPathTracingBufferTexture);
UMaterialExpressionPathTracingBufferTexture::~UMaterialExpressionPathTracingBufferTexture() {}
// End Class UMaterialExpressionPathTracingBufferTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPathTracingBufferTextureId_StaticEnum, TEXT("EPathTracingBufferTextureId"), &Z_Registration_Info_UEnum_EPathTracingBufferTextureId, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3786413953U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture, UMaterialExpressionPathTracingBufferTexture::StaticClass, TEXT("UMaterialExpressionPathTracingBufferTexture"), &Z_Registration_Info_UClass_UMaterialExpressionPathTracingBufferTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPathTracingBufferTexture), 339493588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_3235337488(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
