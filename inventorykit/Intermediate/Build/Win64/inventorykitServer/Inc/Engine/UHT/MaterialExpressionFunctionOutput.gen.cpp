// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFunctionOutput() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionFunctionOutput
void UMaterialExpressionFunctionOutput::StaticRegisterNativesUMaterialExpressionFunctionOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFunctionOutput);
UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister()
{
	return UMaterialExpressionFunctionOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFunctionOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionOutput" },
		{ "Comment", "/** The output's name, which will be drawn on the connector in function call expressions that use this function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "The output's name, which will be drawn on the connector in function call expressions that use this function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionOutput" },
		{ "Comment", "/** The output's description, which will be used as a tooltip on the connector in function call expressions that use this function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The output's description, which will be used as a tooltip on the connector in function call expressions that use this function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "Comment", "/** Controls where the output is displayed relative to the other outputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Controls where the output is displayed relative to the other outputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Comment", "/** Stores the expression in the material function connected to this output. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Stores the expression in the material function connected to this output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastPreviewed_MetaData[] = {
		{ "Comment", "/** Whether this output was previewed the last time this function was edited. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Whether this output was previewed the last time this function was edited." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Comment", "/** Id of this input, used to maintain references through name changes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Id of this input, used to maintain references through name changes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static void NewProp_bLastPreviewed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastPreviewed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFunctionOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, SortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortPriority_MetaData), NewProp_SortPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
void Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_SetBit(void* Obj)
{
	((UMaterialExpressionFunctionOutput*)Obj)->bLastPreviewed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed = { "bLastPreviewed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionFunctionOutput), &Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastPreviewed_MetaData), NewProp_bLastPreviewed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::ClassParams = {
	&UMaterialExpressionFunctionOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFunctionOutput>()
{
	return UMaterialExpressionFunctionOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFunctionOutput);
UMaterialExpressionFunctionOutput::~UMaterialExpressionFunctionOutput() {}
// End Class UMaterialExpressionFunctionOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFunctionOutput, UMaterialExpressionFunctionOutput::StaticClass, TEXT("UMaterialExpressionFunctionOutput"), &Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFunctionOutput), 2720355897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_3761284747(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
