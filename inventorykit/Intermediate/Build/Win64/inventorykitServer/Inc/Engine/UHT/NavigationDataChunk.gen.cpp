// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDataChunk() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk();
ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNavigationDataChunk
void UNavigationDataChunk::StaticRegisterNativesUNavigationDataChunk()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationDataChunk);
UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister()
{
	return UNavigationDataChunk::StaticClass();
}
struct Z_Construct_UClass_UNavigationDataChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * \n */" },
		{ "IncludePath", "AI/Navigation/NavigationDataChunk.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationDataName_MetaData[] = {
		{ "Comment", "/** Name of NavigationData actor that owns this chunk */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataChunk.h" },
		{ "ToolTip", "Name of NavigationData actor that owns this chunk" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NavigationDataName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationDataChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName = { "NavigationDataName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationDataChunk, NavigationDataName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationDataName_MetaData), NewProp_NavigationDataName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationDataChunk_Statics::NewProp_NavigationDataName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationDataChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationDataChunk_Statics::ClassParams = {
	&UNavigationDataChunk::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationDataChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationDataChunk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationDataChunk()
{
	if (!Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton, Z_Construct_UClass_UNavigationDataChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationDataChunk.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavigationDataChunk>()
{
	return UNavigationDataChunk::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationDataChunk);
UNavigationDataChunk::~UNavigationDataChunk() {}
// End Class UNavigationDataChunk

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationDataChunk, UNavigationDataChunk::StaticClass, TEXT("UNavigationDataChunk"), &Z_Registration_Info_UClass_UNavigationDataChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationDataChunk), 378224460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_3002899863(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataChunk_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
