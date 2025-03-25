// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InGameAdManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameAdManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInGameAdManager();
ENGINE_API UClass* Z_Construct_UClass_UInGameAdManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdManagerDelegate();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAdManagerDelegate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAdManagerDelegate;
static UEnum* EAdManagerDelegate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAdManagerDelegate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAdManagerDelegate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdManagerDelegate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAdManagerDelegate"));
	}
	return Z_Registration_Info_UEnum_EAdManagerDelegate.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAdManagerDelegate>()
{
	return EAdManagerDelegate_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAdManagerDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AMD_ClickedBanner.Name", "AMD_ClickedBanner" },
		{ "AMD_MAX.Name", "AMD_MAX" },
		{ "AMD_UserClosedAd.Name", "AMD_UserClosedAd" },
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AMD_ClickedBanner", (int64)AMD_ClickedBanner },
		{ "AMD_UserClosedAd", (int64)AMD_UserClosedAd },
		{ "AMD_MAX", (int64)AMD_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAdManagerDelegate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAdManagerDelegate",
	"EAdManagerDelegate",
	Z_Construct_UEnum_Engine_EAdManagerDelegate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAdManagerDelegate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAdManagerDelegate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAdManagerDelegate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAdManagerDelegate()
{
	if (!Z_Registration_Info_UEnum_EAdManagerDelegate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAdManagerDelegate.InnerSingleton, Z_Construct_UEnum_Engine_EAdManagerDelegate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAdManagerDelegate.InnerSingleton;
}
// End Enum EAdManagerDelegate

// Begin Delegate FOnUserClickedBanner
struct Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Delegate called when user clicks on an banner ad. Base class already handles pausing,\n * so a delegate is only needed if you need extra handling. If you set it to a PC or other actor\n * function, make sure to set it back when switching levels.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "Delegate called when user clicks on an banner ad. Base class already handles pausing,\nso a delegate is only needed if you need extra handling. If you set it to a PC or other actor\nfunction, make sure to set it back when switching levels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnUserClickedBanner__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserClickedBanner_DelegateWrapper(const FScriptDelegate& OnUserClickedBanner)
{
	OnUserClickedBanner.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnUserClickedBanner

// Begin Delegate FOnUserClosedAdvertisement
struct Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Delegate called when user closes an ad (after clicking on banner). Base class already handles \n * pausing, so a delegate is only needed if you need extra handling.  If you set it to a PC or other actor\n * function, make sure to set it back when switching levels.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "Delegate called when user closes an ad (after clicking on banner). Base class already handles\npausing, so a delegate is only needed if you need extra handling.  If you set it to a PC or other actor\nfunction, make sure to set it back when switching levels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnUserClosedAdvertisement__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserClosedAdvertisement_DelegateWrapper(const FScriptDelegate& OnUserClosedAdvertisement)
{
	OnUserClosedAdvertisement.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnUserClosedAdvertisement

// Begin Class UInGameAdManager
void UInGameAdManager::StaticRegisterNativesUInGameAdManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInGameAdManager);
UClass* Z_Construct_UClass_UInGameAdManager_NoRegister()
{
	return UInGameAdManager::StaticClass();
}
struct Z_Construct_UClass_UInGameAdManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InGameAdManager.h" },
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldPauseWhileAdOpen_MetaData[] = {
		{ "Comment", "/** If true, the game will pause when the user clicks on the ad, which could take over the screen */" },
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "If true, the game will pause when the user clicks on the ad, which could take over the screen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickedBannerDelegates_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosedAdDelegates_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "@todo document" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldPauseWhileAdOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldPauseWhileAdOpen;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ClickedBannerDelegates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClickedBannerDelegates;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ClosedAdDelegates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClosedAdDelegates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameAdManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen_SetBit(void* Obj)
{
	((UInGameAdManager*)Obj)->bShouldPauseWhileAdOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen = { "bShouldPauseWhileAdOpen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInGameAdManager), &Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldPauseWhileAdOpen_MetaData), NewProp_bShouldPauseWhileAdOpen_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates_Inner = { "ClickedBannerDelegates", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3109076605
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates = { "ClickedBannerDelegates", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInGameAdManager, ClickedBannerDelegates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickedBannerDelegates_MetaData), NewProp_ClickedBannerDelegates_MetaData) }; // 3109076605
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates_Inner = { "ClosedAdDelegates", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2004369730
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates = { "ClosedAdDelegates", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInGameAdManager, ClosedAdDelegates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosedAdDelegates_MetaData), NewProp_ClosedAdDelegates_MetaData) }; // 2004369730
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameAdManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInGameAdManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInGameAdManager_Statics::ClassParams = {
	&UInGameAdManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInGameAdManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInGameAdManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInGameAdManager()
{
	if (!Z_Registration_Info_UClass_UInGameAdManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInGameAdManager.OuterSingleton, Z_Construct_UClass_UInGameAdManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInGameAdManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInGameAdManager>()
{
	return UInGameAdManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameAdManager);
UInGameAdManager::~UInGameAdManager() {}
// End Class UInGameAdManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAdManagerDelegate_StaticEnum, TEXT("EAdManagerDelegate"), &Z_Registration_Info_UEnum_EAdManagerDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3268434272U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInGameAdManager, UInGameAdManager::StaticClass, TEXT("UInGameAdManager"), &Z_Registration_Info_UClass_UInGameAdManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInGameAdManager), 1865839248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_3610645407(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
