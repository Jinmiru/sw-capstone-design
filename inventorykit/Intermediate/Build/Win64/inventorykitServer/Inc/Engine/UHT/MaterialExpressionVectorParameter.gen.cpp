// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionVectorParameter.h"
#include "Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVectorParameter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionVectorParameter
void UMaterialExpressionVectorParameter::StaticRegisterNativesUMaterialExpressionVectorParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVectorParameter);
UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter_NoRegister()
{
	return UMaterialExpressionVectorParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVectorParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
		{ "ShowAsInputPin", "Primary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPrimitiveData_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveDataIndex_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelNames_MetaData[] = {
		{ "Category", "ParameterCustomization" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorParameter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static void NewProp_bUseCustomPrimitiveData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPrimitiveData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimitiveDataIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVectorParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit(void* Obj)
{
	((UMaterialExpressionVectorParameter*)Obj)->bUseCustomPrimitiveData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData = { "bUseCustomPrimitiveData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionVectorParameter), &Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomPrimitiveData_MetaData), NewProp_bUseCustomPrimitiveData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_PrimitiveDataIndex = { "PrimitiveDataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVectorParameter, PrimitiveDataIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveDataIndex_MetaData), NewProp_PrimitiveDataIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_ChannelNames = { "ChannelNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVectorParameter, ChannelNames), Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelNames_MetaData), NewProp_ChannelNames_MetaData) }; // 1866097793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_bUseCustomPrimitiveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_PrimitiveDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::NewProp_ChannelNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::ClassParams = {
	&UMaterialExpressionVectorParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVectorParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVectorParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVectorParameter>()
{
	return UMaterialExpressionVectorParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVectorParameter);
UMaterialExpressionVectorParameter::~UMaterialExpressionVectorParameter() {}
// End Class UMaterialExpressionVectorParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVectorParameter, UMaterialExpressionVectorParameter::StaticClass, TEXT("UMaterialExpressionVectorParameter"), &Z_Registration_Info_UClass_UMaterialExpressionVectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVectorParameter), 3063298333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorParameter_h_3858181117(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
