// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/AutoDestroySubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoDestroySubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAutoDestroySubsystem();
ENGINE_API UClass* Z_Construct_UClass_UAutoDestroySubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAutoDestroySubsystem Function OnActorEndPlay
struct Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics
{
	struct AutoDestroySubsystem_eventOnActorEndPlay_Parms
	{
		AActor* Actor;
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Callback for a registered actor's End Play so we can remove it from our known actors */" },
		{ "ModuleRelativePath", "Classes/Engine/AutoDestroySubsystem.h" },
		{ "ToolTip", "Callback for a registered actor's End Play so we can remove it from our known actors" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoDestroySubsystem_eventOnActorEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoDestroySubsystem_eventOnActorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoDestroySubsystem, nullptr, "OnActorEndPlay", nullptr, nullptr, Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::AutoDestroySubsystem_eventOnActorEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::AutoDestroySubsystem_eventOnActorEndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoDestroySubsystem::execOnActorEndPlay)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
	P_NATIVE_END;
}
// End Class UAutoDestroySubsystem Function OnActorEndPlay

// Begin Class UAutoDestroySubsystem
void UAutoDestroySubsystem::StaticRegisterNativesUAutoDestroySubsystem()
{
	UClass* Class = UAutoDestroySubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnActorEndPlay", &UAutoDestroySubsystem::execOnActorEndPlay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoDestroySubsystem);
UClass* Z_Construct_UClass_UAutoDestroySubsystem_NoRegister()
{
	return UAutoDestroySubsystem::StaticClass();
}
struct Z_Construct_UClass_UAutoDestroySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The Auto destroy subsystem manages actors who have bAutoDestroyWhenFinished\n* set as true. This ensures that even actors who do not have Tick enabled \n* get properly destroyed, as well as decouple this behavior from AActor::Tick\n*/" },
		{ "IncludePath", "Engine/AutoDestroySubsystem.h" },
		{ "ModuleRelativePath", "Classes/Engine/AutoDestroySubsystem.h" },
		{ "ToolTip", "The Auto destroy subsystem manages actors who have bAutoDestroyWhenFinished\nset as true. This ensures that even actors who do not have Tick enabled\nget properly destroyed, as well as decouple this behavior from AActor::Tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToPoll_MetaData[] = {
		{ "Comment", "/** Actors to check if they should auto destroy or not */" },
		{ "ModuleRelativePath", "Classes/Engine/AutoDestroySubsystem.h" },
		{ "ToolTip", "Actors to check if they should auto destroy or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToPoll_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToPoll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoDestroySubsystem_OnActorEndPlay, "OnActorEndPlay" }, // 3968726309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoDestroySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll_Inner = { "ActorsToPoll", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll = { "ActorsToPoll", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoDestroySubsystem, ActorsToPoll), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToPoll_MetaData), NewProp_ActorsToPoll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoDestroySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoDestroySubsystem_Statics::NewProp_ActorsToPoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDestroySubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoDestroySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDestroySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoDestroySubsystem_Statics::ClassParams = {
	&UAutoDestroySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAutoDestroySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDestroySubsystem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoDestroySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoDestroySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoDestroySubsystem()
{
	if (!Z_Registration_Info_UClass_UAutoDestroySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoDestroySubsystem.OuterSingleton, Z_Construct_UClass_UAutoDestroySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoDestroySubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAutoDestroySubsystem>()
{
	return UAutoDestroySubsystem::StaticClass();
}
UAutoDestroySubsystem::UAutoDestroySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoDestroySubsystem);
UAutoDestroySubsystem::~UAutoDestroySubsystem() {}
// End Class UAutoDestroySubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoDestroySubsystem, UAutoDestroySubsystem::StaticClass, TEXT("UAutoDestroySubsystem"), &Z_Registration_Info_UClass_UAutoDestroySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoDestroySubsystem), 296751947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_3231315628(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AutoDestroySubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
