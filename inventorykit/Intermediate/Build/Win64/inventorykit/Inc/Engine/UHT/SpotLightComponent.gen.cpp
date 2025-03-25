// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLightComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent();
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USpotLightComponent Function SetInnerConeAngle
struct Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics
{
	struct SpotLightComponent_eventSetInnerConeAngle_Parms
	{
		float NewInnerConeAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewInnerConeAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle = { "NewInnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpotLightComponent_eventSetInnerConeAngle_Parms, NewInnerConeAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpotLightComponent, nullptr, "SetInnerConeAngle", nullptr, nullptr, Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::SpotLightComponent_eventSetInnerConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::SpotLightComponent_eventSetInnerConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpotLightComponent::execSetInnerConeAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewInnerConeAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInnerConeAngle(Z_Param_NewInnerConeAngle);
	P_NATIVE_END;
}
// End Class USpotLightComponent Function SetInnerConeAngle

// Begin Class USpotLightComponent Function SetOuterConeAngle
struct Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics
{
	struct SpotLightComponent_eventSetOuterConeAngle_Parms
	{
		float NewOuterConeAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOuterConeAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle = { "NewOuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpotLightComponent_eventSetOuterConeAngle_Parms, NewOuterConeAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpotLightComponent, nullptr, "SetOuterConeAngle", nullptr, nullptr, Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::SpotLightComponent_eventSetOuterConeAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::SpotLightComponent_eventSetOuterConeAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpotLightComponent::execSetOuterConeAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewOuterConeAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOuterConeAngle(Z_Param_NewOuterConeAngle);
	P_NATIVE_END;
}
// End Class USpotLightComponent Function SetOuterConeAngle

// Begin Class USpotLightComponent
void USpotLightComponent::StaticRegisterNativesUSpotLightComponent()
{
	UClass* Class = USpotLightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetInnerConeAngle", &USpotLightComponent::execSetInnerConeAngle },
		{ "SetOuterConeAngle", &USpotLightComponent::execSetOuterConeAngle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpotLightComponent);
UClass* Z_Construct_UClass_USpotLightComponent_NoRegister()
{
	return USpotLightComponent::StaticClass();
}
struct Z_Construct_UClass_USpotLightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "Comment", "/**\n * A spot light component emits a directional cone shaped light (Eg a Torch).\n */" },
		{ "HideCategories", "Object Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SpotLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ToolTip", "A spot light component emits a directional cone shaped light (Eg a Torch)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Degrees. */" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Degrees." },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Degrees. */" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Degrees." },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle, "SetInnerConeAngle" }, // 3057791943
		{ &Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle, "SetOuterConeAngle" }, // 393616766
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpotLightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpotLightComponent, InnerConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerConeAngle_MetaData), NewProp_InnerConeAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpotLightComponent, OuterConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterConeAngle_MetaData), NewProp_OuterConeAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpotLightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpotLightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPointLightComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpotLightComponent_Statics::ClassParams = {
	&USpotLightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpotLightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpotLightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpotLightComponent()
{
	if (!Z_Registration_Info_UClass_USpotLightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpotLightComponent.OuterSingleton, Z_Construct_UClass_USpotLightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpotLightComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USpotLightComponent>()
{
	return USpotLightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpotLightComponent);
USpotLightComponent::~USpotLightComponent() {}
// End Class USpotLightComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpotLightComponent, USpotLightComponent::StaticClass, TEXT("USpotLightComponent"), &Z_Registration_Info_UClass_USpotLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpotLightComponent), 3686931290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_2932666961(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
