// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSourceModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSourceModel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshDescriptionBulkData();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshDescriptionBulkData_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSourceModel();
MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBaseBulkData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USkeletalMeshDescriptionBulkData
void USkeletalMeshDescriptionBulkData::StaticRegisterNativesUSkeletalMeshDescriptionBulkData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshDescriptionBulkData);
UClass* Z_Construct_UClass_USkeletalMeshDescriptionBulkData_NoRegister()
{
	return USkeletalMeshDescriptionBulkData::StaticClass();
}
struct Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/SkeletalMeshSourceModel.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSourceModel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshDescriptionBulkData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshDescriptionBaseBulkData,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics::ClassParams = {
	&USkeletalMeshDescriptionBulkData::StaticClass,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalMeshDescriptionBulkData()
{
	if (!Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.OuterSingleton, Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkeletalMeshDescriptionBulkData>()
{
	return USkeletalMeshDescriptionBulkData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshDescriptionBulkData);
USkeletalMeshDescriptionBulkData::~USkeletalMeshDescriptionBulkData() {}
// End Class USkeletalMeshDescriptionBulkData

// Begin ScriptStruct FSkeletalMeshSourceModel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshSourceModel;
class UScriptStruct* FSkeletalMeshSourceModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSourceModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshSourceModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSourceModel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSourceModel"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSourceModel.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSourceModel>()
{
	return FSkeletalMeshSourceModel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSourceModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangleCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSourceModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSourceModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSourceModel.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshDescriptionBulkData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Bulk data containing mesh description from imported or modeled geometry.\n\x09 * If the bulk data within is empty, the LOD is autogenerated (for LOD1+).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSourceModel.h" },
		{ "ToolTip", "Bulk data containing mesh description from imported or modeled geometry.\nIf the bulk data within is empty, the LOD is autogenerated (for LOD1+)." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDescriptionBulkData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSourceModel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewProp_TriangleCount = { "TriangleCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshSourceModel, TriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangleCount_MetaData), NewProp_TriangleCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshSourceModel, VertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexCount_MetaData), NewProp_VertexCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshSourceModel, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewProp_MeshDescriptionBulkData = { "MeshDescriptionBulkData", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshSourceModel, MeshDescriptionBulkData), Z_Construct_UClass_USkeletalMeshDescriptionBulkData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshDescriptionBulkData_MetaData), NewProp_MeshDescriptionBulkData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewProp_TriangleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewProp_VertexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewProp_Bounds,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewProp_MeshDescriptionBulkData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkeletalMeshSourceModel",
	Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::PropPointers),
	sizeof(FSkeletalMeshSourceModel),
	alignof(FSkeletalMeshSourceModel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSourceModel()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshSourceModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshSourceModel.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshSourceModel.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshSourceModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkeletalMeshSourceModel::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics::NewStructOps, TEXT("SkeletalMeshSourceModel"), &Z_Registration_Info_UScriptStruct_SkeletalMeshSourceModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshSourceModel), 1201722015U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshDescriptionBulkData, USkeletalMeshDescriptionBulkData::StaticClass, TEXT("USkeletalMeshDescriptionBulkData"), &Z_Registration_Info_UClass_USkeletalMeshDescriptionBulkData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshDescriptionBulkData), 2500146738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_3445695167(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
