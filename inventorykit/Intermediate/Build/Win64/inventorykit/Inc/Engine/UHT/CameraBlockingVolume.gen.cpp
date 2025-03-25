// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/CameraBlockingVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraBlockingVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACameraBlockingVolume();
ENGINE_API UClass* Z_Construct_UClass_ACameraBlockingVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ACameraBlockingVolume
void ACameraBlockingVolume::StaticRegisterNativesACameraBlockingVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraBlockingVolume);
UClass* Z_Construct_UClass_ACameraBlockingVolume_NoRegister()
{
	return ACameraBlockingVolume::StaticClass();
}
struct Z_Construct_UClass_ACameraBlockingVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A volume which blocks the Camera channel by default.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/CameraBlockingVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/CameraBlockingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A volume which blocks the Camera channel by default." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraBlockingVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACameraBlockingVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraBlockingVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraBlockingVolume_Statics::ClassParams = {
	&ACameraBlockingVolume::StaticClass,
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
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraBlockingVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraBlockingVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraBlockingVolume()
{
	if (!Z_Registration_Info_UClass_ACameraBlockingVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraBlockingVolume.OuterSingleton, Z_Construct_UClass_ACameraBlockingVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraBlockingVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ACameraBlockingVolume>()
{
	return ACameraBlockingVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraBlockingVolume);
ACameraBlockingVolume::~ACameraBlockingVolume() {}
// End Class ACameraBlockingVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraBlockingVolume, ACameraBlockingVolume::StaticClass, TEXT("ACameraBlockingVolume"), &Z_Registration_Info_UClass_ACameraBlockingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraBlockingVolume), 2931677860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_2829940232(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CameraBlockingVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
