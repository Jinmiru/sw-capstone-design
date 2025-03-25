// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Net/Experimental/Iris/DataStreamChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStreamChannel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UChannel();
ENGINE_API UClass* Z_Construct_UClass_UDataStreamChannel();
ENGINE_API UClass* Z_Construct_UClass_UDataStreamChannel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDataStreamChannel
void UDataStreamChannel::StaticRegisterNativesUDataStreamChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataStreamChannel);
UClass* Z_Construct_UClass_UDataStreamChannel_NoRegister()
{
	return UDataStreamChannel::StaticClass();
}
struct Z_Construct_UClass_UDataStreamChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Net/Experimental/Iris/DataStreamChannel.h" },
		{ "ModuleRelativePath", "Private/Net/Experimental/Iris/DataStreamChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStreamChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataStreamChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataStreamChannel_Statics::ClassParams = {
	&UDataStreamChannel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStreamChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataStreamChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataStreamChannel()
{
	if (!Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton, Z_Construct_UClass_UDataStreamChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataStreamChannel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDataStreamChannel>()
{
	return UDataStreamChannel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStreamChannel);
UDataStreamChannel::~UDataStreamChannel() {}
// End Class UDataStreamChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataStreamChannel, UDataStreamChannel::StaticClass, TEXT("UDataStreamChannel"), &Z_Registration_Info_UClass_UDataStreamChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataStreamChannel), 2397202859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_3585101587(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
