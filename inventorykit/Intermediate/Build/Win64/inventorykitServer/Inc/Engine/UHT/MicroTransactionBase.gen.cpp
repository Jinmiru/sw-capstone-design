// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/MicroTransactionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicroTransactionBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMicroTransactionBase();
ENGINE_API UClass* Z_Construct_UClass_UMicroTransactionBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMicroTransactionDelegate();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMicroTransactionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMicroTransactionDelegate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMicroTransactionDelegate;
static UEnum* EMicroTransactionDelegate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMicroTransactionDelegate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMicroTransactionDelegate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMicroTransactionDelegate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMicroTransactionDelegate"));
	}
	return Z_Registration_Info_UEnum_EMicroTransactionDelegate.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMicroTransactionDelegate>()
{
	return EMicroTransactionDelegate_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** All the types of delegate callbacks that a MicroTransaction subclass may receive from C++. */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "MTD_MAX.Name", "MTD_MAX" },
		{ "MTD_PurchaseComplete.Comment", "/**\n\x09 * Data:Result code, and identifier of the product that completed.\n\x09 * Type:Custom\n\x09 * Desc:IntValue will have one of the enums in EMicroTransactionResult, and StringValue\n\x09 *      will have the Identifier from the PurchaseInfo that was bought with BeginPurchase\n\x09 *      If MTR_Failed was returned, then LastError and LastErrorSolution should be filled\n\x09 *\x09\x09out with the most recent localized and possible resolutions.\n\x09 */" },
		{ "MTD_PurchaseComplete.Name", "MTD_PurchaseComplete" },
		{ "MTD_PurchaseComplete.ToolTip", "Data:Result code, and identifier of the product that completed.\nType:Custom\nDesc:IntValue will have one of the enums in EMicroTransactionResult, and StringValue\n     will have the Identifier from the PurchaseInfo that was bought with BeginPurchase\n     If MTR_Failed was returned, then LastError and LastErrorSolution should be filled\n             out with the most recent localized and possible resolutions." },
		{ "MTD_PurchaseQueryComplete.Comment", "/**\n\x09 * Data:None\n\x09 * Desc:QueryForAvailablePurchases() is complete and AvailableProducts is ready for use.\n\x09 */" },
		{ "MTD_PurchaseQueryComplete.Name", "MTD_PurchaseQueryComplete" },
		{ "MTD_PurchaseQueryComplete.ToolTip", "Data:None\nDesc:QueryForAvailablePurchases() is complete and AvailableProducts is ready for use." },
		{ "ToolTip", "All the types of delegate callbacks that a MicroTransaction subclass may receive from C++." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MTD_PurchaseQueryComplete", (int64)MTD_PurchaseQueryComplete },
		{ "MTD_PurchaseComplete", (int64)MTD_PurchaseComplete },
		{ "MTD_MAX", (int64)MTD_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMicroTransactionDelegate",
	"EMicroTransactionDelegate",
	Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMicroTransactionDelegate()
{
	if (!Z_Registration_Info_UEnum_EMicroTransactionDelegate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMicroTransactionDelegate.InnerSingleton, Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMicroTransactionDelegate.InnerSingleton;
}
// End Enum EMicroTransactionDelegate

// Begin Enum EMicroTransactionResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMicroTransactionResult;
static UEnum* EMicroTransactionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMicroTransactionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMicroTransactionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMicroTransactionResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMicroTransactionResult"));
	}
	return Z_Registration_Info_UEnum_EMicroTransactionResult.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMicroTransactionResult>()
{
	return EMicroTransactionResult_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Result of a purchase. */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "MTR_Canceled.Name", "MTR_Canceled" },
		{ "MTR_Failed.Name", "MTR_Failed" },
		{ "MTR_MAX.Name", "MTR_MAX" },
		{ "MTR_RestoredFromServer.Name", "MTR_RestoredFromServer" },
		{ "MTR_Succeeded.Name", "MTR_Succeeded" },
		{ "ToolTip", "Result of a purchase." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MTR_Succeeded", (int64)MTR_Succeeded },
		{ "MTR_Failed", (int64)MTR_Failed },
		{ "MTR_Canceled", (int64)MTR_Canceled },
		{ "MTR_RestoredFromServer", (int64)MTR_RestoredFromServer },
		{ "MTR_MAX", (int64)MTR_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMicroTransactionResult",
	"EMicroTransactionResult",
	Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMicroTransactionResult()
{
	if (!Z_Registration_Info_UEnum_EMicroTransactionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMicroTransactionResult.InnerSingleton, Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMicroTransactionResult.InnerSingleton;
}
// End Enum EMicroTransactionResult

// Begin ScriptStruct FPurchaseInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PurchaseInfo;
class UScriptStruct* FPurchaseInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PurchaseInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PurchaseInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PurchaseInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PurchaseInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPurchaseInfo>()
{
	return FPurchaseInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPurchaseInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Purchase information structure\n */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Purchase information structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Comment", "/** Unique identifier for the purchase */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Unique identifier for the purchase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Name displayable to the user */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Name displayable to the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDescription_MetaData[] = {
		{ "Comment", "/** Description displayable to the user */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Description displayable to the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPrice_MetaData[] = {
		{ "Comment", "/** Price displayable to the user */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Price displayable to the user" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayPrice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPurchaseInfo, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPurchaseInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayDescription = { "DisplayDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPurchaseInfo, DisplayDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayDescription_MetaData), NewProp_DisplayDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayPrice = { "DisplayPrice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPurchaseInfo, DisplayPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayPrice_MetaData), NewProp_DisplayPrice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayPrice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PurchaseInfo",
	Z_Construct_UScriptStruct_FPurchaseInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::PropPointers),
	sizeof(FPurchaseInfo),
	alignof(FPurchaseInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPurchaseInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPurchaseInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PurchaseInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PurchaseInfo.InnerSingleton, Z_Construct_UScriptStruct_FPurchaseInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PurchaseInfo.InnerSingleton;
}
// End ScriptStruct FPurchaseInfo

// Begin Class UMicroTransactionBase
void UMicroTransactionBase::StaticRegisterNativesUMicroTransactionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMicroTransactionBase);
UClass* Z_Construct_UClass_UMicroTransactionBase_NoRegister()
{
	return UMicroTransactionBase::StaticClass();
}
struct Z_Construct_UClass_UMicroTransactionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/MicroTransactionBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableProducts_MetaData[] = {
		{ "Comment", "/** The list of products available to purchase, filled out by the time a MTD_PurchaseQueryComplete is fired */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "The list of products available to purchase, filled out by the time a MTD_PurchaseQueryComplete is fired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastError_MetaData[] = {
		{ "Comment", "/** In case of errors, this will describe the most recent error */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "In case of errors, this will describe the most recent error" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastErrorSolution_MetaData[] = {
		{ "Comment", "/** In case of errors, this will describe possible solutions (if there are any) */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "In case of errors, this will describe possible solutions (if there are any)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableProducts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableProducts;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastError;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastErrorSolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMicroTransactionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts_Inner = { "AvailableProducts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPurchaseInfo, METADATA_PARAMS(0, nullptr) }; // 3844524399
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts = { "AvailableProducts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMicroTransactionBase, AvailableProducts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableProducts_MetaData), NewProp_AvailableProducts_MetaData) }; // 3844524399
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastError = { "LastError", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMicroTransactionBase, LastError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastError_MetaData), NewProp_LastError_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastErrorSolution = { "LastErrorSolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMicroTransactionBase, LastErrorSolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastErrorSolution_MetaData), NewProp_LastErrorSolution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMicroTransactionBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastErrorSolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMicroTransactionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMicroTransactionBase_Statics::ClassParams = {
	&UMicroTransactionBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMicroTransactionBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMicroTransactionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMicroTransactionBase()
{
	if (!Z_Registration_Info_UClass_UMicroTransactionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMicroTransactionBase.OuterSingleton, Z_Construct_UClass_UMicroTransactionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMicroTransactionBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMicroTransactionBase>()
{
	return UMicroTransactionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMicroTransactionBase);
UMicroTransactionBase::~UMicroTransactionBase() {}
// End Class UMicroTransactionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMicroTransactionDelegate_StaticEnum, TEXT("EMicroTransactionDelegate"), &Z_Registration_Info_UEnum_EMicroTransactionDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1255665770U) },
		{ EMicroTransactionResult_StaticEnum, TEXT("EMicroTransactionResult"), &Z_Registration_Info_UEnum_EMicroTransactionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4131620368U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPurchaseInfo::StaticStruct, Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewStructOps, TEXT("PurchaseInfo"), &Z_Registration_Info_UScriptStruct_PurchaseInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPurchaseInfo), 3844524399U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMicroTransactionBase, UMicroTransactionBase::StaticClass, TEXT("UMicroTransactionBase"), &Z_Registration_Info_UClass_UMicroTransactionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMicroTransactionBase), 3042849052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_1263828592(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
