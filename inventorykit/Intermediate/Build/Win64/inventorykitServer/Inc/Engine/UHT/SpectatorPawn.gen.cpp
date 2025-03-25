// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ASpectatorPawn
void ASpectatorPawn::StaticRegisterNativesASpectatorPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpectatorPawn);
UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister()
{
	return ASpectatorPawn::StaticClass();
}
struct Z_Construct_UClass_ASpectatorPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/SpectatorPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpectatorPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpectatorPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpectatorPawn_Statics::ClassParams = {
	&ASpectatorPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpectatorPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpectatorPawn()
{
	if (!Z_Registration_Info_UClass_ASpectatorPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpectatorPawn.OuterSingleton, Z_Construct_UClass_ASpectatorPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpectatorPawn.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ASpectatorPawn>()
{
	return ASpectatorPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpectatorPawn);
ASpectatorPawn::~ASpectatorPawn() {}
// End Class ASpectatorPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpectatorPawn, ASpectatorPawn::StaticClass, TEXT("ASpectatorPawn"), &Z_Registration_Info_UClass_ASpectatorPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpectatorPawn), 3391734928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_2271595699(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
