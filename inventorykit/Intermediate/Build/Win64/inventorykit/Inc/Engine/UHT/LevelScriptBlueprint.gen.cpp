// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScriptBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint();
ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelScriptBlueprint
void ULevelScriptBlueprint::StaticRegisterNativesULevelScriptBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelScriptBlueprint);
UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister()
{
	return ULevelScriptBlueprint::StaticClass();
}
struct Z_Construct_UClass_ULevelScriptBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A level blueprint is a specialized type of blueprint. It is used to house\n * global, level-wide logic. In a level blueprint, you can operate on specific \n * level-actor instances through blueprint's node-based interface. Unreal Engine users \n * should be familiar with this concept, as it is very similar to Kismet.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n * @see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n * @see UBlueprint\n * @see ALevelScriptActor\n */" },
		{ "IncludePath", "Engine/LevelScriptBlueprint.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptBlueprint.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "A level blueprint is a specialized type of blueprint. It is used to house\nglobal, level-wide logic. In a level blueprint, you can operate on specific\nlevel-actor instances through blueprint's node-based interface. Unreal Engine users\nshould be familiar with this concept, as it is very similar to Kismet.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n@see UBlueprint\n@see ALevelScriptActor" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[] = {
		{ "Comment", "/** The friendly name to use for UI */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptBlueprint.h" },
		{ "ToolTip", "The friendly name to use for UI" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelScriptBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelScriptBlueprint, FriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyName_MetaData), NewProp_FriendlyName_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ULevelScriptBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelScriptBlueprint_Statics::ClassParams = {
	&ULevelScriptBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers), 0),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelScriptBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelScriptBlueprint()
{
	if (!Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton, Z_Construct_UClass_ULevelScriptBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelScriptBlueprint>()
{
	return ULevelScriptBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelScriptBlueprint);
ULevelScriptBlueprint::~ULevelScriptBlueprint() {}
// End Class ULevelScriptBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelScriptBlueprint, ULevelScriptBlueprint::StaticClass, TEXT("ULevelScriptBlueprint"), &Z_Registration_Info_UClass_ULevelScriptBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelScriptBlueprint), 2798540878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_4051887975(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
