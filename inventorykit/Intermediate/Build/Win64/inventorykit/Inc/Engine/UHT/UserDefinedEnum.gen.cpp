// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/UserDefinedEnum.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedEnum() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnumCookedMetaData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UUserDefinedEnum
void UUserDefinedEnum::StaticRegisterNativesUUserDefinedEnum()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserDefinedEnum);
UClass* Z_Construct_UClass_UUserDefinedEnum_NoRegister()
{
	return UUserDefinedEnum::StaticClass();
}
struct Z_Construct_UClass_UUserDefinedEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""An Enumeration is a list of named values.\n */" },
		{ "IncludePath", "Engine/UserDefinedEnum.h" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
		{ "ToolTip", "An Enumeration is a list of named values." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueNameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumDescription_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** Shows up in the content browser when the enum asset is hovered */" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Shows up in the content browser when the enum asset is hovered" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameMap_MetaData[] = {
		{ "Comment", "/**\n\x09 * De-facto display names for enum entries mapped against their raw enum name (UEnum::GetNameByIndex).\n\x09 * To sync DisplayNameMap use FEnumEditorUtils::EnsureAllDisplayNamesExist.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
		{ "ToolTip", "De-facto display names for enum entries mapped against their raw enum name (UEnum::GetNameByIndex).\nTo sync DisplayNameMap use FEnumEditorUtils::EnsureAllDisplayNamesExist." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCookedMetaDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UniqueNameIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EnumDescription;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayNameMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayNameMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DisplayNameMap;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCookedMetaDataPtr;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedEnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_UniqueNameIndex = { "UniqueNameIndex", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedEnum, UniqueNameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueNameIndex_MetaData), NewProp_UniqueNameIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_EnumDescription = { "EnumDescription", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedEnum, EnumDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumDescription_MetaData), NewProp_EnumDescription_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_ValueProp = { "DisplayNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_Key_KeyProp = { "DisplayNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap = { "DisplayNameMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedEnum, DisplayNameMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNameMap_MetaData), NewProp_DisplayNameMap_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_CachedCookedMetaDataPtr = { "CachedCookedMetaDataPtr", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedEnum, CachedCookedMetaDataPtr), Z_Construct_UClass_UEnumCookedMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCookedMetaDataPtr_MetaData), NewProp_CachedCookedMetaDataPtr_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedEnum_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_UniqueNameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_EnumDescription,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_CachedCookedMetaDataPtr,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserDefinedEnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnum,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedEnum_Statics::ClassParams = {
	&UUserDefinedEnum::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUserDefinedEnum_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserDefinedEnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserDefinedEnum()
{
	if (!Z_Registration_Info_UClass_UUserDefinedEnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserDefinedEnum.OuterSingleton, Z_Construct_UClass_UUserDefinedEnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserDefinedEnum.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UUserDefinedEnum>()
{
	return UUserDefinedEnum::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedEnum);
UUserDefinedEnum::~UUserDefinedEnum() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUserDefinedEnum)
// End Class UUserDefinedEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserDefinedEnum, UUserDefinedEnum::StaticClass, TEXT("UUserDefinedEnum"), &Z_Registration_Info_UClass_UUserDefinedEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserDefinedEnum), 3640038377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_1829802578(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
