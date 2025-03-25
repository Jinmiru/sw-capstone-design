// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ADebugCameraHUD();
ENGINE_API UClass* Z_Construct_UClass_ADebugCameraHUD_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ADebugCameraHUD
void ADebugCameraHUD::StaticRegisterNativesADebugCameraHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADebugCameraHUD);
UClass* Z_Construct_UClass_ADebugCameraHUD_NoRegister()
{
	return ADebugCameraHUD::StaticClass();
}
struct Z_Construct_UClass_ADebugCameraHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * HUD that displays info for the DebugCameraController view.\n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Engine/DebugCameraHUD.h" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "HUD that displays info for the DebugCameraController view." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugCameraHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADebugCameraHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADebugCameraHUD_Statics::ClassParams = {
	&ADebugCameraHUD::StaticClass,
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
	0x048802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADebugCameraHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ADebugCameraHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADebugCameraHUD()
{
	if (!Z_Registration_Info_UClass_ADebugCameraHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADebugCameraHUD.OuterSingleton, Z_Construct_UClass_ADebugCameraHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADebugCameraHUD.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ADebugCameraHUD>()
{
	return ADebugCameraHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugCameraHUD);
ADebugCameraHUD::~ADebugCameraHUD() {}
// End Class ADebugCameraHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADebugCameraHUD, ADebugCameraHUD::StaticClass, TEXT("ADebugCameraHUD"), &Z_Registration_Info_UClass_ADebugCameraHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADebugCameraHUD), 1174338941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_697807876(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
