// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULayer();
ENGINE_API UClass* Z_Construct_UClass_ULayer_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLayerActorStats();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FLayerActorStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayerActorStats;
class UScriptStruct* FLayerActorStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayerActorStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayerActorStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerActorStats, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LayerActorStats"));
	}
	return Z_Registration_Info_UScriptStruct_LayerActorStats.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLayerActorStats>()
{
	return FLayerActorStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLayerActorStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Comment", "/** A Type of Actor currently associated with the Layer */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "A Type of Actor currently associated with the Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[] = {
		{ "Comment", "/** The total number of Actors of Type assigned to the Layer */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "The total number of Actors of Type assigned to the Layer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Total;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerActorStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerActorStats, Type), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerActorStats, Total), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Total_MetaData), NewProp_Total_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewProp_Total,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerActorStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LayerActorStats",
	Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::PropPointers),
	sizeof(FLayerActorStats),
	alignof(FLayerActorStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerActorStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayerActorStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayerActorStats()
{
	if (!Z_Registration_Info_UScriptStruct_LayerActorStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayerActorStats.InnerSingleton, Z_Construct_UScriptStruct_FLayerActorStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LayerActorStats.InnerSingleton;
}
// End ScriptStruct FLayerActorStats

// Begin Class ULayer
void ULayer::StaticRegisterNativesULayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayer);
UClass* Z_Construct_UClass_ULayer_NoRegister()
{
	return ULayer::StaticClass();
}
struct Z_Construct_UClass_ULayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Layers/Layer.h" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Comment", "/** The display name of the layer */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "The display name of the layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** Whether actors associated with the layer are visible in the viewport */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "Whether actors associated with the layer are visible in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorStats_MetaData[] = {
		{ "Comment", "/** \n\x09 * Basic stats regarding the number of Actors and their types currently assigned to the Layer \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Layers/Layer.h" },
		{ "ToolTip", "Basic stats regarding the number of Actors and their types currently assigned to the Layer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorStats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
void Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((ULayer*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULayer), &Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_Inner = { "ActorStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLayerActorStats, METADATA_PARAMS(0, nullptr) }; // 1132072728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats = { "ActorStats", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULayer, ActorStats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorStats_MetaData), NewProp_ActorStats_MetaData) }; // 1132072728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayer_Statics::NewProp_ActorStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayer_Statics::ClassParams = {
	&ULayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULayer()
{
	if (!Z_Registration_Info_UClass_ULayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayer.OuterSingleton, Z_Construct_UClass_ULayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULayer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULayer>()
{
	return ULayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULayer);
ULayer::~ULayer() {}
// End Class ULayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayerActorStats::StaticStruct, Z_Construct_UScriptStruct_FLayerActorStats_Statics::NewStructOps, TEXT("LayerActorStats"), &Z_Registration_Info_UScriptStruct_LayerActorStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayerActorStats), 1132072728U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULayer, ULayer::StaticClass, TEXT("ULayer"), &Z_Registration_Info_UClass_ULayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayer), 2917840061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_2484890948(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Layers_Layer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
