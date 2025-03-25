// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/NetBlob/NetObjectBlobHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectBlobHandler() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectBlobHandler();
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectBlobHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNetObjectBlobHandler
void UNetObjectBlobHandler::StaticRegisterNativesUNetObjectBlobHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectBlobHandler);
UClass* Z_Construct_UClass_UNetObjectBlobHandler_NoRegister()
{
	return UNetObjectBlobHandler::StaticClass();
}
struct Z_Construct_UClass_UNetObjectBlobHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NetBlobHandler used for huge replicated objects. This blob will be split into PartialNetBlobs.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/NetObjectBlobHandler.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetObjectBlobHandler.h" },
		{ "ToolTip", "NetBlobHandler used for huge replicated objects. This blob will be split into PartialNetBlobs." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectBlobHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetObjectBlobHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetBlobHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectBlobHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectBlobHandler_Statics::ClassParams = {
	&UNetObjectBlobHandler::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectBlobHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetObjectBlobHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetObjectBlobHandler()
{
	if (!Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton, Z_Construct_UClass_UNetObjectBlobHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetObjectBlobHandler.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetObjectBlobHandler>()
{
	return UNetObjectBlobHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectBlobHandler);
// End Class UNetObjectBlobHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectBlobHandler, UNetObjectBlobHandler::StaticClass, TEXT("UNetObjectBlobHandler"), &Z_Registration_Info_UClass_UNetObjectBlobHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectBlobHandler), 355743046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_2420718254(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetObjectBlobHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
