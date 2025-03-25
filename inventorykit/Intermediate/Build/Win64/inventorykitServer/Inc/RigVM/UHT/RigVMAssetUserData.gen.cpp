// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMAssetUserData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMAssetUserData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_UDataAssetLink();
RIGVM_API UClass* Z_Construct_UClass_UDataAssetLink_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_UNameSpacedUserData();
RIGVM_API UClass* Z_Construct_UClass_UNameSpacedUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Class UNameSpacedUserData
void UNameSpacedUserData::StaticRegisterNativesUNameSpacedUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNameSpacedUserData);
UClass* Z_Construct_UClass_UNameSpacedUserData_NoRegister()
{
	return UNameSpacedUserData::StaticClass();
}
struct Z_Construct_UClass_UNameSpacedUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* User data that can be attached to assets to provide namespaced data access.\n*/" },
		{ "IncludePath", "RigVMCore/RigVMAssetUserData.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
		{ "ToolTip", "User data that can be attached to assets to provide namespaced data access." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The namespace to use when looking up values inside of the user data. */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
		{ "ToolTip", "The namespace to use when looking up values inside of the user data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNameSpacedUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNameSpacedUserData_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNameSpacedUserData, NameSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNameSpacedUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNameSpacedUserData_Statics::NewProp_NameSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNameSpacedUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNameSpacedUserData_Statics::ClassParams = {
	&UNameSpacedUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNameSpacedUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNameSpacedUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNameSpacedUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNameSpacedUserData()
{
	if (!Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton, Z_Construct_UClass_UNameSpacedUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNameSpacedUserData.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<UNameSpacedUserData>()
{
	return UNameSpacedUserData::StaticClass();
}
UNameSpacedUserData::UNameSpacedUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNameSpacedUserData);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNameSpacedUserData)
// End Class UNameSpacedUserData

// Begin Class UDataAssetLink Function GetDataAsset
struct Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics
{
	struct DataAssetLink_eventGetDataAsset_Parms
	{
		TSoftObjectPtr<UDataAsset> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataAssetLink_eventGetDataAsset_Parms, ReturnValue), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataAssetLink, nullptr, "GetDataAsset", nullptr, nullptr, Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::DataAssetLink_eventGetDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::DataAssetLink_eventGetDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataAssetLink_GetDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataAssetLink_GetDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataAssetLink::execGetDataAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UDataAsset>*)Z_Param__Result=P_THIS->GetDataAsset();
	P_NATIVE_END;
}
// End Class UDataAssetLink Function GetDataAsset

// Begin Class UDataAssetLink Function SetDataAsset
struct Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics
{
	struct DataAssetLink_eventSetDataAsset_Parms
	{
		TSoftObjectPtr<UDataAsset> InDataAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::NewProp_InDataAsset = { "InDataAsset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataAssetLink_eventSetDataAsset_Parms, InDataAsset), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::NewProp_InDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataAssetLink, nullptr, "SetDataAsset", nullptr, nullptr, Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::DataAssetLink_eventSetDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::DataAssetLink_eventSetDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDataAssetLink_SetDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataAssetLink_SetDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDataAssetLink::execSetDataAsset)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UDataAsset>,Z_Param_InDataAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataAsset(Z_Param_InDataAsset);
	P_NATIVE_END;
}
// End Class UDataAssetLink Function SetDataAsset

// Begin Class UDataAssetLink
void UDataAssetLink::StaticRegisterNativesUDataAssetLink()
{
	UClass* Class = UDataAssetLink::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataAsset", &UDataAssetLink::execGetDataAsset },
		{ "SetDataAsset", &UDataAssetLink::execSetDataAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAssetLink);
UClass* Z_Construct_UClass_UDataAssetLink_NoRegister()
{
	return UDataAssetLink::StaticClass();
}
struct Z_Construct_UClass_UDataAssetLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Namespaced user data which provides access to a linked data asset\n*/" },
		{ "IncludePath", "RigVMCore/RigVMAssetUserData.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
		{ "ToolTip", "Namespaced user data which provides access to a linked data asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "BlueprintGetter", "GetDataAsset" },
		{ "BlueprintSetter", "SetDataAsset" },
		{ "Category", "General" },
		{ "Comment", "/** If assigned, the data asset link will provide access to the data asset's content. */" },
		{ "DisplayAfter", "NameSpace" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
		{ "ToolTip", "If assigned, the data asset link will provide access to the data asset's content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAssetCached_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMAssetUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAssetCached;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataAssetLink_GetDataAsset, "GetDataAsset" }, // 2603116648
		{ &Z_Construct_UFunction_UDataAssetLink_SetDataAsset, "SetDataAsset" }, // 412831459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAssetLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAssetLink, DataAsset), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAssetCached = { "DataAssetCached", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAssetLink, DataAssetCached), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAssetCached_MetaData), NewProp_DataAssetCached_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAssetLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAssetLink_Statics::NewProp_DataAssetCached,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAssetLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNameSpacedUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAssetLink_Statics::ClassParams = {
	&UDataAssetLink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDataAssetLink_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAssetLink_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAssetLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAssetLink()
{
	if (!Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton, Z_Construct_UClass_UDataAssetLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAssetLink.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<UDataAssetLink>()
{
	return UDataAssetLink::StaticClass();
}
UDataAssetLink::UDataAssetLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAssetLink);
UDataAssetLink::~UDataAssetLink() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataAssetLink)
// End Class UDataAssetLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNameSpacedUserData, UNameSpacedUserData::StaticClass, TEXT("UNameSpacedUserData"), &Z_Registration_Info_UClass_UNameSpacedUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNameSpacedUserData), 2044339695U) },
		{ Z_Construct_UClass_UDataAssetLink, UDataAssetLink::StaticClass, TEXT("UDataAssetLink"), &Z_Registration_Info_UClass_UDataAssetLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAssetLink), 2522469143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_3238461220(TEXT("/Script/RigVM"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
