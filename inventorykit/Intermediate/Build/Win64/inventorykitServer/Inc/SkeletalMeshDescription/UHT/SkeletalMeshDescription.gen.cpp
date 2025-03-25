// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SkeletalMeshDescription/Public/SkeletalMeshDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshDescription() {}

// Begin Cross Module References
MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBase();
SKELETALMESHDESCRIPTION_API UClass* Z_Construct_UClass_USkeletalMeshDescription();
SKELETALMESHDESCRIPTION_API UClass* Z_Construct_UClass_USkeletalMeshDescription_NoRegister();
UPackage* Z_Construct_UPackage__Script_SkeletalMeshDescription();
// End Cross Module References

// Begin Class USkeletalMeshDescription
void USkeletalMeshDescription::StaticRegisterNativesUSkeletalMeshDescription()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshDescription);
UClass* Z_Construct_UClass_USkeletalMeshDescription_NoRegister()
{
	return USkeletalMeshDescription::StaticClass();
}
struct Z_Construct_UClass_USkeletalMeshDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkeletalMeshDescription.h" },
		{ "ModuleRelativePath", "Public/SkeletalMeshDescription.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshDescription>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkeletalMeshDescription_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshDescriptionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshDescription_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshDescription_Statics::ClassParams = {
	&USkeletalMeshDescription::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshDescription_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshDescription_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalMeshDescription()
{
	if (!Z_Registration_Info_UClass_USkeletalMeshDescription.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshDescription.OuterSingleton, Z_Construct_UClass_USkeletalMeshDescription_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalMeshDescription.OuterSingleton;
}
template<> SKELETALMESHDESCRIPTION_API UClass* StaticClass<USkeletalMeshDescription>()
{
	return USkeletalMeshDescription::StaticClass();
}
USkeletalMeshDescription::USkeletalMeshDescription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshDescription);
USkeletalMeshDescription::~USkeletalMeshDescription() {}
// End Class USkeletalMeshDescription

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshDescription, USkeletalMeshDescription::StaticClass, TEXT("USkeletalMeshDescription"), &Z_Registration_Info_UClass_USkeletalMeshDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshDescription), 2522931576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_372352249(TEXT("/Script/SkeletalMeshDescription"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
