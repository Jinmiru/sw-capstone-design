// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckGameplayTagsOnActor() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_CheckGameplayTagsOnActor
void UBTDecorator_CheckGameplayTagsOnActor::StaticRegisterNativesUBTDecorator_CheckGameplayTagsOnActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_CheckGameplayTagsOnActor);
UClass* Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_NoRegister()
{
	return UBTDecorator_CheckGameplayTagsOnActor::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameplayTag decorator node.\n * A decorator node that bases its condition on whether the specified Actor (in the blackboard) has a Gameplay Tag or\n * Tags specified.\n */" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
		{ "ToolTip", "GameplayTag decorator node.\nA decorator node that bases its condition on whether the specified Actor (in the blackboard) has a Gameplay Tag or\nTags specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToCheck_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
		{ "ToolTips", "Which Actor (from the blackboard) should be checked for these gameplay tags?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToMatch_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTagCheck" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDescription_MetaData[] = {
		{ "Comment", "/** cached description */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h" },
		{ "ToolTip", "cached description" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorToCheck;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TagsToMatch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TagsToMatch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CachedDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckGameplayTagsOnActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckGameplayTagsOnActor, ActorToCheck), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToCheck_MetaData), NewProp_ActorToCheck_MetaData) }; // 3940742986
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch = { "TagsToMatch", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckGameplayTagsOnActor, TagsToMatch), Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToMatch_MetaData), NewProp_TagsToMatch_MetaData) }; // 357007300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckGameplayTagsOnActor, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_CachedDescription = { "CachedDescription", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CheckGameplayTagsOnActor, CachedDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDescription_MetaData), NewProp_CachedDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_ActorToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_TagsToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::NewProp_CachedDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::ClassParams = {
	&UBTDecorator_CheckGameplayTagsOnActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.OuterSingleton, Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_CheckGameplayTagsOnActor>()
{
	return UBTDecorator_CheckGameplayTagsOnActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckGameplayTagsOnActor);
UBTDecorator_CheckGameplayTagsOnActor::~UBTDecorator_CheckGameplayTagsOnActor() {}
// End Class UBTDecorator_CheckGameplayTagsOnActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CheckGameplayTagsOnActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_CheckGameplayTagsOnActor, UBTDecorator_CheckGameplayTagsOnActor::StaticClass, TEXT("UBTDecorator_CheckGameplayTagsOnActor"), &Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_CheckGameplayTagsOnActor), 1538771873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CheckGameplayTagsOnActor_h_463770857(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CheckGameplayTagsOnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CheckGameplayTagsOnActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
