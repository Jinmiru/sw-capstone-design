// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationSystem/ObjectReplicationBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReplicationBridge() {}

// Begin Cross Module References
IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridge();
IRISCORE_API UClass* Z_Construct_UClass_UObjectReplicationBridge_NoRegister();
IRISCORE_API UClass* Z_Construct_UClass_UReplicationBridge();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Class UObjectReplicationBridge
void UObjectReplicationBridge::StaticRegisterNativesUObjectReplicationBridge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectReplicationBridge);
UClass* Z_Construct_UClass_UObjectReplicationBridge_NoRegister()
{
	return UObjectReplicationBridge::StaticClass();
}
struct Z_Construct_UClass_UObjectReplicationBridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Partial implementation of ReplicationBridge that can be used as a foundation for \n* implementing support for replicating objects derived from UObject\n*/" },
		{ "IncludePath", "Iris/ReplicationSystem/ObjectReplicationBridge.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridge.h" },
		{ "ToolTip", "* Partial implementation of ReplicationBridge that can be used as a foundation for\n* implementing support for replicating objects derived from UObject" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectReplicationBridge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectReplicationBridge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicationBridge,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectReplicationBridge_Statics::ClassParams = {
	&UObjectReplicationBridge::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridge_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectReplicationBridge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectReplicationBridge()
{
	if (!Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton, Z_Construct_UClass_UObjectReplicationBridge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UObjectReplicationBridge>()
{
	return UObjectReplicationBridge::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReplicationBridge);
// End Class UObjectReplicationBridge

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectReplicationBridge, UObjectReplicationBridge::StaticClass, TEXT("UObjectReplicationBridge"), &Z_Registration_Info_UClass_UObjectReplicationBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectReplicationBridge), 571755385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_1265865064(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
