// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidPermission/Classes/AndroidPermissionFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidPermissionFunctionLibrary() {}

// Begin Cross Module References
ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister();
ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary();
ANDROIDPERMISSION_API UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidPermission();
// End Cross Module References

// Begin Class UAndroidPermissionFunctionLibrary Function AcquirePermissions
struct Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics
{
	struct AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms
	{
		TArray<FString> permissions;
		UAndroidPermissionCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidPermission" },
		{ "Comment", "/** try to acquire permissions and return a singleton callback proxy object containing OnPermissionsGranted delegate */" },
		{ "DisplayName", "Request Android Permissions" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
		{ "ToolTip", "try to acquire permissions and return a singleton callback proxy object containing OnPermissionsGranted delegate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_permissions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_permissions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_Inner = { "permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions = { "permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms, permissions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_permissions_MetaData), NewProp_permissions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms, ReturnValue), Z_Construct_UClass_UAndroidPermissionCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_permissions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidPermissionFunctionLibrary, nullptr, "AcquirePermissions", nullptr, nullptr, Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::AndroidPermissionFunctionLibrary_eventAcquirePermissions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidPermissionFunctionLibrary::execAcquirePermissions)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_permissions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAndroidPermissionCallbackProxy**)Z_Param__Result=UAndroidPermissionFunctionLibrary::AcquirePermissions(Z_Param_Out_permissions);
	P_NATIVE_END;
}
// End Class UAndroidPermissionFunctionLibrary Function AcquirePermissions

// Begin Class UAndroidPermissionFunctionLibrary Function CheckPermission
struct Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics
{
	struct AndroidPermissionFunctionLibrary_eventCheckPermission_Parms
	{
		FString permission;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidPermission" },
		{ "Comment", "/** check if the permission is already granted */" },
		{ "DisplayName", "Check Android Permission" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
		{ "ToolTip", "check if the permission is already granted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_permission_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_permission;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission = { "permission", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidPermissionFunctionLibrary_eventCheckPermission_Parms, permission), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_permission_MetaData), NewProp_permission_MetaData) };
void Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidPermissionFunctionLibrary_eventCheckPermission_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidPermissionFunctionLibrary_eventCheckPermission_Parms), &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_permission,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidPermissionFunctionLibrary, nullptr, "CheckPermission", nullptr, nullptr, Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::AndroidPermissionFunctionLibrary_eventCheckPermission_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::AndroidPermissionFunctionLibrary_eventCheckPermission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidPermissionFunctionLibrary::execCheckPermission)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_permission);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidPermissionFunctionLibrary::CheckPermission(Z_Param_permission);
	P_NATIVE_END;
}
// End Class UAndroidPermissionFunctionLibrary Function CheckPermission

// Begin Class UAndroidPermissionFunctionLibrary
void UAndroidPermissionFunctionLibrary::StaticRegisterNativesUAndroidPermissionFunctionLibrary()
{
	UClass* Class = UAndroidPermissionFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcquirePermissions", &UAndroidPermissionFunctionLibrary::execAcquirePermissions },
		{ "CheckPermission", &UAndroidPermissionFunctionLibrary::execCheckPermission },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidPermissionFunctionLibrary);
UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary_NoRegister()
{
	return UAndroidPermissionFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidPermissionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/AndroidPermissionFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_AcquirePermissions, "AcquirePermissions" }, // 2110162778
		{ &Z_Construct_UFunction_UAndroidPermissionFunctionLibrary_CheckPermission, "CheckPermission" }, // 1059576446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidPermissionFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidPermission,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::ClassParams = {
	&UAndroidPermissionFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidPermissionFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary.OuterSingleton;
}
template<> ANDROIDPERMISSION_API UClass* StaticClass<UAndroidPermissionFunctionLibrary>()
{
	return UAndroidPermissionFunctionLibrary::StaticClass();
}
UAndroidPermissionFunctionLibrary::UAndroidPermissionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidPermissionFunctionLibrary);
UAndroidPermissionFunctionLibrary::~UAndroidPermissionFunctionLibrary() {}
// End Class UAndroidPermissionFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidPermissionFunctionLibrary, UAndroidPermissionFunctionLibrary::StaticClass, TEXT("UAndroidPermissionFunctionLibrary"), &Z_Registration_Info_UClass_UAndroidPermissionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidPermissionFunctionLibrary), 3326900516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_4189139791(TEXT("/Script/AndroidPermission"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
