// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_SetTagCooldown() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator_SetTagCooldown
void UBTDecorator_SetTagCooldown::StaticRegisterNativesUBTDecorator_SetTagCooldown()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_SetTagCooldown);
UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown_NoRegister()
{
	return UBTDecorator_SetTagCooldown::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Set tag cooldown decorator node.\n * A decorator node that sets a gameplay tag cooldown.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Set tag cooldown decorator node.\nA decorator node that sets a gameplay tag cooldown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Gameplay tag that will be used for the cooldown. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Gameplay tag that will be used for the cooldown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Value we will add or set to the Cooldown tag when this task runs. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Value we will add or set to the Cooldown tag when this task runs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddToExistingDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time). */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static void NewProp_bAddToExistingDuration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_SetTagCooldown>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_SetTagCooldown, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTag_MetaData), NewProp_CooldownTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_SetTagCooldown, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
void Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit(void* Obj)
{
	((UBTDecorator_SetTagCooldown*)Obj)->bAddToExistingDuration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration = { "bAddToExistingDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTDecorator_SetTagCooldown), &Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddToExistingDuration_MetaData), NewProp_bAddToExistingDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::ClassParams = {
	&UBTDecorator_SetTagCooldown::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.OuterSingleton, Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator_SetTagCooldown>()
{
	return UBTDecorator_SetTagCooldown::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_SetTagCooldown);
UBTDecorator_SetTagCooldown::~UBTDecorator_SetTagCooldown() {}
// End Class UBTDecorator_SetTagCooldown

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_SetTagCooldown, UBTDecorator_SetTagCooldown::StaticClass, TEXT("UBTDecorator_SetTagCooldown"), &Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_SetTagCooldown), 2357842421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_2774450322(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
