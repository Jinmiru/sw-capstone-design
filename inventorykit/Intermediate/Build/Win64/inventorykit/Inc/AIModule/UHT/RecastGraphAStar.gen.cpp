// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/RecastGraphAStar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastGraphAStar() {}

// Begin Cross Module References
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRecastGraphWrapper();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FRecastGraphWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecastGraphWrapper;
class UScriptStruct* FRecastGraphWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecastGraphWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecastGraphWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecastGraphWrapper, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("RecastGraphWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_RecastGraphWrapper.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FRecastGraphWrapper>()
{
	return FRecastGraphWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/RecastGraphAStar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecastNavMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/RecastGraphAStar.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecastNavMeshActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecastGraphWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor = { "RecastNavMeshActor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecastGraphWrapper, RecastNavMeshActor), Z_Construct_UClass_ARecastNavMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecastNavMeshActor_MetaData), NewProp_RecastNavMeshActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"RecastGraphWrapper",
	Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers),
	sizeof(FRecastGraphWrapper),
	alignof(FRecastGraphWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecastGraphWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_RecastGraphWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecastGraphWrapper.InnerSingleton, Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RecastGraphWrapper.InnerSingleton;
}
// End ScriptStruct FRecastGraphWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecastGraphWrapper::StaticStruct, Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewStructOps, TEXT("RecastGraphWrapper"), &Z_Registration_Info_UScriptStruct_RecastGraphWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecastGraphWrapper), 1817247794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_2179653649(TEXT("/Script/AIModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
