// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Physics/AsyncPhysicsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncPhysicsData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsData();
ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAsyncPhysicsData
void UAsyncPhysicsData::StaticRegisterNativesUAsyncPhysicsData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncPhysicsData);
UClass* Z_Construct_UClass_UAsyncPhysicsData_NoRegister()
{
	return UAsyncPhysicsData::StaticClass();
}
struct Z_Construct_UClass_UAsyncPhysicsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09The base class for async physics data. Inherit from this to create custom data for async physics tick.\n\x09When no data is available (say due to massive latency or packet loss) we fall back on the default constructed data.\n\x09This means you should set the default values to something equivalent to no input (for example bPlayerWantsToJump should probably default to false)\n*/" },
		{ "IncludePath", "Physics/AsyncPhysicsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsData.h" },
		{ "ToolTip", "The base class for async physics data. Inherit from this to create custom data for async physics tick.\nWhen no data is available (say due to massive latency or packet loss) we fall back on the default constructed data.\nThis means you should set the default values to something equivalent to no input (for example bPlayerWantsToJump should probably default to false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationRedundancy_MetaData[] = {
		{ "Category", "AsyncPhysicsData" },
		{ "Comment", "//Determines how many times we redundantly send data to server. The higher this number the less packet loss, but more bandwidth is used\n" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsData.h" },
		{ "ToolTip", "Determines how many times we redundantly send data to server. The higher this number the less packet loss, but more bandwidth is used" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationRedundancy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncPhysicsData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ServerFrame = { "ServerFrame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPhysicsData, ServerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFrame_MetaData), NewProp_ServerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ReplicationRedundancy = { "ReplicationRedundancy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPhysicsData, ReplicationRedundancy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationRedundancy_MetaData), NewProp_ReplicationRedundancy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncPhysicsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ServerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsData_Statics::NewProp_ReplicationRedundancy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncPhysicsData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncPhysicsData_Statics::ClassParams = {
	&UAsyncPhysicsData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAsyncPhysicsData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncPhysicsData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncPhysicsData()
{
	if (!Z_Registration_Info_UClass_UAsyncPhysicsData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncPhysicsData.OuterSingleton, Z_Construct_UClass_UAsyncPhysicsData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncPhysicsData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAsyncPhysicsData>()
{
	return UAsyncPhysicsData::StaticClass();
}
UAsyncPhysicsData::UAsyncPhysicsData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncPhysicsData);
// End Class UAsyncPhysicsData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncPhysicsData, UAsyncPhysicsData::StaticClass, TEXT("UAsyncPhysicsData"), &Z_Registration_Info_UClass_UAsyncPhysicsData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncPhysicsData), 2067612163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_2995742904(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
