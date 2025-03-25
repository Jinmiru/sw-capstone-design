// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceComponent.h"
#include "Runtime/Engine/Public/WorldPartition/Filter/WorldPartitionActorFilter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceComponent();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionActorFilter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelInstanceComponent
void ULevelInstanceComponent::StaticRegisterNativesULevelInstanceComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceComponent);
UClass* Z_Construct_UClass_ULevelInstanceComponent_NoRegister()
{
	return ULevelInstanceComponent::StaticClass();
}
struct Z_Construct_UClass_ULevelInstanceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULevelInstanceComponent subclasses USceneComponent for Editing purposes so that we can have a proxy to the LevelInstanceActor's RootComponent transform without attaching to it.\n *\n * It is responsible for updating the transform of the ALevelInstanceEditorInstanceActor which is created when loading a LevelInstance Instance Level\n *\n * We use this method to avoid attaching the Instance Level Actors to the ILevelInstanceInterface. (Cross level attachment and undo/redo pain)\n * \n * The LevelInstance Level Actors are attached to this ALevelInstanceEditorInstanceActor keeping the attachment local to the Instance Level and shielded from the transaction buffer.\n *\n * Avoiding those Level Actors from being part of the Transaction system allows us to unload that level without clearing the transaction buffer. It also allows BP Reinstancing without having to update attachements.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LevelInstance/LevelInstanceComponent.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceComponent.h" },
		{ "ToolTip", "ULevelInstanceComponent subclasses USceneComponent for Editing purposes so that we can have a proxy to the LevelInstanceActor's RootComponent transform without attaching to it.\n\nIt is responsible for updating the transform of the ALevelInstanceEditorInstanceActor which is created when loading a LevelInstance Instance Level\n\nWe use this method to avoid attaching the Instance Level Actors to the ILevelInstanceInterface. (Cross level attachment and undo/redo pain)\n\nThe LevelInstance Level Actors are attached to this ALevelInstanceEditorInstanceActor keeping the attachment local to the Instance Level and shielded from the transaction buffer.\n\nAvoiding those Level Actors from being part of the Transaction system allows us to unload that level without clearing the transaction buffer. It also allows BP Reinstancing without having to update attachements." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Filter" },
		{ "LevelInstanceFilter", "" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "LevelInstanceEditFilter", "" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelInstanceComponent_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstanceComponent, Filter), Z_Construct_UScriptStruct_FWorldPartitionActorFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 2097099022
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelInstanceComponent_Statics::NewProp_EditFilter = { "EditFilter", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelInstanceComponent, EditFilter), Z_Construct_UScriptStruct_FWorldPartitionActorFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditFilter_MetaData), NewProp_EditFilter_MetaData) }; // 2097099022
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelInstanceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceComponent_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelInstanceComponent_Statics::NewProp_EditFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceComponent_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ULevelInstanceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceComponent_Statics::ClassParams = {
	&ULevelInstanceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULevelInstanceComponent_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceComponent_Statics::PropPointers), 0),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelInstanceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelInstanceComponent()
{
	if (!Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton, Z_Construct_UClass_ULevelInstanceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelInstanceComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelInstanceComponent>()
{
	return ULevelInstanceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceComponent);
ULevelInstanceComponent::~ULevelInstanceComponent() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelInstanceComponent)
#endif // WITH_EDITORONLY_DATA
// End Class ULevelInstanceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceComponent, ULevelInstanceComponent::StaticClass, TEXT("ULevelInstanceComponent"), &Z_Registration_Info_UClass_ULevelInstanceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceComponent), 1169533160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_1205597824(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
