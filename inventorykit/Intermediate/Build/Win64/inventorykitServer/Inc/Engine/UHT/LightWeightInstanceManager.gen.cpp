// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/LightWeightInstanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightWeightInstanceManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceManager();
ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALightWeightInstanceManager Function OnRep_Transforms
struct Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWeightInstanceManager, nullptr, "OnRep_Transforms", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALightWeightInstanceManager::execOnRep_Transforms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Transforms();
	P_NATIVE_END;
}
// End Class ALightWeightInstanceManager Function OnRep_Transforms

// Begin Class ALightWeightInstanceManager Function OnSpawnedActorDestroyed
struct Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics
{
	struct LightWeightInstanceManager_eventOnSpawnedActorDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightWeightInstanceManager_eventOnSpawnedActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWeightInstanceManager, nullptr, "OnSpawnedActorDestroyed", nullptr, nullptr, Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::LightWeightInstanceManager_eventOnSpawnedActorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::LightWeightInstanceManager_eventOnSpawnedActorDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALightWeightInstanceManager::execOnSpawnedActorDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSpawnedActorDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class ALightWeightInstanceManager Function OnSpawnedActorDestroyed

// Begin Class ALightWeightInstanceManager
void ALightWeightInstanceManager::StaticRegisterNativesALightWeightInstanceManager()
{
	UClass* Class = ALightWeightInstanceManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Transforms", &ALightWeightInstanceManager::execOnRep_Transforms },
		{ "OnSpawnedActorDestroyed", &ALightWeightInstanceManager::execOnSpawnedActorDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightWeightInstanceManager);
UClass* Z_Construct_UClass_ALightWeightInstanceManager_NoRegister()
{
	return ALightWeightInstanceManager::StaticClass();
}
struct Z_Construct_UClass_ALightWeightInstanceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GameFramework/LightWeightInstanceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepresentedClass_MetaData[] = {
		{ "Category", "LightWeightInstance" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptedClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransforms_MetaData[] = {
		{ "Category", "LightWeightInstance" },
		{ "Comment", "// Current per instance transforms\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
		{ "ToolTip", "Current per instance transforms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "Comment", "// keep track of which instances are currently represented by an actor\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
		{ "ToolTip", "keep track of which instances are currently represented by an actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeIndices_MetaData[] = {
		{ "Comment", "// list of indices that we are no longer using\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
		{ "ToolTip", "list of indices that we are no longer using" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidIndices_MetaData[] = {
		{ "Comment", "// handy way to check indices quickly so we don't need to iterate through the free indices list\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceManager.h" },
		{ "ToolTip", "handy way to check indices quickly so we don't need to iterate through the free indices list" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RepresentedClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AcceptedClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceTransforms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Actors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FreeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeIndices;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightWeightInstanceManager_OnRep_Transforms, "OnRep_Transforms" }, // 2958081455
		{ &Z_Construct_UFunction_ALightWeightInstanceManager_OnSpawnedActorDestroyed, "OnSpawnedActorDestroyed" }, // 869993837
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightWeightInstanceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_RepresentedClass = { "RepresentedClass", nullptr, (EPropertyFlags)0x0024080000010021, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceManager, RepresentedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepresentedClass_MetaData), NewProp_RepresentedClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_AcceptedClass = { "AcceptedClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceManager, AcceptedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptedClass_MetaData), NewProp_AcceptedClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms_Inner = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms = { "InstanceTransforms", "OnRep_Transforms", (EPropertyFlags)0x0020080100000821, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceManager, InstanceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceTransforms_MetaData), NewProp_InstanceTransforms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_Actors_ValueProp = { "Actors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_Actors_Key_KeyProp = { "Actors_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceManager, Actors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices_Inner = { "FreeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices = { "FreeIndices", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceManager, FreeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeIndices_MetaData), NewProp_FreeIndices_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices_Inner = { "ValidIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices = { "ValidIndices", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceManager, ValidIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidIndices_MetaData), NewProp_ValidIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightWeightInstanceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_RepresentedClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_AcceptedClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_InstanceTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_Actors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_Actors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_FreeIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceManager_Statics::NewProp_ValidIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALightWeightInstanceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UActorInstanceManagerInterface_NoRegister, (int32)VTABLE_OFFSET(ALightWeightInstanceManager, IActorInstanceManagerInterface), false },  // 179983734
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightWeightInstanceManager_Statics::ClassParams = {
	&ALightWeightInstanceManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALightWeightInstanceManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightWeightInstanceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightWeightInstanceManager()
{
	if (!Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton, Z_Construct_UClass_ALightWeightInstanceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightWeightInstanceManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALightWeightInstanceManager>()
{
	return ALightWeightInstanceManager::StaticClass();
}
void ALightWeightInstanceManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_RepresentedClass(TEXT("RepresentedClass"));
	static const FName Name_InstanceTransforms(TEXT("InstanceTransforms"));
	static const FName Name_FreeIndices(TEXT("FreeIndices"));
	static const FName Name_ValidIndices(TEXT("ValidIndices"));
	const bool bIsValid = true
		&& Name_RepresentedClass == ClassReps[(int32)ENetFields_Private::RepresentedClass].Property->GetFName()
		&& Name_InstanceTransforms == ClassReps[(int32)ENetFields_Private::InstanceTransforms].Property->GetFName()
		&& Name_FreeIndices == ClassReps[(int32)ENetFields_Private::FreeIndices].Property->GetFName()
		&& Name_ValidIndices == ClassReps[(int32)ENetFields_Private::ValidIndices].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALightWeightInstanceManager"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightWeightInstanceManager);
// End Class ALightWeightInstanceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightWeightInstanceManager, ALightWeightInstanceManager::StaticClass, TEXT("ALightWeightInstanceManager"), &Z_Registration_Info_UClass_ALightWeightInstanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightWeightInstanceManager), 255981456U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_3416133044(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
