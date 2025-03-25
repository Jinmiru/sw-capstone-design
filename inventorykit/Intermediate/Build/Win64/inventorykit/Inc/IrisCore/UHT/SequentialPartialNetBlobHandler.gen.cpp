// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequentialPartialNetBlobHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler();
IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler();
IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig();
IRISCORE_API UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class USequentialPartialNetBlobHandlerConfig
void USequentialPartialNetBlobHandlerConfig::StaticRegisterNativesUSequentialPartialNetBlobHandlerConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequentialPartialNetBlobHandlerConfig);
UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_NoRegister()
{
	return USequentialPartialNetBlobHandlerConfig::StaticClass();
}
struct Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPartBitCount_MetaData[] = {
		{ "Comment", "/** How many bits a PartialNetBlob payload can hold at most. Cannot exceed 65535, but anything near the max packet size is discouraged as it is unlikely to fit. Keep it a power of two. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
		{ "ToolTip", "How many bits a PartialNetBlob payload can hold at most. Cannot exceed 65535, but anything near the max packet size is discouraged as it is unlikely to fit. Keep it a power of two." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPartCount_MetaData[] = {
		{ "Comment", "/** How many parts a NetBlob can be split into at most. If more parts are required the splitting will fail. Cannot exceed 65535. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
		{ "ToolTip", "How many parts a NetBlob can be split into at most. If more parts are required the splitting will fail. Cannot exceed 65535." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxPartBitCount;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxPartCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequentialPartialNetBlobHandlerConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartBitCount = { "MaxPartBitCount", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USequentialPartialNetBlobHandlerConfig, MaxPartBitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPartBitCount_MetaData), NewProp_MaxPartBitCount_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartCount = { "MaxPartCount", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USequentialPartialNetBlobHandlerConfig, MaxPartCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPartCount_MetaData), NewProp_MaxPartCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartBitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::NewProp_MaxPartCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::ClassParams = {
	&USequentialPartialNetBlobHandlerConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig()
{
	if (!Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton, Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<USequentialPartialNetBlobHandlerConfig>()
{
	return USequentialPartialNetBlobHandlerConfig::StaticClass();
}
USequentialPartialNetBlobHandlerConfig::USequentialPartialNetBlobHandlerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequentialPartialNetBlobHandlerConfig);
USequentialPartialNetBlobHandlerConfig::~USequentialPartialNetBlobHandlerConfig() {}
// End Class USequentialPartialNetBlobHandlerConfig

// Begin Class USequentialPartialNetBlobHandler
void USequentialPartialNetBlobHandler::StaticRegisterNativesUSequentialPartialNetBlobHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequentialPartialNetBlobHandler);
UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler_NoRegister()
{
	return USequentialPartialNetBlobHandler::StaticClass();
}
struct Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/SequentialPartialNetBlobHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequentialPartialNetBlobHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetBlobHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::ClassParams = {
	&USequentialPartialNetBlobHandler::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequentialPartialNetBlobHandler()
{
	if (!Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton, Z_Construct_UClass_USequentialPartialNetBlobHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequentialPartialNetBlobHandler.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<USequentialPartialNetBlobHandler>()
{
	return USequentialPartialNetBlobHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequentialPartialNetBlobHandler);
USequentialPartialNetBlobHandler::~USequentialPartialNetBlobHandler() {}
// End Class USequentialPartialNetBlobHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequentialPartialNetBlobHandlerConfig, USequentialPartialNetBlobHandlerConfig::StaticClass, TEXT("USequentialPartialNetBlobHandlerConfig"), &Z_Registration_Info_UClass_USequentialPartialNetBlobHandlerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequentialPartialNetBlobHandlerConfig), 3737945519U) },
		{ Z_Construct_UClass_USequentialPartialNetBlobHandler, USequentialPartialNetBlobHandler::StaticClass, TEXT("USequentialPartialNetBlobHandler"), &Z_Registration_Info_UClass_USequentialPartialNetBlobHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequentialPartialNetBlobHandler), 1948393568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_1068554969(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_SequentialPartialNetBlobHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
