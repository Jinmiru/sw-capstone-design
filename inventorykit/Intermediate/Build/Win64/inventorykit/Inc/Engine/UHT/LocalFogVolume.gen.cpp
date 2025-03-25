// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LocalFogVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalFogVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_ALocalFogVolume();
ENGINE_API UClass* Z_Construct_UClass_ALocalFogVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALocalFogVolume
void ALocalFogVolume::StaticRegisterNativesALocalFogVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALocalFogVolume);
UClass* Z_Construct_UClass_ALocalFogVolume_NoRegister()
{
	return ALocalFogVolume::StaticClass();
}
struct Z_Construct_UClass_ALocalFogVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n *\x09""Actor used to position a local fog volume in the scene.\n *\x09@see https://docs.unrealengine.com/???\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "Engine/LocalFogVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/LocalFogVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor used to position a local fog volume in the scene.\n@see https://docs.unrealengine.com/???" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalFogVolumeVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fog" },
		{ "Comment", "/** Object used to visualize the local fog volume */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LocalFogVolume.h" },
		{ "ToolTip", "Object used to visualize the local fog volume" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalFogVolumeVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALocalFogVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALocalFogVolume_Statics::NewProp_LocalFogVolumeVolume = { "LocalFogVolumeVolume", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALocalFogVolume, LocalFogVolumeVolume), Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalFogVolumeVolume_MetaData), NewProp_LocalFogVolumeVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALocalFogVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALocalFogVolume_Statics::NewProp_LocalFogVolumeVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalFogVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALocalFogVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalFogVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALocalFogVolume_Statics::ClassParams = {
	&ALocalFogVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALocalFogVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALocalFogVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALocalFogVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ALocalFogVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALocalFogVolume()
{
	if (!Z_Registration_Info_UClass_ALocalFogVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALocalFogVolume.OuterSingleton, Z_Construct_UClass_ALocalFogVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALocalFogVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALocalFogVolume>()
{
	return ALocalFogVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALocalFogVolume);
ALocalFogVolume::~ALocalFogVolume() {}
// End Class ALocalFogVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalFogVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALocalFogVolume, ALocalFogVolume::StaticClass, TEXT("ALocalFogVolume"), &Z_Registration_Info_UClass_ALocalFogVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALocalFogVolume), 2186426881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalFogVolume_h_685508335(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalFogVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalFogVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
