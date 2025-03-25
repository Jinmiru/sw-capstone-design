// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LevelBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelBounds() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ALevelBounds();
ENGINE_API UClass* Z_Construct_UClass_ALevelBounds_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALevelBounds
void ALevelBounds::StaticRegisterNativesALevelBounds()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelBounds);
UClass* Z_Construct_UClass_ALevelBounds_NoRegister()
{
	return ALevelBounds::StaticClass();
}
struct Z_Construct_UClass_ALevelBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Defines level bounds\n * Updates bounding box automatically based on actors transformation changes or holds fixed user defined bounding box\n * Uses only actors where AActor::IsLevelBoundsRelevant() == true\n */" },
		{ "HideCategories", "Advanced Collision Display Rendering Physics Input" },
		{ "IncludePath", "Engine/LevelBounds.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelBounds.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Defines level bounds\nUpdates bounding box automatically based on actors transformation changes or holds fixed user defined bounding box\nUses only actors where AActor::IsLevelBoundsRelevant() == true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "LevelBounds" },
		{ "Comment", "/** Bounding box for the level bounds. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LevelBounds.h" },
		{ "ToolTip", "Bounding box for the level bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateBounds_MetaData[] = {
		{ "Category", "LevelBounds" },
		{ "Comment", "/** Whether to automatically update actor bounds based on all relevant actors bounds belonging to the same level */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelBounds.h" },
		{ "ToolTip", "Whether to automatically update actor bounds based on all relevant actors bounds belonging to the same level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static void NewProp_bAutoUpdateBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelBounds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelBounds_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelBounds, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
void Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds_SetBit(void* Obj)
{
	((ALevelBounds*)Obj)->bAutoUpdateBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds = { "bAutoUpdateBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelBounds), &Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoUpdateBounds_MetaData), NewProp_bAutoUpdateBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelBounds_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelBounds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelBounds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelBounds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelBounds_Statics::ClassParams = {
	&ALevelBounds::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALevelBounds_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelBounds_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelBounds_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelBounds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelBounds()
{
	if (!Z_Registration_Info_UClass_ALevelBounds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelBounds.OuterSingleton, Z_Construct_UClass_ALevelBounds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelBounds.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALevelBounds>()
{
	return ALevelBounds::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelBounds);
ALevelBounds::~ALevelBounds() {}
// End Class ALevelBounds

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelBounds, ALevelBounds::StaticClass, TEXT("ALevelBounds"), &Z_Registration_Info_UClass_ALevelBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelBounds), 2053865468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_1300176703(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelBounds_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
