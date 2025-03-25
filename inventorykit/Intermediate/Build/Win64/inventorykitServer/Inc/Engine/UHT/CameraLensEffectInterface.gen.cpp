// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Camera/CameraLensEffectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraLensEffectInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface();
ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterfaceValidResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UCameraLensEffectInterface Function GetParticleComponents
struct Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics
{
	struct CameraLensEffectInterface_eventGetParticleComponents_Parms
	{
		TArray<UFXSystemComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraLensEffect" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterface_eventGetParticleComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterface, nullptr, "GetParticleComponents", nullptr, nullptr, Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::CameraLensEffectInterface_eventGetParticleComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::CameraLensEffectInterface_eventGetParticleComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICameraLensEffectInterface::execGetParticleComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UFXSystemComponent*>*)Z_Param__Result=P_THIS->GetParticleComponents();
	P_NATIVE_END;
}
// End Interface UCameraLensEffectInterface Function GetParticleComponents

// Begin Interface UCameraLensEffectInterface Function GetPrimaryParticleComponent
struct Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics
{
	struct CameraLensEffectInterface_eventGetPrimaryParticleComponent_Parms
	{
		UFXSystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraLensEffect" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterface_eventGetPrimaryParticleComponent_Parms, ReturnValue), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterface, nullptr, "GetPrimaryParticleComponent", nullptr, nullptr, Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::CameraLensEffectInterface_eventGetPrimaryParticleComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::CameraLensEffectInterface_eventGetPrimaryParticleComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICameraLensEffectInterface::execGetPrimaryParticleComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFXSystemComponent**)Z_Param__Result=P_THIS->GetPrimaryParticleComponent();
	P_NATIVE_END;
}
// End Interface UCameraLensEffectInterface Function GetPrimaryParticleComponent

// Begin Interface UCameraLensEffectInterface
void UCameraLensEffectInterface::StaticRegisterNativesUCameraLensEffectInterface()
{
	UClass* Class = UCameraLensEffectInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetParticleComponents", &ICameraLensEffectInterface::execGetParticleComponents },
		{ "GetPrimaryParticleComponent", &ICameraLensEffectInterface::execGetPrimaryParticleComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraLensEffectInterface);
UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister()
{
	return UCameraLensEffectInterface::StaticClass();
}
struct Z_Construct_UClass_UCameraLensEffectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents, "GetParticleComponents" }, // 1271052677
		{ &Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent, "GetPrimaryParticleComponent" }, // 941881741
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICameraLensEffectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraLensEffectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensEffectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraLensEffectInterface_Statics::ClassParams = {
	&UCameraLensEffectInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensEffectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraLensEffectInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraLensEffectInterface()
{
	if (!Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton, Z_Construct_UClass_UCameraLensEffectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCameraLensEffectInterface>()
{
	return UCameraLensEffectInterface::StaticClass();
}
UCameraLensEffectInterface::UCameraLensEffectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraLensEffectInterface);
UCameraLensEffectInterface::~UCameraLensEffectInterface() {}
// End Interface UCameraLensEffectInterface

// Begin ScriptStruct FCameraLensInterfaceClassSupport
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport;
class UScriptStruct* FCameraLensInterfaceClassSupport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraLensInterfaceClassSupport"));
	}
	return Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraLensInterfaceClassSupport>()
{
	return FCameraLensInterfaceClassSupport::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper type for validation that the specfied subclass in fact does implement the desired interface! */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Wrapper type for validation that the specfied subclass in fact does implement the desired interface!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "Lens Effect" },
		{ "Comment", "/** The class to spawn/reference. Must implement CameraLensEffectInterface! */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "MustImplement", "/Script/Engine.CameraLensEffectInterface" },
		{ "ToolTip", "The class to spawn/reference. Must implement CameraLensEffectInterface!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLensInterfaceClassSupport>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraLensInterfaceClassSupport, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CameraLensInterfaceClassSupport",
	Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::PropPointers),
	sizeof(FCameraLensInterfaceClassSupport),
	alignof(FCameraLensInterfaceClassSupport),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport()
{
	if (!Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.InnerSingleton, Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.InnerSingleton;
}
// End ScriptStruct FCameraLensInterfaceClassSupport

// Begin Enum EInterfaceValidResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterfaceValidResult;
static UEnum* EInterfaceValidResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterfaceValidResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInterfaceValidResult"));
	}
	return Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EInterfaceValidResult>()
{
	return EInterfaceValidResult_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EInterfaceValidResult::Invalid" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "Valid.Name", "EInterfaceValidResult::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterfaceValidResult::Valid", (int64)EInterfaceValidResult::Valid },
		{ "EInterfaceValidResult::Invalid", (int64)EInterfaceValidResult::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EInterfaceValidResult",
	"EInterfaceValidResult",
	Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EInterfaceValidResult()
{
	if (!Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton, Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton;
}
// End Enum EInterfaceValidResult

// Begin Class UCameraLensEffectInterfaceClassSupportLibrary Function GetInterfaceClass
struct Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics
{
	struct CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms
	{
		FCameraLensInterfaceClassSupport CameraLens;
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Lens Effect" },
		{ "Comment", "/** Returns the class represented by this lens effect wrapper... */" },
		{ "CompactNodeTitle", "." },
		{ "Keywords", "class, get, toclass, getclass, spawn, object" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Returns the class represented by this lens effect wrapper..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLens_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLens;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_CameraLens = { "CameraLens", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms, CameraLens), Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLens_MetaData), NewProp_CameraLens_MetaData) }; // 1104747734
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_CameraLens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, nullptr, "GetInterfaceClass", nullptr, nullptr, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraLensEffectInterfaceClassSupportLibrary::execGetInterfaceClass)
{
	P_GET_STRUCT_REF(FCameraLensInterfaceClassSupport,Z_Param_Out_CameraLens);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=UCameraLensEffectInterfaceClassSupportLibrary::GetInterfaceClass(Z_Param_Out_CameraLens);
	P_NATIVE_END;
}
// End Class UCameraLensEffectInterfaceClassSupportLibrary Function GetInterfaceClass

// Begin Class UCameraLensEffectInterfaceClassSupportLibrary Function IsInterfaceClassValid
struct Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics
{
	struct CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms
	{
		FCameraLensInterfaceClassSupport CameraLens;
		EInterfaceValidResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lens Effect" },
		{ "Comment", "/** Check whether or not the interface class is valid */" },
		{ "DisplayName", "Is Valid Camera Lens Class" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "valid, camera, real, lens" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Check whether or not the interface class is valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLens_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLens;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_CameraLens = { "CameraLens", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms, CameraLens), Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLens_MetaData), NewProp_CameraLens_MetaData) }; // 1104747734
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms, Result), Z_Construct_UEnum_Engine_EInterfaceValidResult, METADATA_PARAMS(0, nullptr) }; // 421902076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_CameraLens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, nullptr, "IsInterfaceClassValid", nullptr, nullptr, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceClassValid)
{
	P_GET_STRUCT_REF(FCameraLensInterfaceClassSupport,Z_Param_Out_CameraLens);
	P_GET_ENUM_REF(EInterfaceValidResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraLensEffectInterfaceClassSupportLibrary::IsInterfaceClassValid(Z_Param_Out_CameraLens,(EInterfaceValidResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UCameraLensEffectInterfaceClassSupportLibrary Function IsInterfaceClassValid

// Begin Class UCameraLensEffectInterfaceClassSupportLibrary Function IsInterfaceValid
struct Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics
{
	struct CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms
	{
		TScriptInterface<ICameraLensEffectInterface> CameraLens;
		EInterfaceValidResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lens Effect" },
		{ "Comment", "/** Evaluate the live interface to see if it is a valid reference. */" },
		{ "DisplayName", "Is Valid Camera Lens" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "valid, camera, real, lens" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Evaluate the live interface to see if it is a valid reference." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLens_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CameraLens;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_CameraLens = { "CameraLens", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms, CameraLens), Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLens_MetaData), NewProp_CameraLens_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms, Result), Z_Construct_UEnum_Engine_EInterfaceValidResult, METADATA_PARAMS(0, nullptr) }; // 421902076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_CameraLens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, nullptr, "IsInterfaceValid", nullptr, nullptr, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceValid)
{
	P_GET_TINTERFACE_REF(ICameraLensEffectInterface,Z_Param_Out_CameraLens);
	P_GET_ENUM_REF(EInterfaceValidResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraLensEffectInterfaceClassSupportLibrary::IsInterfaceValid(Z_Param_Out_CameraLens,(EInterfaceValidResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UCameraLensEffectInterfaceClassSupportLibrary Function IsInterfaceValid

// Begin Class UCameraLensEffectInterfaceClassSupportLibrary Function SetInterfaceClass
struct Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics
{
	struct CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms
	{
		TSubclassOf<AActor> Class;
		FCameraLensInterfaceClassSupport Var;
		EInterfaceValidResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lens Effect" },
		{ "Comment", "/** \n\x09 * Set the represented class of the passed in variable. Note: Check the tooltips on the individual pins.\n\x09 * You cannot bypass the validation by connecting a wires to this node!!\n\x09 * \n\x09 * @param Class MUST implement CameraLensEffectInterface - when connecting variables to the input, take care that the input class does in fact implement the interface.\n\x09 * @param Var The wrapper (for validation purposes) of the lens effect class.\n\x09 */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Set the represented class of the passed in variable. Note: Check the tooltips on the individual pins.\nYou cannot bypass the validation by connecting a wires to this node!!\n\n@param Class MUST implement CameraLensEffectInterface - when connecting variables to the input, take care that the input class does in fact implement the interface.\n@param Var The wrapper (for validation purposes) of the lens effect class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "MustImplement", "CameraLensEffectInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Var;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Var = { "Var", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms, Var), Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport, METADATA_PARAMS(0, nullptr) }; // 1104747734
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms, Result), Z_Construct_UEnum_Engine_EInterfaceValidResult, METADATA_PARAMS(0, nullptr) }; // 421902076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Var,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, nullptr, "SetInterfaceClass", nullptr, nullptr, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraLensEffectInterfaceClassSupportLibrary::execSetInterfaceClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_STRUCT_REF(FCameraLensInterfaceClassSupport,Z_Param_Out_Var);
	P_GET_ENUM_REF(EInterfaceValidResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCameraLensEffectInterfaceClassSupportLibrary::SetInterfaceClass(Z_Param_Class,Z_Param_Out_Var,(EInterfaceValidResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class UCameraLensEffectInterfaceClassSupportLibrary Function SetInterfaceClass

// Begin Class UCameraLensEffectInterfaceClassSupportLibrary
void UCameraLensEffectInterfaceClassSupportLibrary::StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary()
{
	UClass* Class = UCameraLensEffectInterfaceClassSupportLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInterfaceClass", &UCameraLensEffectInterfaceClassSupportLibrary::execGetInterfaceClass },
		{ "IsInterfaceClassValid", &UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceClassValid },
		{ "IsInterfaceValid", &UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceValid },
		{ "SetInterfaceClass", &UCameraLensEffectInterfaceClassSupportLibrary::execSetInterfaceClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraLensEffectInterfaceClassSupportLibrary);
UClass* Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_NoRegister()
{
	return UCameraLensEffectInterfaceClassSupportLibrary::StaticClass();
}
struct Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/CameraLensEffectInterface.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass, "GetInterfaceClass" }, // 3229441891
		{ &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid, "IsInterfaceClassValid" }, // 3971913561
		{ &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid, "IsInterfaceValid" }, // 3865793733
		{ &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass, "SetInterfaceClass" }, // 811705215
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraLensEffectInterfaceClassSupportLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::ClassParams = {
	&UCameraLensEffectInterfaceClassSupportLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary()
{
	if (!Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.OuterSingleton, Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCameraLensEffectInterfaceClassSupportLibrary>()
{
	return UCameraLensEffectInterfaceClassSupportLibrary::StaticClass();
}
UCameraLensEffectInterfaceClassSupportLibrary::UCameraLensEffectInterfaceClassSupportLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraLensEffectInterfaceClassSupportLibrary);
UCameraLensEffectInterfaceClassSupportLibrary::~UCameraLensEffectInterfaceClassSupportLibrary() {}
// End Class UCameraLensEffectInterfaceClassSupportLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterfaceValidResult_StaticEnum, TEXT("EInterfaceValidResult"), &Z_Registration_Info_UEnum_EInterfaceValidResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 421902076U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraLensInterfaceClassSupport::StaticStruct, Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewStructOps, TEXT("CameraLensInterfaceClassSupport"), &Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraLensInterfaceClassSupport), 1104747734U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraLensEffectInterface, UCameraLensEffectInterface::StaticClass, TEXT("UCameraLensEffectInterface"), &Z_Registration_Info_UClass_UCameraLensEffectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraLensEffectInterface), 1508334828U) },
		{ Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, UCameraLensEffectInterfaceClassSupportLibrary::StaticClass, TEXT("UCameraLensEffectInterfaceClassSupportLibrary"), &Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraLensEffectInterfaceClassSupportLibrary), 755540837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_2783534720(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
