// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPerInstanceCustomData.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPerInstanceCustomData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPerInstanceCustomData
void UMaterialExpressionPerInstanceCustomData::StaticRegisterNativesUMaterialExpressionPerInstanceCustomData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPerInstanceCustomData);
UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_NoRegister()
{
	return UMaterialExpressionPerInstanceCustomData::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstDefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "OverridingInputProperty", "DefaultValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstDefaultValue;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPerInstanceCustomData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, DefaultValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue = { "ConstDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, ConstDefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstDefaultValue_MetaData), NewProp_ConstDefaultValue_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, DataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataIndex_MetaData), NewProp_DataIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::ClassParams = {
	&UMaterialExpressionPerInstanceCustomData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPerInstanceCustomData>()
{
	return UMaterialExpressionPerInstanceCustomData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPerInstanceCustomData);
UMaterialExpressionPerInstanceCustomData::~UMaterialExpressionPerInstanceCustomData() {}
// End Class UMaterialExpressionPerInstanceCustomData

// Begin Class UMaterialExpressionPerInstanceCustomData3Vector
void UMaterialExpressionPerInstanceCustomData3Vector::StaticRegisterNativesUMaterialExpressionPerInstanceCustomData3Vector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPerInstanceCustomData3Vector);
UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_NoRegister()
{
	return UMaterialExpressionPerInstanceCustomData3Vector::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstDefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "OverridingInputProperty", "DefaultValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstDefaultValue;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPerInstanceCustomData3Vector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData3Vector, DefaultValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_ConstDefaultValue = { "ConstDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData3Vector, ConstDefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstDefaultValue_MetaData), NewProp_ConstDefaultValue_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData3Vector, DataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataIndex_MetaData), NewProp_DataIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_ConstDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DataIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::ClassParams = {
	&UMaterialExpressionPerInstanceCustomData3Vector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::PropPointers),
	0,
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPerInstanceCustomData3Vector>()
{
	return UMaterialExpressionPerInstanceCustomData3Vector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPerInstanceCustomData3Vector);
UMaterialExpressionPerInstanceCustomData3Vector::~UMaterialExpressionPerInstanceCustomData3Vector() {}
// End Class UMaterialExpressionPerInstanceCustomData3Vector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData, UMaterialExpressionPerInstanceCustomData::StaticClass, TEXT("UMaterialExpressionPerInstanceCustomData"), &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPerInstanceCustomData), 1197270397U) },
		{ Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector, UMaterialExpressionPerInstanceCustomData3Vector::StaticClass, TEXT("UMaterialExpressionPerInstanceCustomData3Vector"), &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPerInstanceCustomData3Vector), 2232176722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_1019698542(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
