// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMGraphFunctionHost.h"
#include "RigVM/Public/RigVMCore/RigVMGraphFunctionDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMGraphFunctionHost() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost();
RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionData();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Interface URigVMGraphFunctionHost
void URigVMGraphFunctionHost::StaticRegisterNativesURigVMGraphFunctionHost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMGraphFunctionHost);
UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister()
{
	return URigVMGraphFunctionHost::StaticClass();
}
struct Z_Construct_UClass_URigVMGraphFunctionHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionHost.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRigVMGraphFunctionHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URigVMGraphFunctionHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraphFunctionHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMGraphFunctionHost_Statics::ClassParams = {
	&URigVMGraphFunctionHost::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMGraphFunctionHost_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMGraphFunctionHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URigVMGraphFunctionHost()
{
	if (!Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton, Z_Construct_UClass_URigVMGraphFunctionHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URigVMGraphFunctionHost.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<URigVMGraphFunctionHost>()
{
	return URigVMGraphFunctionHost::StaticClass();
}
URigVMGraphFunctionHost::URigVMGraphFunctionHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMGraphFunctionHost);
URigVMGraphFunctionHost::~URigVMGraphFunctionHost() {}
// End Interface URigVMGraphFunctionHost

// Begin ScriptStruct FRigVMGraphFunctionStore
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore;
class UScriptStruct* FRigVMGraphFunctionStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionStore"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionStore>()
{
	return FRigVMGraphFunctionStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// A management struct containing graph functions\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionHost.h" },
		{ "ToolTip", "A management struct containing graph functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PublicFunctions_MetaData[] = {
		{ "Comment", "/** Exposed public functions on this rig */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionHost.h" },
		{ "ToolTip", "Exposed public functions on this rig" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMGraphFunctionHost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublicFunctions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicFunctions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrivateFunctions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrivateFunctions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions_Inner = { "PublicFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionData, METADATA_PARAMS(0, nullptr) }; // 1974764230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions = { "PublicFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionStore, PublicFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PublicFunctions_MetaData), NewProp_PublicFunctions_MetaData) }; // 1974764230
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions_Inner = { "PrivateFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionData, METADATA_PARAMS(0, nullptr) }; // 1974764230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions = { "PrivateFunctions", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionStore, PrivateFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateFunctions_MetaData), NewProp_PrivateFunctions_MetaData) }; // 1974764230
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PublicFunctions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewProp_PrivateFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMGraphFunctionStore",
	Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::PropPointers),
	sizeof(FRigVMGraphFunctionStore),
	alignof(FRigVMGraphFunctionStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore.InnerSingleton;
}
// End ScriptStruct FRigVMGraphFunctionStore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMGraphFunctionStore::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics::NewStructOps, TEXT("RigVMGraphFunctionStore"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionStore), 1478245930U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URigVMGraphFunctionHost, URigVMGraphFunctionHost::StaticClass, TEXT("URigVMGraphFunctionHost"), &Z_Registration_Info_UClass_URigVMGraphFunctionHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMGraphFunctionHost), 1149041350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_1866627990(TEXT("/Script/RigVM"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
