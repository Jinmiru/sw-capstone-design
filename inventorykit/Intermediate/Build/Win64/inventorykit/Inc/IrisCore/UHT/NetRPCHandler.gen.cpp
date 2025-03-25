// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/NetBlob/NetRPCHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetRPCHandler() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandler();
IRISCORE_API UClass* Z_Construct_UClass_UNetRPCHandler();
IRISCORE_API UClass* Z_Construct_UClass_UNetRPCHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNetRPCHandler
void UNetRPCHandler::StaticRegisterNativesUNetRPCHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetRPCHandler);
UClass* Z_Construct_UClass_UNetRPCHandler_NoRegister()
{
	return UNetRPCHandler::StaticClass();
}
struct Z_Construct_UClass_UNetRPCHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/NetRPCHandler.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetRPCHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetRPCHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetRPCHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetBlobHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetRPCHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetRPCHandler_Statics::ClassParams = {
	&UNetRPCHandler::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetRPCHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetRPCHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetRPCHandler()
{
	if (!Z_Registration_Info_UClass_UNetRPCHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetRPCHandler.OuterSingleton, Z_Construct_UClass_UNetRPCHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetRPCHandler.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetRPCHandler>()
{
	return UNetRPCHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetRPCHandler);
// End Class UNetRPCHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetRPCHandler, UNetRPCHandler::StaticClass, TEXT("UNetRPCHandler"), &Z_Registration_Info_UClass_UNetRPCHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetRPCHandler), 3359433873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_2698521026(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetRPCHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
