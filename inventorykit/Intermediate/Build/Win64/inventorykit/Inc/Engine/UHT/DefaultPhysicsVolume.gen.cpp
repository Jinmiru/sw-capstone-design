// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultPhysicsVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume();
ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ADefaultPhysicsVolume
void ADefaultPhysicsVolume::StaticRegisterNativesADefaultPhysicsVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultPhysicsVolume);
UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister()
{
	return ADefaultPhysicsVolume::StaticClass();
}
struct Z_Construct_UClass_ADefaultPhysicsVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* DefaultPhysicsVolume determines the physical effects an actor will experience if they are not inside any user specified PhysicsVolume\n*\n* @see APhysicsVolume\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/DefaultPhysicsVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPhysicsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "DefaultPhysicsVolume determines the physical effects an actor will experience if they are not inside any user specified PhysicsVolume\n\n@see APhysicsVolume" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultPhysicsVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefaultPhysicsVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPhysicsVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultPhysicsVolume_Statics::ClassParams = {
	&ADefaultPhysicsVolume::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPhysicsVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultPhysicsVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultPhysicsVolume()
{
	if (!Z_Registration_Info_UClass_ADefaultPhysicsVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultPhysicsVolume.OuterSingleton, Z_Construct_UClass_ADefaultPhysicsVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultPhysicsVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ADefaultPhysicsVolume>()
{
	return ADefaultPhysicsVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultPhysicsVolume);
ADefaultPhysicsVolume::~ADefaultPhysicsVolume() {}
// End Class ADefaultPhysicsVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultPhysicsVolume, ADefaultPhysicsVolume::StaticClass, TEXT("ADefaultPhysicsVolume"), &Z_Registration_Info_UClass_ADefaultPhysicsVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultPhysicsVolume), 3250415896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_3914425036(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
