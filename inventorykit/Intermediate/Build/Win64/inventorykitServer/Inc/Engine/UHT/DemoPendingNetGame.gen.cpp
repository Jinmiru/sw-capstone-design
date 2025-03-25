// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DemoPendingNetGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoPendingNetGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame();
ENGINE_API UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDemoPendingNetGame
void UDemoPendingNetGame::StaticRegisterNativesUDemoPendingNetGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDemoPendingNetGame);
UClass* Z_Construct_UClass_UDemoPendingNetGame_NoRegister()
{
	return UDemoPendingNetGame::StaticClass();
}
struct Z_Construct_UClass_UDemoPendingNetGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DemoPendingNetGame.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoPendingNetGame.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoPendingNetGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDemoPendingNetGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPendingNetGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoPendingNetGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDemoPendingNetGame_Statics::ClassParams = {
	&UDemoPendingNetGame::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDemoPendingNetGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UDemoPendingNetGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDemoPendingNetGame()
{
	if (!Z_Registration_Info_UClass_UDemoPendingNetGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDemoPendingNetGame.OuterSingleton, Z_Construct_UClass_UDemoPendingNetGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDemoPendingNetGame.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDemoPendingNetGame>()
{
	return UDemoPendingNetGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoPendingNetGame);
UDemoPendingNetGame::~UDemoPendingNetGame() {}
// End Class UDemoPendingNetGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDemoPendingNetGame, UDemoPendingNetGame::StaticClass, TEXT("UDemoPendingNetGame"), &Z_Registration_Info_UClass_UDemoPendingNetGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDemoPendingNetGame), 394998744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_4084383001(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DemoPendingNetGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
