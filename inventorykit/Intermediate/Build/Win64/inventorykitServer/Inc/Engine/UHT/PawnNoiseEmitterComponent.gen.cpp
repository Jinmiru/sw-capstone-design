// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/PawnNoiseEmitterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnNoiseEmitterComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent();
ENGINE_API UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPawnNoiseEmitterComponent Function MakeNoise
struct Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics
{
	struct PawnNoiseEmitterComponent_eventMakeNoise_Parms
	{
		AActor* NoiseMaker;
		float Loudness;
		FVector NoiseLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Components|PawnNoiseEmitter" },
		{ "Comment", "/** Cache noises instigated by the owning pawn for AI sensing \n\x09  *  @param NoiseMaker - is the actual actor which made the noise\n\x09  *  @param Loudness - is the relative loudness of the noise (0.0 to 1.0)\n\x09  *  @param NoiseLocation - is the position of the noise\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Cache noises instigated by the owning pawn for AI sensing\n@param NoiseMaker - is the actual actor which made the noise\n@param Loudness - is the relative loudness of the noise (0.0 to 1.0)\n@param NoiseLocation - is the position of the noise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseMaker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseMaker = { "NoiseMaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, NoiseMaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, Loudness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnNoiseEmitterComponent_eventMakeNoise_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseLocation_MetaData), NewProp_NoiseLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseMaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_Loudness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::NewProp_NoiseLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnNoiseEmitterComponent, nullptr, "MakeNoise", nullptr, nullptr, Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PawnNoiseEmitterComponent_eventMakeNoise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20406, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::PawnNoiseEmitterComponent_eventMakeNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnNoiseEmitterComponent::execMakeNoise)
{
	P_GET_OBJECT(AActor,Z_Param_NoiseMaker);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Loudness);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NoiseLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeNoise(Z_Param_NoiseMaker,Z_Param_Loudness,Z_Param_Out_NoiseLocation);
	P_NATIVE_END;
}
// End Class UPawnNoiseEmitterComponent Function MakeNoise

// Begin Class UPawnNoiseEmitterComponent
void UPawnNoiseEmitterComponent::StaticRegisterNativesUPawnNoiseEmitterComponent()
{
	UClass* Class = UPawnNoiseEmitterComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeNoise", &UPawnNoiseEmitterComponent::execMakeNoise },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnNoiseEmitterComponent);
UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister()
{
	return UPawnNoiseEmitterComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * PawnNoiseEmitterComponent tracks noise event data used by SensingComponents to hear a Pawn.\n * This component is intended to exist on either a Pawn or its Controller. It does nothing on network clients.\n */" },
		{ "IncludePath", "Components/PawnNoiseEmitterComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "PawnNoiseEmitterComponent tracks noise event data used by SensingComponents to hear a Pawn.\nThis component is intended to exist on either a Pawn or its Controller. It does nothing on network clients." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAIPerceptionSystemCompatibilityMode_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "// If set to true (default value) will notify AIPerceptionSystem about noise events\n// otherwise only PawnSensingComponents will be able to pick up noises generated by this component\n" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "If set to true (default value) will notify AIPerceptionSystem about noise events\notherwise only PawnSensingComponents will be able to pick up noises generated by this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoisePosition_MetaData[] = {
		{ "Comment", "// Most recent noise made by this pawn not at its own location\n" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Most recent noise made by this pawn not at its own location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseLifetime_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "// After this amount of time, new sound events will overwrite previous sounds even if they are not louder (allows old sounds to decay)\n" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "After this amount of time, new sound events will overwrite previous sounds even if they are not louder (allows old sounds to decay)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoiseVolume_MetaData[] = {
		{ "Comment", "// Most recent volume of noise made by this pawn not at its own location\n" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Most recent volume of noise made by this pawn not at its own location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRemoteNoiseTime_MetaData[] = {
		{ "Comment", "// Time of last remote noise update\n" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Time of last remote noise update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLocalNoiseVolume_MetaData[] = {
		{ "Comment", "// Most recent noise made by this pawn at its own location\n" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Most recent noise made by this pawn at its own location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLocalNoiseTime_MetaData[] = {
		{ "Comment", "// Time of last local noise update\n" },
		{ "ModuleRelativePath", "Classes/Components/PawnNoiseEmitterComponent.h" },
		{ "ToolTip", "Time of last local noise update" },
	};
#endif // WITH_METADATA
	static void NewProp_bAIPerceptionSystemCompatibilityMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAIPerceptionSystemCompatibilityMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastRemoteNoisePosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseLifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastRemoteNoiseVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastRemoteNoiseTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastLocalNoiseVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastLocalNoiseTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnNoiseEmitterComponent_MakeNoise, "MakeNoise" }, // 1060048209
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnNoiseEmitterComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode_SetBit(void* Obj)
{
	((UPawnNoiseEmitterComponent*)Obj)->bAIPerceptionSystemCompatibilityMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode = { "bAIPerceptionSystemCompatibilityMode", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPawnNoiseEmitterComponent), &Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAIPerceptionSystemCompatibilityMode_MetaData), NewProp_bAIPerceptionSystemCompatibilityMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoisePosition = { "LastRemoteNoisePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoisePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRemoteNoisePosition_MetaData), NewProp_LastRemoteNoisePosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_NoiseLifetime = { "NoiseLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, NoiseLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseLifetime_MetaData), NewProp_NoiseLifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseVolume = { "LastRemoteNoiseVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoiseVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRemoteNoiseVolume_MetaData), NewProp_LastRemoteNoiseVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseTime = { "LastRemoteNoiseTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastRemoteNoiseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRemoteNoiseTime_MetaData), NewProp_LastRemoteNoiseTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseVolume = { "LastLocalNoiseVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastLocalNoiseVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLocalNoiseVolume_MetaData), NewProp_LastLocalNoiseVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseTime = { "LastLocalNoiseTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnNoiseEmitterComponent, LastLocalNoiseTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLocalNoiseTime_MetaData), NewProp_LastLocalNoiseTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_bAIPerceptionSystemCompatibilityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoisePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_NoiseLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastRemoteNoiseTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::NewProp_LastLocalNoiseTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::ClassParams = {
	&UPawnNoiseEmitterComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnNoiseEmitterComponent()
{
	if (!Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.OuterSingleton, Z_Construct_UClass_UPawnNoiseEmitterComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnNoiseEmitterComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPawnNoiseEmitterComponent>()
{
	return UPawnNoiseEmitterComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnNoiseEmitterComponent);
UPawnNoiseEmitterComponent::~UPawnNoiseEmitterComponent() {}
// End Class UPawnNoiseEmitterComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnNoiseEmitterComponent, UPawnNoiseEmitterComponent::StaticClass, TEXT("UPawnNoiseEmitterComponent"), &Z_Registration_Info_UClass_UPawnNoiseEmitterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnNoiseEmitterComponent), 2258672649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_3026949566(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_PawnNoiseEmitterComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
