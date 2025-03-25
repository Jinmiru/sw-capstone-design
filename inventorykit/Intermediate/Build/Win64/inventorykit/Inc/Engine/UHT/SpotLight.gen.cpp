// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SpotLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLight() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ALight();
ENGINE_API UClass* Z_Construct_UClass_ASpotLight();
ENGINE_API UClass* Z_Construct_UClass_ASpotLight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ASpotLight Function SetInnerConeAngle
struct Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics
{
	struct SpotLight_eventSetInnerConeAngle_Parms
	{
		float NewInnerConeAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewInnerConeAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle = { "NewInnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpotLight_eventSetInnerConeAngle_Parms, NewInnerConeAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotLight, nullptr, "SetInnerConeAngle", nullptr, nullptr, Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::SpotLight_eventSetInnerConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::SpotLight_eventSetInnerConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpotLight_SetInnerConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpotLight::execSetInnerConeAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewInnerConeAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInnerConeAngle(Z_Param_NewInnerConeAngle);
	P_NATIVE_END;
}
// End Class ASpotLight Function SetInnerConeAngle

// Begin Class ASpotLight Function SetOuterConeAngle
struct Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics
{
	struct SpotLight_eventSetOuterConeAngle_Parms
	{
		float NewOuterConeAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOuterConeAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle = { "NewOuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpotLight_eventSetOuterConeAngle_Parms, NewOuterConeAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotLight, nullptr, "SetOuterConeAngle", nullptr, nullptr, Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::SpotLight_eventSetOuterConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::SpotLight_eventSetOuterConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpotLight_SetOuterConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpotLight::execSetOuterConeAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewOuterConeAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOuterConeAngle(Z_Param_NewOuterConeAngle);
	P_NATIVE_END;
}
// End Class ASpotLight Function SetOuterConeAngle

// Begin Class ASpotLight
void ASpotLight::StaticRegisterNativesASpotLight()
{
	UClass* Class = ASpotLight::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetInnerConeAngle", &ASpotLight::execSetInnerConeAngle },
		{ "SetOuterConeAngle", &ASpotLight::execSetOuterConeAngle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpotLight);
UClass* Z_Construct_UClass_ASpotLight_NoRegister()
{
	return ASpotLight::StaticClass();
}
struct Z_Construct_UClass_ASpotLight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights SpotLights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SpotLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "SpotLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLightComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpotLight_SetInnerConeAngle, "SetInnerConeAngle" }, // 3307315033
		{ &Z_Construct_UFunction_ASpotLight_SetOuterConeAngle, "SetOuterConeAngle" }, // 3143108861
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpotLight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent = { "SpotLightComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpotLight, SpotLightComponent), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLightComponent_MetaData), NewProp_SpotLightComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpotLight, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpotLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpotLight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALight,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpotLight_Statics::ClassParams = {
	&ASpotLight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpotLight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpotLight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpotLight()
{
	if (!Z_Registration_Info_UClass_ASpotLight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpotLight.OuterSingleton, Z_Construct_UClass_ASpotLight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpotLight.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ASpotLight>()
{
	return ASpotLight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpotLight);
ASpotLight::~ASpotLight() {}
// End Class ASpotLight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpotLight, ASpotLight::StaticClass, TEXT("ASpotLight"), &Z_Registration_Info_UClass_ASpotLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpotLight), 2224795830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_2725369753(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
