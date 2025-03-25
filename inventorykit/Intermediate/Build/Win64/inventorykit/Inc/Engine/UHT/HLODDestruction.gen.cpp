// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODDestruction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODDestruction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FWorldPartitionHLODDestructionTag
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag;
class UScriptStruct* FWorldPartitionHLODDestructionTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionHLODDestructionTag"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionHLODDestructionTag>()
{
	return FWorldPartitionHLODDestructionTag::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODDestructionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODDestructionComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActorIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionHLODDestructionTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_HLODDestructionComponent = { "HLODDestructionComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionHLODDestructionTag, HLODDestructionComponent), Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODDestructionComponent_MetaData), NewProp_HLODDestructionComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_ActorIndex = { "ActorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionHLODDestructionTag, ActorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorIndex_MetaData), NewProp_ActorIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_HLODDestructionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewProp_ActorIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionHLODDestructionTag",
	Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::PropPointers),
	sizeof(FWorldPartitionHLODDestructionTag),
	alignof(FWorldPartitionHLODDestructionTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag.InnerSingleton;
}
// End ScriptStruct FWorldPartitionHLODDestructionTag

// Begin Interface UWorldPartitionDestructibleInHLODInterface Function GetHLODDestructionTag
struct WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms
{
	FWorldPartitionHLODDestructionTag ReturnValue;
};
FWorldPartitionHLODDestructionTag IWorldPartitionDestructibleInHLODInterface::GetHLODDestructionTag() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHLODDestructionTag instead.");
	WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag = FName(TEXT("GetHLODDestructionTag"));
FWorldPartitionHLODDestructionTag IWorldPartitionDestructibleInHLODInterface::Execute_GetHLODDestructionTag(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWorldPartitionDestructibleInHLODInterface::StaticClass()));
	WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IWorldPartitionDestructibleInHLODInterface*)(O->GetNativeInterfaceAddress(UWorldPartitionDestructibleInHLODInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetHLODDestructionTag_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag, METADATA_PARAMS(0, nullptr) }; // 3339518988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface, nullptr, "GetHLODDestructionTag", nullptr, nullptr, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::PropPointers), sizeof(WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(WorldPartitionDestructibleInHLODInterface_eventGetHLODDestructionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWorldPartitionDestructibleInHLODInterface::execGetHLODDestructionTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWorldPartitionHLODDestructionTag*)Z_Param__Result=P_THIS->GetHLODDestructionTag_Implementation();
	P_NATIVE_END;
}
// End Interface UWorldPartitionDestructibleInHLODInterface Function GetHLODDestructionTag

// Begin Interface UWorldPartitionDestructibleInHLODInterface Function SetHLODDestructionTag
struct WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms
{
	FWorldPartitionHLODDestructionTag InDestructionTag;
};
void IWorldPartitionDestructibleInHLODInterface::SetHLODDestructionTag(FWorldPartitionHLODDestructionTag const& InDestructionTag)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHLODDestructionTag instead.");
}
static FName NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag = FName(TEXT("SetHLODDestructionTag"));
void IWorldPartitionDestructibleInHLODInterface::Execute_SetHLODDestructionTag(UObject* O, FWorldPartitionHLODDestructionTag const& InDestructionTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UWorldPartitionDestructibleInHLODInterface::StaticClass()));
	WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag);
	if (Func)
	{
		Parms.InDestructionTag=InDestructionTag;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IWorldPartitionDestructibleInHLODInterface*)(O->GetNativeInterfaceAddress(UWorldPartitionDestructibleInHLODInterface::StaticClass())))
	{
		I->SetHLODDestructionTag_Implementation(InDestructionTag);
	}
}
struct Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDestructionTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDestructionTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::NewProp_InDestructionTag = { "InDestructionTag", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms, InDestructionTag), Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDestructionTag_MetaData), NewProp_InDestructionTag_MetaData) }; // 3339518988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::NewProp_InDestructionTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface, nullptr, "SetHLODDestructionTag", nullptr, nullptr, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::PropPointers), sizeof(WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(WorldPartitionDestructibleInHLODInterface_eventSetHLODDestructionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IWorldPartitionDestructibleInHLODInterface::execSetHLODDestructionTag)
{
	P_GET_STRUCT_REF(FWorldPartitionHLODDestructionTag,Z_Param_Out_InDestructionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHLODDestructionTag_Implementation(Z_Param_Out_InDestructionTag);
	P_NATIVE_END;
}
// End Interface UWorldPartitionDestructibleInHLODInterface Function SetHLODDestructionTag

// Begin Interface UWorldPartitionDestructibleInHLODInterface
void UWorldPartitionDestructibleInHLODInterface::StaticRegisterNativesUWorldPartitionDestructibleInHLODInterface()
{
	UClass* Class = UWorldPartitionDestructibleInHLODInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHLODDestructionTag", &IWorldPartitionDestructibleInHLODInterface::execGetHLODDestructionTag },
		{ "SetHLODDestructionTag", &IWorldPartitionDestructibleInHLODInterface::execSetHLODDestructionTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionDestructibleInHLODInterface);
UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister()
{
	return UWorldPartitionDestructibleInHLODInterface::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Destructible in HLOD Interface" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_GetHLODDestructionTag, "GetHLODDestructionTag" }, // 882385275
		{ &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODInterface_SetHLODDestructionTag, "SetHLODDestructionTag" }, // 719156328
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldPartitionDestructibleInHLODInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::ClassParams = {
	&UWorldPartitionDestructibleInHLODInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton, Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionDestructibleInHLODInterface>()
{
	return UWorldPartitionDestructibleInHLODInterface::StaticClass();
}
UWorldPartitionDestructibleInHLODInterface::UWorldPartitionDestructibleInHLODInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionDestructibleInHLODInterface);
UWorldPartitionDestructibleInHLODInterface::~UWorldPartitionDestructibleInHLODInterface() {}
// End Interface UWorldPartitionDestructibleInHLODInterface

// Begin Class UWorldPartitionDestructibleInHLODSupportLibrary Function DamageInHLOD
struct Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics
{
	struct WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms
	{
		TScriptInterface<IWorldPartitionDestructibleInHLODInterface> DestructibleInHLOD;
		float DamagePercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HLOD Destruction" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleInHLOD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DestructibleInHLOD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DestructibleInHLOD = { "DestructibleInHLOD", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms, DestructibleInHLOD), Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleInHLOD_MetaData), NewProp_DestructibleInHLOD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DamagePercent = { "DamagePercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms, DamagePercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DestructibleInHLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::NewProp_DamagePercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary, nullptr, "DamageInHLOD", nullptr, nullptr, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::WorldPartitionDestructibleInHLODSupportLibrary_eventDamageInHLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionDestructibleInHLODSupportLibrary::execDamageInHLOD)
{
	P_GET_TINTERFACE_REF(IWorldPartitionDestructibleInHLODInterface,Z_Param_Out_DestructibleInHLOD);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamagePercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldPartitionDestructibleInHLODSupportLibrary::DamageInHLOD(Z_Param_Out_DestructibleInHLOD,Z_Param_DamagePercent);
	P_NATIVE_END;
}
// End Class UWorldPartitionDestructibleInHLODSupportLibrary Function DamageInHLOD

// Begin Class UWorldPartitionDestructibleInHLODSupportLibrary Function DestroyInHLOD
struct Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics
{
	struct WorldPartitionDestructibleInHLODSupportLibrary_eventDestroyInHLOD_Parms
	{
		TScriptInterface<IWorldPartitionDestructibleInHLODInterface> DestructibleInHLOD;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HLOD Destruction" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleInHLOD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DestructibleInHLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::NewProp_DestructibleInHLOD = { "DestructibleInHLOD", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPartitionDestructibleInHLODSupportLibrary_eventDestroyInHLOD_Parms, DestructibleInHLOD), Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleInHLOD_MetaData), NewProp_DestructibleInHLOD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::NewProp_DestructibleInHLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary, nullptr, "DestroyInHLOD", nullptr, nullptr, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::WorldPartitionDestructibleInHLODSupportLibrary_eventDestroyInHLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::WorldPartitionDestructibleInHLODSupportLibrary_eventDestroyInHLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionDestructibleInHLODSupportLibrary::execDestroyInHLOD)
{
	P_GET_TINTERFACE_REF(IWorldPartitionDestructibleInHLODInterface,Z_Param_Out_DestructibleInHLOD);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldPartitionDestructibleInHLODSupportLibrary::DestroyInHLOD(Z_Param_Out_DestructibleInHLOD);
	P_NATIVE_END;
}
// End Class UWorldPartitionDestructibleInHLODSupportLibrary Function DestroyInHLOD

// Begin Class UWorldPartitionDestructibleInHLODSupportLibrary
void UWorldPartitionDestructibleInHLODSupportLibrary::StaticRegisterNativesUWorldPartitionDestructibleInHLODSupportLibrary()
{
	UClass* Class = UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DamageInHLOD", &UWorldPartitionDestructibleInHLODSupportLibrary::execDamageInHLOD },
		{ "DestroyInHLOD", &UWorldPartitionDestructibleInHLODSupportLibrary::execDestroyInHLOD },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionDestructibleInHLODSupportLibrary);
UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_NoRegister()
{
	return UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/HLOD/HLODDestruction.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODDestruction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DamageInHLOD, "DamageInHLOD" }, // 1778443663
		{ &Z_Construct_UFunction_UWorldPartitionDestructibleInHLODSupportLibrary_DestroyInHLOD, "DestroyInHLOD" }, // 2810631173
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionDestructibleInHLODSupportLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::ClassParams = {
	&UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.OuterSingleton, Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionDestructibleInHLODSupportLibrary>()
{
	return UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass();
}
UWorldPartitionDestructibleInHLODSupportLibrary::UWorldPartitionDestructibleInHLODSupportLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionDestructibleInHLODSupportLibrary);
UWorldPartitionDestructibleInHLODSupportLibrary::~UWorldPartitionDestructibleInHLODSupportLibrary() {}
// End Class UWorldPartitionDestructibleInHLODSupportLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWorldPartitionHLODDestructionTag::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionHLODDestructionTag_Statics::NewStructOps, TEXT("WorldPartitionHLODDestructionTag"), &Z_Registration_Info_UScriptStruct_WorldPartitionHLODDestructionTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionHLODDestructionTag), 3339518988U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionDestructibleInHLODInterface, UWorldPartitionDestructibleInHLODInterface::StaticClass, TEXT("UWorldPartitionDestructibleInHLODInterface"), &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionDestructibleInHLODInterface), 2728208348U) },
		{ Z_Construct_UClass_UWorldPartitionDestructibleInHLODSupportLibrary, UWorldPartitionDestructibleInHLODSupportLibrary::StaticClass, TEXT("UWorldPartitionDestructibleInHLODSupportLibrary"), &Z_Registration_Info_UClass_UWorldPartitionDestructibleInHLODSupportLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionDestructibleInHLODSupportLibrary), 1306926795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_546709684(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODDestruction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
