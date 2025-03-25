// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ReplayNetConnection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplayNetConnection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
ENGINE_API UClass* Z_Construct_UClass_UReplayNetConnection();
ENGINE_API UClass* Z_Construct_UClass_UReplayNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UReplayNetConnection
void UReplayNetConnection::StaticRegisterNativesUReplayNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplayNetConnection);
UClass* Z_Construct_UClass_UReplayNetConnection_NoRegister()
{
	return UReplayNetConnection::StaticClass();
}
struct Z_Construct_UClass_UReplayNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ReplayNetConnection.h" },
		{ "ModuleRelativePath", "Public/ReplayNetConnection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplayNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReplayNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplayNetConnection_Statics::ClassParams = {
	&UReplayNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReplayNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UReplayNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReplayNetConnection()
{
	if (!Z_Registration_Info_UClass_UReplayNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplayNetConnection.OuterSingleton, Z_Construct_UClass_UReplayNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReplayNetConnection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UReplayNetConnection>()
{
	return UReplayNetConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReplayNetConnection);
UReplayNetConnection::~UReplayNetConnection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReplayNetConnection)
// End Class UReplayNetConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReplayNetConnection, UReplayNetConnection::StaticClass, TEXT("UReplayNetConnection"), &Z_Registration_Info_UClass_UReplayNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplayNetConnection), 3340241513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_394261427(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayNetConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
