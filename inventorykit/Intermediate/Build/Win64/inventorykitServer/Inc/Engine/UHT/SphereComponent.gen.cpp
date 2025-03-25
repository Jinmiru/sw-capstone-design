// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USphereComponent Function GetScaledSphereRadius
struct Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics
{
	struct SphereComponent_eventGetScaledSphereRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "Comment", "// @return the radius of the sphere, with component scale applied.\n" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "@return the radius of the sphere, with component scale applied." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SphereComponent_eventGetScaledSphereRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, nullptr, "GetScaledSphereRadius", nullptr, nullptr, Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::SphereComponent_eventGetScaledSphereRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::SphereComponent_eventGetScaledSphereRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USphereComponent::execGetScaledSphereRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScaledSphereRadius();
	P_NATIVE_END;
}
// End Class USphereComponent Function GetScaledSphereRadius

// Begin Class USphereComponent Function GetShapeScale
struct Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics
{
	struct SphereComponent_eventGetShapeScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "Comment", "// Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n// @return the scale used by this shape.\n" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n@return the scale used by this shape." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SphereComponent_eventGetShapeScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, nullptr, "GetShapeScale", nullptr, nullptr, Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::SphereComponent_eventGetShapeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::SphereComponent_eventGetShapeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USphereComponent_GetShapeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USphereComponent::execGetShapeScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShapeScale();
	P_NATIVE_END;
}
// End Class USphereComponent Function GetShapeScale

// Begin Class USphereComponent Function GetUnscaledSphereRadius
struct Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics
{
	struct SphereComponent_eventGetUnscaledSphereRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "Comment", "// @return the radius of the sphere, ignoring component scale.\n" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "@return the radius of the sphere, ignoring component scale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SphereComponent_eventGetUnscaledSphereRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, nullptr, "GetUnscaledSphereRadius", nullptr, nullptr, Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::SphereComponent_eventGetUnscaledSphereRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::SphereComponent_eventGetUnscaledSphereRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USphereComponent::execGetUnscaledSphereRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUnscaledSphereRadius();
	P_NATIVE_END;
}
// End Class USphereComponent Function GetUnscaledSphereRadius

// Begin Class USphereComponent Function SetSphereRadius
struct Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics
{
	struct SphereComponent_eventSetSphereRadius_Parms
	{
		float InSphereRadius;
		bool bUpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "Comment", "/**\n\x09 * Change the sphere radius. This is the unscaled radius, before component scale is applied.\n\x09 * @param\x09InSphereRadius: the new sphere radius\n\x09 * @param\x09""bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor.\n\x09 */" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "Change the sphere radius. This is the unscaled radius, before component scale is applied.\n@param       InSphereRadius: the new sphere radius\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSphereRadius;
	static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_InSphereRadius = { "InSphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SphereComponent_eventSetSphereRadius_Parms, InSphereRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
{
	((SphereComponent_eventSetSphereRadius_Parms*)Obj)->bUpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SphereComponent_eventSetSphereRadius_Parms), &Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_InSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, nullptr, "SetSphereRadius", nullptr, nullptr, Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::SphereComponent_eventSetSphereRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::SphereComponent_eventSetSphereRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USphereComponent_SetSphereRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USphereComponent::execSetSphereRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSphereRadius);
	P_GET_UBOOL(Z_Param_bUpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSphereRadius(Z_Param_InSphereRadius,Z_Param_bUpdateOverlaps);
	P_NATIVE_END;
}
// End Class USphereComponent Function SetSphereRadius

// Begin Class USphereComponent
void USphereComponent::StaticRegisterNativesUSphereComponent()
{
	UClass* Class = USphereComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScaledSphereRadius", &USphereComponent::execGetScaledSphereRadius },
		{ "GetShapeScale", &USphereComponent::execGetShapeScale },
		{ "GetUnscaledSphereRadius", &USphereComponent::execGetUnscaledSphereRadius },
		{ "SetSphereRadius", &USphereComponent::execSetSphereRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphereComponent);
UClass* Z_Construct_UClass_USphereComponent_NoRegister()
{
	return USphereComponent::StaticClass();
}
struct Z_Construct_UClass_USphereComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "Comment", "/** \n * A sphere generally used for simple collision. Bounds are rendered as lines in the editor.\n */" },
		{ "DisplayName", "Sphere Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/SphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "A sphere generally used for simple collision. Bounds are rendered as lines in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** The radius of the sphere **/" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "The radius of the sphere *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius, "GetScaledSphereRadius" }, // 4020693207
		{ &Z_Construct_UFunction_USphereComponent_GetShapeScale, "GetShapeScale" }, // 33580803
		{ &Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius, "GetUnscaledSphereRadius" }, // 3339483080
		{ &Z_Construct_UFunction_USphereComponent_SetSphereRadius, "SetSphereRadius" }, // 3841578102
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x002008000000001d, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USphereComponent, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USphereComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UShapeComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USphereComponent_Statics::ClassParams = {
	&USphereComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USphereComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USphereComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USphereComponent()
{
	if (!Z_Registration_Info_UClass_USphereComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphereComponent.OuterSingleton, Z_Construct_UClass_USphereComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USphereComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USphereComponent>()
{
	return USphereComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USphereComponent);
USphereComponent::~USphereComponent() {}
// End Class USphereComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USphereComponent, USphereComponent::StaticClass, TEXT("USphereComponent"), &Z_Registration_Info_UClass_USphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphereComponent), 4087254311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_1212419515(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SphereComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
