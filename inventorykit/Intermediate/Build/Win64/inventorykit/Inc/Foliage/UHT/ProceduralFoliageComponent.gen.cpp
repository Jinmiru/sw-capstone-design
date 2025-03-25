// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/ProceduralFoliageComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent();
FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class UProceduralFoliageComponent
void UProceduralFoliageComponent::StaticRegisterNativesUProceduralFoliageComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralFoliageComponent);
UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister()
{
	return UProceduralFoliageComponent::StaticClass();
}
struct Z_Construct_UClass_UProceduralFoliageComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProceduralFoliageComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageSpawner_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** The procedural foliage spawner used to generate foliage instances within this volume. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "The procedural foliage spawner used to generate foliage instances within this volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileOverlap_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** The amount of overlap between simulation tiles (in cm). */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "The amount of overlap between simulation tiles (in cm)." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLandscape_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on landscape */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on landscape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBSP_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on BSP */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on BSP" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStaticMesh_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on StaticMesh */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on StaticMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTranslucent_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on translucent geometry */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on translucent geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFoliage_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to place foliage on other blocking foliage geometry */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on other blocking foliage geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugTiles_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "Comment", "/** Whether to visualize the tiles used for the foliage spawner simulation */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to visualize the tiles used for the foliage spawner simulation" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageSpawner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileOverlap;
#if WITH_EDITORONLY_DATA
	static void NewProp_bAllowLandscape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLandscape;
	static void NewProp_bAllowBSP_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBSP;
	static void NewProp_bAllowStaticMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStaticMesh;
	static void NewProp_bAllowTranslucent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTranslucent;
	static void NewProp_bAllowFoliage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFoliage;
	static void NewProp_bShowDebugTiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugTiles;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawningVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner = { "FoliageSpawner", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageComponent, FoliageSpawner), Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageSpawner_MetaData), NewProp_FoliageSpawner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap = { "TileOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageComponent, TileOverlap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileOverlap_MetaData), NewProp_TileOverlap_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_SetBit(void* Obj)
{
	((UProceduralFoliageComponent*)Obj)->bAllowLandscape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape = { "bAllowLandscape", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowLandscape_MetaData), NewProp_bAllowLandscape_MetaData) };
void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_SetBit(void* Obj)
{
	((UProceduralFoliageComponent*)Obj)->bAllowBSP = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP = { "bAllowBSP", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowBSP_MetaData), NewProp_bAllowBSP_MetaData) };
void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_SetBit(void* Obj)
{
	((UProceduralFoliageComponent*)Obj)->bAllowStaticMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh = { "bAllowStaticMesh", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStaticMesh_MetaData), NewProp_bAllowStaticMesh_MetaData) };
void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_SetBit(void* Obj)
{
	((UProceduralFoliageComponent*)Obj)->bAllowTranslucent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent = { "bAllowTranslucent", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowTranslucent_MetaData), NewProp_bAllowTranslucent_MetaData) };
void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_SetBit(void* Obj)
{
	((UProceduralFoliageComponent*)Obj)->bAllowFoliage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage = { "bAllowFoliage", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFoliage_MetaData), NewProp_bAllowFoliage_MetaData) };
void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_SetBit(void* Obj)
{
	((UProceduralFoliageComponent*)Obj)->bShowDebugTiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles = { "bShowDebugTiles", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugTiles_MetaData), NewProp_bShowDebugTiles_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume = { "SpawningVolume", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageComponent, SpawningVolume), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningVolume_MetaData), NewProp_SpawningVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid = { "ProceduralGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageComponent, ProceduralGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralGuid_MetaData), NewProp_ProceduralGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProceduralFoliageComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::ClassParams = {
	&UProceduralFoliageComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralFoliageComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProceduralFoliageComponent()
{
	if (!Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton, Z_Construct_UClass_UProceduralFoliageComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProceduralFoliageComponent.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UProceduralFoliageComponent>()
{
	return UProceduralFoliageComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageComponent);
UProceduralFoliageComponent::~UProceduralFoliageComponent() {}
// End Class UProceduralFoliageComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralFoliageComponent, UProceduralFoliageComponent::StaticClass, TEXT("UProceduralFoliageComponent"), &Z_Registration_Info_UClass_UProceduralFoliageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralFoliageComponent), 508257720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_3982809698(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
