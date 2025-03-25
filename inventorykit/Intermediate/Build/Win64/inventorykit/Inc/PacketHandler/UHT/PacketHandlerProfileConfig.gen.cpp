// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/PacketHandlers/PacketHandler/Classes/PacketHandlerProfileConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketHandlerProfileConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PACKETHANDLER_API UClass* Z_Construct_UClass_UPacketHandlerProfileConfig();
PACKETHANDLER_API UClass* Z_Construct_UClass_UPacketHandlerProfileConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_PacketHandler();
// End Cross Module References

// Begin Class UPacketHandlerProfileConfig
void UPacketHandlerProfileConfig::StaticRegisterNativesUPacketHandlerProfileConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPacketHandlerProfileConfig);
UClass* Z_Construct_UClass_UPacketHandlerProfileConfig_NoRegister()
{
	return UPacketHandlerProfileConfig::StaticClass();
}
struct Z_Construct_UClass_UPacketHandlerProfileConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PacketHandler Configuration Profiles based on each NetDriver\n */" },
		{ "IncludePath", "PacketHandlerProfileConfig.h" },
		{ "ModuleRelativePath", "Classes/PacketHandlerProfileConfig.h" },
		{ "ToolTip", "PacketHandler Configuration Profiles based on each NetDriver" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PacketHandlerProfileConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPacketHandlerProfileConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPacketHandlerProfileConfig, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::NewProp_Components,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PacketHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::ClassParams = {
	&UPacketHandlerProfileConfig::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::PropPointers),
	0,
	0x000004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPacketHandlerProfileConfig()
{
	if (!Z_Registration_Info_UClass_UPacketHandlerProfileConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPacketHandlerProfileConfig.OuterSingleton, Z_Construct_UClass_UPacketHandlerProfileConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPacketHandlerProfileConfig.OuterSingleton;
}
template<> PACKETHANDLER_API UClass* StaticClass<UPacketHandlerProfileConfig>()
{
	return UPacketHandlerProfileConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPacketHandlerProfileConfig);
UPacketHandlerProfileConfig::~UPacketHandlerProfileConfig() {}
// End Class UPacketHandlerProfileConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPacketHandlerProfileConfig, UPacketHandlerProfileConfig::StaticClass, TEXT("UPacketHandlerProfileConfig"), &Z_Registration_Info_UClass_UPacketHandlerProfileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPacketHandlerProfileConfig), 4156434472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_3390670442(TEXT("/Script/PacketHandler"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_PacketHandlerProfileConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
