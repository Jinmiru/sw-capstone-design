// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChannel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UChannel();
ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UChannel
void UChannel::StaticRegisterNativesUChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChannel);
UClass* Z_Construct_UClass_UChannel_NoRegister()
{
	return UChannel::StaticClass();
}
struct Z_Construct_UClass_UChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class of communication channels.\n */" },
		{ "IncludePath", "Engine/Channel.h" },
		{ "ModuleRelativePath", "Classes/Engine/Channel.h" },
		{ "ToolTip", "Base class of communication channels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Channel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChannel_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChannel, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connection_MetaData), NewProp_Connection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChannel_Statics::NewProp_Connection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChannel_Statics::ClassParams = {
	&UChannel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChannel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::PropPointers),
	0,
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChannel()
{
	if (!Z_Registration_Info_UClass_UChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChannel.OuterSingleton, Z_Construct_UClass_UChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChannel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UChannel>()
{
	return UChannel::StaticClass();
}
UChannel::UChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChannel);
UChannel::~UChannel() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChannel)
// End Class UChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChannel, UChannel::StaticClass, TEXT("UChannel"), &Z_Registration_Info_UClass_UChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChannel), 3194941250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_3610853237(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
