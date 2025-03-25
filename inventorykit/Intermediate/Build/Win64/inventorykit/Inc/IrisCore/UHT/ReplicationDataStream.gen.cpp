// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/ReplicationDataStream.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationDataStream() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UDataStream();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationDataStream();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationDataStream_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UReplicationDataStream
void UReplicationDataStream::StaticRegisterNativesUReplicationDataStream()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationDataStream);
UClass* Z_Construct_UClass_UReplicationDataStream_NoRegister()
{
	return UReplicationDataStream::StaticClass();
}
struct Z_Construct_UClass_UReplicationDataStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/ReplicationDataStream.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/ReplicationDataStream.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationDataStream>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReplicationDataStream_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataStream,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationDataStream_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationDataStream_Statics::ClassParams = {
	&UReplicationDataStream::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationDataStream_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplicationDataStream_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplicationDataStream()
{
	if (!Z_Registration_Info_UClass_UReplicationDataStream.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationDataStream.OuterSingleton, Z_Construct_UClass_UReplicationDataStream_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplicationDataStream.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UReplicationDataStream>()
{
	return UReplicationDataStream::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationDataStream);
// End Class UReplicationDataStream

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_ReplicationDataStream_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationDataStream, UReplicationDataStream::StaticClass, TEXT("UReplicationDataStream"), &Z_Registration_Info_UClass_UReplicationDataStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationDataStream), 2307097593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_ReplicationDataStream_h_1940743722(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_ReplicationDataStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_ReplicationDataStream_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
