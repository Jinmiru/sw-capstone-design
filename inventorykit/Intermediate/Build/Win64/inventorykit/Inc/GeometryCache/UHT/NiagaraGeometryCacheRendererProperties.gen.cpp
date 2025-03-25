// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/NiagaraGeometryCacheRendererProperties.h"
#include "Niagara/Public/NiagaraCommon.h"
#include "Niagara/Public/NiagaraRendererProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraGeometryCacheRendererProperties() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_NoRegister();
GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride();
GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References

// Begin ScriptStruct FNiagaraGeometryCacheMICOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheMICOverride;
class UScriptStruct* FNiagaraGeometryCacheMICOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheMICOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheMICOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride, (UObject*)Z_Construct_UPackage__Script_GeometryCache(), TEXT("NiagaraGeometryCacheMICOverride"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheMICOverride.OuterSingleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FNiagaraGeometryCacheMICOverride>()
{
	return FNiagaraGeometryCacheMICOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplacementMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGeometryCacheMICOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGeometryCacheMICOverride, OriginalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaterial_MetaData), NewProp_OriginalMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::NewProp_ReplacementMaterial = { "ReplacementMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGeometryCacheMICOverride, ReplacementMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplacementMaterial_MetaData), NewProp_ReplacementMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::NewProp_OriginalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::NewProp_ReplacementMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	nullptr,
	&NewStructOps,
	"NiagaraGeometryCacheMICOverride",
	Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::PropPointers),
	sizeof(FNiagaraGeometryCacheMICOverride),
	alignof(FNiagaraGeometryCacheMICOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheMICOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheMICOverride.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheMICOverride.InnerSingleton;
}
// End ScriptStruct FNiagaraGeometryCacheMICOverride

// Begin ScriptStruct FNiagaraGeometryCacheReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference;
class UScriptStruct* FNiagaraGeometryCacheReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference, (UObject*)Z_Construct_UPackage__Script_GeometryCache(), TEXT("NiagaraGeometryCacheReference"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.OuterSingleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FNiagaraGeometryCacheReference>()
{
	return FNiagaraGeometryCacheReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCache_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Reference to the geometry cache asset to use (if the user parameter binding is not set) */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Reference to the geometry cache asset to use (if the user parameter binding is not set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheUserParamBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Use the UGeometryCache bound to this user variable if it is set to a valid value. If this is bound to a valid value and GeometryCache is also set, GeometryCacheUserParamBinding wins.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Use the UGeometryCache bound to this user variable if it is set to a valid value. If this is bound to a valid value and GeometryCache is also set, GeometryCacheUserParamBinding wins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The materials to be used instead of the GeometryCache's materials. If the GeometryCache requires more materials than exist in this array or any entry in this array is set to None, we will use the GeometryCache's existing material instead.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "The materials to be used instead of the GeometryCache's materials. If the GeometryCache requires more materials than exist in this array or any entry in this array is set to None, we will use the GeometryCache's existing material instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MICOverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCacheUserParamBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MICOverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MICOverrideMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGeometryCacheReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGeometryCacheReference, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCache_MetaData), NewProp_GeometryCache_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCacheUserParamBinding = { "GeometryCacheUserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGeometryCacheReference, GeometryCacheUserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCacheUserParamBinding_MetaData), NewProp_GeometryCacheUserParamBinding_MetaData) }; // 174428838
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGeometryCacheReference, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_MICOverrideMaterials_Inner = { "MICOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride, METADATA_PARAMS(0, nullptr) }; // 3011289264
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_MICOverrideMaterials = { "MICOverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraGeometryCacheReference, MICOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MICOverrideMaterials_MetaData), NewProp_MICOverrideMaterials_MetaData) }; // 3011289264
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCacheUserParamBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_MICOverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_MICOverrideMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	nullptr,
	&NewStructOps,
	"NiagaraGeometryCacheReference",
	Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::PropPointers),
	sizeof(FNiagaraGeometryCacheReference),
	alignof(FNiagaraGeometryCacheReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.InnerSingleton;
}
// End ScriptStruct FNiagaraGeometryCacheReference

// Begin Class UNiagaraGeometryCacheRendererProperties
void UNiagaraGeometryCacheRendererProperties::StaticRegisterNativesUNiagaraGeometryCacheRendererProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraGeometryCacheRendererProperties);
UClass* Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_NoRegister()
{
	return UNiagaraGeometryCacheRendererProperties::StaticClass();
}
struct Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Geometry Cache Renderer" },
		{ "IncludePath", "NiagaraGeometryCacheRendererProperties.h" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCaches_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Reference to the geometry cache assets to use. If ArrayIndexBinding is not set, a random element is used for each particle. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Reference to the geometry cache assets to use. If ArrayIndexBinding is not set, a random element is used for each particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** If true, then the geometry cache keeps playing in a loop */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "If true, then the geometry cache keeps playing in a loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentCountLimit_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The max number of components that this emitter will spawn or update each frame. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "The max number of components that this emitter will spawn or update each frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the geometry cache position? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the geometry cache position?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the geometry cache rotation? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the geometry cache rotation?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the geometry cache component scale? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the geometry cache component scale?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTimeBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the geometry cache's current animation time? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the geometry cache's current animation time?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use to check if rendering should be enabled? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to check if rendering should be enabled?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndexBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use to pick the element in the geometry cache array for this renderer? If not set, a random element will be used. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to pick the element in the geometry cache array for this renderer? If not set, a random element will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the renderer visibility tag? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the renderer visibility tag?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAssignComponentsOnParticleID_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id.\n\x09* Disabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id.\nDisabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCaches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryCaches;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static void NewProp_bIsLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ComponentCountLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElapsedTimeBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnabledBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIndexBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RendererVisibility;
	static void NewProp_bAssignComponentsOnParticleID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignComponentsOnParticleID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraGeometryCacheRendererProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches_Inner = { "GeometryCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference, METADATA_PARAMS(0, nullptr) }; // 1978465798
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches = { "GeometryCaches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, GeometryCaches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCaches_MetaData), NewProp_GeometryCaches_MetaData) }; // 1978465798
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 2982988763
void Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping_SetBit(void* Obj)
{
	((UNiagaraGeometryCacheRendererProperties*)Obj)->bIsLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraGeometryCacheRendererProperties), &Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLooping_MetaData), NewProp_bIsLooping_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ComponentCountLimit = { "ComponentCountLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, ComponentCountLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentCountLimit_MetaData), NewProp_ComponentCountLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionBinding_MetaData), NewProp_PositionBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RotationBinding = { "RotationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, RotationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationBinding_MetaData), NewProp_RotationBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ScaleBinding = { "ScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, ScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleBinding_MetaData), NewProp_ScaleBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ElapsedTimeBinding = { "ElapsedTimeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, ElapsedTimeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTimeBinding_MetaData), NewProp_ElapsedTimeBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_EnabledBinding = { "EnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, EnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledBinding_MetaData), NewProp_EnabledBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ArrayIndexBinding = { "ArrayIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, ArrayIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayIndexBinding_MetaData), NewProp_ArrayIndexBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererVisibilityTagBinding_MetaData), NewProp_RendererVisibilityTagBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, RendererVisibility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererVisibility_MetaData), NewProp_RendererVisibility_MetaData) };
void Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_SetBit(void* Obj)
{
	((UNiagaraGeometryCacheRendererProperties*)Obj)->bAssignComponentsOnParticleID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID = { "bAssignComponentsOnParticleID", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraGeometryCacheRendererProperties), &Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAssignComponentsOnParticleID_MetaData), NewProp_bAssignComponentsOnParticleID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, MaterialParameters), Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParameters_MetaData), NewProp_MaterialParameters_MetaData) }; // 2755820487
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ComponentCountLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_PositionBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RotationBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ScaleBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ElapsedTimeBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_EnabledBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ArrayIndexBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_MaterialParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::ClassParams = {
	&UNiagaraGeometryCacheRendererProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties()
{
	if (!Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton;
}
template<> GEOMETRYCACHE_API UClass* StaticClass<UNiagaraGeometryCacheRendererProperties>()
{
	return UNiagaraGeometryCacheRendererProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraGeometryCacheRendererProperties);
UNiagaraGeometryCacheRendererProperties::~UNiagaraGeometryCacheRendererProperties() {}
// End Class UNiagaraGeometryCacheRendererProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraGeometryCacheMICOverride::StaticStruct, Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::NewStructOps, TEXT("NiagaraGeometryCacheMICOverride"), &Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheMICOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraGeometryCacheMICOverride), 3011289264U) },
		{ FNiagaraGeometryCacheReference::StaticStruct, Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewStructOps, TEXT("NiagaraGeometryCacheReference"), &Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraGeometryCacheReference), 1978465798U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties, UNiagaraGeometryCacheRendererProperties::StaticClass, TEXT("UNiagaraGeometryCacheRendererProperties"), &Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraGeometryCacheRendererProperties), 3684587748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_4219491313(TEXT("/Script/GeometryCache"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
