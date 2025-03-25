// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_TagCooldown() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TagCooldown();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TagCooldown_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_TagCooldown
void UBTDecorator_TagCooldown::StaticRegisterNativesUBTDecorator_TagCooldown()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_TagCooldown);
UClass* Z_Construct_UClass_UBTDecorator_TagCooldown_NoRegister()
{
	return UBTDecorator_TagCooldown::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_TagCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooldown decorator node.\n * A decorator node that bases its condition on whether a cooldown timer based on a gameplay tag has expired.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether a cooldown timer based on a gameplay tag has expired." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Gameplay tag that will be used for the cooldown. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "Gameplay tag that will be used for the cooldown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Value we will add or set to the Cooldown tag when this node is deactivated. */" },
		{ "EditCondition", "bActivatesCooldown" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "Value we will add or set to the Cooldown tag when this node is deactivated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddToExistingDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time). */" },
		{ "EditCondition", "bActivatesCooldown" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActivatesCooldown_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Whether or not we are adding/setting to the cooldown tag's value when the decorator deactivates. */" },
		{ "DisplayName", "Adds/Sets Cooldown on Deactivation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "Whether or not we are adding/setting to the cooldown tag's value when the decorator deactivates." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static void NewProp_bAddToExistingDuration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration;
	static void NewProp_bActivatesCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivatesCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_TagCooldown>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_TagCooldown, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTag_MetaData), NewProp_CooldownTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_TagCooldown, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
void Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit(void* Obj)
{
	((UBTDecorator_TagCooldown*)Obj)->bAddToExistingDuration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration = { "bAddToExistingDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTDecorator_TagCooldown), &Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddToExistingDuration_MetaData), NewProp_bAddToExistingDuration_MetaData) };
void Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown_SetBit(void* Obj)
{
	((UBTDecorator_TagCooldown*)Obj)->bActivatesCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown = { "bActivatesCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTDecorator_TagCooldown), &Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActivatesCooldown_MetaData), NewProp_bActivatesCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::ClassParams = {
	&UBTDecorator_TagCooldown::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_TagCooldown()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_TagCooldown.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_TagCooldown.OuterSingleton, Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_TagCooldown.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_TagCooldown>()
{
	return UBTDecorator_TagCooldown::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_TagCooldown);
UBTDecorator_TagCooldown::~UBTDecorator_TagCooldown() {}
// End Class UBTDecorator_TagCooldown

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_TagCooldown, UBTDecorator_TagCooldown::StaticClass, TEXT("UBTDecorator_TagCooldown"), &Z_Registration_Info_UClass_UBTDecorator_TagCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_TagCooldown), 794512195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_3058009218(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_TagCooldown_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
