// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTransform.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTransform() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransform();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransform_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaterialVectorCoordTransformSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource;
static UEnum* EMaterialVectorCoordTransformSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialVectorCoordTransformSource"));
	}
	return Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialVectorCoordTransformSource>()
{
	return EMaterialVectorCoordTransformSource_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "TRANSFORMSOURCE_Camera.Comment", "/** Camera space */" },
		{ "TRANSFORMSOURCE_Camera.DisplayName", "Camera Space" },
		{ "TRANSFORMSOURCE_Camera.Name", "TRANSFORMSOURCE_Camera" },
		{ "TRANSFORMSOURCE_Camera.ToolTip", "Camera space" },
		{ "TRANSFORMSOURCE_Instance.Comment", "/** Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles). */" },
		{ "TRANSFORMSOURCE_Instance.DisplayName", "Instance & Particle Space" },
		{ "TRANSFORMSOURCE_Instance.Name", "TRANSFORMSOURCE_Instance" },
		{ "TRANSFORMSOURCE_Instance.ToolTip", "Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles)." },
		{ "TRANSFORMSOURCE_Local.Comment", "/** Local space (relative to the rendered object, = object space) */" },
		{ "TRANSFORMSOURCE_Local.DisplayName", "Local Space" },
		{ "TRANSFORMSOURCE_Local.Name", "TRANSFORMSOURCE_Local" },
		{ "TRANSFORMSOURCE_Local.ToolTip", "Local space (relative to the rendered object, = object space)" },
		{ "TRANSFORMSOURCE_MAX.Name", "TRANSFORMSOURCE_MAX" },
		{ "TRANSFORMSOURCE_ParticleWorld.Comment", "/** Particle space, deprecated value will be removed in a future release use instance space. */" },
		{ "TRANSFORMSOURCE_ParticleWorld.DisplayName", "Mesh particle space" },
		{ "TRANSFORMSOURCE_ParticleWorld.Hidden", "" },
		{ "TRANSFORMSOURCE_ParticleWorld.Name", "TRANSFORMSOURCE_ParticleWorld" },
		{ "TRANSFORMSOURCE_ParticleWorld.ToolTip", "Particle space, deprecated value will be removed in a future release use instance space." },
		{ "TRANSFORMSOURCE_Tangent.Comment", "/** Tangent space (relative to the surface) */" },
		{ "TRANSFORMSOURCE_Tangent.DisplayName", "Tangent Space" },
		{ "TRANSFORMSOURCE_Tangent.Name", "TRANSFORMSOURCE_Tangent" },
		{ "TRANSFORMSOURCE_Tangent.ToolTip", "Tangent space (relative to the surface)" },
		{ "TRANSFORMSOURCE_View.Comment", "/** View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes) */" },
		{ "TRANSFORMSOURCE_View.DisplayName", "View Space" },
		{ "TRANSFORMSOURCE_View.Name", "TRANSFORMSOURCE_View" },
		{ "TRANSFORMSOURCE_View.ToolTip", "View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes)" },
		{ "TRANSFORMSOURCE_World.Comment", "/** World space, a unit is 1cm */" },
		{ "TRANSFORMSOURCE_World.DisplayName", "World Space" },
		{ "TRANSFORMSOURCE_World.Name", "TRANSFORMSOURCE_World" },
		{ "TRANSFORMSOURCE_World.ToolTip", "World space, a unit is 1cm" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TRANSFORMSOURCE_Tangent", (int64)TRANSFORMSOURCE_Tangent },
		{ "TRANSFORMSOURCE_Local", (int64)TRANSFORMSOURCE_Local },
		{ "TRANSFORMSOURCE_World", (int64)TRANSFORMSOURCE_World },
		{ "TRANSFORMSOURCE_View", (int64)TRANSFORMSOURCE_View },
		{ "TRANSFORMSOURCE_Camera", (int64)TRANSFORMSOURCE_Camera },
		{ "TRANSFORMSOURCE_ParticleWorld", (int64)TRANSFORMSOURCE_ParticleWorld },
		{ "TRANSFORMSOURCE_Instance", (int64)TRANSFORMSOURCE_Instance },
		{ "TRANSFORMSOURCE_MAX", (int64)TRANSFORMSOURCE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialVectorCoordTransformSource",
	"EMaterialVectorCoordTransformSource",
	Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource()
{
	if (!Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource.InnerSingleton;
}
// End Enum EMaterialVectorCoordTransformSource

// Begin Enum EMaterialVectorCoordTransform
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialVectorCoordTransform;
static UEnum* EMaterialVectorCoordTransform_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialVectorCoordTransform"));
	}
	return Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialVectorCoordTransform>()
{
	return EMaterialVectorCoordTransform_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "TRANSFORM_Camera.Comment", "/** Camera space */" },
		{ "TRANSFORM_Camera.DisplayName", "Camera Space" },
		{ "TRANSFORM_Camera.Name", "TRANSFORM_Camera" },
		{ "TRANSFORM_Camera.ToolTip", "Camera space" },
		{ "TRANSFORM_Instance.Comment", "/** Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles). */" },
		{ "TRANSFORM_Instance.DisplayName", "Instance & Particle Space" },
		{ "TRANSFORM_Instance.Name", "TRANSFORM_Instance" },
		{ "TRANSFORM_Instance.ToolTip", "Instance space (used to provide per instance transform, i.e. for Instanced Static Mesh / Particles)." },
		{ "TRANSFORM_Local.Comment", "/** Local space (relative to the rendered object, = object space) */" },
		{ "TRANSFORM_Local.DisplayName", "Local Space" },
		{ "TRANSFORM_Local.Name", "TRANSFORM_Local" },
		{ "TRANSFORM_Local.ToolTip", "Local space (relative to the rendered object, = object space)" },
		{ "TRANSFORM_MAX.Name", "TRANSFORM_MAX" },
		{ "TRANSFORM_ParticleWorld.Comment", "/** Particle space, deprecated value will be removed in a future release use instance space. */" },
		{ "TRANSFORM_ParticleWorld.DisplayName", "Mesh particle space" },
		{ "TRANSFORM_ParticleWorld.Hidden", "" },
		{ "TRANSFORM_ParticleWorld.Name", "TRANSFORM_ParticleWorld" },
		{ "TRANSFORM_ParticleWorld.ToolTip", "Particle space, deprecated value will be removed in a future release use instance space." },
		{ "TRANSFORM_Tangent.Comment", "/** Tangent space (relative to the surface) */" },
		{ "TRANSFORM_Tangent.DisplayName", "Tangent Space" },
		{ "TRANSFORM_Tangent.Name", "TRANSFORM_Tangent" },
		{ "TRANSFORM_Tangent.ToolTip", "Tangent space (relative to the surface)" },
		{ "TRANSFORM_View.Comment", "/** View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes) */" },
		{ "TRANSFORM_View.DisplayName", "View Space" },
		{ "TRANSFORM_View.Name", "TRANSFORM_View" },
		{ "TRANSFORM_View.ToolTip", "View space (relative to the camera/eye, = camera space, differs from camera space in the shadow passes)" },
		{ "TRANSFORM_World.Comment", "/** World space, a unit is 1cm */" },
		{ "TRANSFORM_World.DisplayName", "World Space" },
		{ "TRANSFORM_World.Name", "TRANSFORM_World" },
		{ "TRANSFORM_World.ToolTip", "World space, a unit is 1cm" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TRANSFORM_Tangent", (int64)TRANSFORM_Tangent },
		{ "TRANSFORM_Local", (int64)TRANSFORM_Local },
		{ "TRANSFORM_World", (int64)TRANSFORM_World },
		{ "TRANSFORM_View", (int64)TRANSFORM_View },
		{ "TRANSFORM_Camera", (int64)TRANSFORM_Camera },
		{ "TRANSFORM_ParticleWorld", (int64)TRANSFORM_ParticleWorld },
		{ "TRANSFORM_Instance", (int64)TRANSFORM_Instance },
		{ "TRANSFORM_MAX", (int64)TRANSFORM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialVectorCoordTransform",
	"EMaterialVectorCoordTransform",
	Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform()
{
	if (!Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialVectorCoordTransform.InnerSingleton;
}
// End Enum EMaterialVectorCoordTransform

// Begin Class UMaterialExpressionTransform
void UMaterialExpressionTransform::StaticRegisterNativesUMaterialExpressionTransform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTransform);
UClass* Z_Construct_UClass_UMaterialExpressionTransform_NoRegister()
{
	return UMaterialExpressionTransform::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTransform.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Comment", "/** input expression for this transform */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "ToolTip", "input expression for this transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformSourceType_MetaData[] = {
		{ "Category", "MaterialExpressionTransform" },
		{ "Comment", "/** Source coordinate space of the FVector */" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Source coordinate space of the FVector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
		{ "Category", "MaterialExpressionTransform" },
		{ "Comment", "/** Destination coordinate space of the FVector */" },
		{ "DisplayName", "Destination" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransform.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Destination coordinate space of the FVector" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSourceType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTransform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTransform, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformSourceType = { "TransformSourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTransform, TransformSourceType), Z_Construct_UEnum_Engine_EMaterialVectorCoordTransformSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformSourceType_MetaData), NewProp_TransformSourceType_MetaData) }; // 307510815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTransform, TransformType), Z_Construct_UEnum_Engine_EMaterialVectorCoordTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformType_MetaData), NewProp_TransformType_MetaData) }; // 2920382497
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformSourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTransform_Statics::NewProp_TransformType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTransform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTransform_Statics::ClassParams = {
	&UMaterialExpressionTransform::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTransform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTransform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTransform()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTransform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTransform.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTransform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTransform.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTransform>()
{
	return UMaterialExpressionTransform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTransform);
UMaterialExpressionTransform::~UMaterialExpressionTransform() {}
// End Class UMaterialExpressionTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialVectorCoordTransformSource_StaticEnum, TEXT("EMaterialVectorCoordTransformSource"), &Z_Registration_Info_UEnum_EMaterialVectorCoordTransformSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 307510815U) },
		{ EMaterialVectorCoordTransform_StaticEnum, TEXT("EMaterialVectorCoordTransform"), &Z_Registration_Info_UEnum_EMaterialVectorCoordTransform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2920382497U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTransform, UMaterialExpressionTransform::StaticClass, TEXT("UMaterialExpressionTransform"), &Z_Registration_Info_UClass_UMaterialExpressionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTransform), 1602305994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_4267679899(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransform_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
