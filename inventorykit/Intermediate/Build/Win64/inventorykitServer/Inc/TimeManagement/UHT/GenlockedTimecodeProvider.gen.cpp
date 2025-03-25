// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TimeManagement/Public/GenlockedTimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedTimecodeProvider() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider();
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References

// Begin Class UGenlockedTimecodeProvider
void UGenlockedTimecodeProvider::StaticRegisterNativesUGenlockedTimecodeProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenlockedTimecodeProvider);
UClass* Z_Construct_UClass_UGenlockedTimecodeProvider_NoRegister()
{
	return UGenlockedTimecodeProvider::StaticClass();
}
struct Z_Construct_UClass_UGenlockedTimecodeProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This timecode provider base class will try to use the engine genlock sync to adjust its count.\n */" },
		{ "IncludePath", "GenlockedTimecodeProvider.h" },
		{ "ModuleRelativePath", "Public/GenlockedTimecodeProvider.h" },
		{ "ToolTip", "This timecode provider base class will try to use the engine genlock sync to adjust its count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGenlockToCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Use Genlock Sync to update Timecode count */" },
		{ "ModuleRelativePath", "Public/GenlockedTimecodeProvider.h" },
		{ "ToolTip", "Use Genlock Sync to update Timecode count" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseGenlockToCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGenlockToCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedTimecodeProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_SetBit(void* Obj)
{
	((UGenlockedTimecodeProvider*)Obj)->bUseGenlockToCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount = { "bUseGenlockToCount", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGenlockedTimecodeProvider), &Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGenlockToCount_MetaData), NewProp_bUseGenlockToCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::NewProp_bUseGenlockToCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::ClassParams = {
	&UGenlockedTimecodeProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenlockedTimecodeProvider()
{
	if (!Z_Registration_Info_UClass_UGenlockedTimecodeProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenlockedTimecodeProvider.OuterSingleton, Z_Construct_UClass_UGenlockedTimecodeProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenlockedTimecodeProvider.OuterSingleton;
}
template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedTimecodeProvider>()
{
	return UGenlockedTimecodeProvider::StaticClass();
}
UGenlockedTimecodeProvider::UGenlockedTimecodeProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedTimecodeProvider);
UGenlockedTimecodeProvider::~UGenlockedTimecodeProvider() {}
// End Class UGenlockedTimecodeProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenlockedTimecodeProvider, UGenlockedTimecodeProvider::StaticClass, TEXT("UGenlockedTimecodeProvider"), &Z_Registration_Info_UClass_UGenlockedTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenlockedTimecodeProvider), 80841457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_4161858938(TEXT("/Script/TimeManagement"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedTimecodeProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
