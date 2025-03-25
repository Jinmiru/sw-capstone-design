// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangePythonPipelineBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePythonPipelineBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineAsset();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineAsset_NoRegister();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineBase();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister();
INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyData();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin Class UInterchangePythonPipelineBase
void UInterchangePythonPipelineBase::StaticRegisterNativesUInterchangePythonPipelineBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePythonPipelineBase);
UClass* Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister()
{
	return UInterchangePythonPipelineBase::StaticClass();
}
struct Z_Construct_UClass_UInterchangePythonPipelineBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * This class represents a Python pipeline. It is used by the TSoftClassPtr of the PythonPipeline asset.\n *\n */" },
		{ "IncludePath", "InterchangePythonPipelineBase.h" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
		{ "ToolTip", "* This class represents a Python pipeline. It is used by the TSoftClassPtr of the PythonPipeline asset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePythonPipelineBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::ClassParams = {
	&UInterchangePythonPipelineBase::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePythonPipelineBase()
{
	if (!Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton, Z_Construct_UClass_UInterchangePythonPipelineBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePythonPipelineBase.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangePythonPipelineBase>()
{
	return UInterchangePythonPipelineBase::StaticClass();
}
UInterchangePythonPipelineBase::UInterchangePythonPipelineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePythonPipelineBase);
UInterchangePythonPipelineBase::~UInterchangePythonPipelineBase() {}
// End Class UInterchangePythonPipelineBase

// Begin ScriptStruct FPropertyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyData;
class UScriptStruct* FPropertyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyData, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("PropertyData"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyData.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FPropertyData>()
{
	return FPropertyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	nullptr,
	&NewStructOps,
	"PropertyData",
	nullptr,
	0,
	sizeof(FPropertyData),
	alignof(FPropertyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyData()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyData.InnerSingleton, Z_Construct_UScriptStruct_FPropertyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyData.InnerSingleton;
}
// End ScriptStruct FPropertyData

// Begin Class UInterchangePythonPipelineAsset
void UInterchangePythonPipelineAsset::StaticRegisterNativesUInterchangePythonPipelineAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePythonPipelineAsset);
UClass* Z_Construct_UClass_UInterchangePythonPipelineAsset_NoRegister()
{
	return UInterchangePythonPipelineAsset::StaticClass();
}
struct Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * This class is a helper class for Python pipelines. It allows the class picker to filter the Content Browser instance we want to support\n * in the pipeline stack.\n *\n * Use this class factory to be able to create an instance of a Python pipeline in the Content Browser.\n * A Python pipeline does not have any locked properties, and all default values must be set in the Python script.\n * This restriction exists because Python classes are transient, so any assets created from a Python class cannot be saved.\n * \n */" },
		{ "IncludePath", "InterchangePythonPipelineBase.h" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
		{ "ToolTip", "* This class is a helper class for Python pipelines. It allows the class picker to filter the Content Browser instance we want to support\n* in the pipeline stack.\n*\n* Use this class factory to be able to create an instance of a Python pipeline in the Content Browser.\n* A Python pipeline does not have any locked properties, and all default values must be set in the Python script.\n* This restriction exists because Python classes are transient, so any assets created from a Python class cannot be saved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PythonClass_MetaData[] = {
		{ "Category", "Interchange|Python" },
		{ "Comment", "/** The Python class we want to use as a pipeline. */" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
		{ "ToolTip", "The Python class we want to use as a pipeline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPipeline_MetaData[] = {
		{ "Category", "Interchange|Python" },
		{ "Comment", "/** The transient pipeline we generate when we load the Python pipeline. */" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
		{ "ToolTip", "The transient pipeline we generate when we load the Python pipeline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonDefaultProperties_MetaData[] = {
		{ "Category", "Interchange|Python" },
		{ "ModuleRelativePath", "Public/InterchangePythonPipelineBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PythonClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedPipeline;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonDefaultProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePythonPipelineAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_PythonClass = { "PythonClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangePythonPipelineAsset, PythonClass), Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PythonClass_MetaData), NewProp_PythonClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_GeneratedPipeline = { "GeneratedPipeline", nullptr, (EPropertyFlags)0x0114000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangePythonPipelineAsset, GeneratedPipeline), Z_Construct_UClass_UInterchangePythonPipelineBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPipeline_MetaData), NewProp_GeneratedPipeline_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_JsonDefaultProperties = { "JsonDefaultProperties", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangePythonPipelineAsset, JsonDefaultProperties), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonDefaultProperties_MetaData), NewProp_JsonDefaultProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_PythonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_GeneratedPipeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::NewProp_JsonDefaultProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::ClassParams = {
	&UInterchangePythonPipelineAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangePythonPipelineAsset()
{
	if (!Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton, Z_Construct_UClass_UInterchangePythonPipelineAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangePythonPipelineAsset>()
{
	return UInterchangePythonPipelineAsset::StaticClass();
}
UInterchangePythonPipelineAsset::UInterchangePythonPipelineAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePythonPipelineAsset);
UInterchangePythonPipelineAsset::~UInterchangePythonPipelineAsset() {}
// End Class UInterchangePythonPipelineAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPropertyData::StaticStruct, Z_Construct_UScriptStruct_FPropertyData_Statics::NewStructOps, TEXT("PropertyData"), &Z_Registration_Info_UScriptStruct_PropertyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyData), 2588025746U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePythonPipelineBase, UInterchangePythonPipelineBase::StaticClass, TEXT("UInterchangePythonPipelineBase"), &Z_Registration_Info_UClass_UInterchangePythonPipelineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePythonPipelineBase), 3330303787U) },
		{ Z_Construct_UClass_UInterchangePythonPipelineAsset, UInterchangePythonPipelineAsset::StaticClass, TEXT("UInterchangePythonPipelineAsset"), &Z_Registration_Info_UClass_UInterchangePythonPipelineAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePythonPipelineAsset), 1598020880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_879568412(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePythonPipelineBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
