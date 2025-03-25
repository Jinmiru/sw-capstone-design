// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionClamp.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionClamp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClampMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EClampMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClampMode;
static UEnum* EClampMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClampMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClampMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClampMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EClampMode"));
	}
	return Z_Registration_Info_UEnum_EClampMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EClampMode>()
{
	return EClampMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EClampMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CMODE_Clamp.Name", "CMODE_Clamp" },
		{ "CMODE_ClampMax.Name", "CMODE_ClampMax" },
		{ "CMODE_ClampMin.Name", "CMODE_ClampMin" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CMODE_Clamp", (int64)CMODE_Clamp },
		{ "CMODE_ClampMin", (int64)CMODE_ClampMin },
		{ "CMODE_ClampMax", (int64)CMODE_ClampMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EClampMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EClampMode",
	"EClampMode",
	Z_Construct_UEnum_Engine_EClampMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClampMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClampMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EClampMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EClampMode()
{
	if (!Z_Registration_Info_UEnum_EClampMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClampMode.InnerSingleton, Z_Construct_UEnum_Engine_EClampMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClampMode.InnerSingleton;
}
// End Enum EClampMode

// Begin Class UMaterialExpressionClamp
void UMaterialExpressionClamp::StaticRegisterNativesUMaterialExpressionClamp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionClamp);
UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister()
{
	return UMaterialExpressionClamp::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionClamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionClamp.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MinDefault' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MaxDefault' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMode_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "OverridingInputProperty", "Min" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "OverridingInputProperty", "Max" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClampMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDefault;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionClamp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionClamp, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionClamp, Min), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionClamp, Max), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode = { "ClampMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionClamp, ClampMode), Z_Construct_UEnum_Engine_EClampMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMode_MetaData), NewProp_ClampMode_MetaData) }; // 69313858
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault = { "MinDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionClamp, MinDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDefault_MetaData), NewProp_MinDefault_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault = { "MaxDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionClamp, MaxDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDefault_MetaData), NewProp_MaxDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionClamp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::ClassParams = {
	&UMaterialExpressionClamp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionClamp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionClamp()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionClamp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionClamp.OuterSingleton, Z_Construct_UClass_UMaterialExpressionClamp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionClamp.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionClamp>()
{
	return UMaterialExpressionClamp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionClamp);
UMaterialExpressionClamp::~UMaterialExpressionClamp() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionClamp)
// End Class UMaterialExpressionClamp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClampMode_StaticEnum, TEXT("EClampMode"), &Z_Registration_Info_UEnum_EClampMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 69313858U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionClamp, UMaterialExpressionClamp::StaticClass, TEXT("UMaterialExpressionClamp"), &Z_Registration_Info_UClass_UMaterialExpressionClamp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionClamp), 2901637062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_561082356(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
