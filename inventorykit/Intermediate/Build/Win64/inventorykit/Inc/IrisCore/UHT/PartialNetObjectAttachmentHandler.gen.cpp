// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartialNetObjectAttachmentHandler() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler();
IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig();
IRISCORE_API UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler();
IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UPartialNetObjectAttachmentHandlerConfig
void UPartialNetObjectAttachmentHandlerConfig::StaticRegisterNativesUPartialNetObjectAttachmentHandlerConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartialNetObjectAttachmentHandlerConfig);
UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_NoRegister()
{
	return UPartialNetObjectAttachmentHandlerConfig::StaticClass();
}
struct Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitCountSplitThreshold_MetaData[] = {
		{ "Comment", "/** How many bits a payload should have to recommend a split. Should be higher than MaxPartBitCount as splitting adds overhead. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ToolTip", "How many bits a payload should have to recommend a split. Should be higher than MaxPartBitCount as splitting adds overhead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientUnreliableBitCountSplitThreshold_MetaData[] = {
		{ "Comment", "/** How many bits a unreliable payload should have to recommend a split on the client. Should be higher than MaxPartBitCount as splitting adds overhead. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ToolTip", "How many bits a unreliable payload should have to recommend a split on the client. Should be higher than MaxPartBitCount as splitting adds overhead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerUnreliableBitCountSplitThreshold_MetaData[] = {
		{ "Comment", "/** How many bits a unreliable payload should have to recommend a split on the server. Should be higher than MaxPartBitCount as splitting adds overhead. */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ToolTip", "How many bits a unreliable payload should have to recommend a split on the server. Should be higher than MaxPartBitCount as splitting adds overhead." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_BitCountSplitThreshold;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ClientUnreliableBitCountSplitThreshold;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ServerUnreliableBitCountSplitThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartialNetObjectAttachmentHandlerConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_BitCountSplitThreshold = { "BitCountSplitThreshold", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartialNetObjectAttachmentHandlerConfig, BitCountSplitThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitCountSplitThreshold_MetaData), NewProp_BitCountSplitThreshold_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_ClientUnreliableBitCountSplitThreshold = { "ClientUnreliableBitCountSplitThreshold", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartialNetObjectAttachmentHandlerConfig, ClientUnreliableBitCountSplitThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientUnreliableBitCountSplitThreshold_MetaData), NewProp_ClientUnreliableBitCountSplitThreshold_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_ServerUnreliableBitCountSplitThreshold = { "ServerUnreliableBitCountSplitThreshold", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPartialNetObjectAttachmentHandlerConfig, ServerUnreliableBitCountSplitThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerUnreliableBitCountSplitThreshold_MetaData), NewProp_ServerUnreliableBitCountSplitThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_BitCountSplitThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_ClientUnreliableBitCountSplitThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::NewProp_ServerUnreliableBitCountSplitThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::ClassParams = {
	&UPartialNetObjectAttachmentHandlerConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig()
{
	if (!Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton, Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UPartialNetObjectAttachmentHandlerConfig>()
{
	return UPartialNetObjectAttachmentHandlerConfig::StaticClass();
}
UPartialNetObjectAttachmentHandlerConfig::UPartialNetObjectAttachmentHandlerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPartialNetObjectAttachmentHandlerConfig);
UPartialNetObjectAttachmentHandlerConfig::~UPartialNetObjectAttachmentHandlerConfig() {}
// End Class UPartialNetObjectAttachmentHandlerConfig

// Begin Class UPartialNetObjectAttachmentHandler
void UPartialNetObjectAttachmentHandler::StaticRegisterNativesUPartialNetObjectAttachmentHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPartialNetObjectAttachmentHandler);
UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler_NoRegister()
{
	return UPartialNetObjectAttachmentHandler::StaticClass();
}
struct Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NetBlobHandler that can split and assemble very large NetObjectAttachments.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/PartialNetObjectAttachmentHandler.h" },
		{ "ToolTip", "NetBlobHandler that can split and assemble very large NetObjectAttachments." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartialNetObjectAttachmentHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USequentialPartialNetBlobHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::ClassParams = {
	&UPartialNetObjectAttachmentHandler::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPartialNetObjectAttachmentHandler()
{
	if (!Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton, Z_Construct_UClass_UPartialNetObjectAttachmentHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UPartialNetObjectAttachmentHandler>()
{
	return UPartialNetObjectAttachmentHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPartialNetObjectAttachmentHandler);
// End Class UPartialNetObjectAttachmentHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPartialNetObjectAttachmentHandlerConfig, UPartialNetObjectAttachmentHandlerConfig::StaticClass, TEXT("UPartialNetObjectAttachmentHandlerConfig"), &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandlerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartialNetObjectAttachmentHandlerConfig), 214173832U) },
		{ Z_Construct_UClass_UPartialNetObjectAttachmentHandler, UPartialNetObjectAttachmentHandler::StaticClass, TEXT("UPartialNetObjectAttachmentHandler"), &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPartialNetObjectAttachmentHandler), 2978421908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_1048306856(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_PartialNetObjectAttachmentHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
