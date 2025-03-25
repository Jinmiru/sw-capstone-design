// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractor() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingInteractor();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingInteractor_NoRegister();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin Class UClothingInteractor
void UClothingInteractor::StaticRegisterNativesUClothingInteractor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingInteractor);
UClass* Z_Construct_UClass_UClothingInteractor_NoRegister()
{
	return UClothingInteractor::StaticClass();
}
struct Z_Construct_UClass_UClothingInteractor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract class to control clothing specific interaction.\n * Must be cast to the end used clothing simulation object before use.\n */" },
		{ "IncludePath", "ClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Abstract class to control clothing specific interaction.\nMust be cast to the end used clothing simulation object before use." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingInteractor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClothingInteractor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingInteractor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingInteractor_Statics::ClassParams = {
	&UClothingInteractor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingInteractor_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothingInteractor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothingInteractor()
{
	if (!Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton, Z_Construct_UClass_UClothingInteractor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothingInteractor.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingInteractor>()
{
	return UClothingInteractor::StaticClass();
}
UClothingInteractor::UClothingInteractor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingInteractor);
UClothingInteractor::~UClothingInteractor() {}
// End Class UClothingInteractor

// Begin Class UClothingSimulationInteractor Function ClothConfigUpdated
struct Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Called to update the cloth config without restarting the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Called to update the cloth config without restarting the simulation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "ClothConfigUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execClothConfigUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClothConfigUpdated();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function ClothConfigUpdated

// Begin Class UClothingSimulationInteractor Function DisableGravityOverride
struct Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Disable any currently set gravity override. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Disable any currently set gravity override." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "DisableGravityOverride", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execDisableGravityOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGravityOverride();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function DisableGravityOverride

// Begin Class UClothingSimulationInteractor Function EnableGravityOverride
struct Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics
{
	struct ClothingSimulationInteractor_eventEnableGravityOverride_Parms
	{
		FVector InVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set a new gravity override and enable the override. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set a new gravity override and enable the override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventEnableGravityOverride_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVector_MetaData), NewProp_InVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::NewProp_InVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "EnableGravityOverride", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::ClothingSimulationInteractor_eventEnableGravityOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::ClothingSimulationInteractor_eventEnableGravityOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execEnableGravityOverride)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGravityOverride(Z_Param_Out_InVector);
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function EnableGravityOverride

// Begin Class UClothingSimulationInteractor Function GetClothingInteractor
struct Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics
{
	struct ClothingSimulationInteractor_eventGetClothingInteractor_Parms
	{
		FString ClothingAssetName;
		UClothingInteractor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**Return a cloth interactor for this simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return a cloth interactor for this simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothingAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClothingAssetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName = { "ClothingAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetClothingInteractor_Parms, ClothingAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothingAssetName_MetaData), NewProp_ClothingAssetName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetClothingInteractor_Parms, ReturnValue), Z_Construct_UClass_UClothingInteractor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ClothingAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetClothingInteractor", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::ClothingSimulationInteractor_eventGetClothingInteractor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::ClothingSimulationInteractor_eventGetClothingInteractor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execGetClothingInteractor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ClothingAssetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClothingInteractor**)Z_Param__Result=P_THIS->GetClothingInteractor(Z_Param_ClothingAssetName);
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function GetClothingInteractor

// Begin Class UClothingSimulationInteractor Function GetNumCloths
struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics
{
	struct ClothingSimulationInteractor_eventGetNumCloths_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of cloths run by the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of cloths run by the simulation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumCloths_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumCloths", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::ClothingSimulationInteractor_eventGetNumCloths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::ClothingSimulationInteractor_eventGetNumCloths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumCloths)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumCloths();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function GetNumCloths

// Begin Class UClothingSimulationInteractor Function GetNumDynamicParticles
struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics
{
	struct ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of dynamic (simulated) particles. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of dynamic (simulated) particles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumDynamicParticles", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::ClothingSimulationInteractor_eventGetNumDynamicParticles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumDynamicParticles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumDynamicParticles();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function GetNumDynamicParticles

// Begin Class UClothingSimulationInteractor Function GetNumIterations
struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics
{
	struct ClothingSimulationInteractor_eventGetNumIterations_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**\n\x09 * Return the solver number of iterations.\n\x09 * This could be different from the number set if the simulation hasn't updated yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the solver number of iterations.\nThis could be different from the number set if the simulation hasn't updated yet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumIterations_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumIterations", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::ClothingSimulationInteractor_eventGetNumIterations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::ClothingSimulationInteractor_eventGetNumIterations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumIterations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumIterations();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function GetNumIterations

// Begin Class UClothingSimulationInteractor Function GetNumKinematicParticles
struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics
{
	struct ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the number of kinematic (animated) particles. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the number of kinematic (animated) particles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumKinematicParticles", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::ClothingSimulationInteractor_eventGetNumKinematicParticles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumKinematicParticles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumKinematicParticles();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function GetNumKinematicParticles

// Begin Class UClothingSimulationInteractor Function GetNumSubsteps
struct Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics
{
	struct ClothingSimulationInteractor_eventGetNumSubsteps_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/**\n\x09 * Return the solver number of subdivisions./\n\x09 * This could be different from the number set if the simulation hasn't updated yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the solver number of subdivisions./\nThis could be different from the number set if the simulation hasn't updated yet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetNumSubsteps_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetNumSubsteps", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::ClothingSimulationInteractor_eventGetNumSubsteps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::ClothingSimulationInteractor_eventGetNumSubsteps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execGetNumSubsteps)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumSubsteps();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function GetNumSubsteps

// Begin Class UClothingSimulationInteractor Function GetSimulationTime
struct Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics
{
	struct ClothingSimulationInteractor_eventGetSimulationTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Return the instant average simulation time in ms. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Return the instant average simulation time in ms." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventGetSimulationTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "GetSimulationTime", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::ClothingSimulationInteractor_eventGetSimulationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::ClothingSimulationInteractor_eventGetSimulationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execGetSimulationTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSimulationTime();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function GetSimulationTime

// Begin Class UClothingSimulationInteractor Function PhysicsAssetUpdated
struct Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Called to update collision status without restarting the simulation. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Called to update collision status without restarting the simulation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "PhysicsAssetUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execPhysicsAssetUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PhysicsAssetUpdated();
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function PhysicsAssetUpdated

// Begin Class UClothingSimulationInteractor Function SetAnimDriveSpringStiffness
struct Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics
{
	struct ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms
	{
		float InStiffness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the stiffness of the spring force for the animation drive. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the stiffness of the spring force for the animation drive." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStiffness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness = { "InStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms, InStiffness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::NewProp_InStiffness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetAnimDriveSpringStiffness", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::ClothingSimulationInteractor_eventSetAnimDriveSpringStiffness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execSetAnimDriveSpringStiffness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStiffness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimDriveSpringStiffness(Z_Param_InStiffness);
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function SetAnimDriveSpringStiffness

// Begin Class UClothingSimulationInteractor Function SetMaxNumIterations
struct Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics
{
	struct ClothingSimulationInteractor_eventSetMaxNumIterations_Parms
	{
		int32 MaxNumIterations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the maximum number of solver iterations. */" },
		{ "CPP_Default_MaxNumIterations", "10" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the maximum number of solver iterations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumIterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::NewProp_MaxNumIterations = { "MaxNumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetMaxNumIterations_Parms, MaxNumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::NewProp_MaxNumIterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetMaxNumIterations", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::ClothingSimulationInteractor_eventSetMaxNumIterations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::ClothingSimulationInteractor_eventSetMaxNumIterations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execSetMaxNumIterations)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumIterations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxNumIterations(Z_Param_MaxNumIterations);
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function SetMaxNumIterations

// Begin Class UClothingSimulationInteractor Function SetNumIterations
struct Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics
{
	struct ClothingSimulationInteractor_eventSetNumIterations_Parms
	{
		int32 NumIterations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the number of time dependent solver iterations. */" },
		{ "CPP_Default_NumIterations", "1" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the number of time dependent solver iterations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetNumIterations_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::NewProp_NumIterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetNumIterations", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::ClothingSimulationInteractor_eventSetNumIterations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::ClothingSimulationInteractor_eventSetNumIterations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execSetNumIterations)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumIterations(Z_Param_NumIterations);
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function SetNumIterations

// Begin Class UClothingSimulationInteractor Function SetNumSubsteps
struct Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics
{
	struct ClothingSimulationInteractor_eventSetNumSubsteps_Parms
	{
		int32 NumSubsteps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "/** Set the number of substeps or subdivisions. */" },
		{ "CPP_Default_NumSubsteps", "1" },
		{ "Keywords", "Subdivisions" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Set the number of substeps or subdivisions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubsteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::NewProp_NumSubsteps = { "NumSubsteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractor_eventSetNumSubsteps_Parms, NumSubsteps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::NewProp_NumSubsteps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractor, nullptr, "SetNumSubsteps", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::ClothingSimulationInteractor_eventSetNumSubsteps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::ClothingSimulationInteractor_eventSetNumSubsteps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractor::execSetNumSubsteps)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSubsteps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumSubsteps(Z_Param_NumSubsteps);
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractor Function SetNumSubsteps

// Begin Class UClothingSimulationInteractor
void UClothingSimulationInteractor::StaticRegisterNativesUClothingSimulationInteractor()
{
	UClass* Class = UClothingSimulationInteractor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClothConfigUpdated", &UClothingSimulationInteractor::execClothConfigUpdated },
		{ "DisableGravityOverride", &UClothingSimulationInteractor::execDisableGravityOverride },
		{ "EnableGravityOverride", &UClothingSimulationInteractor::execEnableGravityOverride },
		{ "GetClothingInteractor", &UClothingSimulationInteractor::execGetClothingInteractor },
		{ "GetNumCloths", &UClothingSimulationInteractor::execGetNumCloths },
		{ "GetNumDynamicParticles", &UClothingSimulationInteractor::execGetNumDynamicParticles },
		{ "GetNumIterations", &UClothingSimulationInteractor::execGetNumIterations },
		{ "GetNumKinematicParticles", &UClothingSimulationInteractor::execGetNumKinematicParticles },
		{ "GetNumSubsteps", &UClothingSimulationInteractor::execGetNumSubsteps },
		{ "GetSimulationTime", &UClothingSimulationInteractor::execGetSimulationTime },
		{ "PhysicsAssetUpdated", &UClothingSimulationInteractor::execPhysicsAssetUpdated },
		{ "SetAnimDriveSpringStiffness", &UClothingSimulationInteractor::execSetAnimDriveSpringStiffness },
		{ "SetMaxNumIterations", &UClothingSimulationInteractor::execSetMaxNumIterations },
		{ "SetNumIterations", &UClothingSimulationInteractor::execSetNumIterations },
		{ "SetNumSubsteps", &UClothingSimulationInteractor::execSetNumSubsteps },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingSimulationInteractor);
UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister()
{
	return UClothingSimulationInteractor::StaticClass();
}
struct Z_Construct_UClass_UClothingSimulationInteractor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * If a clothing simulation is able to be interacted with at runtime then a derived\n * interactor should be created, and at least the basic API implemented for that\n * simulation.\n * Only write to the simulation and context during the call to Sync, as that is\n * guaranteed to be a safe place to access this data.\n */" },
		{ "IncludePath", "ClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "If a clothing simulation is able to be interacted with at runtime then a derived\ninteractor should be created, and at least the basic API implemented for that\nsimulation.\nOnly write to the simulation and context during the call to Sync, as that is\nguaranteed to be a safe place to access this data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothingInteractors_MetaData[] = {
		{ "Comment", "/** Cloth interactors currently created. */" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractor.h" },
		{ "ToolTip", "Cloth interactors currently created." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothingInteractors_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClothingInteractors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClothingInteractors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_ClothConfigUpdated, "ClothConfigUpdated" }, // 197497844
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_DisableGravityOverride, "DisableGravityOverride" }, // 4283760066
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_EnableGravityOverride, "EnableGravityOverride" }, // 678428908
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetClothingInteractor, "GetClothingInteractor" }, // 2582742456
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumCloths, "GetNumCloths" }, // 1470622416
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumDynamicParticles, "GetNumDynamicParticles" }, // 3432240724
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumIterations, "GetNumIterations" }, // 236337192
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumKinematicParticles, "GetNumKinematicParticles" }, // 3221323549
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetNumSubsteps, "GetNumSubsteps" }, // 1314311884
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_GetSimulationTime, "GetSimulationTime" }, // 288697236
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_PhysicsAssetUpdated, "PhysicsAssetUpdated" }, // 745400308
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetAnimDriveSpringStiffness, "SetAnimDriveSpringStiffness" }, // 37001321
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetMaxNumIterations, "SetMaxNumIterations" }, // 336583589
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetNumIterations, "SetNumIterations" }, // 885492641
		{ &Z_Construct_UFunction_UClothingSimulationInteractor_SetNumSubsteps, "SetNumSubsteps" }, // 3044990508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationInteractor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_ValueProp = { "ClothingInteractors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClothingInteractor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_Key_KeyProp = { "ClothingInteractors_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors = { "ClothingInteractors", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothingSimulationInteractor, ClothingInteractors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothingInteractors_MetaData), NewProp_ClothingInteractors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingSimulationInteractor_Statics::NewProp_ClothingInteractors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClothingSimulationInteractor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams = {
	&UClothingSimulationInteractor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothingSimulationInteractor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothingSimulationInteractor()
{
	if (!Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton, Z_Construct_UClass_UClothingSimulationInteractor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothingSimulationInteractor.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingSimulationInteractor>()
{
	return UClothingSimulationInteractor::StaticClass();
}
UClothingSimulationInteractor::UClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractor);
UClothingSimulationInteractor::~UClothingSimulationInteractor() {}
// End Class UClothingSimulationInteractor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothingInteractor, UClothingInteractor::StaticClass, TEXT("UClothingInteractor"), &Z_Registration_Info_UClass_UClothingInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingInteractor), 911196287U) },
		{ Z_Construct_UClass_UClothingSimulationInteractor, UClothingSimulationInteractor::StaticClass, TEXT("UClothingSimulationInteractor"), &Z_Registration_Info_UClass_UClothingSimulationInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingSimulationInteractor), 4267742385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_86447605(TEXT("/Script/ClothingSystemRuntimeInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationInteractor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
