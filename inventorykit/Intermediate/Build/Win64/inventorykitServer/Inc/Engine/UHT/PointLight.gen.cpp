// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PointLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointLight() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ALight();
ENGINE_API UClass* Z_Construct_UClass_APointLight();
ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class APointLight Function SetLightFalloffExponent
struct Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics
{
	struct PointLight_eventSetLightFalloffExponent_Parms
	{
		float NewLightFalloffExponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLightFalloffExponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::NewProp_NewLightFalloffExponent = { "NewLightFalloffExponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointLight_eventSetLightFalloffExponent_Parms, NewLightFalloffExponent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::NewProp_NewLightFalloffExponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointLight, nullptr, "SetLightFalloffExponent", nullptr, nullptr, Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PointLight_eventSetLightFalloffExponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PointLight_eventSetLightFalloffExponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APointLight_SetLightFalloffExponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APointLight::execSetLightFalloffExponent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightFalloffExponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFalloffExponent(Z_Param_NewLightFalloffExponent);
	P_NATIVE_END;
}
// End Class APointLight Function SetLightFalloffExponent

// Begin Class APointLight Function SetRadius
struct Z_Construct_UFunction_APointLight_SetRadius_Statics
{
	struct PointLight_eventSetRadius_Parms
	{
		float NewRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APointLight_SetRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointLight_eventSetRadius_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointLight_SetRadius_Statics::NewProp_NewRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APointLight_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointLight, nullptr, "SetRadius", nullptr, nullptr, Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_APointLight_SetRadius_Statics::PointLight_eventSetRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_APointLight_SetRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APointLight_SetRadius_Statics::PointLight_eventSetRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APointLight_SetRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APointLight_SetRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APointLight::execSetRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRadius(Z_Param_NewRadius);
	P_NATIVE_END;
}
// End Class APointLight Function SetRadius

// Begin Class APointLight
void APointLight::StaticRegisterNativesAPointLight()
{
	UClass* Class = APointLight::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetLightFalloffExponent", &APointLight::execSetLightFalloffExponent },
		{ "SetRadius", &APointLight::execSetRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointLight);
UClass* Z_Construct_UClass_APointLight_NoRegister()
{
	return APointLight::StaticClass();
}
struct Z_Construct_UClass_APointLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights PointLights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/PointLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "PointLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLightComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APointLight_SetLightFalloffExponent, "SetLightFalloffExponent" }, // 308146704
		{ &Z_Construct_UFunction_APointLight_SetRadius, "SetRadius" }, // 2725514483
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointLight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent = { "PointLightComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APointLight, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLightComponent_MetaData), NewProp_PointLightComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APointLight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALight,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APointLight_Statics::ClassParams = {
	&APointLight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APointLight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::Class_MetaDataParams), Z_Construct_UClass_APointLight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APointLight()
{
	if (!Z_Registration_Info_UClass_APointLight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointLight.OuterSingleton, Z_Construct_UClass_APointLight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APointLight.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APointLight>()
{
	return APointLight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APointLight);
APointLight::~APointLight() {}
// End Class APointLight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APointLight, APointLight::StaticClass, TEXT("APointLight"), &Z_Registration_Info_UClass_APointLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointLight), 2873825778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_206270633(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
