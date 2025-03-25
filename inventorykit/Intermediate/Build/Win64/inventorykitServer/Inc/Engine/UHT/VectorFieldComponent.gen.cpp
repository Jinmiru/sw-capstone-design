// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/VectorFieldComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent();
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVectorFieldComponent Function SetIntensity
struct Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics
{
	struct VectorFieldComponent_eventSetIntensity_Parms
	{
		float NewIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|VectorField" },
		{ "Comment", "/**\n\x09 * Set the intensity of the vector field.\n\x09 * @param NewIntensity - The new intensity of the vector field.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "Set the intensity of the vector field.\n@param NewIntensity - The new intensity of the vector field." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VectorFieldComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::NewProp_NewIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorFieldComponent, nullptr, "SetIntensity", nullptr, nullptr, Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::VectorFieldComponent_eventSetIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::VectorFieldComponent_eventSetIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVectorFieldComponent_SetIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVectorFieldComponent::execSetIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntensity(Z_Param_NewIntensity);
	P_NATIVE_END;
}
// End Class UVectorFieldComponent Function SetIntensity

// Begin Class UVectorFieldComponent
void UVectorFieldComponent::StaticRegisterNativesUVectorFieldComponent()
{
	UClass* Class = UVectorFieldComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetIntensity", &UVectorFieldComponent::execSetIntensity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorFieldComponent);
UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister()
{
	return UVectorFieldComponent::StaticClass();
}
struct Z_Construct_UClass_UVectorFieldComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A Component referencing a vector field.\n */" },
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/VectorFieldComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "A Component referencing a vector field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorField_MetaData[] = {
		{ "Category", "VectorFieldComponent" },
		{ "Comment", "/** The vector field asset. */" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "The vector field asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "VectorFieldComponent" },
		{ "Comment", "/** The intensity at which the vector field is applied. */" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "The intensity at which the vector field is applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[] = {
		{ "Category", "VectorFieldComponent" },
		{ "Comment", "/** How tightly particles follow the vector field. */" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "How tightly particles follow the vector field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewVectorField_MetaData[] = {
		{ "Comment", "/** If true, the vector field is only used for preview visualizations. */" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "If true, the vector field is only used for preview visualizations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VectorField;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tightness;
	static void NewProp_bPreviewVectorField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewVectorField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVectorFieldComponent_SetIntensity, "SetIntensity" }, // 956089858
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_VectorField = { "VectorField", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldComponent, VectorField), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorField_MetaData), NewProp_VectorField_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldComponent, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Tightness = { "Tightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldComponent, Tightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tightness_MetaData), NewProp_Tightness_MetaData) };
void Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField_SetBit(void* Obj)
{
	((UVectorFieldComponent*)Obj)->bPreviewVectorField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField = { "bPreviewVectorField", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UVectorFieldComponent), &Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewVectorField_MetaData), NewProp_bPreviewVectorField_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorFieldComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_VectorField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Tightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVectorFieldComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldComponent_Statics::ClassParams = {
	&UVectorFieldComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVectorFieldComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVectorFieldComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVectorFieldComponent()
{
	if (!Z_Registration_Info_UClass_UVectorFieldComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorFieldComponent.OuterSingleton, Z_Construct_UClass_UVectorFieldComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVectorFieldComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVectorFieldComponent>()
{
	return UVectorFieldComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldComponent);
UVectorFieldComponent::~UVectorFieldComponent() {}
// End Class UVectorFieldComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVectorFieldComponent, UVectorFieldComponent::StaticClass, TEXT("UVectorFieldComponent"), &Z_Registration_Info_UClass_UVectorFieldComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorFieldComponent), 1500773493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_3130024818(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
