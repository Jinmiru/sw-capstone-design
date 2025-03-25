// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/LightWeightInstanceBlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/ActorInstanceHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightWeightInstanceBlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULightWeightInstanceBlueprintFunctionLibrary Function ConvertActorToLightWeightInstance
struct Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics
{
	struct LightWeightInstanceBlueprintFunctionLibrary_eventConvertActorToLightWeightInstance_Parms
	{
		AActor* Actor;
		FActorInstanceHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Weight Instance" },
		{ "Comment", "// Returns a handle to the light weight representation and destroys Actor if successful; Returns a handle to Actor otherwise\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns a handle to the light weight representation and destroys Actor if successful; Returns a handle to Actor otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightWeightInstanceBlueprintFunctionLibrary_eventConvertActorToLightWeightInstance_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightWeightInstanceBlueprintFunctionLibrary_eventConvertActorToLightWeightInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 2065137789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary, nullptr, "ConvertActorToLightWeightInstance", nullptr, nullptr, Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::LightWeightInstanceBlueprintFunctionLibrary_eventConvertActorToLightWeightInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::LightWeightInstanceBlueprintFunctionLibrary_eventConvertActorToLightWeightInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightWeightInstanceBlueprintFunctionLibrary::execConvertActorToLightWeightInstance)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActorInstanceHandle*)Z_Param__Result=ULightWeightInstanceBlueprintFunctionLibrary::ConvertActorToLightWeightInstance(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class ULightWeightInstanceBlueprintFunctionLibrary Function ConvertActorToLightWeightInstance

// Begin Class ULightWeightInstanceBlueprintFunctionLibrary Function CreateNewLightWeightInstance
struct Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics
{
	struct LightWeightInstanceBlueprintFunctionLibrary_eventCreateNewLightWeightInstance_Parms
	{
		UClass* ActorClass;
		FTransform Transform;
		UDataLayerInstance* Layer;
		UWorld* World;
		FActorInstanceHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Weight Instance" },
		{ "Comment", "// Returns a handle to a new light weight instance that represents an object of type ActorClass\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns a handle to a new light weight instance that represents an object of type ActorClass" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightWeightInstanceBlueprintFunctionLibrary_eventCreateNewLightWeightInstance_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightWeightInstanceBlueprintFunctionLibrary_eventCreateNewLightWeightInstance_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightWeightInstanceBlueprintFunctionLibrary_eventCreateNewLightWeightInstance_Parms, Layer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightWeightInstanceBlueprintFunctionLibrary_eventCreateNewLightWeightInstance_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightWeightInstanceBlueprintFunctionLibrary_eventCreateNewLightWeightInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(0, nullptr) }; // 2065137789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary, nullptr, "CreateNewLightWeightInstance", nullptr, nullptr, Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::LightWeightInstanceBlueprintFunctionLibrary_eventCreateNewLightWeightInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::LightWeightInstanceBlueprintFunctionLibrary_eventCreateNewLightWeightInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightWeightInstanceBlueprintFunctionLibrary::execCreateNewLightWeightInstance)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_OBJECT(UDataLayerInstance,Z_Param_Layer);
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActorInstanceHandle*)Z_Param__Result=ULightWeightInstanceBlueprintFunctionLibrary::CreateNewLightWeightInstance(Z_Param_ActorClass,Z_Param_Transform,Z_Param_Layer,Z_Param_World);
	P_NATIVE_END;
}
// End Class ULightWeightInstanceBlueprintFunctionLibrary Function CreateNewLightWeightInstance

// Begin Class ULightWeightInstanceBlueprintFunctionLibrary
void ULightWeightInstanceBlueprintFunctionLibrary::StaticRegisterNativesULightWeightInstanceBlueprintFunctionLibrary()
{
	UClass* Class = ULightWeightInstanceBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertActorToLightWeightInstance", &ULightWeightInstanceBlueprintFunctionLibrary::execConvertActorToLightWeightInstance },
		{ "CreateNewLightWeightInstance", &ULightWeightInstanceBlueprintFunctionLibrary::execCreateNewLightWeightInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightWeightInstanceBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_NoRegister()
{
	return ULightWeightInstanceBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/LightWeightInstanceBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/LightWeightInstanceBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_ConvertActorToLightWeightInstance, "ConvertActorToLightWeightInstance" }, // 1155023185
		{ &Z_Construct_UFunction_ULightWeightInstanceBlueprintFunctionLibrary_CreateNewLightWeightInstance, "CreateNewLightWeightInstance" }, // 4239561794
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightWeightInstanceBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics::ClassParams = {
	&ULightWeightInstanceBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightWeightInstanceBlueprintFunctionLibrary>()
{
	return ULightWeightInstanceBlueprintFunctionLibrary::StaticClass();
}
ULightWeightInstanceBlueprintFunctionLibrary::ULightWeightInstanceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightWeightInstanceBlueprintFunctionLibrary);
ULightWeightInstanceBlueprintFunctionLibrary::~ULightWeightInstanceBlueprintFunctionLibrary() {}
// End Class ULightWeightInstanceBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightWeightInstanceBlueprintFunctionLibrary, ULightWeightInstanceBlueprintFunctionLibrary::StaticClass, TEXT("ULightWeightInstanceBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_ULightWeightInstanceBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightWeightInstanceBlueprintFunctionLibrary), 429158172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_2699907546(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceBlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
