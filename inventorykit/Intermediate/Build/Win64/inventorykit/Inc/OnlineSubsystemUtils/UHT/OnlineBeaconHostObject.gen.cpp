// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineBeaconHostObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconHostObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class AOnlineBeaconHostObject
void AOnlineBeaconHostObject::StaticRegisterNativesAOnlineBeaconHostObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconHostObject);
UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister()
{
	return AOnlineBeaconHostObject::StaticClass();
}
struct Z_Construct_UClass_AOnlineBeaconHostObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for any unique beacon connectivity, paired with an AOnlineBeaconClient implementation \n *\n * By defining a beacon type and implementing the ability to spawn unique AOnlineBeaconClients, any two instances of the engine\n * can communicate with each other without officially connecting through normal Unreal networking\n */" },
		{ "IncludePath", "OnlineBeaconHostObject.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Base class for any unique beacon connectivity, paired with an AOnlineBeaconClient implementation\n\nBy defining a beacon type and implementing the ability to spawn unique AOnlineBeaconClients, any two instances of the engine\ncan communicate with each other without officially connecting through normal Unreal networking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeaconTypeName_MetaData[] = {
		{ "Comment", "/** Custom name for this beacon */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Custom name for this beacon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientBeaconActorClass_MetaData[] = {
		{ "Comment", "/** Class reference for spawning client beacon actor */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Class reference for spawning client beacon actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientActors_MetaData[] = {
		{ "Comment", "/** List of all client beacon actors with active connections */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "List of all client beacon actors with active connections" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BeaconTypeName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClientBeaconActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconHostObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName = { "BeaconTypeName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconHostObject, BeaconTypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeaconTypeName_MetaData), NewProp_BeaconTypeName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass = { "ClientBeaconActorClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconHostObject, ClientBeaconActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientBeaconActorClass_MetaData), NewProp_ClientBeaconActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_Inner = { "ClientActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors = { "ClientActors", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOnlineBeaconHostObject, ClientActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientActors_MetaData), NewProp_ClientActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOnlineBeaconHostObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::ClassParams = {
	&AOnlineBeaconHostObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlineBeaconHostObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOnlineBeaconHostObject()
{
	if (!Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton, Z_Construct_UClass_AOnlineBeaconHostObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconHostObject>()
{
	return AOnlineBeaconHostObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconHostObject);
AOnlineBeaconHostObject::~AOnlineBeaconHostObject() {}
// End Class AOnlineBeaconHostObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconHostObject, AOnlineBeaconHostObject::StaticClass, TEXT("AOnlineBeaconHostObject"), &Z_Registration_Info_UClass_AOnlineBeaconHostObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconHostObject), 61033492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_160966626(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
