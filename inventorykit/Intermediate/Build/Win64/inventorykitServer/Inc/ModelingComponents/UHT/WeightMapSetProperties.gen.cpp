// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/PropertySets/WeightMapSetProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightMapSetProperties() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UWeightMapSetProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UWeightMapSetProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UWeightMapSetProperties Function GetWeightMapsFunc
struct Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics
{
	struct WeightMapSetProperties_eventGetWeightMapsFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// this function is called provide set of available weight maps\n" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
		{ "ToolTip", "this function is called provide set of available weight maps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeightMapSetProperties_eventGetWeightMapsFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeightMapSetProperties, nullptr, "GetWeightMapsFunc", nullptr, nullptr, Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::WeightMapSetProperties_eventGetWeightMapsFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::WeightMapSetProperties_eventGetWeightMapsFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeightMapSetProperties::execGetWeightMapsFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetWeightMapsFunc();
	P_NATIVE_END;
}
// End Class UWeightMapSetProperties Function GetWeightMapsFunc

// Begin Class UWeightMapSetProperties
void UWeightMapSetProperties::StaticRegisterNativesUWeightMapSetProperties()
{
	UClass* Class = UWeightMapSetProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWeightMapsFunc", &UWeightMapSetProperties::execGetWeightMapsFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightMapSetProperties);
UClass* Z_Construct_UClass_UWeightMapSetProperties_NoRegister()
{
	return UWeightMapSetProperties::StaticClass();
}
struct Z_Construct_UClass_UWeightMapSetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Weight Maps)\n */" },
		{ "IncludePath", "PropertySets/WeightMapSetProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
		{ "ToolTip", "Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Weight Maps)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[] = {
		{ "Category", "WeightMap" },
		{ "Comment", "/** Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity. */" },
		{ "GetOptions", "GetWeightMapsFunc" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
		{ "ToolTip", "Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapsList_MetaData[] = {
		{ "Comment", "// internal list used to implement above\n" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
		{ "ToolTip", "internal list used to implement above" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertWeightMap_MetaData[] = {
		{ "Category", "WeightMap" },
		{ "ModuleRelativePath", "Public/PropertySets/WeightMapSetProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMapsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightMapsList;
	static void NewProp_bInvertWeightMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertWeightMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeightMapSetProperties_GetWeightMapsFunc, "GetWeightMapsFunc" }, // 465396489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightMapSetProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightMapSetProperties, WeightMap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMap_MetaData), NewProp_WeightMap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList_Inner = { "WeightMapsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList = { "WeightMapsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeightMapSetProperties, WeightMapsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapsList_MetaData), NewProp_WeightMapsList_MetaData) };
void Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap_SetBit(void* Obj)
{
	((UWeightMapSetProperties*)Obj)->bInvertWeightMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap = { "bInvertWeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeightMapSetProperties), &Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertWeightMap_MetaData), NewProp_bInvertWeightMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeightMapSetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_WeightMapsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeightMapSetProperties_Statics::NewProp_bInvertWeightMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeightMapSetProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightMapSetProperties_Statics::ClassParams = {
	&UWeightMapSetProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeightMapSetProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeightMapSetProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeightMapSetProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeightMapSetProperties()
{
	if (!Z_Registration_Info_UClass_UWeightMapSetProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightMapSetProperties.OuterSingleton, Z_Construct_UClass_UWeightMapSetProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeightMapSetProperties.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UWeightMapSetProperties>()
{
	return UWeightMapSetProperties::StaticClass();
}
UWeightMapSetProperties::UWeightMapSetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightMapSetProperties);
UWeightMapSetProperties::~UWeightMapSetProperties() {}
// End Class UWeightMapSetProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeightMapSetProperties, UWeightMapSetProperties::StaticClass, TEXT("UWeightMapSetProperties"), &Z_Registration_Info_UClass_UWeightMapSetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightMapSetProperties), 1717196161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_1499148361(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_WeightMapSetProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
