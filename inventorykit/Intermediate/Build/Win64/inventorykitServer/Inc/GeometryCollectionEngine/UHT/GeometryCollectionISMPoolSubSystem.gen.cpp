// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionISMPoolSubSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionISMPoolSubSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class UGeometryCollectionISMPoolSubSystem Function OnActorEndPlay
struct Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics
{
	struct GeometryCollectionISMPoolSubSystem_eventOnActorEndPlay_Parms
	{
		AActor* InSource;
		TEnumAsByte<EEndPlayReason::Type> Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolSubSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::NewProp_InSource = { "InSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionISMPoolSubSystem_eventOnActorEndPlay_Parms, InSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionISMPoolSubSystem_eventOnActorEndPlay_Parms, Reason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::NewProp_InSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem, nullptr, "OnActorEndPlay", nullptr, nullptr, Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::GeometryCollectionISMPoolSubSystem_eventOnActorEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::GeometryCollectionISMPoolSubSystem_eventOnActorEndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGeometryCollectionISMPoolSubSystem::execOnActorEndPlay)
{
	P_GET_OBJECT(AActor,Z_Param_InSource);
	P_GET_PROPERTY(FByteProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorEndPlay(Z_Param_InSource,EEndPlayReason::Type(Z_Param_Reason));
	P_NATIVE_END;
}
// End Class UGeometryCollectionISMPoolSubSystem Function OnActorEndPlay

// Begin Class UGeometryCollectionISMPoolSubSystem
void UGeometryCollectionISMPoolSubSystem::StaticRegisterNativesUGeometryCollectionISMPoolSubSystem()
{
	UClass* Class = UGeometryCollectionISMPoolSubSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnActorEndPlay", &UGeometryCollectionISMPoolSubSystem::execOnActorEndPlay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionISMPoolSubSystem);
UClass* Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_NoRegister()
{
	return UGeometryCollectionISMPoolSubSystem::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A subsystem managing ISMPool actors.\n * Used by geometry collection now but repurposed for more general use.\n */" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionISMPoolSubSystem.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolSubSystem.h" },
		{ "ToolTip", "A subsystem managing ISMPool actors.\nUsed by geometry collection now but repurposed for more general use." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryCollectionISMPoolSubSystem_OnActorEndPlay, "OnActorEndPlay" }, // 3641756849
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionISMPoolSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_Statics::ClassParams = {
	&UGeometryCollectionISMPoolSubSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionISMPoolSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionISMPoolSubSystem.OuterSingleton, Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionISMPoolSubSystem.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionISMPoolSubSystem>()
{
	return UGeometryCollectionISMPoolSubSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionISMPoolSubSystem);
UGeometryCollectionISMPoolSubSystem::~UGeometryCollectionISMPoolSubSystem() {}
// End Class UGeometryCollectionISMPoolSubSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolSubSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionISMPoolSubSystem, UGeometryCollectionISMPoolSubSystem::StaticClass, TEXT("UGeometryCollectionISMPoolSubSystem"), &Z_Registration_Info_UClass_UGeometryCollectionISMPoolSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionISMPoolSubSystem), 4096118731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolSubSystem_h_3993489132(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolSubSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
