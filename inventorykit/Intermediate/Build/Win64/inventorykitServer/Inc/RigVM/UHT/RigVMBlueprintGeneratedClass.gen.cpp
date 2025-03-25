// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMBlueprintGeneratedClass.h"
#include "RigVM/Public/RigVMCore/RigVMGraphFunctionDefinition.h"
#include "RigVM/Public/RigVMCore/RigVMGraphFunctionHost.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMBlueprintGeneratedClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
RIGVM_API UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass();
RIGVM_API UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMGraphFunctionHeaderArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeaderArray;
class UScriptStruct* FRigVMGraphFunctionHeaderArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeaderArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeaderArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMGraphFunctionHeaderArray"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeaderArray.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMGraphFunctionHeaderArray>()
{
	return FRigVMGraphFunctionHeaderArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Headers_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Headers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Headers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphFunctionHeaderArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::NewProp_Headers_Inner = { "Headers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(0, nullptr) }; // 2599062278
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::NewProp_Headers = { "Headers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMGraphFunctionHeaderArray, Headers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Headers_MetaData), NewProp_Headers_MetaData) }; // 2599062278
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::NewProp_Headers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::NewProp_Headers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMGraphFunctionHeaderArray",
	Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::PropPointers),
	sizeof(FRigVMGraphFunctionHeaderArray),
	alignof(FRigVMGraphFunctionHeaderArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeaderArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeaderArray.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeaderArray.InnerSingleton;
}
// End ScriptStruct FRigVMGraphFunctionHeaderArray

// Begin Class URigVMBlueprintGeneratedClass
void URigVMBlueprintGeneratedClass::StaticRegisterNativesURigVMBlueprintGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMBlueprintGeneratedClass);
UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass_NoRegister()
{
	return URigVMBlueprintGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RigVMBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/RigVMBlueprintGeneratedClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphFunctionStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMBlueprintGeneratedClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphFunctionStore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMBlueprintGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::NewProp_GraphFunctionStore = { "GraphFunctionStore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMBlueprintGeneratedClass, GraphFunctionStore), Z_Construct_UScriptStruct_FRigVMGraphFunctionStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphFunctionStore_MetaData), NewProp_GraphFunctionStore_MetaData) }; // 1478245930
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::NewProp_GraphFunctionStore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister, (int32)VTABLE_OFFSET(URigVMBlueprintGeneratedClass, IRigVMGraphFunctionHost), false },  // 1149041350
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::ClassParams = {
	&URigVMBlueprintGeneratedClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URigVMBlueprintGeneratedClass()
{
	if (!Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_URigVMBlueprintGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<URigVMBlueprintGeneratedClass>()
{
	return URigVMBlueprintGeneratedClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMBlueprintGeneratedClass);
URigVMBlueprintGeneratedClass::~URigVMBlueprintGeneratedClass() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMBlueprintGeneratedClass)
// End Class URigVMBlueprintGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMGraphFunctionHeaderArray::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphFunctionHeaderArray_Statics::NewStructOps, TEXT("RigVMGraphFunctionHeaderArray"), &Z_Registration_Info_UScriptStruct_RigVMGraphFunctionHeaderArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphFunctionHeaderArray), 1592057318U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URigVMBlueprintGeneratedClass, URigVMBlueprintGeneratedClass::StaticClass, TEXT("URigVMBlueprintGeneratedClass"), &Z_Registration_Info_UClass_URigVMBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMBlueprintGeneratedClass), 3151312123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_424680914(TEXT("/Script/RigVM"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMBlueprintGeneratedClass_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
