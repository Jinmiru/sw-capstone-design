// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ChaosBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UChaosBlueprintLibrary();
ENGINE_API UClass* Z_Construct_UClass_UChaosBlueprintLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChaosEventRelay_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UChaosBlueprintLibrary Function GetEventRelayFromContext
struct Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics
{
	struct ChaosBlueprintLibrary_eventGetEventRelayFromContext_Parms
	{
		UObject* ContextObject;
		const UChaosEventRelay* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Object" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ChaosBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosBlueprintLibrary_eventGetEventRelayFromContext_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChaosBlueprintLibrary_eventGetEventRelayFromContext_Parms, ReturnValue), Z_Construct_UClass_UChaosEventRelay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosBlueprintLibrary, nullptr, "GetEventRelayFromContext", nullptr, nullptr, Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::ChaosBlueprintLibrary_eventGetEventRelayFromContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::ChaosBlueprintLibrary_eventGetEventRelayFromContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChaosBlueprintLibrary::execGetEventRelayFromContext)
{
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UChaosEventRelay**)Z_Param__Result=UChaosBlueprintLibrary::GetEventRelayFromContext(Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class UChaosBlueprintLibrary Function GetEventRelayFromContext

// Begin Class UChaosBlueprintLibrary
void UChaosBlueprintLibrary::StaticRegisterNativesUChaosBlueprintLibrary()
{
	UClass* Class = UChaosBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEventRelayFromContext", &UChaosBlueprintLibrary::execGetEventRelayFromContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosBlueprintLibrary);
UClass* Z_Construct_UClass_UChaosBlueprintLibrary_NoRegister()
{
	return UChaosBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UChaosBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsEngine/ChaosBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ChaosBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosBlueprintLibrary_GetEventRelayFromContext, "GetEventRelayFromContext" }, // 1231256027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChaosBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosBlueprintLibrary_Statics::ClassParams = {
	&UChaosBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UChaosBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UChaosBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosBlueprintLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UChaosBlueprintLibrary>()
{
	return UChaosBlueprintLibrary::StaticClass();
}
UChaosBlueprintLibrary::UChaosBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosBlueprintLibrary);
UChaosBlueprintLibrary::~UChaosBlueprintLibrary() {}
// End Class UChaosBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosBlueprintLibrary, UChaosBlueprintLibrary::StaticClass, TEXT("UChaosBlueprintLibrary"), &Z_Registration_Info_UClass_UChaosBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosBlueprintLibrary), 63912236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_1271380653(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ChaosBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
