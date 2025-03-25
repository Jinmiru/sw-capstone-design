// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceCurveBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCurveBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceCurveBase
void UNiagaraDataInterfaceCurveBase::StaticRegisterNativesUNiagaraDataInterfaceCurveBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCurveBase);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_NoRegister()
{
	return UNiagaraDataInterfaceCurveBase::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for curve data interfaces which facilitates handling the curve data in a standardized way. */" },
		{ "IncludePath", "NiagaraDataInterfaceCurveBase.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for curve data interfaces which facilitates handling the curve data in a standardized way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderLUT_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LUTMinTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LUTMaxTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LUTInvTimeRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LUTNumSamplesMinusOne_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveAsset_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLUT_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExposeCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Generates a texture for the curve which can be exposed to material bindings. */" },
		{ "DisplayName", "Expose Curve to Material" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ToolTip", "Generates a texture for the curve which can be exposed to material bindings." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeLUT_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Do we optimize the LUT, this saves memory but may introduce errors.  Errors can be reduced modifying the threshold. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ToolTip", "Do we optimize the LUT, this saves memory but may introduce errors.  Errors can be reduced modifying the threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideOptimizeThreshold_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasEditorData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizeThreshold_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Threshold used to optimize the LUT. */" },
		{ "EditCondition", "bOverrideOptimizeThreshold" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ToolTip", "Threshold used to optimize the LUT." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposedName_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Sets a custom name for the binding to make it easier to identify. */" },
		{ "DisplayName", "Exposed Curve Name" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ToolTip", "Sets a custom name for the binding to make it easier to identify." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposedTexture_MetaData[] = {
		{ "Comment", "/** The texture generated and exposed to materials, will be nullptr if we do not expose to the renderers. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurveBase.h" },
		{ "ToolTip", "The texture generated and exposed to materials, will be nullptr if we do not expose to the renderers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShaderLUT_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShaderLUT;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LUTMinTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LUTMaxTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LUTInvTimeRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LUTNumSamplesMinusOne;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAsset;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bUseLUT_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLUT;
	static void NewProp_bExposeCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeCurve;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOptimizeLUT_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeLUT;
	static void NewProp_bOverrideOptimizeThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideOptimizeThreshold;
	static void NewProp_HasEditorData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasEditorData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimizeThreshold;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExposedName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExposedTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCurveBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT_Inner = { "ShaderLUT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT = { "ShaderLUT", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, ShaderLUT), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderLUT_MetaData), NewProp_ShaderLUT_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMinTime = { "LUTMinTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, LUTMinTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LUTMinTime_MetaData), NewProp_LUTMinTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMaxTime = { "LUTMaxTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, LUTMaxTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LUTMaxTime_MetaData), NewProp_LUTMaxTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTInvTimeRange = { "LUTInvTimeRange", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, LUTInvTimeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LUTInvTimeRange_MetaData), NewProp_LUTInvTimeRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTNumSamplesMinusOne = { "LUTNumSamplesMinusOne", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, LUTNumSamplesMinusOne), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LUTNumSamplesMinusOne_MetaData), NewProp_LUTNumSamplesMinusOne_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_CurveAsset = { "CurveAsset", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, CurveAsset), Z_Construct_UClass_UCurveBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveAsset_MetaData), NewProp_CurveAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceCurveBase*)Obj)->bUseLUT = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT = { "bUseLUT", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLUT_MetaData), NewProp_bUseLUT_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bExposeCurve_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceCurveBase*)Obj)->bExposeCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bExposeCurve = { "bExposeCurve", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bExposeCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExposeCurve_MetaData), NewProp_bExposeCurve_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceCurveBase*)Obj)->bOptimizeLUT = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT = { "bOptimizeLUT", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeLUT_MetaData), NewProp_bOptimizeLUT_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceCurveBase*)Obj)->bOverrideOptimizeThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold = { "bOverrideOptimizeThreshold", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideOptimizeThreshold_MetaData), NewProp_bOverrideOptimizeThreshold_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_HasEditorData_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceCurveBase*)Obj)->HasEditorData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_HasEditorData = { "HasEditorData", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceCurveBase), &Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_HasEditorData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasEditorData_MetaData), NewProp_HasEditorData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_OptimizeThreshold = { "OptimizeThreshold", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, OptimizeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizeThreshold_MetaData), NewProp_OptimizeThreshold_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ExposedName = { "ExposedName", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, ExposedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposedName_MetaData), NewProp_ExposedName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ExposedTexture = { "ExposedTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCurveBase, ExposedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposedTexture_MetaData), NewProp_ExposedTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ShaderLUT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMinTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTMaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTInvTimeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_LUTNumSamplesMinusOne,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_CurveAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bUseLUT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bExposeCurve,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOptimizeLUT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_bOverrideOptimizeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_HasEditorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_OptimizeThreshold,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ExposedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::NewProp_ExposedTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::ClassParams = {
	&UNiagaraDataInterfaceCurveBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCurveBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCurveBase>()
{
	return UNiagaraDataInterfaceCurveBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCurveBase);
UNiagaraDataInterfaceCurveBase::~UNiagaraDataInterfaceCurveBase() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceCurveBase)
// End Class UNiagaraDataInterfaceCurveBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurveBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCurveBase, UNiagaraDataInterfaceCurveBase::StaticClass, TEXT("UNiagaraDataInterfaceCurveBase"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurveBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCurveBase), 3373318221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurveBase_h_3964241218(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurveBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurveBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
