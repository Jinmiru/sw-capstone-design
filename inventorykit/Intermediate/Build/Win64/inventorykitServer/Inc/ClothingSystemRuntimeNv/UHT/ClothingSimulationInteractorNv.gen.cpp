// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeNv/Public/ClothingSimulationInteractorNv.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractorNv() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv();
CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
// End Cross Module References

// Begin Class UClothingSimulationInteractorNv Function SetAnimDriveDamperStiffness
struct Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics
{
	struct ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms
	{
		float InStiffness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "// Set the stiffness of the resistive damping force for anim drive\n" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
		{ "ToolTip", "Set the stiffness of the resistive damping force for anim drive" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStiffness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::NewProp_InStiffness = { "InStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms, InStiffness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::NewProp_InStiffness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, nullptr, "SetAnimDriveDamperStiffness", nullptr, nullptr, Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UClothingSimulationInteractorNv::execSetAnimDriveDamperStiffness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStiffness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimDriveDamperStiffness(Z_Param_InStiffness);
	P_NATIVE_END;
}
// End Class UClothingSimulationInteractorNv Function SetAnimDriveDamperStiffness

// Begin Class UClothingSimulationInteractorNv
void UClothingSimulationInteractorNv::StaticRegisterNativesUClothingSimulationInteractorNv()
{
	UClass* Class = UClothingSimulationInteractorNv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAnimDriveDamperStiffness", &UClothingSimulationInteractorNv::execSetAnimDriveDamperStiffness },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingSimulationInteractorNv);
UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister()
{
	return UClothingSimulationInteractorNv::StaticClass();
}
struct Z_Construct_UClass_UClothingSimulationInteractorNv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClothingSimulationInteractorNv.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness, "SetAnimDriveDamperStiffness" }, // 1490071214
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationInteractorNv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClothingSimulationInteractor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::ClassParams = {
	&UClothingSimulationInteractorNv::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothingSimulationInteractorNv()
{
	if (!Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton, Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothingSimulationInteractorNv>()
{
	return UClothingSimulationInteractorNv::StaticClass();
}
UClothingSimulationInteractorNv::UClothingSimulationInteractorNv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractorNv);
UClothingSimulationInteractorNv::~UClothingSimulationInteractorNv() {}
// End Class UClothingSimulationInteractorNv

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothingSimulationInteractorNv, UClothingSimulationInteractorNv::StaticClass, TEXT("UClothingSimulationInteractorNv"), &Z_Registration_Info_UClass_UClothingSimulationInteractorNv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingSimulationInteractorNv), 2792723607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_3856898364(TEXT("/Script/ClothingSystemRuntimeNv"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
