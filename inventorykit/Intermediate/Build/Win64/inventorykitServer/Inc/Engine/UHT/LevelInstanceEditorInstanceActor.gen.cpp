// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceEditorInstanceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorInstanceActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor();
ENGINE_API UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALevelInstanceEditorInstanceActor
void ALevelInstanceEditorInstanceActor::StaticRegisterNativesALevelInstanceEditorInstanceActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelInstanceEditorInstanceActor);
UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister()
{
	return ALevelInstanceEditorInstanceActor::StaticClass();
}
struct Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor Only Actor that is spawned inside every LevelInstance Instance Level so that we can update its Actor Transforms through the ILevelInstanceInterface's (ULevelInstanceComponent)\n * @see ULevelInstanceComponent\n */" },
		{ "IncludePath", "LevelInstance/LevelInstanceEditorInstanceActor.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceEditorInstanceActor.h" },
		{ "ToolTip", "Editor Only Actor that is spawned inside every LevelInstance Instance Level so that we can update its Actor Transforms through the ILevelInstanceInterface's (ULevelInstanceComponent)\n@see ULevelInstanceComponent" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelInstanceEditorInstanceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::ClassParams = {
	&ALevelInstanceEditorInstanceActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor()
{
	if (!Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton, Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALevelInstanceEditorInstanceActor>()
{
	return ALevelInstanceEditorInstanceActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelInstanceEditorInstanceActor);
ALevelInstanceEditorInstanceActor::~ALevelInstanceEditorInstanceActor() {}
// End Class ALevelInstanceEditorInstanceActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelInstanceEditorInstanceActor, ALevelInstanceEditorInstanceActor::StaticClass, TEXT("ALevelInstanceEditorInstanceActor"), &Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelInstanceEditorInstanceActor), 3332331709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_3789515490(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
