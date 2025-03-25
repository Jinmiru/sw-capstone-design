// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionStimuliSourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionStimuliSourceComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAIPerceptionStimuliSourceComponent Function RegisterForSense
struct Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics
{
	struct AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms
	{
		TSubclassOf<UAISense> SenseClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Registers owning actor as source for specified sense class */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ToolTip", "Registers owning actor as source for specified sense class" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::NewProp_SenseClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, nullptr, "RegisterForSense", nullptr, nullptr, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::AIPerceptionStimuliSourceComponent_eventRegisterForSense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionStimuliSourceComponent::execRegisterForSense)
{
	P_GET_OBJECT(UClass,Z_Param_SenseClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterForSense(Z_Param_SenseClass);
	P_NATIVE_END;
}
// End Class UAIPerceptionStimuliSourceComponent Function RegisterForSense

// Begin Class UAIPerceptionStimuliSourceComponent Function RegisterWithPerceptionSystem
struct Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Registers owning actor as source of stimuli for senses specified in RegisterAsSourceForSenses. \n\x09 *\x09Note that you don't have to do it if bAutoRegisterAsSource == true */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ToolTip", "Registers owning actor as source of stimuli for senses specified in RegisterAsSourceForSenses.\n    Note that you don't have to do it if bAutoRegisterAsSource == true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, nullptr, "RegisterWithPerceptionSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionStimuliSourceComponent::execRegisterWithPerceptionSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterWithPerceptionSystem();
	P_NATIVE_END;
}
// End Class UAIPerceptionStimuliSourceComponent Function RegisterWithPerceptionSystem

// Begin Class UAIPerceptionStimuliSourceComponent Function UnregisterFromPerceptionSystem
struct Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Unregister owning actor from being a source of sense stimuli */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ToolTip", "Unregister owning actor from being a source of sense stimuli" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, nullptr, "UnregisterFromPerceptionSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionStimuliSourceComponent::execUnregisterFromPerceptionSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterFromPerceptionSystem();
	P_NATIVE_END;
}
// End Class UAIPerceptionStimuliSourceComponent Function UnregisterFromPerceptionSystem

// Begin Class UAIPerceptionStimuliSourceComponent Function UnregisterFromSense
struct Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics
{
	struct AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms
	{
		TSubclassOf<UAISense> SenseClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Unregisters owning actor from sources list of a specified sense class */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ToolTip", "Unregisters owning actor from sources list of a specified sense class" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::NewProp_SenseClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, nullptr, "UnregisterFromSense", nullptr, nullptr, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::AIPerceptionStimuliSourceComponent_eventUnregisterFromSense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIPerceptionStimuliSourceComponent::execUnregisterFromSense)
{
	P_GET_OBJECT(UClass,Z_Param_SenseClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterFromSense(Z_Param_SenseClass);
	P_NATIVE_END;
}
// End Class UAIPerceptionStimuliSourceComponent Function UnregisterFromSense

// Begin Class UAIPerceptionStimuliSourceComponent
void UAIPerceptionStimuliSourceComponent::StaticRegisterNativesUAIPerceptionStimuliSourceComponent()
{
	UClass* Class = UAIPerceptionStimuliSourceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterForSense", &UAIPerceptionStimuliSourceComponent::execRegisterForSense },
		{ "RegisterWithPerceptionSystem", &UAIPerceptionStimuliSourceComponent::execRegisterWithPerceptionSystem },
		{ "UnregisterFromPerceptionSystem", &UAIPerceptionStimuliSourceComponent::execUnregisterFromPerceptionSystem },
		{ "UnregisterFromSense", &UAIPerceptionStimuliSourceComponent::execUnregisterFromSense },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIPerceptionStimuliSourceComponent);
UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister()
{
	return UAIPerceptionStimuliSourceComponent::StaticClass();
}
struct Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/** Gives owning actor a way to auto-register as perception system's sense stimuli source */" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Gives owning actor a way to auto-register as perception system's sense stimuli source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterAsSource_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisterAsSourceForSenses_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionStimuliSourceComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoRegisterAsSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterAsSource;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RegisterAsSourceForSenses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisterAsSourceForSenses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterForSense, "RegisterForSense" }, // 3268226193
		{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem, "RegisterWithPerceptionSystem" }, // 1366590544
		{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem, "UnregisterFromPerceptionSystem" }, // 1764466507
		{ &Z_Construct_UFunction_UAIPerceptionStimuliSourceComponent_UnregisterFromSense, "UnregisterFromSense" }, // 2801789495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPerceptionStimuliSourceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource_SetBit(void* Obj)
{
	((UAIPerceptionStimuliSourceComponent*)Obj)->bAutoRegisterAsSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource = { "bAutoRegisterAsSource", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAIPerceptionStimuliSourceComponent), &Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRegisterAsSource_MetaData), NewProp_bAutoRegisterAsSource_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses_Inner = { "RegisterAsSourceForSenses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses = { "RegisterAsSourceForSenses", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisterAsSourceForSenses_MetaData), NewProp_RegisterAsSourceForSenses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_bAutoRegisterAsSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::NewProp_RegisterAsSourceForSenses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::ClassParams = {
	&UAIPerceptionStimuliSourceComponent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent()
{
	if (!Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.OuterSingleton, Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIPerceptionStimuliSourceComponent>()
{
	return UAIPerceptionStimuliSourceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionStimuliSourceComponent);
UAIPerceptionStimuliSourceComponent::~UAIPerceptionStimuliSourceComponent() {}
// End Class UAIPerceptionStimuliSourceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIPerceptionStimuliSourceComponent, UAIPerceptionStimuliSourceComponent::StaticClass, TEXT("UAIPerceptionStimuliSourceComponent"), &Z_Registration_Info_UClass_UAIPerceptionStimuliSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIPerceptionStimuliSourceComponent), 3299893515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_1616440179(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
