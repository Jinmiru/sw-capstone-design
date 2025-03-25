// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialAttributeLayers.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialAttributeLayers() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionMaterialAttributeLayers
void UMaterialExpressionMaterialAttributeLayers::StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialAttributeLayers);
UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister()
{
	return UMaterialExpressionMaterialAttributeLayers::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialAttributeLayers.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumActiveLayerCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumActiveBlendCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLayerGraphBuilt_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerCallers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerCallers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumActiveLayerCallers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendCallers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendCallers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumActiveBlendCallers;
	static void NewProp_bIsLayerGraphBuilt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLayerGraphBuilt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialAttributeLayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, Input), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers = { "DefaultLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, DefaultLayers), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLayers_MetaData), NewProp_DefaultLayers_MetaData) }; // 2588930049
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_Inner = { "LayerCallers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers = { "LayerCallers", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, LayerCallers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerCallers_MetaData), NewProp_LayerCallers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers = { "NumActiveLayerCallers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, NumActiveLayerCallers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumActiveLayerCallers_MetaData), NewProp_NumActiveLayerCallers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_Inner = { "BlendCallers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers = { "BlendCallers", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, BlendCallers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendCallers_MetaData), NewProp_BlendCallers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers = { "NumActiveBlendCallers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, NumActiveBlendCallers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumActiveBlendCallers_MetaData), NewProp_NumActiveBlendCallers_MetaData) };
void Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_SetBit(void* Obj)
{
	((UMaterialExpressionMaterialAttributeLayers*)Obj)->bIsLayerGraphBuilt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt = { "bIsLayerGraphBuilt", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionMaterialAttributeLayers), &Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLayerGraphBuilt_MetaData), NewProp_bIsLayerGraphBuilt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::ClassParams = {
	&UMaterialExpressionMaterialAttributeLayers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialAttributeLayers>()
{
	return UMaterialExpressionMaterialAttributeLayers::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialAttributeLayers);
UMaterialExpressionMaterialAttributeLayers::~UMaterialExpressionMaterialAttributeLayers() {}
// End Class UMaterialExpressionMaterialAttributeLayers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers, UMaterialExpressionMaterialAttributeLayers::StaticClass, TEXT("UMaterialExpressionMaterialAttributeLayers"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialAttributeLayers), 2651457356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_2337240244(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
