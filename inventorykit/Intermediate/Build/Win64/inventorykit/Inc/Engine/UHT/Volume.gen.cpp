// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ABrush();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AVolume
void AVolume::StaticRegisterNativesAVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVolume);
UClass* Z_Construct_UClass_AVolume_NoRegister()
{
	return AVolume::StaticClass();
}
struct Z_Construct_UClass_AVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""An editable 3D volume placed in a level. Different types of volumes perform different functions\n *\x09@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/Volume.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Volume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An editable 3D volume placed in a level. Different types of volumes perform different functions\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABrush,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVolume_Statics::ClassParams = {
	&AVolume::StaticClass,
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
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVolume()
{
	if (!Z_Registration_Info_UClass_AVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVolume.OuterSingleton, Z_Construct_UClass_AVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AVolume>()
{
	return AVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVolume);
AVolume::~AVolume() {}
// End Class AVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVolume, AVolume::StaticClass, TEXT("AVolume"), &Z_Registration_Info_UClass_AVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVolume), 3929946820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_3824275201(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Volume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
