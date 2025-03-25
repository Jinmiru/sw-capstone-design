// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Internationalization/StringTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UStringTable();
ENGINE_API UClass* Z_Construct_UClass_UStringTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UStringTable
void UStringTable::StaticRegisterNativesUStringTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringTable);
UClass* Z_Construct_UClass_UStringTable_NoRegister()
{
	return UStringTable::StaticClass();
}
struct Z_Construct_UClass_UStringTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** String table wrapper asset */" },
		{ "IncludePath", "Internationalization/StringTable.h" },
		{ "ModuleRelativePath", "Public/Internationalization/StringTable.h" },
		{ "ToolTip", "String table wrapper asset" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStringTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStringTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringTable_Statics::ClassParams = {
	&UStringTable::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStringTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UStringTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStringTable()
{
	if (!Z_Registration_Info_UClass_UStringTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringTable.OuterSingleton, Z_Construct_UClass_UStringTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStringTable.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UStringTable>()
{
	return UStringTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStringTable);
UStringTable::~UStringTable() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStringTable)
// End Class UStringTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStringTable, UStringTable::StaticClass, TEXT("UStringTable"), &Z_Registration_Info_UClass_UStringTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringTable), 786957580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_876098788(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
