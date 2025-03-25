// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDepthOfFieldFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDepthOfFieldFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDepthOfFieldFunctionValue
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue;
static UEnum* EDepthOfFieldFunctionValue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDepthOfFieldFunctionValue"));
	}
	return Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDepthOfFieldFunctionValue>()
{
	return EDepthOfFieldFunctionValue_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Note: The index is used to map the enum to different code in the shader\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "TDOF_CircleOfConfusionRadius.Comment", "/** in pixels, only works for CircleDOF, use Abs for the actual radius as the sign of the value indicates near out of focus, positive indicates far out of focus */" },
		{ "TDOF_CircleOfConfusionRadius.Name", "TDOF_CircleOfConfusionRadius" },
		{ "TDOF_CircleOfConfusionRadius.ToolTip", "in pixels, only works for CircleDOF, use Abs for the actual radius as the sign of the value indicates near out of focus, positive indicates far out of focus" },
		{ "TDOF_FarMask.Comment", "/** 0:in Focus or Near .. 1:Far. */" },
		{ "TDOF_FarMask.Name", "TDOF_FarMask" },
		{ "TDOF_FarMask.ToolTip", "0:in Focus or Near .. 1:Far." },
		{ "TDOF_MAX.Name", "TDOF_MAX" },
		{ "TDOF_NearAndFarMask.Comment", "/** 0:in Focus .. 1:Near or Far. */" },
		{ "TDOF_NearAndFarMask.Name", "TDOF_NearAndFarMask" },
		{ "TDOF_NearAndFarMask.ToolTip", "0:in Focus .. 1:Near or Far." },
		{ "TDOF_NearMask.Comment", "/** 0:in Focus or Far .. 1:Near. */" },
		{ "TDOF_NearMask.Name", "TDOF_NearMask" },
		{ "TDOF_NearMask.ToolTip", "0:in Focus or Far .. 1:Near." },
		{ "ToolTip", "Note: The index is used to map the enum to different code in the shader" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TDOF_NearAndFarMask", (int64)TDOF_NearAndFarMask },
		{ "TDOF_NearMask", (int64)TDOF_NearMask },
		{ "TDOF_FarMask", (int64)TDOF_FarMask },
		{ "TDOF_CircleOfConfusionRadius", (int64)TDOF_CircleOfConfusionRadius },
		{ "TDOF_MAX", (int64)TDOF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDepthOfFieldFunctionValue",
	"EDepthOfFieldFunctionValue",
	Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue()
{
	if (!Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.InnerSingleton, Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue.InnerSingleton;
}
// End Enum EDepthOfFieldFunctionValue

// Begin Class UMaterialExpressionDepthOfFieldFunction
void UMaterialExpressionDepthOfFieldFunction::StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDepthOfFieldFunction);
UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_NoRegister()
{
	return UMaterialExpressionDepthOfFieldFunction::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionValue_MetaData[] = {
		{ "Category", "MaterialExpressionDepthOfFieldFunction" },
		{ "Comment", "/** Determines the mapping place to use on the terrain. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ToolTip", "Determines the mapping place to use on the terrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Comment", "/** usually nothing or PixelDepth */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthOfFieldFunction.h" },
		{ "ToolTip", "usually nothing or PixelDepth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDepthOfFieldFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue = { "FunctionValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDepthOfFieldFunction, FunctionValue), Z_Construct_UEnum_Engine_EDepthOfFieldFunctionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionValue_MetaData), NewProp_FunctionValue_MetaData) }; // 1663566114
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionDepthOfFieldFunction, Depth), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_FunctionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::ClassParams = {
	&UMaterialExpressionDepthOfFieldFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::PropPointers),
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDepthOfFieldFunction>()
{
	return UMaterialExpressionDepthOfFieldFunction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDepthOfFieldFunction);
UMaterialExpressionDepthOfFieldFunction::~UMaterialExpressionDepthOfFieldFunction() {}
// End Class UMaterialExpressionDepthOfFieldFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDepthOfFieldFunctionValue_StaticEnum, TEXT("EDepthOfFieldFunctionValue"), &Z_Registration_Info_UEnum_EDepthOfFieldFunctionValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1663566114U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDepthOfFieldFunction, UMaterialExpressionDepthOfFieldFunction::StaticClass, TEXT("UMaterialExpressionDepthOfFieldFunction"), &Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDepthOfFieldFunction), 3216189833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_3097328576(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthOfFieldFunction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
