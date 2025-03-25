// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobilePatchingUtils/Private/MobilePatchingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobilePatchingLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobileInstalledContent();
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobileInstalledContent_NoRegister();
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobilePatchingLibrary();
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobilePatchingLibrary_NoRegister();
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobilePendingContent();
MOBILEPATCHINGUTILS_API UClass* Z_Construct_UClass_UMobilePendingContent_NoRegister();
MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature();
MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature();
MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature();
MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MobilePatchingUtils();
// End Cross Module References

// Begin Delegate FOnContentInstallSucceeded
struct Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MobilePatchingUtils, nullptr, "OnContentInstallSucceeded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnContentInstallSucceeded_DelegateWrapper(const FScriptDelegate& OnContentInstallSucceeded)
{
	OnContentInstallSucceeded.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnContentInstallSucceeded

// Begin Delegate FOnContentInstallFailed
struct Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics
{
	struct _Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms
	{
		FText ErrorText;
		int32 ErrorCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms, ErrorText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms, ErrorCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::NewProp_ErrorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::NewProp_ErrorCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MobilePatchingUtils, nullptr, "OnContentInstallFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::_Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::_Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnContentInstallFailed_DelegateWrapper(const FScriptDelegate& OnContentInstallFailed, const FText& ErrorText, int32 ErrorCode)
{
	struct _Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms
	{
		FText ErrorText;
		int32 ErrorCode;
	};
	_Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms Parms;
	Parms.ErrorText=ErrorText;
	Parms.ErrorCode=ErrorCode;
	OnContentInstallFailed.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnContentInstallFailed

// Begin Class UMobileInstalledContent Function GetDiskFreeSpace
struct Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics
{
	struct MobileInstalledContent_eventGetDiskFreeSpace_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "/** Get the disk free space in megabytes where content is installed  */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the disk free space in megabytes where content is installed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobileInstalledContent_eventGetDiskFreeSpace_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileInstalledContent, nullptr, "GetDiskFreeSpace", nullptr, nullptr, Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::MobileInstalledContent_eventGetDiskFreeSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::MobileInstalledContent_eventGetDiskFreeSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobileInstalledContent::execGetDiskFreeSpace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDiskFreeSpace();
	P_NATIVE_END;
}
// End Class UMobileInstalledContent Function GetDiskFreeSpace

// Begin Class UMobileInstalledContent Function GetInstalledContentSize
struct Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics
{
	struct MobileInstalledContent_eventGetInstalledContentSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "/** Get the installed content size in megabytes */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the installed content size in megabytes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobileInstalledContent_eventGetInstalledContentSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileInstalledContent, nullptr, "GetInstalledContentSize", nullptr, nullptr, Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::MobileInstalledContent_eventGetInstalledContentSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::MobileInstalledContent_eventGetInstalledContentSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobileInstalledContent::execGetInstalledContentSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInstalledContentSize();
	P_NATIVE_END;
}
// End Class UMobileInstalledContent Function GetInstalledContentSize

// Begin Class UMobileInstalledContent Function Mount
struct Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics
{
	struct MobileInstalledContent_eventMount_Parms
	{
		int32 PakOrder;
		FString MountPoint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "PakOrder,MountPoint" },
		{ "Category", "Mobile Patching" },
		{ "Comment", "/** \n\x09 * Mount installed content\n\x09 * @param\x09PakOrder : Content pak priority\n\x09 * @param\x09MountPoint : Path to mount the pak at\n\x09 */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "PakOrder", "1" },
		{ "ToolTip", "Mount installed content\n@param       PakOrder : Content pak priority\n@param       MountPoint : Path to mount the pak at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PakOrder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MountPoint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_PakOrder = { "PakOrder", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobileInstalledContent_eventMount_Parms, PakOrder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobileInstalledContent_eventMount_Parms, MountPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountPoint_MetaData), NewProp_MountPoint_MetaData) };
void Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MobileInstalledContent_eventMount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MobileInstalledContent_eventMount_Parms), &Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_PakOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_MountPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileInstalledContent, nullptr, "Mount", nullptr, nullptr, Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::MobileInstalledContent_eventMount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::MobileInstalledContent_eventMount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobileInstalledContent_Mount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobileInstalledContent_Mount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobileInstalledContent::execMount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PakOrder);
	P_GET_PROPERTY(FStrProperty,Z_Param_MountPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Mount(Z_Param_PakOrder,Z_Param_MountPoint);
	P_NATIVE_END;
}
// End Class UMobileInstalledContent Function Mount

// Begin Class UMobileInstalledContent
void UMobileInstalledContent::StaticRegisterNativesUMobileInstalledContent()
{
	UClass* Class = UMobileInstalledContent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDiskFreeSpace", &UMobileInstalledContent::execGetDiskFreeSpace },
		{ "GetInstalledContentSize", &UMobileInstalledContent::execGetInstalledContentSize },
		{ "Mount", &UMobileInstalledContent::execMount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMobileInstalledContent);
UClass* Z_Construct_UClass_UMobileInstalledContent_NoRegister()
{
	return UMobileInstalledContent::StaticClass();
}
struct Z_Construct_UClass_UMobileInstalledContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MobilePatchingLibrary.h" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMobileInstalledContent_GetDiskFreeSpace, "GetDiskFreeSpace" }, // 3093415044
		{ &Z_Construct_UFunction_UMobileInstalledContent_GetInstalledContentSize, "GetInstalledContentSize" }, // 3066559007
		{ &Z_Construct_UFunction_UMobileInstalledContent_Mount, "Mount" }, // 3433219571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobileInstalledContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMobileInstalledContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MobilePatchingUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobileInstalledContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMobileInstalledContent_Statics::ClassParams = {
	&UMobileInstalledContent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMobileInstalledContent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMobileInstalledContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMobileInstalledContent()
{
	if (!Z_Registration_Info_UClass_UMobileInstalledContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMobileInstalledContent.OuterSingleton, Z_Construct_UClass_UMobileInstalledContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMobileInstalledContent.OuterSingleton;
}
template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<UMobileInstalledContent>()
{
	return UMobileInstalledContent::StaticClass();
}
UMobileInstalledContent::UMobileInstalledContent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMobileInstalledContent);
UMobileInstalledContent::~UMobileInstalledContent() {}
// End Class UMobileInstalledContent

// Begin Class UMobilePendingContent Function GetDownloadSize
struct Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics
{
	struct MobilePendingContent_eventGetDownloadSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "/** Get the total download size for this content installation */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the total download size for this content installation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePendingContent_eventGetDownloadSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePendingContent, nullptr, "GetDownloadSize", nullptr, nullptr, Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::MobilePendingContent_eventGetDownloadSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::MobilePendingContent_eventGetDownloadSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePendingContent::execGetDownloadSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDownloadSize();
	P_NATIVE_END;
}
// End Class UMobilePendingContent Function GetDownloadSize

// Begin Class UMobilePendingContent Function GetDownloadSpeed
struct Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics
{
	struct MobilePendingContent_eventGetDownloadSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching|Progress" },
		{ "Comment", "/** Get the current download speed in megabytes per second. Valid during installation */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the current download speed in megabytes per second. Valid during installation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePendingContent_eventGetDownloadSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePendingContent, nullptr, "GetDownloadSpeed", nullptr, nullptr, Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::MobilePendingContent_eventGetDownloadSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::MobilePendingContent_eventGetDownloadSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePendingContent::execGetDownloadSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDownloadSpeed();
	P_NATIVE_END;
}
// End Class UMobilePendingContent Function GetDownloadSpeed

// Begin Class UMobilePendingContent Function GetDownloadStatusText
struct Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics
{
	struct MobilePendingContent_eventGetDownloadStatusText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching|Progress" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePendingContent_eventGetDownloadStatusText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePendingContent, nullptr, "GetDownloadStatusText", nullptr, nullptr, Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::MobilePendingContent_eventGetDownloadStatusText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::MobilePendingContent_eventGetDownloadStatusText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePendingContent::execGetDownloadStatusText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDownloadStatusText();
	P_NATIVE_END;
}
// End Class UMobilePendingContent Function GetDownloadStatusText

// Begin Class UMobilePendingContent Function GetInstallProgress
struct Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics
{
	struct MobilePendingContent_eventGetInstallProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching|Progress" },
		{ "Comment", "/** Get the current installation progress. Between 0 and 1 for known progress, or less than 0 for unknown progress */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the current installation progress. Between 0 and 1 for known progress, or less than 0 for unknown progress" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePendingContent_eventGetInstallProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePendingContent, nullptr, "GetInstallProgress", nullptr, nullptr, Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::MobilePendingContent_eventGetInstallProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::MobilePendingContent_eventGetInstallProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePendingContent::execGetInstallProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInstallProgress();
	P_NATIVE_END;
}
// End Class UMobilePendingContent Function GetInstallProgress

// Begin Class UMobilePendingContent Function GetRequiredDiskSpace
struct Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics
{
	struct MobilePendingContent_eventGetRequiredDiskSpace_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "/** Get the required disk space in megabytes for this content installation */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the required disk space in megabytes for this content installation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePendingContent_eventGetRequiredDiskSpace_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePendingContent, nullptr, "GetRequiredDiskSpace", nullptr, nullptr, Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::MobilePendingContent_eventGetRequiredDiskSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::MobilePendingContent_eventGetRequiredDiskSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePendingContent::execGetRequiredDiskSpace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRequiredDiskSpace();
	P_NATIVE_END;
}
// End Class UMobilePendingContent Function GetRequiredDiskSpace

// Begin Class UMobilePendingContent Function GetTotalDownloadedSize
struct Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics
{
	struct MobilePendingContent_eventGetTotalDownloadedSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching|Progress" },
		{ "Comment", "/** Get the total downloaded size in megabytes. Valid during installation */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the total downloaded size in megabytes. Valid during installation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePendingContent_eventGetTotalDownloadedSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePendingContent, nullptr, "GetTotalDownloadedSize", nullptr, nullptr, Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::MobilePendingContent_eventGetTotalDownloadedSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::MobilePendingContent_eventGetTotalDownloadedSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePendingContent::execGetTotalDownloadedSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTotalDownloadedSize();
	P_NATIVE_END;
}
// End Class UMobilePendingContent Function GetTotalDownloadedSize

// Begin Class UMobilePendingContent Function StartInstall
struct Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics
{
	struct MobilePendingContent_eventStartInstall_Parms
	{
		FScriptDelegate OnSucceeded;
		FScriptDelegate OnFailed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "/** \n\x09 * Attempt to download and install remote content.\n\x09 * User can choose to mount installed content into the game.\n\x09 * @param\x09OnSucceeded: Callback on installation success. \n\x09 * @param\x09OnFailed: Callback on installation fail. Will return error message text and error integer code\n\x09 */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Attempt to download and install remote content.\nUser can choose to mount installed content into the game.\n@param       OnSucceeded: Callback on installation success.\n@param       OnFailed: Callback on installation fail. Will return error message text and error integer code" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSucceeded;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::NewProp_OnSucceeded = { "OnSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePendingContent_eventStartInstall_Parms, OnSucceeded), Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1796090087
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePendingContent_eventStartInstall_Parms, OnFailed), Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1346106882
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::NewProp_OnSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::NewProp_OnFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePendingContent, nullptr, "StartInstall", nullptr, nullptr, Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::MobilePendingContent_eventStartInstall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::MobilePendingContent_eventStartInstall_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePendingContent_StartInstall()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePendingContent_StartInstall_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePendingContent::execStartInstall)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSucceeded);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartInstall(FOnContentInstallSucceeded(Z_Param_OnSucceeded),FOnContentInstallFailed(Z_Param_OnFailed));
	P_NATIVE_END;
}
// End Class UMobilePendingContent Function StartInstall

// Begin Class UMobilePendingContent
void UMobilePendingContent::StaticRegisterNativesUMobilePendingContent()
{
	UClass* Class = UMobilePendingContent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDownloadSize", &UMobilePendingContent::execGetDownloadSize },
		{ "GetDownloadSpeed", &UMobilePendingContent::execGetDownloadSpeed },
		{ "GetDownloadStatusText", &UMobilePendingContent::execGetDownloadStatusText },
		{ "GetInstallProgress", &UMobilePendingContent::execGetInstallProgress },
		{ "GetRequiredDiskSpace", &UMobilePendingContent::execGetRequiredDiskSpace },
		{ "GetTotalDownloadedSize", &UMobilePendingContent::execGetTotalDownloadedSize },
		{ "StartInstall", &UMobilePendingContent::execStartInstall },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMobilePendingContent);
UClass* Z_Construct_UClass_UMobilePendingContent_NoRegister()
{
	return UMobilePendingContent::StaticClass();
}
struct Z_Construct_UClass_UMobilePendingContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MobilePatchingLibrary.h" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMobilePendingContent_GetDownloadSize, "GetDownloadSize" }, // 3517567938
		{ &Z_Construct_UFunction_UMobilePendingContent_GetDownloadSpeed, "GetDownloadSpeed" }, // 1608340752
		{ &Z_Construct_UFunction_UMobilePendingContent_GetDownloadStatusText, "GetDownloadStatusText" }, // 786165239
		{ &Z_Construct_UFunction_UMobilePendingContent_GetInstallProgress, "GetInstallProgress" }, // 1843215639
		{ &Z_Construct_UFunction_UMobilePendingContent_GetRequiredDiskSpace, "GetRequiredDiskSpace" }, // 2838184338
		{ &Z_Construct_UFunction_UMobilePendingContent_GetTotalDownloadedSize, "GetTotalDownloadedSize" }, // 301174894
		{ &Z_Construct_UFunction_UMobilePendingContent_StartInstall, "StartInstall" }, // 1297398512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobilePendingContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMobilePendingContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMobileInstalledContent,
	(UObject* (*)())Z_Construct_UPackage__Script_MobilePatchingUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobilePendingContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMobilePendingContent_Statics::ClassParams = {
	&UMobilePendingContent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMobilePendingContent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMobilePendingContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMobilePendingContent()
{
	if (!Z_Registration_Info_UClass_UMobilePendingContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMobilePendingContent.OuterSingleton, Z_Construct_UClass_UMobilePendingContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMobilePendingContent.OuterSingleton;
}
template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<UMobilePendingContent>()
{
	return UMobilePendingContent::StaticClass();
}
UMobilePendingContent::UMobilePendingContent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMobilePendingContent);
UMobilePendingContent::~UMobilePendingContent() {}
// End Class UMobilePendingContent

// Begin Delegate FOnRequestContentSucceeded
struct Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics
{
	struct _Script_MobilePatchingUtils_eventOnRequestContentSucceeded_Parms
	{
		UMobilePendingContent* MobilePendingContent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobilePendingContent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::NewProp_MobilePendingContent = { "MobilePendingContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MobilePatchingUtils_eventOnRequestContentSucceeded_Parms, MobilePendingContent), Z_Construct_UClass_UMobilePendingContent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::NewProp_MobilePendingContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MobilePatchingUtils, nullptr, "OnRequestContentSucceeded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::_Script_MobilePatchingUtils_eventOnRequestContentSucceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::_Script_MobilePatchingUtils_eventOnRequestContentSucceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestContentSucceeded_DelegateWrapper(const FScriptDelegate& OnRequestContentSucceeded, UMobilePendingContent* MobilePendingContent)
{
	struct _Script_MobilePatchingUtils_eventOnRequestContentSucceeded_Parms
	{
		UMobilePendingContent* MobilePendingContent;
	};
	_Script_MobilePatchingUtils_eventOnRequestContentSucceeded_Parms Parms;
	Parms.MobilePendingContent=MobilePendingContent;
	OnRequestContentSucceeded.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestContentSucceeded

// Begin Delegate FOnRequestContentFailed
struct Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics
{
	struct _Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms
	{
		FText ErrorText;
		int32 ErrorCode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms, ErrorText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms, ErrorCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::NewProp_ErrorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::NewProp_ErrorCode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MobilePatchingUtils, nullptr, "OnRequestContentFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::_Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::_Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestContentFailed_DelegateWrapper(const FScriptDelegate& OnRequestContentFailed, const FText& ErrorText, int32 ErrorCode)
{
	struct _Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms
	{
		FText ErrorText;
		int32 ErrorCode;
	};
	_Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms Parms;
	Parms.ErrorText=ErrorText;
	Parms.ErrorCode=ErrorCode;
	OnRequestContentFailed.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestContentFailed

// Begin Class UMobilePatchingLibrary Function GetActiveDeviceProfileName
struct Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics
{
	struct MobilePatchingLibrary_eventGetActiveDeviceProfileName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "// Get the name of currently selected device profile name\n" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the name of currently selected device profile name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventGetActiveDeviceProfileName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePatchingLibrary, nullptr, "GetActiveDeviceProfileName", nullptr, nullptr, Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::MobilePatchingLibrary_eventGetActiveDeviceProfileName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::MobilePatchingLibrary_eventGetActiveDeviceProfileName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePatchingLibrary::execGetActiveDeviceProfileName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMobilePatchingLibrary::GetActiveDeviceProfileName();
	P_NATIVE_END;
}
// End Class UMobilePatchingLibrary Function GetActiveDeviceProfileName

// Begin Class UMobilePatchingLibrary Function GetInstalledContent
struct Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics
{
	struct MobilePatchingLibrary_eventGetInstalledContent_Parms
	{
		FString InstallDirectory;
		UMobileInstalledContent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "/** \n\x09 * Get the installed content. Will return non-null object if there is an installed content at specified directory\n\x09 * User can choose to mount installed content into the game\n\x09 */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the installed content. Will return non-null object if there is an installed content at specified directory\nUser can choose to mount installed content into the game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstallDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstallDirectory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::NewProp_InstallDirectory = { "InstallDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventGetInstalledContent_Parms, InstallDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstallDirectory_MetaData), NewProp_InstallDirectory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventGetInstalledContent_Parms, ReturnValue), Z_Construct_UClass_UMobileInstalledContent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::NewProp_InstallDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePatchingLibrary, nullptr, "GetInstalledContent", nullptr, nullptr, Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::MobilePatchingLibrary_eventGetInstalledContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::MobilePatchingLibrary_eventGetInstalledContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePatchingLibrary::execGetInstalledContent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InstallDirectory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMobileInstalledContent**)Z_Param__Result=UMobilePatchingLibrary::GetInstalledContent(Z_Param_InstallDirectory);
	P_NATIVE_END;
}
// End Class UMobilePatchingLibrary Function GetInstalledContent

// Begin Class UMobilePatchingLibrary Function GetSupportedPlatformNames
struct Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics
{
	struct MobilePatchingLibrary_eventGetSupportedPlatformNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "// Get the list of supported platform names on this device. Example: Android_ETC2, Android_ASTC\n" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Get the list of supported platform names on this device. Example: Android_ETC2, Android_ASTC" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventGetSupportedPlatformNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePatchingLibrary, nullptr, "GetSupportedPlatformNames", nullptr, nullptr, Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::MobilePatchingLibrary_eventGetSupportedPlatformNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::MobilePatchingLibrary_eventGetSupportedPlatformNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePatchingLibrary::execGetSupportedPlatformNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UMobilePatchingLibrary::GetSupportedPlatformNames();
	P_NATIVE_END;
}
// End Class UMobilePatchingLibrary Function GetSupportedPlatformNames

// Begin Class UMobilePatchingLibrary Function HasActiveWiFiConnection
struct Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics
{
	struct MobilePatchingLibrary_eventHasActiveWiFiConnection_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "// Whether WiFi connection is currently available\n" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Whether WiFi connection is currently available" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MobilePatchingLibrary_eventHasActiveWiFiConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MobilePatchingLibrary_eventHasActiveWiFiConnection_Parms), &Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePatchingLibrary, nullptr, "HasActiveWiFiConnection", nullptr, nullptr, Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::MobilePatchingLibrary_eventHasActiveWiFiConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::MobilePatchingLibrary_eventHasActiveWiFiConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePatchingLibrary::execHasActiveWiFiConnection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMobilePatchingLibrary::HasActiveWiFiConnection();
	P_NATIVE_END;
}
// End Class UMobilePatchingLibrary Function HasActiveWiFiConnection

// Begin Class UMobilePatchingLibrary Function RequestContent
struct Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics
{
	struct MobilePatchingLibrary_eventRequestContent_Parms
	{
		FString RemoteManifestURL;
		FString CloudURL;
		FString InstallDirectory;
		FScriptDelegate OnSucceeded;
		FScriptDelegate OnFailed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mobile Patching" },
		{ "Comment", "/** \n\x09 * Attempt to download manifest file using specified manifest URL. \n\x09 * On success it will return an object that represents remote content. This object can be queried for additional information, like total content size, download size, etc.\n\x09 * User can choose to download and install remote content.\n\x09 * @param\x09RemoteManifestURL : URL from where manifest file can be downloaded. (http://my-server.com/awesomecontent.manifest)\n\x09 * @param\x09""CloudURL :  URL from where content chunk data can be downloaded. (http://my-server.com/awesomecontent/clouddir)\n\x09 * @param\x09InstallDirectory: Relative directory to where downloaded content should be installed (MyContent/AwesomeContent)\n\x09 * @param\x09OnSucceeded: Callback on manifest download success. Will return object that represents remote content \n\x09 * @param\x09OnFailed: Callback on manifest download fail. Will return error message text and error integer code\n\x09 */" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
		{ "ToolTip", "Attempt to download manifest file using specified manifest URL.\nOn success it will return an object that represents remote content. This object can be queried for additional information, like total content size, download size, etc.\nUser can choose to download and install remote content.\n@param       RemoteManifestURL : URL from where manifest file can be downloaded. (http://my-server.com/awesomecontent.manifest)\n@param       CloudURL :  URL from where content chunk data can be downloaded. (http://my-server.com/awesomecontent/clouddir)\n@param       InstallDirectory: Relative directory to where downloaded content should be installed (MyContent/AwesomeContent)\n@param       OnSucceeded: Callback on manifest download success. Will return object that represents remote content\n@param       OnFailed: Callback on manifest download fail. Will return error message text and error integer code" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteManifestURL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudURL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstallDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteManifestURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CloudURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstallDirectory;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSucceeded;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_RemoteManifestURL = { "RemoteManifestURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventRequestContent_Parms, RemoteManifestURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteManifestURL_MetaData), NewProp_RemoteManifestURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_CloudURL = { "CloudURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventRequestContent_Parms, CloudURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudURL_MetaData), NewProp_CloudURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_InstallDirectory = { "InstallDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventRequestContent_Parms, InstallDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstallDirectory_MetaData), NewProp_InstallDirectory_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_OnSucceeded = { "OnSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventRequestContent_Parms, OnSucceeded), Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3136306735
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MobilePatchingLibrary_eventRequestContent_Parms, OnFailed), Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1237215792
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_RemoteManifestURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_CloudURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_InstallDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_OnSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::NewProp_OnFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobilePatchingLibrary, nullptr, "RequestContent", nullptr, nullptr, Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::MobilePatchingLibrary_eventRequestContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::MobilePatchingLibrary_eventRequestContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMobilePatchingLibrary::execRequestContent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RemoteManifestURL);
	P_GET_PROPERTY(FStrProperty,Z_Param_CloudURL);
	P_GET_PROPERTY(FStrProperty,Z_Param_InstallDirectory);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSucceeded);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMobilePatchingLibrary::RequestContent(Z_Param_RemoteManifestURL,Z_Param_CloudURL,Z_Param_InstallDirectory,FOnRequestContentSucceeded(Z_Param_OnSucceeded),FOnRequestContentFailed(Z_Param_OnFailed));
	P_NATIVE_END;
}
// End Class UMobilePatchingLibrary Function RequestContent

// Begin Class UMobilePatchingLibrary
void UMobilePatchingLibrary::StaticRegisterNativesUMobilePatchingLibrary()
{
	UClass* Class = UMobilePatchingLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActiveDeviceProfileName", &UMobilePatchingLibrary::execGetActiveDeviceProfileName },
		{ "GetInstalledContent", &UMobilePatchingLibrary::execGetInstalledContent },
		{ "GetSupportedPlatformNames", &UMobilePatchingLibrary::execGetSupportedPlatformNames },
		{ "HasActiveWiFiConnection", &UMobilePatchingLibrary::execHasActiveWiFiConnection },
		{ "RequestContent", &UMobilePatchingLibrary::execRequestContent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMobilePatchingLibrary);
UClass* Z_Construct_UClass_UMobilePatchingLibrary_NoRegister()
{
	return UMobilePatchingLibrary::StaticClass();
}
struct Z_Construct_UClass_UMobilePatchingLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MobilePatchingLibrary.h" },
		{ "ModuleRelativePath", "Private/MobilePatchingLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMobilePatchingLibrary_GetActiveDeviceProfileName, "GetActiveDeviceProfileName" }, // 730827426
		{ &Z_Construct_UFunction_UMobilePatchingLibrary_GetInstalledContent, "GetInstalledContent" }, // 3011712323
		{ &Z_Construct_UFunction_UMobilePatchingLibrary_GetSupportedPlatformNames, "GetSupportedPlatformNames" }, // 839918995
		{ &Z_Construct_UFunction_UMobilePatchingLibrary_HasActiveWiFiConnection, "HasActiveWiFiConnection" }, // 3428610942
		{ &Z_Construct_UFunction_UMobilePatchingLibrary_RequestContent, "RequestContent" }, // 2621129207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobilePatchingLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMobilePatchingLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MobilePatchingUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMobilePatchingLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMobilePatchingLibrary_Statics::ClassParams = {
	&UMobilePatchingLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMobilePatchingLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMobilePatchingLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMobilePatchingLibrary()
{
	if (!Z_Registration_Info_UClass_UMobilePatchingLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMobilePatchingLibrary.OuterSingleton, Z_Construct_UClass_UMobilePatchingLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMobilePatchingLibrary.OuterSingleton;
}
template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<UMobilePatchingLibrary>()
{
	return UMobilePatchingLibrary::StaticClass();
}
UMobilePatchingLibrary::UMobilePatchingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMobilePatchingLibrary);
UMobilePatchingLibrary::~UMobilePatchingLibrary() {}
// End Class UMobilePatchingLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMobileInstalledContent, UMobileInstalledContent::StaticClass, TEXT("UMobileInstalledContent"), &Z_Registration_Info_UClass_UMobileInstalledContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMobileInstalledContent), 4067793227U) },
		{ Z_Construct_UClass_UMobilePendingContent, UMobilePendingContent::StaticClass, TEXT("UMobilePendingContent"), &Z_Registration_Info_UClass_UMobilePendingContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMobilePendingContent), 432657224U) },
		{ Z_Construct_UClass_UMobilePatchingLibrary, UMobilePatchingLibrary::StaticClass, TEXT("UMobilePatchingLibrary"), &Z_Registration_Info_UClass_UMobilePatchingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMobilePatchingLibrary), 1720087228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_3345294940(TEXT("/Script/MobilePatchingUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
