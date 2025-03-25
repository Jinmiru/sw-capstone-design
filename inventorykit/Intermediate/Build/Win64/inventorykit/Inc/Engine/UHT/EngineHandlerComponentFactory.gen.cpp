// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PacketHandlers/EngineHandlerComponentFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineHandlerComponentFactory() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory();
ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister();
PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UEngineHandlerComponentFactory
void UEngineHandlerComponentFactory::StaticRegisterNativesUEngineHandlerComponentFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineHandlerComponentFactory);
UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister()
{
	return UEngineHandlerComponentFactory::StaticClass();
}
struct Z_Construct_UClass_UEngineHandlerComponentFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory class for loading HandlerComponent's contained within Engine\n */" },
		{ "IncludePath", "PacketHandlers/EngineHandlerComponentFactory.h" },
		{ "ModuleRelativePath", "Classes/PacketHandlers/EngineHandlerComponentFactory.h" },
		{ "ToolTip", "Factory class for loading HandlerComponent's contained within Engine" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineHandlerComponentFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::ClassParams = {
	&UEngineHandlerComponentFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEngineHandlerComponentFactory()
{
	if (!Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton, Z_Construct_UClass_UEngineHandlerComponentFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEngineHandlerComponentFactory.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEngineHandlerComponentFactory>()
{
	return UEngineHandlerComponentFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineHandlerComponentFactory);
UEngineHandlerComponentFactory::~UEngineHandlerComponentFactory() {}
// End Class UEngineHandlerComponentFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEngineHandlerComponentFactory, UEngineHandlerComponentFactory::StaticClass, TEXT("UEngineHandlerComponentFactory"), &Z_Registration_Info_UClass_UEngineHandlerComponentFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineHandlerComponentFactory), 1797706418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_2146875746(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
