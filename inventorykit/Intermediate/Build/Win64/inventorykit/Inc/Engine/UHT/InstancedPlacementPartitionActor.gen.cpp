// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Instances/InstancedPlacementPartitionActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedPlacementPartitionActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AInstancedPlacementPartitionActor();
ENGINE_API UClass* Z_Construct_UClass_AInstancedPlacementPartitionActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AISMPartitionActor();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AInstancedPlacementPartitionActor
void AInstancedPlacementPartitionActor::StaticRegisterNativesAInstancedPlacementPartitionActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInstancedPlacementPartitionActor);
UClass* Z_Construct_UClass_AInstancedPlacementPartitionActor_NoRegister()
{
	return AInstancedPlacementPartitionActor::StaticClass();
}
struct Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class used by any editor placement of instanced objects, which holds any relevant runtime data for the placed instances.\n */" },
		{ "IncludePath", "Instances/InstancedPlacementPartitionActor.h" },
		{ "ModuleRelativePath", "Public/Instances/InstancedPlacementPartitionActor.h" },
		{ "ToolTip", "The base class used by any editor placement of instanced objects, which holds any relevant runtime data for the placed instances." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementGridGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Instances/InstancedPlacementPartitionActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementGridGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInstancedPlacementPartitionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::NewProp_PlacementGridGuid = { "PlacementGridGuid", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInstancedPlacementPartitionActor, PlacementGridGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementGridGuid_MetaData), NewProp_PlacementGridGuid_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::NewProp_PlacementGridGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AISMPartitionActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::ClassParams = {
	&AInstancedPlacementPartitionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::PropPointers), 0),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInstancedPlacementPartitionActor()
{
	if (!Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.OuterSingleton, Z_Construct_UClass_AInstancedPlacementPartitionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AInstancedPlacementPartitionActor>()
{
	return AInstancedPlacementPartitionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInstancedPlacementPartitionActor);
AInstancedPlacementPartitionActor::~AInstancedPlacementPartitionActor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AInstancedPlacementPartitionActor)
// End Class AInstancedPlacementPartitionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInstancedPlacementPartitionActor, AInstancedPlacementPartitionActor::StaticClass, TEXT("AInstancedPlacementPartitionActor"), &Z_Registration_Info_UClass_AInstancedPlacementPartitionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInstancedPlacementPartitionActor), 442812600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_4238575851(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementPartitionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
