// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChildConnection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UChildConnection();
ENGINE_API UClass* Z_Construct_UClass_UChildConnection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UChildConnection
void UChildConnection::StaticRegisterNativesUChildConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChildConnection);
UClass* Z_Construct_UClass_UChildConnection_NoRegister()
{
	return UChildConnection::StaticClass();
}
struct Z_Construct_UClass_UChildConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a secondary split screen connection that reroutes calls to the parent connection.\n */" },
		{ "IncludePath", "Engine/ChildConnection.h" },
		{ "ModuleRelativePath", "Classes/Engine/ChildConnection.h" },
		{ "ToolTip", "Represents a secondary split screen connection that reroutes calls to the parent connection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ChildConnection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChildConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChildConnection_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChildConnection, Parent), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChildConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildConnection_Statics::NewProp_Parent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChildConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChildConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChildConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChildConnection_Statics::ClassParams = {
	&UChildConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChildConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChildConnection_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChildConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_UChildConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChildConnection()
{
	if (!Z_Registration_Info_UClass_UChildConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChildConnection.OuterSingleton, Z_Construct_UClass_UChildConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChildConnection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UChildConnection>()
{
	return UChildConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChildConnection);
UChildConnection::~UChildConnection() {}
// End Class UChildConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChildConnection, UChildConnection::StaticClass, TEXT("UChildConnection"), &Z_Registration_Info_UClass_UChildConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChildConnection), 1357750435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_1984170560(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
