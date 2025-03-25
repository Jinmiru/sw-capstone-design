// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/Properties/MeshUVChannelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshUVChannelProperties() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UMeshUVChannelProperties Function GetUVChannelNamesFunc
struct Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics
{
	struct MeshUVChannelProperties_eventGetUVChannelNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/MeshUVChannelProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshUVChannelProperties_eventGetUVChannelNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshUVChannelProperties, nullptr, "GetUVChannelNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::MeshUVChannelProperties_eventGetUVChannelNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::MeshUVChannelProperties_eventGetUVChannelNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshUVChannelProperties::execGetUVChannelNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVChannelNamesFunc();
	P_NATIVE_END;
}
// End Class UMeshUVChannelProperties Function GetUVChannelNamesFunc

// Begin Class UMeshUVChannelProperties
void UMeshUVChannelProperties::StaticRegisterNativesUMeshUVChannelProperties()
{
	UClass* Class = UMeshUVChannelProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUVChannelNamesFunc", &UMeshUVChannelProperties::execGetUVChannelNamesFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshUVChannelProperties);
UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister()
{
	return UMeshUVChannelProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshUVChannelProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/MeshUVChannelProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/MeshUVChannelProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[] = {
		{ "Category", "UV Channel" },
		{ "Comment", "/** Select UV channel in the mesh */" },
		{ "DisplayName", "UV Channel" },
		{ "GetOptions", "GetUVChannelNamesFunc" },
		{ "ModuleRelativePath", "Public/Properties/MeshUVChannelProperties.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Select UV channel in the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/MeshUVChannelProperties.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannelNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UVChannelNamesList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshUVChannelProperties_GetUVChannelNamesFunc, "GetUVChannelNamesFunc" }, // 1440924522
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshUVChannelProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshUVChannelProperties, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannel_MetaData), NewProp_UVChannel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList_Inner = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshUVChannelProperties, UVChannelNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelNamesList_MetaData), NewProp_UVChannelNamesList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshUVChannelProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshUVChannelProperties_Statics::NewProp_UVChannelNamesList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshUVChannelProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshUVChannelProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshUVChannelProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshUVChannelProperties_Statics::ClassParams = {
	&UMeshUVChannelProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeshUVChannelProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshUVChannelProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshUVChannelProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshUVChannelProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshUVChannelProperties()
{
	if (!Z_Registration_Info_UClass_UMeshUVChannelProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshUVChannelProperties.OuterSingleton, Z_Construct_UClass_UMeshUVChannelProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshUVChannelProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UMeshUVChannelProperties>()
{
	return UMeshUVChannelProperties::StaticClass();
}
UMeshUVChannelProperties::UMeshUVChannelProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshUVChannelProperties);
UMeshUVChannelProperties::~UMeshUVChannelProperties() {}
// End Class UMeshUVChannelProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshUVChannelProperties, UMeshUVChannelProperties::StaticClass, TEXT("UMeshUVChannelProperties"), &Z_Registration_Info_UClass_UMeshUVChannelProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshUVChannelProperties), 1718533681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_3736157318(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshUVChannelProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
