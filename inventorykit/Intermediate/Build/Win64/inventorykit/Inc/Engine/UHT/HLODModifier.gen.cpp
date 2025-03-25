// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODModifier() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODModifier();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionHLODModifier
void UWorldPartitionHLODModifier::StaticRegisterNativesUWorldPartitionHLODModifier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionHLODModifier);
UClass* Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister()
{
	return UWorldPartitionHLODModifier::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionHLODModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all runtime HLOD modifiers\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODModifier.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODModifier.h" },
		{ "ToolTip", "Base class for all runtime HLOD modifiers" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionHLODModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::ClassParams = {
	&UWorldPartitionHLODModifier::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionHLODModifier()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton, Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionHLODModifier>()
{
	return UWorldPartitionHLODModifier::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionHLODModifier);
UWorldPartitionHLODModifier::~UWorldPartitionHLODModifier() {}
// End Class UWorldPartitionHLODModifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionHLODModifier, UWorldPartitionHLODModifier::StaticClass, TEXT("UWorldPartitionHLODModifier"), &Z_Registration_Info_UClass_UWorldPartitionHLODModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionHLODModifier), 4196209975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_3035910492(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
