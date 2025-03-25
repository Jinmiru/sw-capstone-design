// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Interfaces/TypedElementDataStorageUiInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageUiInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface_NoRegister();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementWidgetConstructor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor;
class UScriptStruct* FTypedElementWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementWidgetConstructor>()
{
	return FTypedElementWidgetConstructor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class used to construct Typed Element widgets with.\n * See below for the options to register a constructor with the Data Storage.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageUiInterface.h" },
		{ "ToolTip", "Base class used to construct Typed Element widgets with.\nSee below for the options to register a constructor with the Data Storage." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementWidgetConstructor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"TypedElementWidgetConstructor",
	nullptr,
	0,
	sizeof(FTypedElementWidgetConstructor),
	alignof(FTypedElementWidgetConstructor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton;
}
// End ScriptStruct FTypedElementWidgetConstructor

// Begin Interface UTypedElementDataStorageUiInterface
void UTypedElementDataStorageUiInterface::StaticRegisterNativesUTypedElementDataStorageUiInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageUiInterface);
UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface_NoRegister()
{
	return UTypedElementDataStorageUiInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageUiInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementDataStorageUiInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::ClassParams = {
	&UTypedElementDataStorageUiInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementDataStorageUiInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageUiInterface.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementDataStorageUiInterface.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementDataStorageUiInterface>()
{
	return UTypedElementDataStorageUiInterface::StaticClass();
}
UTypedElementDataStorageUiInterface::UTypedElementDataStorageUiInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageUiInterface);
UTypedElementDataStorageUiInterface::~UTypedElementDataStorageUiInterface() {}
// End Interface UTypedElementDataStorageUiInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementWidgetConstructor), 2778861855U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDataStorageUiInterface, UTypedElementDataStorageUiInterface::StaticClass, TEXT("UTypedElementDataStorageUiInterface"), &Z_Registration_Info_UClass_UTypedElementDataStorageUiInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageUiInterface), 1764823467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_1194020367(TEXT("/Script/TypedElementFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
