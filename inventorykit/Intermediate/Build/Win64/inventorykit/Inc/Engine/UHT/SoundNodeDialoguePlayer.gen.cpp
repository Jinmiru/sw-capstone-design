// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeDialoguePlayer.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDialoguePlayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeDialoguePlayer();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeDialoguePlayer
void USoundNodeDialoguePlayer::StaticRegisterNativesUSoundNodeDialoguePlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeDialoguePlayer);
UClass* Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister()
{
	return USoundNodeDialoguePlayer::StaticClass();
}
struct Z_Construct_UClass_USoundNodeDialoguePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n Sound node that contains a reference to the dialogue table to pull from and be played\n*/" },
		{ "DisplayName", "Dialogue Player" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDialoguePlayer.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
		{ "ToolTip", "Sound node that contains a reference to the dialogue table to pull from and be played" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWaveParameter_MetaData[] = {
		{ "Category", "DialoguePlayer" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "DialoguePlayer" },
		{ "Comment", "/* Whether the dialogue line should be played looping */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
		{ "ToolTip", "Whether the dialogue line should be played looping" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueWaveParameter;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDialoguePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter = { "DialogueWaveParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeDialoguePlayer, DialogueWaveParameter), Z_Construct_UScriptStruct_FDialogueWaveParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWaveParameter_MetaData), NewProp_DialogueWaveParameter_MetaData) }; // 2807783347
void Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((USoundNodeDialoguePlayer*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundNodeDialoguePlayer), &Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::ClassParams = {
	&USoundNodeDialoguePlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeDialoguePlayer()
{
	if (!Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton, Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeDialoguePlayer>()
{
	return USoundNodeDialoguePlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDialoguePlayer);
USoundNodeDialoguePlayer::~USoundNodeDialoguePlayer() {}
// End Class USoundNodeDialoguePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeDialoguePlayer, USoundNodeDialoguePlayer::StaticClass, TEXT("USoundNodeDialoguePlayer"), &Z_Registration_Info_UClass_USoundNodeDialoguePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeDialoguePlayer), 2692159875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_3450147202(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
