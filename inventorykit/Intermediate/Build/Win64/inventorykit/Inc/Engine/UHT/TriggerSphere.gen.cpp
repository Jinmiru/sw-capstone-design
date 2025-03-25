// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TriggerSphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSphere() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere();
ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ATriggerSphere
void ATriggerSphere::StaticRegisterNativesATriggerSphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerSphere);
UClass* Z_Construct_UClass_ATriggerSphere_NoRegister()
{
	return ATriggerSphere::StaticClass();
}
struct Z_Construct_UClass_ATriggerSphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A sphere shaped trigger, used to generate overlap events in the level */" },
		{ "IncludePath", "Engine/TriggerSphere.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerSphere.h" },
		{ "ToolTip", "A sphere shaped trigger, used to generate overlap events in the level" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerSphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATriggerSphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerSphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerSphere_Statics::ClassParams = {
	&ATriggerSphere::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerSphere_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerSphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATriggerSphere()
{
	if (!Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton, Z_Construct_UClass_ATriggerSphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerSphere.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ATriggerSphere>()
{
	return ATriggerSphere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerSphere);
ATriggerSphere::~ATriggerSphere() {}
// End Class ATriggerSphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerSphere, ATriggerSphere::StaticClass, TEXT("ATriggerSphere"), &Z_Registration_Info_UClass_ATriggerSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerSphere), 3104855503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_2045984580(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
