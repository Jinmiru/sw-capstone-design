// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/NetTokenDataStream.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetTokenDataStream() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UDataStream();
IRISCORE_API UClass* Z_Construct_UClass_UNetTokenDataStream();
IRISCORE_API UClass* Z_Construct_UClass_UNetTokenDataStream_NoRegister();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UNetTokenDataStream
void UNetTokenDataStream::StaticRegisterNativesUNetTokenDataStream()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetTokenDataStream);
UClass* Z_Construct_UClass_UNetTokenDataStream_NoRegister()
{
	return UNetTokenDataStream::StaticClass();
}
struct Z_Construct_UClass_UNetTokenDataStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/NetTokenDataStream.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetTokenDataStream.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetTokenDataStream>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetTokenDataStream_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataStream,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetTokenDataStream_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetTokenDataStream_Statics::ClassParams = {
	&UNetTokenDataStream::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetTokenDataStream_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetTokenDataStream_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetTokenDataStream()
{
	if (!Z_Registration_Info_UClass_UNetTokenDataStream.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetTokenDataStream.OuterSingleton, Z_Construct_UClass_UNetTokenDataStream_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetTokenDataStream.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UNetTokenDataStream>()
{
	return UNetTokenDataStream::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetTokenDataStream);
// End Class UNetTokenDataStream

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetTokenDataStream_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetTokenDataStream, UNetTokenDataStream::StaticClass, TEXT("UNetTokenDataStream"), &Z_Registration_Info_UClass_UNetTokenDataStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetTokenDataStream), 1587877591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetTokenDataStream_h_4217586681(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetTokenDataStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetTokenDataStream_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
