// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeGrassOutput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeGrassOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGrassInput();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FGrassInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrassInput;
class UScriptStruct* FGrassInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrassInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrassInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrassInput, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("GrassInput"));
	}
	return Z_Registration_Info_UScriptStruct_GrassInput.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FGrassInput>()
{
	return FGrassInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGrassInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassType_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
		{ "RequiredInput", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrassType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrassInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassInput, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_GrassType = { "GrassType", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassInput, GrassType), Z_Construct_UClass_ULandscapeGrassType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassType_MetaData), NewProp_GrassType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrassInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrassInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_GrassType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrassInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"GrassInput",
	Z_Construct_UScriptStruct_FGrassInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassInput_Statics::PropPointers),
	sizeof(FGrassInput),
	alignof(FGrassInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGrassInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGrassInput()
{
	if (!Z_Registration_Info_UScriptStruct_GrassInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrassInput.InnerSingleton, Z_Construct_UScriptStruct_FGrassInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GrassInput.InnerSingleton;
}
// End ScriptStruct FGrassInput

// Begin Class UMaterialExpressionLandscapeGrassOutput
void UMaterialExpressionLandscapeGrassOutput::StaticRegisterNativesUMaterialExpressionLandscapeGrassOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeGrassOutput);
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister()
{
	return UMaterialExpressionLandscapeGrassOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeGrassOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassTypes_MetaData[] = {
		{ "Category", "UMaterialExpressionLandscapeGrassOutput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrassTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrassTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeGrassOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes_Inner = { "GrassTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGrassInput, METADATA_PARAMS(0, nullptr) }; // 3595966835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes = { "GrassTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeGrassOutput, GrassTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassTypes_MetaData), NewProp_GrassTypes_MetaData) }; // 3595966835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::ClassParams = {
	&UMaterialExpressionLandscapeGrassOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeGrassOutput>()
{
	return UMaterialExpressionLandscapeGrassOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeGrassOutput);
UMaterialExpressionLandscapeGrassOutput::~UMaterialExpressionLandscapeGrassOutput() {}
// End Class UMaterialExpressionLandscapeGrassOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGrassInput::StaticStruct, Z_Construct_UScriptStruct_FGrassInput_Statics::NewStructOps, TEXT("GrassInput"), &Z_Registration_Info_UScriptStruct_GrassInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrassInput), 3595966835U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput, UMaterialExpressionLandscapeGrassOutput::StaticClass, TEXT("UMaterialExpressionLandscapeGrassOutput"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeGrassOutput), 3853140789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_1632811601(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
