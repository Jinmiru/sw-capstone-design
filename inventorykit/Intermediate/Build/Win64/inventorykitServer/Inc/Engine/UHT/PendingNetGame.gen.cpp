// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PendingNetGame.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePendingNetGame() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame();
ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPendingNetGame
void UPendingNetGame::StaticRegisterNativesUPendingNetGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPendingNetGame);
UClass* Z_Construct_UClass_UPendingNetGame_NoRegister()
{
	return UPendingNetGame::StaticClass();
}
struct Z_Construct_UClass_UPendingNetGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PendingNetGame.h" },
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[] = {
		{ "Comment", "/** \n\x09 * Net driver created for contacting the new server\n\x09 * Transferred to world on successful connection\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
		{ "ToolTip", "Net driver created for contacting the new server\nTransferred to world on successful connection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DemoNetDriver_MetaData[] = {
		{ "Comment", "/** \n\x09 * Demo Net driver created for loading demos, but we need to go through pending net game\n\x09 * Transferred to world on successful connection\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
		{ "ToolTip", "Demo Net driver created for loading demos, but we need to go through pending net game\nTransferred to world on successful connection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetDriver;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DemoNetDriver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPendingNetGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPendingNetGame, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetDriver_MetaData), NewProp_NetDriver_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver = { "DemoNetDriver", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPendingNetGame, DemoNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DemoNetDriver_MetaData), NewProp_DemoNetDriver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPendingNetGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPendingNetGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPendingNetGame_Statics::ClassParams = {
	&UPendingNetGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPendingNetGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UPendingNetGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPendingNetGame()
{
	if (!Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton, Z_Construct_UClass_UPendingNetGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPendingNetGame>()
{
	return UPendingNetGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPendingNetGame);
UPendingNetGame::~UPendingNetGame() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPendingNetGame)
// End Class UPendingNetGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPendingNetGame, UPendingNetGame::StaticClass, TEXT("UPendingNetGame"), &Z_Registration_Info_UClass_UPendingNetGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPendingNetGame), 148445840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_3645628099(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
