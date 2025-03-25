// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRigAssetUserData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigAssetUserData() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibraryLink();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibraryLink_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_UNameSpacedUserData();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UControlRigShapeLibraryLink Function GetShapeLibrary
struct Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics
{
	struct ControlRigShapeLibraryLink_eventGetShapeLibrary_Parms
	{
		TSoftObjectPtr<UControlRigShapeLibrary> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/ControlRigAssetUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigShapeLibraryLink_eventGetShapeLibrary_Parms, ReturnValue), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigShapeLibraryLink, nullptr, "GetShapeLibrary", nullptr, nullptr, Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::ControlRigShapeLibraryLink_eventGetShapeLibrary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::ControlRigShapeLibraryLink_eventGetShapeLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigShapeLibraryLink::execGetShapeLibrary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UControlRigShapeLibrary>*)Z_Param__Result=P_THIS->GetShapeLibrary();
	P_NATIVE_END;
}
// End Class UControlRigShapeLibraryLink Function GetShapeLibrary

// Begin Class UControlRigShapeLibraryLink Function SetShapeLibrary
struct Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics
{
	struct ControlRigShapeLibraryLink_eventSetShapeLibrary_Parms
	{
		TSoftObjectPtr<UControlRigShapeLibrary> InShapeLibrary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/ControlRigAssetUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InShapeLibrary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::NewProp_InShapeLibrary = { "InShapeLibrary", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigShapeLibraryLink_eventSetShapeLibrary_Parms, InShapeLibrary), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::NewProp_InShapeLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigShapeLibraryLink, nullptr, "SetShapeLibrary", nullptr, nullptr, Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::ControlRigShapeLibraryLink_eventSetShapeLibrary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::ControlRigShapeLibraryLink_eventSetShapeLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigShapeLibraryLink::execSetShapeLibrary)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UControlRigShapeLibrary>,Z_Param_InShapeLibrary);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShapeLibrary(Z_Param_InShapeLibrary);
	P_NATIVE_END;
}
// End Class UControlRigShapeLibraryLink Function SetShapeLibrary

// Begin Class UControlRigShapeLibraryLink
void UControlRigShapeLibraryLink::StaticRegisterNativesUControlRigShapeLibraryLink()
{
	UClass* Class = UControlRigShapeLibraryLink::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetShapeLibrary", &UControlRigShapeLibraryLink::execGetShapeLibrary },
		{ "SetShapeLibrary", &UControlRigShapeLibraryLink::execSetShapeLibrary },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigShapeLibraryLink);
UClass* Z_Construct_UClass_UControlRigShapeLibraryLink_NoRegister()
{
	return UControlRigShapeLibraryLink::StaticClass();
}
struct Z_Construct_UClass_UControlRigShapeLibraryLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Namespaced user data which provides access to a linked shape library\n*/" },
		{ "IncludePath", "ControlRigAssetUserData.h" },
		{ "ModuleRelativePath", "Public/ControlRigAssetUserData.h" },
		{ "ToolTip", "Namespaced user data which provides access to a linked shape library" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLibrary_MetaData[] = {
		{ "BlueprintGetter", "GetShapeLibrary" },
		{ "BlueprintSetter", "SetShapeLibrary" },
		{ "Category", "General" },
		{ "Comment", "/** If assigned, the data asset link will provide access to the data asset's content. */" },
		{ "DisplayAfter", "NameSpace" },
		{ "ModuleRelativePath", "Public/ControlRigAssetUserData.h" },
		{ "ToolTip", "If assigned, the data asset link will provide access to the data asset's content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigAssetUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLibraryCached_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigAssetUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShapeLibrary;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShapeNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShapeLibraryCached;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigShapeLibraryLink_GetShapeLibrary, "GetShapeLibrary" }, // 118632832
		{ &Z_Construct_UFunction_UControlRigShapeLibraryLink_SetShapeLibrary, "SetShapeLibrary" }, // 1362834662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigShapeLibraryLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::NewProp_ShapeLibrary = { "ShapeLibrary", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigShapeLibraryLink, ShapeLibrary), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeLibrary_MetaData), NewProp_ShapeLibrary_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::NewProp_ShapeNames_Inner = { "ShapeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::NewProp_ShapeNames = { "ShapeNames", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigShapeLibraryLink, ShapeNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeNames_MetaData), NewProp_ShapeNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::NewProp_ShapeLibraryCached = { "ShapeLibraryCached", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigShapeLibraryLink, ShapeLibraryCached), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeLibraryCached_MetaData), NewProp_ShapeLibraryCached_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::NewProp_ShapeLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::NewProp_ShapeNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::NewProp_ShapeNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::NewProp_ShapeLibraryCached,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNameSpacedUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::ClassParams = {
	&UControlRigShapeLibraryLink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigShapeLibraryLink()
{
	if (!Z_Registration_Info_UClass_UControlRigShapeLibraryLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigShapeLibraryLink.OuterSingleton, Z_Construct_UClass_UControlRigShapeLibraryLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigShapeLibraryLink.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigShapeLibraryLink>()
{
	return UControlRigShapeLibraryLink::StaticClass();
}
UControlRigShapeLibraryLink::UControlRigShapeLibraryLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigShapeLibraryLink);
UControlRigShapeLibraryLink::~UControlRigShapeLibraryLink() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigShapeLibraryLink)
// End Class UControlRigShapeLibraryLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigShapeLibraryLink, UControlRigShapeLibraryLink::StaticClass, TEXT("UControlRigShapeLibraryLink"), &Z_Registration_Info_UClass_UControlRigShapeLibraryLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigShapeLibraryLink), 3976771645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_1869546179(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigAssetUserData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
