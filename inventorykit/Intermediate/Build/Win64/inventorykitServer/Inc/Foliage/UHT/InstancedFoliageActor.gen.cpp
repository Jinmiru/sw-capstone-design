// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/InstancedFoliageActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedFoliageActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AISMPartitionActor();
FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor();
FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class AInstancedFoliageActor Function AddInstances
#if WITH_EDITOR
struct Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics
{
	struct InstancedFoliageActor_eventAddInstances_Parms
	{
		UObject* WorldContextObject;
		UFoliageType* InFoliageType;
		TArray<FTransform> InTransforms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/InstancedFoliageActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InFoliageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedFoliageActor_eventAddInstances_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::NewProp_InFoliageType = { "InFoliageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedFoliageActor_eventAddInstances_Parms, InFoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::NewProp_InTransforms_Inner = { "InTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::NewProp_InTransforms = { "InTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedFoliageActor_eventAddInstances_Parms, InTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTransforms_MetaData), NewProp_InTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::NewProp_InFoliageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::NewProp_InTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::NewProp_InTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInstancedFoliageActor, nullptr, "AddInstances", nullptr, nullptr, Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::InstancedFoliageActor_eventAddInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::InstancedFoliageActor_eventAddInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInstancedFoliageActor_AddInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInstancedFoliageActor_AddInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AInstancedFoliageActor::execAddInstances)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UFoliageType,Z_Param_InFoliageType);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_InTransforms);
	P_FINISH;
	P_NATIVE_BEGIN;
	AInstancedFoliageActor::AddInstances(Z_Param_WorldContextObject,Z_Param_InFoliageType,Z_Param_Out_InTransforms);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AInstancedFoliageActor Function AddInstances

// Begin Class AInstancedFoliageActor Function RemoveAllInstances
#if WITH_EDITOR
struct Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics
{
	struct InstancedFoliageActor_eventRemoveAllInstances_Parms
	{
		UObject* WorldContextObject;
		UFoliageType* InFoliageType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "ModuleRelativePath", "Public/InstancedFoliageActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InFoliageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedFoliageActor_eventRemoveAllInstances_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::NewProp_InFoliageType = { "InFoliageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InstancedFoliageActor_eventRemoveAllInstances_Parms, InFoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::NewProp_InFoliageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInstancedFoliageActor, nullptr, "RemoveAllInstances", nullptr, nullptr, Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::InstancedFoliageActor_eventRemoveAllInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::InstancedFoliageActor_eventRemoveAllInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(AInstancedFoliageActor::execRemoveAllInstances)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UFoliageType,Z_Param_InFoliageType);
	P_FINISH;
	P_NATIVE_BEGIN;
	AInstancedFoliageActor::RemoveAllInstances(Z_Param_WorldContextObject,Z_Param_InFoliageType);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class AInstancedFoliageActor Function RemoveAllInstances

// Begin Class AInstancedFoliageActor
void AInstancedFoliageActor::StaticRegisterNativesAInstancedFoliageActor()
{
#if WITH_EDITOR
	UClass* Class = AInstancedFoliageActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInstances", &AInstancedFoliageActor::execAddInstances },
		{ "RemoveAllInstances", &AInstancedFoliageActor::execRemoveAllInstances },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInstancedFoliageActor);
UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister()
{
	return AInstancedFoliageActor::StaticClass();
}
struct Z_Construct_UClass_AInstancedFoliageActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Rendering Mobility" },
		{ "IncludePath", "InstancedFoliageActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InstancedFoliageActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInstancedFoliageActor_AddInstances, "AddInstances" }, // 3771368886
		{ &Z_Construct_UFunction_AInstancedFoliageActor_RemoveAllInstances, "RemoveAllInstances" }, // 2193728231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInstancedFoliageActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInstancedFoliageActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AISMPartitionActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedFoliageActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInstancedFoliageActor_Statics::ClassParams = {
	&AInstancedFoliageActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInstancedFoliageActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInstancedFoliageActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInstancedFoliageActor()
{
	if (!Z_Registration_Info_UClass_AInstancedFoliageActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInstancedFoliageActor.OuterSingleton, Z_Construct_UClass_AInstancedFoliageActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInstancedFoliageActor.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<AInstancedFoliageActor>()
{
	return AInstancedFoliageActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInstancedFoliageActor);
AInstancedFoliageActor::~AInstancedFoliageActor() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AInstancedFoliageActor)
// End Class AInstancedFoliageActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInstancedFoliageActor, AInstancedFoliageActor::StaticClass, TEXT("AInstancedFoliageActor"), &Z_Registration_Info_UClass_AInstancedFoliageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInstancedFoliageActor), 3604195625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_2195430618(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InstancedFoliageActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
