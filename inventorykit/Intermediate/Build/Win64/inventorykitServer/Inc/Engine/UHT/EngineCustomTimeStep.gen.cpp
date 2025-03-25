// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineCustomTimeStep() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep();
ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ECustomTimeStepSynchronizationState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState;
static UEnum* ECustomTimeStepSynchronizationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECustomTimeStepSynchronizationState"));
	}
	return Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECustomTimeStepSynchronizationState>()
{
	return ECustomTimeStepSynchronizationState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Closed.Comment", "/** CustomTimeStep has not been initialized or has been shutdown. */" },
		{ "Closed.Name", "ECustomTimeStepSynchronizationState::Closed" },
		{ "Closed.ToolTip", "CustomTimeStep has not been initialized or has been shutdown." },
		{ "Comment", "/**\n * Possible states of CustomTimeStep.\n */" },
		{ "Error.Comment", "/** CustomTimeStep error occurred during Synchronization. */" },
		{ "Error.Name", "ECustomTimeStepSynchronizationState::Error" },
		{ "Error.ToolTip", "CustomTimeStep error occurred during Synchronization." },
		{ "ModuleRelativePath", "Classes/Engine/EngineCustomTimeStep.h" },
		{ "Synchronized.Comment", "/** CustomTimeStep is currently synchronized with the source. */" },
		{ "Synchronized.Name", "ECustomTimeStepSynchronizationState::Synchronized" },
		{ "Synchronized.ToolTip", "CustomTimeStep is currently synchronized with the source." },
		{ "Synchronizing.Comment", "/** CustomTimeStep is initialized and being prepared for synchronization. */" },
		{ "Synchronizing.Name", "ECustomTimeStepSynchronizationState::Synchronizing" },
		{ "Synchronizing.ToolTip", "CustomTimeStep is initialized and being prepared for synchronization." },
		{ "ToolTip", "Possible states of CustomTimeStep." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomTimeStepSynchronizationState::Closed", (int64)ECustomTimeStepSynchronizationState::Closed },
		{ "ECustomTimeStepSynchronizationState::Error", (int64)ECustomTimeStepSynchronizationState::Error },
		{ "ECustomTimeStepSynchronizationState::Synchronized", (int64)ECustomTimeStepSynchronizationState::Synchronized },
		{ "ECustomTimeStepSynchronizationState::Synchronizing", (int64)ECustomTimeStepSynchronizationState::Synchronizing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECustomTimeStepSynchronizationState",
	"ECustomTimeStepSynchronizationState",
	Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState()
{
	if (!Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.InnerSingleton, Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.InnerSingleton;
}
// End Enum ECustomTimeStepSynchronizationState

// Begin Class UEngineCustomTimeStep
void UEngineCustomTimeStep::StaticRegisterNativesUEngineCustomTimeStep()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineCustomTimeStep);
UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister()
{
	return UEngineCustomTimeStep::StaticClass();
}
struct Z_Construct_UClass_UEngineCustomTimeStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A CustomTimeStep control the Engine Framerate/Timestep.\n * This will update the FApp::CurrentTime/FApp::DeltaTime.\n * This is useful when you want the engine to be synchronized with an external clock (genlock).\n */" },
		{ "IncludePath", "Engine/EngineCustomTimeStep.h" },
		{ "ModuleRelativePath", "Classes/Engine/EngineCustomTimeStep.h" },
		{ "ToolTip", "A CustomTimeStep control the Engine Framerate/Timestep.\nThis will update the FApp::CurrentTime/FApp::DeltaTime.\nThis is useful when you want the engine to be synchronized with an external clock (genlock)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineCustomTimeStep>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEngineCustomTimeStep_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineCustomTimeStep_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineCustomTimeStep_Statics::ClassParams = {
	&UEngineCustomTimeStep::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineCustomTimeStep_Statics::Class_MetaDataParams), Z_Construct_UClass_UEngineCustomTimeStep_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEngineCustomTimeStep()
{
	if (!Z_Registration_Info_UClass_UEngineCustomTimeStep.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineCustomTimeStep.OuterSingleton, Z_Construct_UClass_UEngineCustomTimeStep_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEngineCustomTimeStep.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEngineCustomTimeStep>()
{
	return UEngineCustomTimeStep::StaticClass();
}
UEngineCustomTimeStep::UEngineCustomTimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineCustomTimeStep);
UEngineCustomTimeStep::~UEngineCustomTimeStep() {}
// End Class UEngineCustomTimeStep

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomTimeStepSynchronizationState_StaticEnum, TEXT("ECustomTimeStepSynchronizationState"), &Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3533345321U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEngineCustomTimeStep, UEngineCustomTimeStep::StaticClass, TEXT("UEngineCustomTimeStep"), &Z_Registration_Info_UClass_UEngineCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineCustomTimeStep), 179299982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_94624252(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
