// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Interfaces/TypedElementDataStorageInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageInterface();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageInterface_NoRegister();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FTypedElementDataStorageColumn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn;
class UScriptStruct* FTypedElementDataStorageColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementDataStorageColumn, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementDataStorageColumn"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementDataStorageColumn>()
{
	return FTypedElementDataStorageColumn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for the data structures for a column.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageInterface.h" },
		{ "ToolTip", "Base for the data structures for a column." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementDataStorageColumn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"TypedElementDataStorageColumn",
	nullptr,
	0,
	sizeof(FTypedElementDataStorageColumn),
	alignof(FTypedElementDataStorageColumn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageColumn()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn.InnerSingleton;
}
// End ScriptStruct FTypedElementDataStorageColumn

// Begin ScriptStruct FTypedElementDataStorageTag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag;
class UScriptStruct* FTypedElementDataStorageTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementDataStorageTag, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementDataStorageTag"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementDataStorageTag>()
{
	return FTypedElementDataStorageTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for the data structures that act as tags to rows. Tags should not have any data.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageInterface.h" },
		{ "ToolTip", "Base for the data structures that act as tags to rows. Tags should not have any data." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementDataStorageTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"TypedElementDataStorageTag",
	nullptr,
	0,
	sizeof(FTypedElementDataStorageTag),
	alignof(FTypedElementDataStorageTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDataStorageTag()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag.InnerSingleton;
}
// End ScriptStruct FTypedElementDataStorageTag

// Begin Interface UTypedElementDataStorageInterface
void UTypedElementDataStorageInterface::StaticRegisterNativesUTypedElementDataStorageInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageInterface);
UClass* Z_Construct_UClass_UTypedElementDataStorageInterface_NoRegister()
{
	return UTypedElementDataStorageInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementDataStorageInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementDataStorageInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::ClassParams = {
	&UTypedElementDataStorageInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementDataStorageInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementDataStorageInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageInterface.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementDataStorageInterface.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementDataStorageInterface>()
{
	return UTypedElementDataStorageInterface::StaticClass();
}
UTypedElementDataStorageInterface::UTypedElementDataStorageInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageInterface);
UTypedElementDataStorageInterface::~UTypedElementDataStorageInterface() {}
// End Interface UTypedElementDataStorageInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementDataStorageColumn::StaticStruct, Z_Construct_UScriptStruct_FTypedElementDataStorageColumn_Statics::NewStructOps, TEXT("TypedElementDataStorageColumn"), &Z_Registration_Info_UScriptStruct_TypedElementDataStorageColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementDataStorageColumn), 3678959676U) },
		{ FTypedElementDataStorageTag::StaticStruct, Z_Construct_UScriptStruct_FTypedElementDataStorageTag_Statics::NewStructOps, TEXT("TypedElementDataStorageTag"), &Z_Registration_Info_UScriptStruct_TypedElementDataStorageTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementDataStorageTag), 2626272900U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDataStorageInterface, UTypedElementDataStorageInterface::StaticClass, TEXT("UTypedElementDataStorageInterface"), &Z_Registration_Info_UClass_UTypedElementDataStorageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageInterface), 3938194701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_1299054170(TEXT("/Script/TypedElementFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
