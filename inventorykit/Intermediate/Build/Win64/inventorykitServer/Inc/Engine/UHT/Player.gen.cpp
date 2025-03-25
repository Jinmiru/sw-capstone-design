// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlayer();
ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPlayer
void UPlayer::StaticRegisterNativesUPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayer);
UClass* Z_Construct_UClass_UPlayer_NoRegister()
{
	return UPlayer::StaticClass();
}
struct Z_Construct_UClass_UPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Player.h" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Comment", "/** The actor this player controls. */" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "The actor this player controls." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNetSpeed_MetaData[] = {
		{ "Comment", "/** the current speed of the connection */" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "the current speed of the connection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfiguredInternetSpeed_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfiguredLanSpeed_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "@todo document" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNetSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConfiguredInternetSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConfiguredLanSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayer, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed = { "CurrentNetSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayer, CurrentNetSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNetSpeed_MetaData), NewProp_CurrentNetSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed = { "ConfiguredInternetSpeed", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayer, ConfiguredInternetSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfiguredInternetSpeed_MetaData), NewProp_ConfiguredInternetSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed = { "ConfiguredLanSpeed", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayer, ConfiguredLanSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfiguredLanSpeed_MetaData), NewProp_ConfiguredLanSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayer_Statics::ClassParams = {
	&UPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayer()
{
	if (!Z_Registration_Info_UClass_UPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayer.OuterSingleton, Z_Construct_UClass_UPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPlayer>()
{
	return UPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer);
UPlayer::~UPlayer() {}
// End Class UPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayer, UPlayer::StaticClass, TEXT("UPlayer"), &Z_Registration_Info_UClass_UPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayer), 530294340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_2872176936(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
