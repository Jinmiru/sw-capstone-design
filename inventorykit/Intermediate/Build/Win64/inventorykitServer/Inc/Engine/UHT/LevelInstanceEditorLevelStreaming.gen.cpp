// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceEditorLevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorLevelStreaming() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditor();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelStreamingLevelInstanceEditor
void ULevelStreamingLevelInstanceEditor::StaticRegisterNativesULevelStreamingLevelInstanceEditor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingLevelInstanceEditor);
UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_NoRegister()
{
	return ULevelStreamingLevelInstanceEditor::StaticClass();
}
struct Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceEditorLevelStreaming.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceEditorLevelStreaming.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingLevelInstanceEditor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULevelStreamingAlwaysLoaded,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics::ClassParams = {
	&ULevelStreamingLevelInstanceEditor::StaticClass,
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
	0x008810A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelStreamingLevelInstanceEditor()
{
	if (!Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.OuterSingleton, Z_Construct_UClass_ULevelStreamingLevelInstanceEditor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelStreamingLevelInstanceEditor>()
{
	return ULevelStreamingLevelInstanceEditor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingLevelInstanceEditor);
ULevelStreamingLevelInstanceEditor::~ULevelStreamingLevelInstanceEditor() {}
// End Class ULevelStreamingLevelInstanceEditor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingLevelInstanceEditor, ULevelStreamingLevelInstanceEditor::StaticClass, TEXT("ULevelStreamingLevelInstanceEditor"), &Z_Registration_Info_UClass_ULevelStreamingLevelInstanceEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingLevelInstanceEditor), 3413529198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_565937029(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorLevelStreaming_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
