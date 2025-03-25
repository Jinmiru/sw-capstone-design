// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeInfo.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineInterface_NoRegister();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FLandscapeInfoLayerSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeInfoLayerSettings;
class UScriptStruct* FLandscapeInfoLayerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeInfoLayerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeInfoLayerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeInfoLayerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeInfoLayerSettings.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeInfoLayerSettings>()
{
	return FLandscapeInfoLayerSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObj_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailMIC_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColorChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObj;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailMIC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugColorChannel;
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeInfoLayerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerInfoObj = { "LayerInfoObj", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, LayerInfoObj), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfoObj_MetaData), NewProp_LayerInfoObj_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_ThumbnailMIC = { "ThumbnailMIC", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, ThumbnailMIC), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailMIC_MetaData), NewProp_ThumbnailMIC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, Owner), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_DebugColorChannel = { "DebugColorChannel", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeInfoLayerSettings, DebugColorChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColorChannel_MetaData), NewProp_DebugColorChannel_MetaData) };
void Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((FLandscapeInfoLayerSettings*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLandscapeInfoLayerSettings), &Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerInfoObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_LayerName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_ThumbnailMIC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_DebugColorChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewProp_bValid,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeInfoLayerSettings",
	Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::PropPointers),
	sizeof(FLandscapeInfoLayerSettings),
	alignof(FLandscapeInfoLayerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeInfoLayerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeInfoLayerSettings.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeInfoLayerSettings.InnerSingleton;
}
// End ScriptStruct FLandscapeInfoLayerSettings

// Begin Class ULandscapeInfo
void ULandscapeInfo::StaticRegisterNativesULandscapeInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeInfo);
UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister()
{
	return ULandscapeInfo::StaticClass();
}
struct Z_Construct_UClass_ULandscapeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeInfo.h" },
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentNumSubsections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionSizeInComponents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingProxies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineActors_MetaData[] = {
		{ "Comment", "// SORTED list of all actors implementing the spline interface that are registered with this landscape info\n" },
		{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
		{ "ToolTip", "SORTED list of all actors implementing the spline interface that are registered with this landscape info" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LandscapeActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentNumSubsections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawScale;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegionSizeInComponents;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_StreamingProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingProxies;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_SplineActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineActors;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeActor = { "LandscapeActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, LandscapeActor), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeActor_MetaData), NewProp_LandscapeActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeGuid_MetaData), NewProp_LandscapeGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentSizeQuads = { "ComponentSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, ComponentSizeQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentSizeQuads_MetaData), NewProp_ComponentSizeQuads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SubsectionSizeQuads = { "SubsectionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, SubsectionSizeQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsectionSizeQuads_MetaData), NewProp_SubsectionSizeQuads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentNumSubsections = { "ComponentNumSubsections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, ComponentNumSubsections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentNumSubsections_MetaData), NewProp_ComponentNumSubsections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_DrawScale = { "DrawScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, DrawScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawScale_MetaData), NewProp_DrawScale_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings, METADATA_PARAMS(0, nullptr) }; // 1545419270
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 1545419270
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_RegionSizeInComponents = { "RegionSizeInComponents", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, RegionSizeInComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionSizeInComponents_MetaData), NewProp_RegionSizeInComponents_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_StreamingProxies_Inner = { "StreamingProxies", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_StreamingProxies = { "StreamingProxies", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, StreamingProxies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingProxies_MetaData), NewProp_StreamingProxies_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SplineActors_Inner = { "SplineActors", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SplineActors = { "SplineActors", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeInfo, SplineActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineActors_MetaData), NewProp_SplineActors_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_LandscapeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentSizeQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SubsectionSizeQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_ComponentNumSubsections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_DrawScale,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_RegionSizeInComponents,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_StreamingProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_StreamingProxies,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SplineActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeInfo_Statics::NewProp_SplineActors,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeInfo_Statics::ClassParams = {
	&ULandscapeInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::PropPointers),
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeInfo()
{
	if (!Z_Registration_Info_UClass_ULandscapeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeInfo.OuterSingleton, Z_Construct_UClass_ULandscapeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeInfo.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeInfo>()
{
	return ULandscapeInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeInfo);
ULandscapeInfo::~ULandscapeInfo() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeInfo)
// End Class ULandscapeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeInfoLayerSettings::StaticStruct, Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics::NewStructOps, TEXT("LandscapeInfoLayerSettings"), &Z_Registration_Info_UScriptStruct_LandscapeInfoLayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeInfoLayerSettings), 1545419270U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeInfo, ULandscapeInfo::StaticClass, TEXT("ULandscapeInfo"), &Z_Registration_Info_UClass_ULandscapeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeInfo), 780831490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_2659689935(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
