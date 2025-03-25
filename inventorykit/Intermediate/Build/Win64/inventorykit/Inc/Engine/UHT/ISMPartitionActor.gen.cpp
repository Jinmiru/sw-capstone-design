// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ISMPartition/ISMPartitionActor.h"
#include "Runtime/Engine/Public/ISMPartition/ISMComponentData.h"
#include "Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
#include "Runtime/Engine/Public/ISMPartition/ISMPartitionInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMPartitionActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AISMPartitionActor();
ENGINE_API UClass* Z_Construct_UClass_AISMPartitionActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APartitionActor();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManagerProvider_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMClientInstanceManagerData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AISMPartitionActor
void AISMPartitionActor::StaticRegisterNativesAISMPartitionActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AISMPartitionActor);
UClass* Z_Construct_UClass_AISMPartitionActor_NoRegister()
{
	return AISMPartitionActor::StaticClass();
}
struct Z_Construct_UClass_AISMPartitionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Actor base class for instance containers placed on a grid.\n\x09See UActorPartitionSubsystem. */" },
		{ "IncludePath", "ISMPartition/ISMPartitionActor.h" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
		{ "ToolTip", "Actor base class for instance containers placed on a grid.\n      See UActorPartitionSubsystem." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clients_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Descriptors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptorComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientInstanceManagers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMPartitionActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Clients_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Clients;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Descriptors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DescriptorComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DescriptorComponents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInstanceManagers_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientInstanceManagers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClientInstanceManagers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISMPartitionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients_Inner = { "Clients", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients = { "Clients", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISMPartitionActor, Clients), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clients_MetaData), NewProp_Clients_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors_Inner = { "Descriptors", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FISMComponentDescriptor, METADATA_PARAMS(0, nullptr) }; // 4185037056
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors = { "Descriptors", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISMPartitionActor, Descriptors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Descriptors_MetaData), NewProp_Descriptors_MetaData) }; // 4185037056
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents_Inner = { "DescriptorComponents", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FISMComponentData, METADATA_PARAMS(0, nullptr) }; // 2335687815
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents = { "DescriptorComponents", nullptr, (EPropertyFlags)0x0040008800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISMPartitionActor, DescriptorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptorComponents_MetaData), NewProp_DescriptorComponents_MetaData) }; // 2335687815
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_ValueProp = { "ClientInstanceManagers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FISMClientInstanceManagerData, METADATA_PARAMS(0, nullptr) }; // 3807050162
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_Key_KeyProp = { "ClientInstanceManagers_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers = { "ClientInstanceManagers", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISMPartitionActor, ClientInstanceManagers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientInstanceManagers_MetaData), NewProp_ClientInstanceManagers_MetaData) }; // 3807050162
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AISMPartitionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Clients,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_Descriptors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_DescriptorComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMPartitionActor_Statics::NewProp_ClientInstanceManagers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_AISMPartitionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APartitionActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AISMPartitionActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USMInstanceManager_NoRegister, (int32)VTABLE_OFFSET(AISMPartitionActor, ISMInstanceManager), false },  // 1951560444
	{ Z_Construct_UClass_USMInstanceManagerProvider_NoRegister, (int32)VTABLE_OFFSET(AISMPartitionActor, ISMInstanceManagerProvider), false },  // 2542487395
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AISMPartitionActor_Statics::ClassParams = {
	&AISMPartitionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AISMPartitionActor_Statics::PropPointers, nullptr),
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::PropPointers), 0),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AISMPartitionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AISMPartitionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AISMPartitionActor()
{
	if (!Z_Registration_Info_UClass_AISMPartitionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AISMPartitionActor.OuterSingleton, Z_Construct_UClass_AISMPartitionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AISMPartitionActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AISMPartitionActor>()
{
	return AISMPartitionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AISMPartitionActor);
AISMPartitionActor::~AISMPartitionActor() {}
// End Class AISMPartitionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AISMPartitionActor, AISMPartitionActor::StaticClass, TEXT("AISMPartitionActor"), &Z_Registration_Info_UClass_AISMPartitionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AISMPartitionActor), 3657065066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_4294753454(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
