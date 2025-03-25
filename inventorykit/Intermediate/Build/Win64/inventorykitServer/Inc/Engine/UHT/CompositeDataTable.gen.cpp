// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CompositeDataTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeDataTable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCompositeDataTable();
ENGINE_API UClass* Z_Construct_UClass_UCompositeDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCompositeDataTable
void UCompositeDataTable::StaticRegisterNativesUCompositeDataTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositeDataTable);
UClass* Z_Construct_UClass_UCompositeDataTable_NoRegister()
{
	return UCompositeDataTable::StaticClass();
}
struct Z_Construct_UClass_UCompositeDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data table composed of a stack of other data tables.\n */" },
		{ "HideCategories", "ImportOptions ImportSource" },
		{ "IncludePath", "Engine/CompositeDataTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "ToolTip", "Data table composed of a stack of other data tables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentTables_MetaData[] = {
		{ "Category", "Tables" },
		{ "Comment", "// Parent tables\n// Tables with higher indices override data in tables with lower indices\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "ToolTip", "Parent tables\nTables with higher indices override data in tables with lower indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldParentTables_MetaData[] = {
		{ "Comment", "// temporary copy used to detect changes so we can update delegates correctly on removal\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "ToolTip", "temporary copy used to detect changes so we can update delegates correctly on removal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentTables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldParentTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OldParentTables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_Inner = { "ParentTables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables = { "ParentTables", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeDataTable, ParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentTables_MetaData), NewProp_ParentTables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_Inner = { "OldParentTables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables = { "OldParentTables", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeDataTable, OldParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldParentTables_MetaData), NewProp_OldParentTables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositeDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataTable,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeDataTable_Statics::ClassParams = {
	&UCompositeDataTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeDataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeDataTable()
{
	if (!Z_Registration_Info_UClass_UCompositeDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeDataTable.OuterSingleton, Z_Construct_UClass_UCompositeDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeDataTable.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCompositeDataTable>()
{
	return UCompositeDataTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeDataTable);
UCompositeDataTable::~UCompositeDataTable() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeDataTable)
// End Class UCompositeDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeDataTable, UCompositeDataTable::StaticClass, TEXT("UCompositeDataTable"), &Z_Registration_Info_UClass_UCompositeDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeDataTable), 1744596057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_3173888824(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
