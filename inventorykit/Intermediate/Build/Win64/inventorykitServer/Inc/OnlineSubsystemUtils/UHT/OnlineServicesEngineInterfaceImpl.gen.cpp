// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/OnlineServicesEngineInterfaceImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineServicesEngineInterfaceImpl() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UOnlineServicesEngineInterfaceImpl
void UOnlineServicesEngineInterfaceImpl::StaticRegisterNativesUOnlineServicesEngineInterfaceImpl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineServicesEngineInterfaceImpl);
UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_NoRegister()
{
	return UOnlineServicesEngineInterfaceImpl::StaticClass();
}
struct Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implementation of UOnlineEngineInterface that uses Online Services (also known as Online Subsystem v2)\n */" },
		{ "IncludePath", "OnlineServicesEngineInterfaceImpl.h" },
		{ "ModuleRelativePath", "Private/OnlineServicesEngineInterfaceImpl.h" },
		{ "ToolTip", "Implementation of UOnlineEngineInterface that uses Online Services (also known as Online Subsystem v2)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineServicesEngineInterfaceImpl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineEngineInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::ClassParams = {
	&UOnlineServicesEngineInterfaceImpl::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl()
{
	if (!Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton, Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineServicesEngineInterfaceImpl>()
{
	return UOnlineServicesEngineInterfaceImpl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineServicesEngineInterfaceImpl);
UOnlineServicesEngineInterfaceImpl::~UOnlineServicesEngineInterfaceImpl() {}
// End Class UOnlineServicesEngineInterfaceImpl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineServicesEngineInterfaceImpl, UOnlineServicesEngineInterfaceImpl::StaticClass, TEXT("UOnlineServicesEngineInterfaceImpl"), &Z_Registration_Info_UClass_UOnlineServicesEngineInterfaceImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineServicesEngineInterfaceImpl), 3762870414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_210631563(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineServicesEngineInterfaceImpl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
