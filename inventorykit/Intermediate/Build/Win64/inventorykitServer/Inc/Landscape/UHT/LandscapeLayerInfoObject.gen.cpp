// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeLayerInfoObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeLayerInfoObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ESplineModulationColorMask();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Enum ESplineModulationColorMask
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineModulationColorMask;
static UEnum* ESplineModulationColorMask_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ESplineModulationColorMask, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ESplineModulationColorMask"));
	}
	return Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ESplineModulationColorMask>()
{
	return ESplineModulationColorMask_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Name", "ESplineModulationColorMask::Alpha" },
		{ "Blue.Name", "ESplineModulationColorMask::Blue" },
		{ "Green.Name", "ESplineModulationColorMask::Green" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Red.Name", "ESplineModulationColorMask::Red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESplineModulationColorMask::Red", (int64)ESplineModulationColorMask::Red },
		{ "ESplineModulationColorMask::Green", (int64)ESplineModulationColorMask::Green },
		{ "ESplineModulationColorMask::Blue", (int64)ESplineModulationColorMask::Blue },
		{ "ESplineModulationColorMask::Alpha", (int64)ESplineModulationColorMask::Alpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ESplineModulationColorMask",
	"ESplineModulationColorMask",
	Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ESplineModulationColorMask()
{
	if (!Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton, Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton;
}
// End Enum ESplineModulationColorMask

// Begin Class ULandscapeLayerInfoObject
void ULandscapeLayerInfoObject::StaticRegisterNativesULandscapeLayerInfoObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeLayerInfoObject);
UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister()
{
	return ULandscapeLayerInfoObject::StaticClass();
}
struct Z_Construct_UClass_ULandscapeLayerInfoObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LandscapeLayerInfoObject.h" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "DisplayName", "Physical Material" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "Physical material to use when this layer is the predominant one at a given location. Note: this is ignored if the Landscape Physical Material node is used in the landscape material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "Defines how much 'resistance' areas painted with this layer will offer to the Erosion tool. A hardness of 0 means the layer is fully affected by erosion, while 1 means fully unaffected." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumCollisionRelevanceWeight_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "The minimum weight that needs to be painted for that layer to be picked up as the dominant physical layer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoWeightBlend_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "Prevents this layer to be weight-blended with others." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationTexture_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "Texture to modulate the Splines Falloff Layer Alpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationColorMask_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "DisplayName", "Color Mask" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "Defines which channel of the Spline Falloff Modulation Texture to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationTiling_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Tiling" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "Defines the tiling to use when sampling the Spline Falloff Modulation Texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationBias_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bias" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "Defines the offset to use when sampling the Spline Falloff Modulation Texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationScale_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "Allows to scale the value sampled from the Spline Falloff Modulation Texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsReferencedFromLoadedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerUsageDebugColor_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Tooltip", "The color to use for layer usage debug" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hardness;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumCollisionRelevanceWeight;
	static void NewProp_bNoWeightBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoWeightBlend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineFalloffModulationTexture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineFalloffModulationColorMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineFalloffModulationColorMask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationTiling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationScale;
	static void NewProp_IsReferencedFromLoadedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReferencedFromLoadedData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerUsageDebugColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeLayerInfoObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterial_MetaData), NewProp_PhysMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, Hardness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardness_MetaData), NewProp_Hardness_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight = { "MinimumCollisionRelevanceWeight", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, MinimumCollisionRelevanceWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumCollisionRelevanceWeight_MetaData), NewProp_MinimumCollisionRelevanceWeight_MetaData) };
void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit(void* Obj)
{
	((ULandscapeLayerInfoObject*)Obj)->bNoWeightBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend = { "bNoWeightBlend", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoWeightBlend_MetaData), NewProp_bNoWeightBlend_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture = { "SplineFalloffModulationTexture", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineFalloffModulationTexture_MetaData), NewProp_SplineFalloffModulationTexture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask = { "SplineFalloffModulationColorMask", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationColorMask), Z_Construct_UEnum_Landscape_ESplineModulationColorMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineFalloffModulationColorMask_MetaData), NewProp_SplineFalloffModulationColorMask_MetaData) }; // 1351431550
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling = { "SplineFalloffModulationTiling", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationTiling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineFalloffModulationTiling_MetaData), NewProp_SplineFalloffModulationTiling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias = { "SplineFalloffModulationBias", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineFalloffModulationBias_MetaData), NewProp_SplineFalloffModulationBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale = { "SplineFalloffModulationScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineFalloffModulationScale_MetaData), NewProp_SplineFalloffModulationScale_MetaData) };
void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit(void* Obj)
{
	((ULandscapeLayerInfoObject*)Obj)->IsReferencedFromLoadedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData = { "IsReferencedFromLoadedData", nullptr, (EPropertyFlags)0x0010000c00002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsReferencedFromLoadedData_MetaData), NewProp_IsReferencedFromLoadedData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor = { "LayerUsageDebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerUsageDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerUsageDebugColor_MetaData), NewProp_LayerUsageDebugColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams = {
	&ULandscapeLayerInfoObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeLayerInfoObject()
{
	if (!Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton, Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeLayerInfoObject>()
{
	return ULandscapeLayerInfoObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeLayerInfoObject);
ULandscapeLayerInfoObject::~ULandscapeLayerInfoObject() {}
// End Class ULandscapeLayerInfoObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESplineModulationColorMask_StaticEnum, TEXT("ESplineModulationColorMask"), &Z_Registration_Info_UEnum_ESplineModulationColorMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1351431550U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeLayerInfoObject, ULandscapeLayerInfoObject::StaticClass, TEXT("ULandscapeLayerInfoObject"), &Z_Registration_Info_UClass_ULandscapeLayerInfoObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeLayerInfoObject), 183084362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_2971560360(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
