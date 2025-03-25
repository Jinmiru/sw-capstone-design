// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/LevelVariantSets.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSets() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet_NoRegister();
// End Cross Module References

// Begin Class ULevelVariantSets Function GetNumVariantSets
struct Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics
{
	struct LevelVariantSets_eventGetNumVariantSets_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSets_eventGetNumVariantSets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetNumVariantSets", nullptr, nullptr, Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::LevelVariantSets_eventGetNumVariantSets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::LevelVariantSets_eventGetNumVariantSets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelVariantSets::execGetNumVariantSets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumVariantSets();
	P_NATIVE_END;
}
// End Class ULevelVariantSets Function GetNumVariantSets

// Begin Class ULevelVariantSets Function GetVariantSet
struct Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics
{
	struct LevelVariantSets_eventGetVariantSet_Parms
	{
		int32 VariantSetIndex;
		UVariantSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VariantSetIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_VariantSetIndex = { "VariantSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSet_Parms, VariantSetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSet_Parms, ReturnValue), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_VariantSetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetVariantSet", nullptr, nullptr, Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::LevelVariantSets_eventGetVariantSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::LevelVariantSets_eventGetVariantSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelVariantSets_GetVariantSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelVariantSets::execGetVariantSet)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_VariantSetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVariantSet**)Z_Param__Result=P_THIS->GetVariantSet(Z_Param_VariantSetIndex);
	P_NATIVE_END;
}
// End Class ULevelVariantSets Function GetVariantSet

// Begin Class ULevelVariantSets Function GetVariantSetByName
struct Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics
{
	struct LevelVariantSets_eventGetVariantSetByName_Parms
	{
		FString VariantSetName;
		UVariantSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSetByName_Parms, VariantSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSetByName_Parms, ReturnValue), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_VariantSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetVariantSetByName", nullptr, nullptr, Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::LevelVariantSets_eventGetVariantSetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::LevelVariantSets_eventGetVariantSetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelVariantSets::execGetVariantSetByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVariantSet**)Z_Param__Result=P_THIS->GetVariantSetByName(Z_Param_VariantSetName);
	P_NATIVE_END;
}
// End Class ULevelVariantSets Function GetVariantSetByName

// Begin Class ULevelVariantSets
void ULevelVariantSets::StaticRegisterNativesULevelVariantSets()
{
	UClass* Class = ULevelVariantSets::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumVariantSets", &ULevelVariantSets::execGetNumVariantSets },
		{ "GetVariantSet", &ULevelVariantSets::execGetVariantSet },
		{ "GetVariantSetByName", &ULevelVariantSets::execGetVariantSetByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelVariantSets);
UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister()
{
	return ULevelVariantSets::StaticClass();
}
struct Z_Construct_UClass_ULevelVariantSets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelVariantSets.h" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorBlueprint_MetaData[] = {
		{ "Comment", "// A pointer to the director blueprint that generates this levelvariantsets' DirectorClass\n" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
		{ "ToolTip", "A pointer to the director blueprint that generates this levelvariantsets' DirectorClass" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectorClass_MetaData[] = {
		{ "Comment", "// The class that is used to spawn this levelvariantsets' director instance.\n// Director instances are allocated one per instance\n" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
		{ "ToolTip", "The class that is used to spawn this levelvariantsets' director instance.\nDirector instances are allocated one per instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariantSets_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectorBlueprint;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DirectorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VariantSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariantSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets, "GetNumVariantSets" }, // 1043476722
		{ &Z_Construct_UFunction_ULevelVariantSets_GetVariantSet, "GetVariantSet" }, // 3959519290
		{ &Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName, "GetVariantSetByName" }, // 1131503177
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelVariantSets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint = { "DirectorBlueprint", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelVariantSets, DirectorBlueprint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorBlueprint_MetaData), NewProp_DirectorBlueprint_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass = { "DirectorClass", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelVariantSets, DirectorClass), Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectorClass_MetaData), NewProp_DirectorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_Inner = { "VariantSets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets = { "VariantSets", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelVariantSets, VariantSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariantSets_MetaData), NewProp_VariantSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelVariantSets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelVariantSets_Statics::ClassParams = {
	&ULevelVariantSets::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelVariantSets_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelVariantSets()
{
	if (!Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton, Z_Construct_UClass_ULevelVariantSets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ULevelVariantSets>()
{
	return ULevelVariantSets::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelVariantSets);
ULevelVariantSets::~ULevelVariantSets() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelVariantSets)
// End Class ULevelVariantSets

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelVariantSets, ULevelVariantSets::StaticClass, TEXT("ULevelVariantSets"), &Z_Registration_Info_UClass_ULevelVariantSets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelVariantSets), 1676919406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_24717870(TEXT("/Script/VariantManagerContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
