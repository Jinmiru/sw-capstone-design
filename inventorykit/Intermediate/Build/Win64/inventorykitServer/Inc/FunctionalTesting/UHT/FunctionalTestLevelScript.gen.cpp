// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/FunctionalTestLevelScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestLevelScript() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestLevelScript();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Class AFunctionalTestLevelScript
void AFunctionalTestLevelScript::StaticRegisterNativesAFunctionalTestLevelScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalTestLevelScript);
UClass* Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister()
{
	return AFunctionalTestLevelScript::StaticClass();
}
struct Z_Construct_UClass_AFunctionalTestLevelScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation Collision Rendering Transformation" },
		{ "IncludePath", "FunctionalTestLevelScript.h" },
		{ "KismetHideOverrides", "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave" },
		{ "ModuleRelativePath", "Classes/FunctionalTestLevelScript.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalTestLevelScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFunctionalTestLevelScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTestLevelScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalTestLevelScript_Statics::ClassParams = {
	&AFunctionalTestLevelScript::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTestLevelScript_Statics::Class_MetaDataParams), Z_Construct_UClass_AFunctionalTestLevelScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFunctionalTestLevelScript()
{
	if (!Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton, Z_Construct_UClass_AFunctionalTestLevelScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFunctionalTestLevelScript.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalTestLevelScript>()
{
	return AFunctionalTestLevelScript::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalTestLevelScript);
AFunctionalTestLevelScript::~AFunctionalTestLevelScript() {}
// End Class AFunctionalTestLevelScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFunctionalTestLevelScript, AFunctionalTestLevelScript::StaticClass, TEXT("AFunctionalTestLevelScript"), &Z_Registration_Info_UClass_AFunctionalTestLevelScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalTestLevelScript), 765621512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_2191614195(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
