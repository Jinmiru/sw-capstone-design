// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CompositeCurveTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCurveTable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable();
ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveTable();
ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCompositeCurveTable
void UCompositeCurveTable::StaticRegisterNativesUCompositeCurveTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositeCurveTable);
UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister()
{
	return UCompositeCurveTable::StaticClass();
}
struct Z_Construct_UClass_UCompositeCurveTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Curve table composed of a stack of other curve tables.\n */" },
		{ "IncludePath", "Engine/CompositeCurveTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "Curve table composed of a stack of other curve tables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentTables_MetaData[] = {
		{ "Category", "Tables" },
		{ "Comment", "// Parent tables\n// Tables with higher indices override data in tables with lower indices\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "Parent tables\nTables with higher indices override data in tables with lower indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldParentTables_MetaData[] = {
		{ "Comment", "// temporary copy used to detect changes so we can update delegates correctly on removal\n" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
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
		TCppClassTypeTraits<UCompositeCurveTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_Inner = { "ParentTables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables = { "ParentTables", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeCurveTable, ParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentTables_MetaData), NewProp_ParentTables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_Inner = { "OldParentTables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables = { "OldParentTables", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeCurveTable, OldParentTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldParentTables_MetaData), NewProp_OldParentTables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositeCurveTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCurveTable,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCurveTable_Statics::ClassParams = {
	&UCompositeCurveTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeCurveTable()
{
	if (!Z_Registration_Info_UClass_UCompositeCurveTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeCurveTable.OuterSingleton, Z_Construct_UClass_UCompositeCurveTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeCurveTable.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCompositeCurveTable>()
{
	return UCompositeCurveTable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCurveTable);
UCompositeCurveTable::~UCompositeCurveTable() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeCurveTable)
// End Class UCompositeCurveTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeCurveTable, UCompositeCurveTable::StaticClass, TEXT("UCompositeCurveTable"), &Z_Registration_Info_UClass_UCompositeCurveTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeCurveTable), 963139561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_3133350661(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
