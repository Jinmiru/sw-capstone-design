// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/PropertySets/PolygroupLayersProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolygroupLayersProperties() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UPolygroupLayersProperties Function GetGroupLayersFunc
struct Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics
{
	struct PolygroupLayersProperties_eventGetGroupLayersFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Provides set of available group layers\n" },
		{ "ModuleRelativePath", "Public/PropertySets/PolygroupLayersProperties.h" },
		{ "ToolTip", "Provides set of available group layers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PolygroupLayersProperties_eventGetGroupLayersFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygroupLayersProperties, nullptr, "GetGroupLayersFunc", nullptr, nullptr, Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PolygroupLayersProperties_eventGetGroupLayersFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::PolygroupLayersProperties_eventGetGroupLayersFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPolygroupLayersProperties::execGetGroupLayersFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetGroupLayersFunc();
	P_NATIVE_END;
}
// End Class UPolygroupLayersProperties Function GetGroupLayersFunc

// Begin Class UPolygroupLayersProperties
void UPolygroupLayersProperties::StaticRegisterNativesUPolygroupLayersProperties()
{
	UClass* Class = UPolygroupLayersProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGroupLayersFunc", &UPolygroupLayersProperties::execGetGroupLayersFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolygroupLayersProperties);
UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister()
{
	return UPolygroupLayersProperties::StaticClass();
}
struct Z_Construct_UClass_UPolygroupLayersProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Polygroup Layers)\n */" },
		{ "IncludePath", "PropertySets/PolygroupLayersProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/PolygroupLayersProperties.h" },
		{ "ToolTip", "Basic Tool Property Set that allows for selecting from a list of FNames (that we assume are Polygroup Layers)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGroupLayer_MetaData[] = {
		{ "Category", "PolyGroup Layer" },
		{ "Comment", "/** Select PolyGroup layer to use. */" },
		{ "DisplayName", "Active PolyGroup" },
		{ "GetOptions", "GetGroupLayersFunc" },
		{ "ModuleRelativePath", "Public/PropertySets/PolygroupLayersProperties.h" },
		{ "ToolTip", "Select PolyGroup layer to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupLayersList_MetaData[] = {
		{ "Comment", "// internal list used to implement above\n" },
		{ "ModuleRelativePath", "Public/PropertySets/PolygroupLayersProperties.h" },
		{ "ToolTip", "internal list used to implement above" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveGroupLayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupLayersList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupLayersList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolygroupLayersProperties_GetGroupLayersFunc, "GetGroupLayersFunc" }, // 1189855955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolygroupLayersProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_ActiveGroupLayer = { "ActiveGroupLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolygroupLayersProperties, ActiveGroupLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGroupLayer_MetaData), NewProp_ActiveGroupLayer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList_Inner = { "GroupLayersList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList = { "GroupLayersList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPolygroupLayersProperties, GroupLayersList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupLayersList_MetaData), NewProp_GroupLayersList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolygroupLayersProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_ActiveGroupLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygroupLayersProperties_Statics::NewProp_GroupLayersList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolygroupLayersProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPolygroupLayersProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolygroupLayersProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolygroupLayersProperties_Statics::ClassParams = {
	&UPolygroupLayersProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPolygroupLayersProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPolygroupLayersProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolygroupLayersProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolygroupLayersProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolygroupLayersProperties()
{
	if (!Z_Registration_Info_UClass_UPolygroupLayersProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolygroupLayersProperties.OuterSingleton, Z_Construct_UClass_UPolygroupLayersProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolygroupLayersProperties.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPolygroupLayersProperties>()
{
	return UPolygroupLayersProperties::StaticClass();
}
UPolygroupLayersProperties::UPolygroupLayersProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolygroupLayersProperties);
UPolygroupLayersProperties::~UPolygroupLayersProperties() {}
// End Class UPolygroupLayersProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolygroupLayersProperties, UPolygroupLayersProperties::StaticClass, TEXT("UPolygroupLayersProperties"), &Z_Registration_Info_UClass_UPolygroupLayersProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolygroupLayersProperties), 511338686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_2886665348(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_PolygroupLayersProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
