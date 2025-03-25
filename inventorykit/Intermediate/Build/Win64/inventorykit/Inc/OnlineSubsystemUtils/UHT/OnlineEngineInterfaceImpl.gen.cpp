// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/OnlineEngineInterfaceImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineEngineInterfaceImpl() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UOnlineEngineInterfaceImpl
void UOnlineEngineInterfaceImpl::StaticRegisterNativesUOnlineEngineInterfaceImpl()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineEngineInterfaceImpl);
UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister()
{
	return UOnlineEngineInterfaceImpl::StaticClass();
}
struct Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineEngineInterfaceImpl.h" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedUniqueNetIdTypes_MetaData[] = {
		{ "Comment", "/** Mapping of unique net ids that should not be treated as foreign ids to the local subsystem. */" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
		{ "ToolTip", "Mapping of unique net ids that should not be treated as foreign ids to the local subsystem." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleUniqueNetIdTypes_MetaData[] = {
		{ "Comment", "/** Array of unique net ids that are deemed valid when tested against gameplay login checks. */" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
		{ "ToolTip", "Array of unique net ids that are deemed valid when tested against gameplay login checks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSubsystemNameOverride_MetaData[] = {
		{ "Comment", "/** Allow the subsystem used for voice functions to be overridden, in case it needs to be different than the default subsystem. May be useful on console platforms. */" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
		{ "ToolTip", "Allow the subsystem used for voice functions to be overridden, in case it needs to be different than the default subsystem. May be useful on console platforms." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappedUniqueNetIdTypes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappedUniqueNetIdTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MappedUniqueNetIdTypes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompatibleUniqueNetIdTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleUniqueNetIdTypes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VoiceSubsystemNameOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineEngineInterfaceImpl>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_ValueProp = { "MappedUniqueNetIdTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_Key_KeyProp = { "MappedUniqueNetIdTypes_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes = { "MappedUniqueNetIdTypes", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineEngineInterfaceImpl, MappedUniqueNetIdTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedUniqueNetIdTypes_MetaData), NewProp_MappedUniqueNetIdTypes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes_Inner = { "CompatibleUniqueNetIdTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes = { "CompatibleUniqueNetIdTypes", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineEngineInterfaceImpl, CompatibleUniqueNetIdTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleUniqueNetIdTypes_MetaData), NewProp_CompatibleUniqueNetIdTypes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride = { "VoiceSubsystemNameOverride", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceSubsystemNameOverride_MetaData), NewProp_VoiceSubsystemNameOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_MappedUniqueNetIdTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_CompatibleUniqueNetIdTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineEngineInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::ClassParams = {
	&UOnlineEngineInterfaceImpl::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl()
{
	if (!Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton, Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineEngineInterfaceImpl>()
{
	return UOnlineEngineInterfaceImpl::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEngineInterfaceImpl);
UOnlineEngineInterfaceImpl::~UOnlineEngineInterfaceImpl() {}
// End Class UOnlineEngineInterfaceImpl

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineEngineInterfaceImpl, UOnlineEngineInterfaceImpl::StaticClass, TEXT("UOnlineEngineInterfaceImpl"), &Z_Registration_Info_UClass_UOnlineEngineInterfaceImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineEngineInterfaceImpl), 3234512270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_1951086693(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlineEngineInterfaceImpl_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
