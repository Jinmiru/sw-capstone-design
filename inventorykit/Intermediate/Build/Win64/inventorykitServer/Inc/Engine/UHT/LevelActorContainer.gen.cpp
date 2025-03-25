// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelActorContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer();
ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULevelActorContainer
void ULevelActorContainer::StaticRegisterNativesULevelActorContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelActorContainer);
UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister()
{
	return ULevelActorContainer::StaticClass();
}
struct Z_Construct_UClass_ULevelActorContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Root object for all level actors\n */" },
		{ "IncludePath", "Engine/LevelActorContainer.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelActorContainer.h" },
		{ "ToolTip", "Root object for all level actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "Comment", "/** Array of actors in a level */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelActorContainer.h" },
		{ "ToolTip", "Array of actors in a level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelActorContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelActorContainer, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelActorContainer_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelActorContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelActorContainer_Statics::ClassParams = {
	&ULevelActorContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelActorContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelActorContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelActorContainer()
{
	if (!Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton, Z_Construct_UClass_ULevelActorContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelActorContainer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULevelActorContainer>()
{
	return ULevelActorContainer::StaticClass();
}
ULevelActorContainer::ULevelActorContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelActorContainer);
ULevelActorContainer::~ULevelActorContainer() {}
// End Class ULevelActorContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelActorContainer, ULevelActorContainer::StaticClass, TEXT("ULevelActorContainer"), &Z_Registration_Info_UClass_ULevelActorContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelActorContainer), 4214155599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_1878149595(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
