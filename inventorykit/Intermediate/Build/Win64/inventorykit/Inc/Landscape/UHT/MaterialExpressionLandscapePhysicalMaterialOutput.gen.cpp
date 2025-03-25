// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapePhysicalMaterialOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialInput();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FPhysicalMaterialInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalMaterialInput;
class UScriptStruct* FPhysicalMaterialInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalMaterialInput, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("PhysicalMaterialInput"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FPhysicalMaterialInput>()
{
	return FPhysicalMaterialInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure linking a material expression input with a physical material. For use by UMaterialExpressionLandscapePhysicalMaterialOutput. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "ToolTip", "Structure linking a material expression input with a physical material. For use by UMaterialExpressionLandscapePhysicalMaterialOutput." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "RequiredInput", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalMaterialInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalMaterialInput, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterial_MetaData), NewProp_PhysicalMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalMaterialInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_PhysicalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"PhysicalMaterialInput",
	Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::PropPointers),
	sizeof(FPhysicalMaterialInput),
	alignof(FPhysicalMaterialInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialInput()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.InnerSingleton;
}
// End ScriptStruct FPhysicalMaterialInput

// Begin Class UMaterialExpressionLandscapePhysicalMaterialOutput
void UMaterialExpressionLandscapePhysicalMaterialOutput::StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapePhysicalMaterialOutput);
UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister()
{
	return UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Custom output node to write out physical material weights.\n * This can be used to generate the dominant physical material for each point on a landscape.\n * Note that the use of a material output node to generate this information is optional and when a node of this type is not present we fall back on a CPU path which analyzes landscape layer data.\n */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "ToolTip", "Custom output node to write out physical material weights.\nThis can be used to generate the dominant physical material for each point on a landscape.\nNote that the use of a material output node to generate this information is optional and when a node of this type is not present we fall back on a CPU path which analyzes landscape layer data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Array of physical material inputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "ToolTip", "Array of physical material inputs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapePhysicalMaterialOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicalMaterialInput, METADATA_PARAMS(0, nullptr) }; // 3053516925
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapePhysicalMaterialOutput, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 3053516925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::ClassParams = {
	&UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapePhysicalMaterialOutput>()
{
	return UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapePhysicalMaterialOutput);
UMaterialExpressionLandscapePhysicalMaterialOutput::~UMaterialExpressionLandscapePhysicalMaterialOutput() {}
// End Class UMaterialExpressionLandscapePhysicalMaterialOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicalMaterialInput::StaticStruct, Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewStructOps, TEXT("PhysicalMaterialInput"), &Z_Registration_Info_UScriptStruct_PhysicalMaterialInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalMaterialInput), 3053516925U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput, UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass, TEXT("UMaterialExpressionLandscapePhysicalMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapePhysicalMaterialOutput), 3270458595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_380761572(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
