// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionBlueprintLibrary();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class UGeometryCollectionBlueprintLibrary Function SetISMPoolCustomInstanceData
struct Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics
{
	struct GeometryCollectionBlueprintLibrary_eventSetISMPoolCustomInstanceData_Parms
	{
		UGeometryCollectionComponent* GeometryCollectionComponent;
		int32 CustomDataIndex;
		float CustomDataValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AtomMaterial" },
		{ "Comment", "/** \n\x09 * Set a custom instance data value for all instances associated with a geometry collection. \n\x09 * This assumes that the geometry collection is using a custom instanced renderer.\n\x09 * @param GeometryCollectionComponent\x09The Geometry Collection Component that we want to set custom instance data on.\n\x09 * @param CustomDataIndex\x09The custom instance data slot that we want to set.\n\x09 * @param CustomDataValue\x09The value to set to the custom instance data slot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionBlueprintLibrary.h" },
		{ "ToolTip", "Set a custom instance data value for all instances associated with a geometry collection.\nThis assumes that the geometry collection is using a custom instanced renderer.\n@param GeometryCollectionComponent   The Geometry Collection Component that we want to set custom instance data on.\n@param CustomDataIndex       The custom instance data slot that we want to set.\n@param CustomDataValue       The value to set to the custom instance data slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDataIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomDataValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::NewProp_GeometryCollectionComponent = { "GeometryCollectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionBlueprintLibrary_eventSetISMPoolCustomInstanceData_Parms, GeometryCollectionComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionComponent_MetaData), NewProp_GeometryCollectionComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::NewProp_CustomDataIndex = { "CustomDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionBlueprintLibrary_eventSetISMPoolCustomInstanceData_Parms, CustomDataIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::NewProp_CustomDataValue = { "CustomDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionBlueprintLibrary_eventSetISMPoolCustomInstanceData_Parms, CustomDataValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::NewProp_GeometryCollectionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::NewProp_CustomDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::NewProp_CustomDataValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionBlueprintLibrary, nullptr, "SetISMPoolCustomInstanceData", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::GeometryCollectionBlueprintLibrary_eventSetISMPoolCustomInstanceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::GeometryCollectionBlueprintLibrary_eventSetISMPoolCustomInstanceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionBlueprintLibrary::execSetISMPoolCustomInstanceData)
{
	P_GET_OBJECT(UGeometryCollectionComponent,Z_Param_GeometryCollectionComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_CustomDataIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CustomDataValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGeometryCollectionBlueprintLibrary::SetISMPoolCustomInstanceData(Z_Param_GeometryCollectionComponent,Z_Param_CustomDataIndex,Z_Param_CustomDataValue);
	P_NATIVE_END;
}
// End Class UGeometryCollectionBlueprintLibrary Function SetISMPoolCustomInstanceData

// Begin Class UGeometryCollectionBlueprintLibrary
void UGeometryCollectionBlueprintLibrary::StaticRegisterNativesUGeometryCollectionBlueprintLibrary()
{
	UClass* Class = UGeometryCollectionBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetISMPoolCustomInstanceData", &UGeometryCollectionBlueprintLibrary::execSetISMPoolCustomInstanceData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionBlueprintLibrary);
UClass* Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_NoRegister()
{
	return UGeometryCollectionBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Blueprint library for Geometry Collections. */" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionBlueprintLibrary.h" },
		{ "ScriptName", "GeometryCollectionLibrary" },
		{ "ToolTip", "Blueprint library for Geometry Collections." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryCollectionBlueprintLibrary_SetISMPoolCustomInstanceData, "SetISMPoolCustomInstanceData" }, // 1332811966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics::ClassParams = {
	&UGeometryCollectionBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UGeometryCollectionBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionBlueprintLibrary>()
{
	return UGeometryCollectionBlueprintLibrary::StaticClass();
}
UGeometryCollectionBlueprintLibrary::UGeometryCollectionBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionBlueprintLibrary);
UGeometryCollectionBlueprintLibrary::~UGeometryCollectionBlueprintLibrary() {}
// End Class UGeometryCollectionBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionBlueprintLibrary, UGeometryCollectionBlueprintLibrary::StaticClass, TEXT("UGeometryCollectionBlueprintLibrary"), &Z_Registration_Info_UClass_UGeometryCollectionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionBlueprintLibrary), 2944368852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_213969884(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
