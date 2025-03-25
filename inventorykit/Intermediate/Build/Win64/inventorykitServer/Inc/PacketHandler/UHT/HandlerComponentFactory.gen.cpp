// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/PacketHandlers/PacketHandler/Classes/HandlerComponentFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandlerComponentFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_PacketHandler();
// End Cross Module References

// Begin Class UHandlerComponentFactory
void UHandlerComponentFactory::StaticRegisterNativesUHandlerComponentFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandlerComponentFactory);
UClass* Z_Construct_UClass_UHandlerComponentFactory_NoRegister()
{
	return UHandlerComponentFactory::StaticClass();
}
struct Z_Construct_UClass_UHandlerComponentFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UObject alternative for loading HandlerComponents without strict module dependency\n */" },
		{ "IncludePath", "HandlerComponentFactory.h" },
		{ "ModuleRelativePath", "Classes/HandlerComponentFactory.h" },
		{ "ToolTip", "A UObject alternative for loading HandlerComponents without strict module dependency" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandlerComponentFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHandlerComponentFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PacketHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandlerComponentFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandlerComponentFactory_Statics::ClassParams = {
	&UHandlerComponentFactory::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandlerComponentFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandlerComponentFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandlerComponentFactory()
{
	if (!Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton, Z_Construct_UClass_UHandlerComponentFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandlerComponentFactory.OuterSingleton;
}
template<> PACKETHANDLER_API UClass* StaticClass<UHandlerComponentFactory>()
{
	return UHandlerComponentFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandlerComponentFactory);
UHandlerComponentFactory::~UHandlerComponentFactory() {}
// End Class UHandlerComponentFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandlerComponentFactory, UHandlerComponentFactory::StaticClass, TEXT("UHandlerComponentFactory"), &Z_Registration_Info_UClass_UHandlerComponentFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandlerComponentFactory), 4017007246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_3862236608(TEXT("/Script/PacketHandler"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
