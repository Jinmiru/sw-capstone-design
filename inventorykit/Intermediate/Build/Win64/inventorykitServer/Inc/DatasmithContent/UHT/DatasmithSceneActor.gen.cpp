// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithSceneActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSceneActor() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithSceneActor();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithSceneActor_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class ADatasmithSceneActor
void ADatasmithSceneActor::StaticRegisterNativesADatasmithSceneActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADatasmithSceneActor);
UClass* Z_Construct_UClass_ADatasmithSceneActor_NoRegister()
{
	return ADatasmithSceneActor::StaticClass();
}
struct Z_Construct_UClass_ADatasmithSceneActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithSceneActor.h" },
		{ "ModuleRelativePath", "Public/DatasmithSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "ModuleRelativePath", "Public/DatasmithSceneActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedActors_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the actors related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithSceneActor.h" },
		{ "ToolTip", "Map of all the actors related to this Datasmith Scene" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RelatedActors_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RelatedActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RelatedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatasmithSceneActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithSceneActor, Scene), Z_Construct_UClass_UDatasmithScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_ValueProp = { "RelatedActors", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_Key_KeyProp = { "RelatedActors_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors = { "RelatedActors", nullptr, (EPropertyFlags)0x0014040000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithSceneActor, RelatedActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedActors_MetaData), NewProp_RelatedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatasmithSceneActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithSceneActor_Statics::NewProp_RelatedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithSceneActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADatasmithSceneActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithSceneActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADatasmithSceneActor_Statics::ClassParams = {
	&ADatasmithSceneActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADatasmithSceneActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithSceneActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithSceneActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADatasmithSceneActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADatasmithSceneActor()
{
	if (!Z_Registration_Info_UClass_ADatasmithSceneActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADatasmithSceneActor.OuterSingleton, Z_Construct_UClass_ADatasmithSceneActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADatasmithSceneActor.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<ADatasmithSceneActor>()
{
	return ADatasmithSceneActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADatasmithSceneActor);
ADatasmithSceneActor::~ADatasmithSceneActor() {}
// End Class ADatasmithSceneActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADatasmithSceneActor, ADatasmithSceneActor::StaticClass, TEXT("ADatasmithSceneActor"), &Z_Registration_Info_UClass_ADatasmithSceneActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADatasmithSceneActor), 1808779172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_2491479082(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithSceneActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
