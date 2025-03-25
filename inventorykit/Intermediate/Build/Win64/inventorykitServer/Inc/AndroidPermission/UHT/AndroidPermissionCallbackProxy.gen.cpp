// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidPermission/Classes/AndroidPermissionCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidPermissionCallbackProxy() {}

// Begin Cross Module References
ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionCallbackProxy();
ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister();
ANDROIDPERMISSION_API UFunction* Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AndroidPermission();
// End Cross Module References

// Begin Delegate FAndroidPermissionDynamicDelegate
struct Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms
	{
		TArray<FString> Permissions;
		TArray<bool> GrantResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AndroidPermissionCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GrantResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Permissions_MetaData), NewProp_Permissions_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::NewProp_GrantResults_Inner = { "GrantResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::NewProp_GrantResults = { "GrantResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms, GrantResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantResults_MetaData), NewProp_GrantResults_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::NewProp_Permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::NewProp_Permissions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::NewProp_GrantResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::NewProp_GrantResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AndroidPermission, nullptr, "AndroidPermissionDynamicDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::_Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::_Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAndroidPermissionDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidPermissionDynamicDelegate, TArray<FString> const& Permissions, TArray<bool> const& GrantResults)
{
	struct _Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms
	{
		TArray<FString> Permissions;
		TArray<bool> GrantResults;
	};
	_Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms Parms;
	Parms.Permissions=Permissions;
	Parms.GrantResults=GrantResults;
	AndroidPermissionDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAndroidPermissionDynamicDelegate

// Begin Class UAndroidPermissionCallbackProxy
void UAndroidPermissionCallbackProxy::StaticRegisterNativesUAndroidPermissionCallbackProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidPermissionCallbackProxy);
UClass* Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister()
{
	return UAndroidPermissionCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidPermissionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPermissionsGrantedDynamicDelegate_MetaData[] = {
		{ "Category", "AndroidPermission" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPermissionsGrantedDynamicDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidPermissionCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::NewProp_OnPermissionsGrantedDynamicDelegate = { "OnPermissionsGrantedDynamicDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAndroidPermissionCallbackProxy, OnPermissionsGrantedDynamicDelegate), Z_Construct_UDelegateFunction_AndroidPermission_AndroidPermissionDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPermissionsGrantedDynamicDelegate_MetaData), NewProp_OnPermissionsGrantedDynamicDelegate_MetaData) }; // 1898924538
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::NewProp_OnPermissionsGrantedDynamicDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidPermission,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::ClassParams = {
	&UAndroidPermissionCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidPermissionCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.OuterSingleton, Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy.OuterSingleton;
}
template<> ANDROIDPERMISSION_API UClass* StaticClass<UAndroidPermissionCallbackProxy>()
{
	return UAndroidPermissionCallbackProxy::StaticClass();
}
UAndroidPermissionCallbackProxy::UAndroidPermissionCallbackProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidPermissionCallbackProxy);
UAndroidPermissionCallbackProxy::~UAndroidPermissionCallbackProxy() {}
// End Class UAndroidPermissionCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidPermissionCallbackProxy, UAndroidPermissionCallbackProxy::StaticClass, TEXT("UAndroidPermissionCallbackProxy"), &Z_Registration_Info_UClass_UAndroidPermissionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidPermissionCallbackProxy), 3857970573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_3161355605(TEXT("/Script/AndroidPermission"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
