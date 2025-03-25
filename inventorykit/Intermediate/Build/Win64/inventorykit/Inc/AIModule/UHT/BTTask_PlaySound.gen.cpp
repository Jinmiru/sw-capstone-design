// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_PlaySound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlaySound() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_PlaySound
void UBTTask_PlaySound::StaticRegisterNativesUBTTask_PlaySound()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PlaySound);
UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister()
{
	return UBTTask_PlaySound::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PlaySound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Play Sound task node.\n * Plays the specified sound when executed.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ToolTip", "Play Sound task node.\nPlays the specified sound when executed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** CUE to play */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ToolTip", "CUE to play" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlaySound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PlaySound, SoundToPlay), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundToPlay_MetaData), NewProp_SoundToPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PlaySound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlaySound_Statics::ClassParams = {
	&UBTTask_PlaySound::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PlaySound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PlaySound()
{
	if (!Z_Registration_Info_UClass_UBTTask_PlaySound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PlaySound.OuterSingleton, Z_Construct_UClass_UBTTask_PlaySound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PlaySound.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_PlaySound>()
{
	return UBTTask_PlaySound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlaySound);
UBTTask_PlaySound::~UBTTask_PlaySound() {}
// End Class UBTTask_PlaySound

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PlaySound, UBTTask_PlaySound::StaticClass, TEXT("UBTTask_PlaySound"), &Z_Registration_Info_UClass_UBTTask_PlaySound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PlaySound), 849974224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_2101449764(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
