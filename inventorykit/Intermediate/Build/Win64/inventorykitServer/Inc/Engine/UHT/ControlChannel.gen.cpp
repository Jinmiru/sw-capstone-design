// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ControlChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlChannel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UChannel();
ENGINE_API UClass* Z_Construct_UClass_UControlChannel();
ENGINE_API UClass* Z_Construct_UClass_UControlChannel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UControlChannel
void UControlChannel::StaticRegisterNativesUControlChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlChannel);
UClass* Z_Construct_UClass_UControlChannel_NoRegister()
{
	return UControlChannel::StaticClass();
}
struct Z_Construct_UClass_UControlChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A channel for exchanging connection control messages.\n */" },
		{ "IncludePath", "Engine/ControlChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/ControlChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A channel for exchanging connection control messages." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UControlChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlChannel_Statics::ClassParams = {
	&UControlChannel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlChannel()
{
	if (!Z_Registration_Info_UClass_UControlChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlChannel.OuterSingleton, Z_Construct_UClass_UControlChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlChannel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UControlChannel>()
{
	return UControlChannel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlChannel);
UControlChannel::~UControlChannel() {}
// End Class UControlChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlChannel, UControlChannel::StaticClass, TEXT("UControlChannel"), &Z_Registration_Info_UClass_UControlChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlChannel), 2628552600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_143924132(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
