// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionReplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionReplay() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionReplay();
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionReplay_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AWorldPartitionReplay
void AWorldPartitionReplay::StaticRegisterNativesAWorldPartitionReplay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldPartitionReplay);
UClass* Z_Construct_UClass_AWorldPartitionReplay_NoRegister()
{
	return AWorldPartitionReplay::StaticClass();
}
struct Z_Construct_UClass_AWorldPartitionReplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor used to record world partition replay data (streaming sources for now)\n */" },
		{ "IncludePath", "WorldPartition/WorldPartitionReplay.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionReplay.h" },
		{ "ToolTip", "Actor used to record world partition replay data (streaming sources for now)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingSourceNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionReplay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StreamingSourceNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingSourceNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPartitionReplay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldPartitionReplay_Statics::NewProp_StreamingSourceNames_Inner = { "StreamingSourceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldPartitionReplay_Statics::NewProp_StreamingSourceNames = { "StreamingSourceNames", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionReplay, StreamingSourceNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingSourceNames_MetaData), NewProp_StreamingSourceNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldPartitionReplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionReplay_Statics::NewProp_StreamingSourceNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionReplay_Statics::NewProp_StreamingSourceNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionReplay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldPartitionReplay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionReplay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldPartitionReplay_Statics::ClassParams = {
	&AWorldPartitionReplay::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWorldPartitionReplay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionReplay_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionReplay_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldPartitionReplay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldPartitionReplay()
{
	if (!Z_Registration_Info_UClass_AWorldPartitionReplay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldPartitionReplay.OuterSingleton, Z_Construct_UClass_AWorldPartitionReplay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldPartitionReplay.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AWorldPartitionReplay>()
{
	return AWorldPartitionReplay::StaticClass();
}
void AWorldPartitionReplay::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StreamingSourceNames(TEXT("StreamingSourceNames"));
	const bool bIsValid = true
		&& Name_StreamingSourceNames == ClassReps[(int32)ENetFields_Private::StreamingSourceNames].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWorldPartitionReplay"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPartitionReplay);
AWorldPartitionReplay::~AWorldPartitionReplay() {}
// End Class AWorldPartitionReplay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldPartitionReplay, AWorldPartitionReplay::StaticClass, TEXT("AWorldPartitionReplay"), &Z_Registration_Info_UClass_AWorldPartitionReplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldPartitionReplay), 1823706275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_3726573082(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
