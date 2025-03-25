// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/NetBlob/NetBlobHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetBlobHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler();
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNetBlobHandler
void UNetBlobHandler::StaticRegisterNativesUNetBlobHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetBlobHandler);
UClass* Z_Construct_UClass_UNetBlobHandler_NoRegister()
{
	return UNetBlobHandler::StaticClass();
}
struct Z_Construct_UClass_UNetBlobHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UNetBlobHandler is responsible for creating and processing a single type of NetBlob.\n * If the handler should be able to receive blobs it needs to be configured in\n * UNetBlobHandlerDefinitions and registered to the UReplicationSystem on both the\n * sending and receiving side.\n * @see UReplicationSystem::RegisterNetBlobHandler\n * @note Certain handlers such as NetRPCHandler, PartialNetObjectAttachmentHandler and NetObjectBlobHandler will be registered automatically.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/NetBlobHandler.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/NetBlob/NetBlobHandler.h" },
		{ "ToolTip", "A UNetBlobHandler is responsible for creating and processing a single type of NetBlob.\nIf the handler should be able to receive blobs it needs to be configured in\nUNetBlobHandlerDefinitions and registered to the UReplicationSystem on both the\nsending and receiving side.\n@see UReplicationSystem::RegisterNetBlobHandler\n@note Certain handlers such as NetRPCHandler, PartialNetObjectAttachmentHandler and NetObjectBlobHandler will be registered automatically." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetBlobHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetBlobHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetBlobHandler_Statics::ClassParams = {
	&UNetBlobHandler::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetBlobHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetBlobHandler()
{
	if (!Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton, Z_Construct_UClass_UNetBlobHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetBlobHandler.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetBlobHandler>()
{
	return UNetBlobHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetBlobHandler);
// End Class UNetBlobHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetBlobHandler, UNetBlobHandler::StaticClass, TEXT("UNetBlobHandler"), &Z_Registration_Info_UClass_UNetBlobHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetBlobHandler), 2505640733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_1046672083(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetBlob_NetBlobHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
