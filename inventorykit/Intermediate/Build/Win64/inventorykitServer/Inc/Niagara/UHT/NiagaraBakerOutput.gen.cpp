// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraBakerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerOutput() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraBakerTextureSource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource;
class UScriptStruct* FNiagaraBakerTextureSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBakerTextureSource"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBakerTextureSource>()
{
	return FNiagaraBakerTextureSource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayString_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayString;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerTextureSource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_DisplayString = { "DisplayString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraBakerTextureSource, DisplayString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayString_MetaData), NewProp_DisplayString_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraBakerTextureSource, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_DisplayString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraBakerTextureSource",
	Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers),
	sizeof(FNiagaraBakerTextureSource),
	alignof(FNiagaraBakerTextureSource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton;
}
// End ScriptStruct FNiagaraBakerTextureSource

// Begin Class UNiagaraBakerOutput
void UNiagaraBakerOutput::StaticRegisterNativesUNiagaraBakerOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerOutput);
UClass* Z_Construct_UClass_UNiagaraBakerOutput_NoRegister()
{
	return UNiagaraBakerOutput::StaticClass();
}
struct Z_Construct_UClass_UNiagaraBakerOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraBakerOutput.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional output name, useful when you have multiple outputs */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutput.h" },
		{ "ToolTip", "Optional output name, useful when you have multiple outputs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutput, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutput_Statics::NewProp_OutputName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraBakerOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerOutput_Statics::ClassParams = {
	&UNiagaraBakerOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraBakerOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutput_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraBakerOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraBakerOutput()
{
	if (!Z_Registration_Info_UClass_UNiagaraBakerOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerOutput.OuterSingleton, Z_Construct_UClass_UNiagaraBakerOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraBakerOutput.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerOutput>()
{
	return UNiagaraBakerOutput::StaticClass();
}
UNiagaraBakerOutput::UNiagaraBakerOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerOutput);
UNiagaraBakerOutput::~UNiagaraBakerOutput() {}
// End Class UNiagaraBakerOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraBakerTextureSource::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewStructOps, TEXT("NiagaraBakerTextureSource"), &Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBakerTextureSource), 1578020863U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerOutput, UNiagaraBakerOutput::StaticClass, TEXT("UNiagaraBakerOutput"), &Z_Registration_Info_UClass_UNiagaraBakerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerOutput), 1454236649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_1586762035(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
