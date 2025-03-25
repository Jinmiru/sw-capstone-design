// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheTrackTransformGroupAnimation.h"
#include "GeometryCache/Classes/GeometryCacheMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackTransformGroupAnimation() {}

// Begin Cross Module References
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_NoRegister();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References

// Begin Class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation Function SetMesh
struct Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics
{
	struct GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms
	{
		FGeometryCacheMeshData NewMeshData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Sets/updates the MeshData for this track\n\x09*\n\x09* @param NewMeshData - GeometryCacheMeshData instance later used as the rendered mesh\x09\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackTransformGroupAnimation.h" },
		{ "ToolTip", "Sets/updates the MeshData for this track\n\n@param NewMeshData - GeometryCacheMeshData instance later used as the rendered mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMeshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMeshData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::NewProp_NewMeshData = { "NewMeshData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms, NewMeshData), Z_Construct_UScriptStruct_FGeometryCacheMeshData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMeshData_MetaData), NewProp_NewMeshData_MetaData) }; // 2304915188
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::NewProp_NewMeshData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation, nullptr, "SetMesh", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::execSetMesh)
{
	P_GET_STRUCT_REF(FGeometryCacheMeshData,Z_Param_Out_NewMeshData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMesh(Z_Param_Out_NewMeshData);
	P_NATIVE_END;
}
// End Class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation Function SetMesh

// Begin Class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation
void UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation()
{
	UClass* Class = UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMesh", &UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::execSetMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation);
UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_NoRegister()
{
	return UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Derived GeometryCacheTrack class, used for Transform animation. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackTransformGroupAnimation.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackTransformGroupAnimation.h" },
		{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh, "SetMesh" }, // 1947596872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::ClassParams = {
	&UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x021022A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.OuterSingleton;
}
template<> GEOMETRYCACHE_API UClass* StaticClass<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>()
{
	return UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation);
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::~UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation() {}
// End Class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation, UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass, TEXT("UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation"), &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation), 16409033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_687114976(TEXT("/Script/GeometryCache"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
