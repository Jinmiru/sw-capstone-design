// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/LightWeightInstanceStaticMeshManager.h"
#include "Runtime/Engine/Classes/Engine/ActorInstanceHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightWeightInstanceStaticMeshManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceManager();
ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager();
ENGINE_API UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnActorReady
struct Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnActorReady_Parms
	{
		FActorInstanceHandle InHandle;
		FActorInstanceHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnActorReady_Parms, InHandle), Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 2065137789
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnActorReady_Parms, ReturnValue), Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 2065137789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::NewProp_InHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnActorReady__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::_Script_Engine_eventOnActorReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::_Script_Engine_eventOnActorReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnActorReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FActorInstanceHandle FOnActorReady_DelegateWrapper(const FScriptDelegate& OnActorReady, FActorInstanceHandle InHandle)
{
	struct _Script_Engine_eventOnActorReady_Parms
	{
		FActorInstanceHandle InHandle;
		FActorInstanceHandle ReturnValue;
	};
	_Script_Engine_eventOnActorReady_Parms Parms;
	Parms.InHandle=InHandle;
	OnActorReady.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FOnActorReady

// Begin Class ALightWeightInstanceStaticMeshManager Function OnRep_StaticMesh
struct Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightWeightInstanceStaticMeshManager, nullptr, "OnRep_StaticMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALightWeightInstanceStaticMeshManager::execOnRep_StaticMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaticMesh();
	P_NATIVE_END;
}
// End Class ALightWeightInstanceStaticMeshManager Function OnRep_StaticMesh

// Begin Class ALightWeightInstanceStaticMeshManager
void ALightWeightInstanceStaticMeshManager::StaticRegisterNativesALightWeightInstanceStaticMeshManager()
{
	UClass* Class = ALightWeightInstanceStaticMeshManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_StaticMesh", &ALightWeightInstanceStaticMeshManager::execOnRep_StaticMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightWeightInstanceStaticMeshManager);
UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_NoRegister()
{
	return ALightWeightInstanceStaticMeshManager::StaticClass();
}
struct Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GameFramework/LightWeightInstanceStaticMeshManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintProtected", "true" },
		{ "Category", "Debug" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingIndicesToDataIndices_MetaData[] = {
		{ "Comment", "// keep track of the relationship between our data and the rendering data stored in the instanced static mesh component\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
		{ "ToolTip", "keep track of the relationship between our data and the rendering data stored in the instanced static mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataIndicesToRenderingIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceStaticMeshManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticMeshComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderingIndicesToDataIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderingIndicesToDataIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataIndicesToRenderingIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataIndicesToRenderingIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightWeightInstanceStaticMeshManager_OnRep_StaticMesh, "OnRep_StaticMesh" }, // 3462326532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightWeightInstanceStaticMeshManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_StaticMesh = { "StaticMesh", "OnRep_StaticMesh", (EPropertyFlags)0x0024080100000835, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_InstancedStaticMeshComponent = { "InstancedStaticMeshComponent", nullptr, (EPropertyFlags)0x0124080820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, InstancedStaticMeshComponent_DEPRECATED), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedStaticMeshComponent_MetaData), NewProp_InstancedStaticMeshComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_ISMComponent = { "ISMComponent", nullptr, (EPropertyFlags)0x01240c000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, ISMComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMComponent_MetaData), NewProp_ISMComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices_Inner = { "RenderingIndicesToDataIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices = { "RenderingIndicesToDataIndices", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, RenderingIndicesToDataIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingIndicesToDataIndices_MetaData), NewProp_RenderingIndicesToDataIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices_Inner = { "DataIndicesToRenderingIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices = { "DataIndicesToRenderingIndices", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightWeightInstanceStaticMeshManager, DataIndicesToRenderingIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataIndicesToRenderingIndices_MetaData), NewProp_DataIndicesToRenderingIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_StaticMesh,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_InstancedStaticMeshComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_ISMComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_RenderingIndicesToDataIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::NewProp_DataIndicesToRenderingIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALightWeightInstanceManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USMInstanceManager_NoRegister, (int32)VTABLE_OFFSET(ALightWeightInstanceStaticMeshManager, ISMInstanceManager), false },  // 1951560444
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::ClassParams = {
	&ALightWeightInstanceStaticMeshManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightWeightInstanceStaticMeshManager()
{
	if (!Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton, Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALightWeightInstanceStaticMeshManager>()
{
	return ALightWeightInstanceStaticMeshManager::StaticClass();
}
void ALightWeightInstanceStaticMeshManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StaticMesh(TEXT("StaticMesh"));
	static const FName Name_RenderingIndicesToDataIndices(TEXT("RenderingIndicesToDataIndices"));
	static const FName Name_DataIndicesToRenderingIndices(TEXT("DataIndicesToRenderingIndices"));
	const bool bIsValid = true
		&& Name_StaticMesh == ClassReps[(int32)ENetFields_Private::StaticMesh].Property->GetFName()
		&& Name_RenderingIndicesToDataIndices == ClassReps[(int32)ENetFields_Private::RenderingIndicesToDataIndices].Property->GetFName()
		&& Name_DataIndicesToRenderingIndices == ClassReps[(int32)ENetFields_Private::DataIndicesToRenderingIndices].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALightWeightInstanceStaticMeshManager"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightWeightInstanceStaticMeshManager);
ALightWeightInstanceStaticMeshManager::~ALightWeightInstanceStaticMeshManager() {}
// End Class ALightWeightInstanceStaticMeshManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightWeightInstanceStaticMeshManager, ALightWeightInstanceStaticMeshManager::StaticClass, TEXT("ALightWeightInstanceStaticMeshManager"), &Z_Registration_Info_UClass_ALightWeightInstanceStaticMeshManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightWeightInstanceStaticMeshManager), 3050628626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_3145493770(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
