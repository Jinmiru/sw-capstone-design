// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyAtmosphereLightIlluminance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSkyAtmosphereLightIlluminance
void UMaterialExpressionSkyAtmosphereLightIlluminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightIlluminance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereLightIlluminance);
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_NoRegister()
{
	return UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "Comment", "/** World position of the sample. If not specified, the pixel world position will be used. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "World position of the sample. If not specified, the pixel world position will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionSkyAtmosphereLightIlluminance" },
		{ "Comment", "/** Defines the reference space for the WorldPosition input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "Defines the reference space for the WorldPosition input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightIlluminance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightIlluminance, LightIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightIndex_MetaData), NewProp_LightIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightIlluminance, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightIlluminance, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPositionOriginType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::ClassParams = {
	&UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightIlluminance>()
{
	return UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightIlluminance);
UMaterialExpressionSkyAtmosphereLightIlluminance::~UMaterialExpressionSkyAtmosphereLightIlluminance() {}
// End Class UMaterialExpressionSkyAtmosphereLightIlluminance

// Begin Class UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround
void UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightIlluminanceOnGround()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround);
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_NoRegister()
{
	return UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround, LightIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightIndex_MetaData), NewProp_LightIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::NewProp_LightIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::ClassParams = {
	&UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround>()
{
	return UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround);
UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround::~UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround() {}
// End Class UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround

// Begin Class UMaterialExpressionSkyAtmosphereLightDiskLuminance
void UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDiskLuminance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereLightDiskLuminance);
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_NoRegister()
{
	return UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiskAngularDiameterOverride_MetaData[] = {
		{ "Comment", "/** Override the angular diameter of the disk in degree. If not specified, the radius specified on the directional light will be used. This can be used to decouple the directional light visual disk size used for the specular disk reflection on surfaces. However, be aware that screen space reflections will still catch the visual disk. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "Override the angular diameter of the disk in degree. If not specified, the radius specified on the directional light will be used. This can be used to decouple the directional light visual disk size used for the specular disk reflection on surfaces. However, be aware that screen space reflections will still catch the visual disk." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LightIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiskAngularDiameterOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightDiskLuminance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightDiskLuminance, LightIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightIndex_MetaData), NewProp_LightIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_DiskAngularDiameterOverride = { "DiskAngularDiameterOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightDiskLuminance, DiskAngularDiameterOverride), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiskAngularDiameterOverride_MetaData), NewProp_DiskAngularDiameterOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_DiskAngularDiameterOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::ClassParams = {
	&UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightDiskLuminance>()
{
	return UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightDiskLuminance);
UMaterialExpressionSkyAtmosphereLightDiskLuminance::~UMaterialExpressionSkyAtmosphereLightDiskLuminance() {}
// End Class UMaterialExpressionSkyAtmosphereLightDiskLuminance

// Begin Class UMaterialExpressionSkyAtmosphereAerialPerspective
void UMaterialExpressionSkyAtmosphereAerialPerspective::StaticRegisterNativesUMaterialExpressionSkyAtmosphereAerialPerspective()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereAerialPerspective);
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_NoRegister()
{
	return UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "Comment", "/** World position of the sample. If not specified, the pixel world position will be used. Larger distance will result in more fog. Please make sure .SkyAtmosphere.AerialPerspectiveLUT.Depth is set far enough to have fog data.\n\x09\x09If you are scaling the sky dome pixel world position, make sure it is centered around the origin.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "World position of the sample. If not specified, the pixel world position will be used. Larger distance will result in more fog. Please make sure .SkyAtmosphere.AerialPerspectiveLUT.Depth is set far enough to have fog data.\n              If you are scaling the sky dome pixel world position, make sure it is centered around the origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionSkyAtmosphereAerialPerspective" },
		{ "Comment", "/** Defines the reference space for the WorldPosition input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "Defines the reference space for the WorldPosition input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereAerialPerspective>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereAerialPerspective, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereAerialPerspective, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPositionOriginType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::ClassParams = {
	&UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereAerialPerspective>()
{
	return UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereAerialPerspective);
UMaterialExpressionSkyAtmosphereAerialPerspective::~UMaterialExpressionSkyAtmosphereAerialPerspective() {}
// End Class UMaterialExpressionSkyAtmosphereAerialPerspective

// Begin Class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance
void UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance);
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_NoRegister()
{
	return UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::ClassParams = {
	&UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass,
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
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance>()
{
	return UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance);
UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::~UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance() {}
// End Class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance, UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereLightIlluminance"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereLightIlluminance), 617611880U) },
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround, UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereLightIlluminanceOnGround), 876901654U) },
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance, UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereLightDiskLuminance"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereLightDiskLuminance), 42431916U) },
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective, UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereAerialPerspective"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereAerialPerspective), 4242773986U) },
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance, UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance), 3995759001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_3547946325(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
