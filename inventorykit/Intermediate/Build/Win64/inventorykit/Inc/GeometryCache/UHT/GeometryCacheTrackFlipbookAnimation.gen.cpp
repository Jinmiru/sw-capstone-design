// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheTrackFlipbookAnimation.h"
#include "GeometryCache/Classes/GeometryCacheMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackFlipbookAnimation() {}

// Begin Cross Module References
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_NoRegister();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References

// Begin Class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation Function AddMeshSample
struct Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics
{
	struct GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms
	{
		FGeometryCacheMeshData MeshData;
		float SampleTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Add a GeometryCacheMeshData sample to the Track\n\x09*\n\x09* @param MeshData - Holds the mesh data for the specific sample\n\x09* @param SampleTime - SampleTime for the specific sample being added\n\x09* @return void\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
		{ "ToolTip", "Add a GeometryCacheMeshData sample to the Track\n\n@param MeshData - Holds the mesh data for the specific sample\n@param SampleTime - SampleTime for the specific sample being added\n@return void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms, MeshData), Z_Construct_UScriptStruct_FGeometryCacheMeshData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshData_MetaData), NewProp_MeshData_MetaData) }; // 2304915188
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_SampleTime = { "SampleTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms, SampleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleTime_MetaData), NewProp_SampleTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_MeshData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_SampleTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation, nullptr, "AddMeshSample", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::execAddMeshSample)
{
	P_GET_STRUCT_REF(FGeometryCacheMeshData,Z_Param_Out_MeshData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SampleTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMeshSample(Z_Param_Out_MeshData,Z_Param_SampleTime);
	P_NATIVE_END;
}
// End Class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation Function AddMeshSample

// Begin Class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation
void UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation()
{
	UClass* Class = UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMeshSample", &UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::execAddMeshSample },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation);
UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_NoRegister()
{
	return UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Derived GeometryCacheTrack class, used for Transform animation. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackFlipbookAnimation.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
		{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumMeshSamples_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Number of Mesh Sample within this track */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
		{ "ToolTip", "Number of Mesh Sample within this track" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumMeshSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample, "AddMeshSample" }, // 3146901260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::NewProp_NumMeshSamples = { "NumMeshSamples", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation, NumMeshSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumMeshSamples_MetaData), NewProp_NumMeshSamples_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::NewProp_NumMeshSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::ClassParams = {
	&UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::PropPointers),
	0,
	0x021022A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.OuterSingleton;
}
template<> GEOMETRYCACHE_API UClass* StaticClass<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>()
{
	return UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation);
// End Class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackFlipbookAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation, UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass, TEXT("UDEPRECATED_GeometryCacheTrack_FlipbookAnimation"), &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation), 152566194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackFlipbookAnimation_h_2843540621(TEXT("/Script/GeometryCache"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackFlipbookAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackFlipbookAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
