// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagedArrayCollection() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin ScriptStruct FManagedArrayCollection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManagedArrayCollection;
class UScriptStruct* FManagedArrayCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManagedArrayCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManagedArrayCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManagedArrayCollection, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ManagedArrayCollection"));
	}
	return Z_Registration_Info_UScriptStruct_ManagedArrayCollection.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FManagedArrayCollection>()
{
	return FManagedArrayCollection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FManagedArrayCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* ManagedArrayCollection\n*\n*   The ManagedArrayCollection is an entity system that implements a homogeneous, dynamically allocated, manager of\n*   primitive TArray structures. The collection stores groups of TArray attributes, where each attribute within a\n*   group is the same length. The collection will make use of the TManagedArray class, providing limited interaction\n*   with the underlying TArray. \n*\n*   For example:\n*\n\x09""FManagedArrayCollection* Collection(NewObject<FManagedArrayCollection>());\n\x09""Collection->AddElements(10, \"GroupBar\"); // Create a group GroupBar and add 10 elements.\n\x09""Collection->AddAttribute<FVector3f>(\"AttributeFoo\", \"GroupBar\"); // Add a FVector array named AttributeFoo to GroupBar.\n\x09TManagedArray<FVector3f>&  Foo = Collection->GetAttribute<FVector3f>(\"AttributeFoo\", \"GroupBar\"); // Get AttributeFoo\n\x09""for (int32 i = 0; i < Foo.Num(); i++)\n\x09{\n\x09\x09""Foo[i] = FVector(i, i, i); // Update AttribureFoo's elements\n\x09}\n*\n*\n*\n*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/ManagedArrayCollection.h" },
		{ "ToolTip", "ManagedArrayCollection\n\n  The ManagedArrayCollection is an entity system that implements a homogeneous, dynamically allocated, manager of\n  primitive TArray structures. The collection stores groups of TArray attributes, where each attribute within a\n  group is the same length. The collection will make use of the TManagedArray class, providing limited interaction\n  with the underlying TArray.\n\n  For example:\n\n       FManagedArrayCollection* Collection(NewObject<FManagedArrayCollection>());\n       Collection->AddElements(10, \"GroupBar\"); // Create a group GroupBar and add 10 elements.\n       Collection->AddAttribute<FVector3f>(\"AttributeFoo\", \"GroupBar\"); // Add a FVector array named AttributeFoo to GroupBar.\n       TManagedArray<FVector3f>&  Foo = Collection->GetAttribute<FVector3f>(\"AttributeFoo\", \"GroupBar\"); // Get AttributeFoo\n       for (int32 i = 0; i < Foo.Num(); i++)\n       {\n               Foo[i] = FVector(i, i, i); // Update AttribureFoo's elements\n       }" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManagedArrayCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	&NewStructOps,
	"ManagedArrayCollection",
	nullptr,
	0,
	sizeof(FManagedArrayCollection),
	alignof(FManagedArrayCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection()
{
	if (!Z_Registration_Info_UScriptStruct_ManagedArrayCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManagedArrayCollection.InnerSingleton, Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ManagedArrayCollection.InnerSingleton;
}
// End ScriptStruct FManagedArrayCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FManagedArrayCollection::StaticStruct, Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::NewStructOps, TEXT("ManagedArrayCollection"), &Z_Registration_Info_UScriptStruct_ManagedArrayCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManagedArrayCollection), 3814783873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_3698302350(TEXT("/Script/Chaos"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
