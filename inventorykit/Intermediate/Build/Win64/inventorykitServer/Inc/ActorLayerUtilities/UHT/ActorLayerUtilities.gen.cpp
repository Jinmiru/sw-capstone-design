// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorLayerUtilities/Public/ActorLayerUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLayerUtilities() {}

// Begin Cross Module References
ACTORLAYERUTILITIES_API UClass* Z_Construct_UClass_ULayersBlueprintLibrary();
ACTORLAYERUTILITIES_API UClass* Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister();
ACTORLAYERUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActorLayer();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ActorLayerUtilities();
// End Cross Module References

// Begin ScriptStruct FActorLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorLayer;
class UScriptStruct* FActorLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorLayer, (UObject*)Z_Construct_UPackage__Script_ActorLayerUtilities(), TEXT("ActorLayer"));
	}
	return Z_Registration_Info_UScriptStruct_ActorLayer.OuterSingleton;
}
template<> ACTORLAYERUTILITIES_API UScriptStruct* StaticStruct<FActorLayer>()
{
	return FActorLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The name of this layer */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "The name of this layer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorLayer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorLayer_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorLayerUtilities,
	nullptr,
	&NewStructOps,
	"ActorLayer",
	Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::PropPointers),
	sizeof(FActorLayer),
	alignof(FActorLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorLayer()
{
	if (!Z_Registration_Info_UScriptStruct_ActorLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorLayer.InnerSingleton, Z_Construct_UScriptStruct_FActorLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorLayer.InnerSingleton;
}
// End ScriptStruct FActorLayer

// Begin Class ULayersBlueprintLibrary Function AddActorToLayer
struct Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics
{
	struct LayersBlueprintLibrary_eventAddActorToLayer_Parms
	{
		AActor* InActor;
		FActorLayer Layer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** \n\x09 * Adds the actor to the specified layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Adds the actor to the specified layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventAddActorToLayer_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventAddActorToLayer_Parms, Layer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) }; // 2865297347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::NewProp_Layer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "AddActorToLayer", nullptr, nullptr, Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::LayersBlueprintLibrary_eventAddActorToLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::LayersBlueprintLibrary_eventAddActorToLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayersBlueprintLibrary::execAddActorToLayer)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULayersBlueprintLibrary::AddActorToLayer(Z_Param_InActor,Z_Param_Out_Layer);
	P_NATIVE_END;
}
// End Class ULayersBlueprintLibrary Function AddActorToLayer

// Begin Class ULayersBlueprintLibrary Function GetActors
struct Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics
{
	struct LayersBlueprintLibrary_eventGetActors_Parms
	{
		UObject* WorldContextObject;
		FActorLayer ActorLayer;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Get all the actors in this layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Get all the actors in this layer" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer = { "ActorLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, ActorLayer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLayer_MetaData), NewProp_ActorLayer_MetaData) }; // 2865297347
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventGetActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ActorLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "GetActors", nullptr, nullptr, Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::LayersBlueprintLibrary_eventGetActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::LayersBlueprintLibrary_eventGetActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayersBlueprintLibrary::execGetActors)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_ActorLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=ULayersBlueprintLibrary::GetActors(Z_Param_WorldContextObject,Z_Param_Out_ActorLayer);
	P_NATIVE_END;
}
// End Class ULayersBlueprintLibrary Function GetActors

// Begin Class ULayersBlueprintLibrary Function RemoveActorFromLayer
struct Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics
{
	struct LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms
	{
		AActor* InActor;
		FActorLayer Layer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layer" },
		{ "Comment", "/**\n\x09 * Removes the actor from the specified layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Removes the actor from the specified layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms, Layer), Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) }; // 2865297347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::NewProp_Layer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersBlueprintLibrary, nullptr, "RemoveActorFromLayer", nullptr, nullptr, Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::LayersBlueprintLibrary_eventRemoveActorFromLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULayersBlueprintLibrary::execRemoveActorFromLayer)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT_REF(FActorLayer,Z_Param_Out_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULayersBlueprintLibrary::RemoveActorFromLayer(Z_Param_InActor,Z_Param_Out_Layer);
	P_NATIVE_END;
}
// End Class ULayersBlueprintLibrary Function RemoveActorFromLayer

// Begin Class ULayersBlueprintLibrary
void ULayersBlueprintLibrary::StaticRegisterNativesULayersBlueprintLibrary()
{
	UClass* Class = ULayersBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActorToLayer", &ULayersBlueprintLibrary::execAddActorToLayer },
		{ "GetActors", &ULayersBlueprintLibrary::execGetActors },
		{ "RemoveActorFromLayer", &ULayersBlueprintLibrary::execRemoveActorFromLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayersBlueprintLibrary);
UClass* Z_Construct_UClass_ULayersBlueprintLibrary_NoRegister()
{
	return ULayersBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_ULayersBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods for interacting with editor layers\n */" },
		{ "IncludePath", "ActorLayerUtilities.h" },
		{ "ModuleRelativePath", "Public/ActorLayerUtilities.h" },
		{ "ToolTip", "Function library containing methods for interacting with editor layers" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_AddActorToLayer, "AddActorToLayer" }, // 1483868482
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_GetActors, "GetActors" }, // 1271170916
		{ &Z_Construct_UFunction_ULayersBlueprintLibrary_RemoveActorFromLayer, "RemoveActorFromLayer" }, // 600908554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayersBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULayersBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorLayerUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULayersBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayersBlueprintLibrary_Statics::ClassParams = {
	&ULayersBlueprintLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULayersBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULayersBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULayersBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULayersBlueprintLibrary.OuterSingleton;
}
template<> ACTORLAYERUTILITIES_API UClass* StaticClass<ULayersBlueprintLibrary>()
{
	return ULayersBlueprintLibrary::StaticClass();
}
ULayersBlueprintLibrary::ULayersBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULayersBlueprintLibrary);
ULayersBlueprintLibrary::~ULayersBlueprintLibrary() {}
// End Class ULayersBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorLayer::StaticStruct, Z_Construct_UScriptStruct_FActorLayer_Statics::NewStructOps, TEXT("ActorLayer"), &Z_Registration_Info_UScriptStruct_ActorLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorLayer), 2865297347U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULayersBlueprintLibrary, ULayersBlueprintLibrary::StaticClass, TEXT("ULayersBlueprintLibrary"), &Z_Registration_Info_UClass_ULayersBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayersBlueprintLibrary), 237861351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_2014457798(TEXT("/Script/ActorLayerUtilities"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ActorLayerUtilities_Source_ActorLayerUtilities_Public_ActorLayerUtilities_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
