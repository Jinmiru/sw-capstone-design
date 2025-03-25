// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimMetaData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimMetaData
void UAnimMetaData::StaticRegisterNativesUAnimMetaData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimMetaData);
UClass* Z_Construct_UClass_UAnimMetaData_NoRegister()
{
	return UAnimMetaData::StaticClass();
}
struct Z_Construct_UClass_UAnimMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimMetaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMetaData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimMetaData_Statics::ClassParams = {
	&UAnimMetaData::StaticClass,
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
	0x000830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimMetaData()
{
	if (!Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton, Z_Construct_UClass_UAnimMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimMetaData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimMetaData>()
{
	return UAnimMetaData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimMetaData);
UAnimMetaData::~UAnimMetaData() {}
// End Class UAnimMetaData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimMetaData, UAnimMetaData::StaticClass, TEXT("UAnimMetaData"), &Z_Registration_Info_UClass_UAnimMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimMetaData), 1072855033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_877347927(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMetaData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
