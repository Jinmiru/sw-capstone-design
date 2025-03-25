// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume();
ENGINE_API UClass* Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ADEPRECATED_WorldPartitionVolume
void ADEPRECATED_WorldPartitionVolume::StaticRegisterNativesADEPRECATED_WorldPartitionVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADEPRECATED_WorldPartitionVolume);
UClass* Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_NoRegister()
{
	return ADEPRECATED_WorldPartitionVolume::StaticClass();
}
struct Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DeprecationMessage", "WorldPartitionVolume has been replaced by LocationVolume" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "WorldPartition/WorldPartitionVolume.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADEPRECATED_WorldPartitionVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::ClassParams = {
	&ADEPRECATED_WorldPartitionVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x028802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume()
{
	if (!Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton, Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ADEPRECATED_WorldPartitionVolume>()
{
	return ADEPRECATED_WorldPartitionVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADEPRECATED_WorldPartitionVolume);
ADEPRECATED_WorldPartitionVolume::~ADEPRECATED_WorldPartitionVolume() {}
// End Class ADEPRECATED_WorldPartitionVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume, ADEPRECATED_WorldPartitionVolume::StaticClass, TEXT("ADEPRECATED_WorldPartitionVolume"), &Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADEPRECATED_WorldPartitionVolume), 4078636591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_3395731315(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
