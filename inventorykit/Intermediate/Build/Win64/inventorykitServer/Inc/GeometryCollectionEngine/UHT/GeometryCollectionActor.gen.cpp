// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class AGeometryCollectionActor Function RaycastSingle
struct Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics
{
	struct GeometryCollectionActor_eventRaycastSingle_Parms
	{
		FVector Start;
		FVector End;
		FHitResult OutHit;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCollectionActor_eventRaycastSingle_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GeometryCollectionActor_eventRaycastSingle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryCollectionActor_eventRaycastSingle_Parms), &Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryCollectionActor, nullptr, "RaycastSingle", nullptr, nullptr, Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::GeometryCollectionActor_eventRaycastSingle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::GeometryCollectionActor_eventRaycastSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGeometryCollectionActor::execRaycastSingle)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RaycastSingle(Z_Param_Start,Z_Param_End,Z_Param_Out_OutHit);
	P_NATIVE_END;
}
// End Class AGeometryCollectionActor Function RaycastSingle

// Begin Class AGeometryCollectionActor
void AGeometryCollectionActor::StaticRegisterNativesAGeometryCollectionActor()
{
	UClass* Class = AGeometryCollectionActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RaycastSingle", &AGeometryCollectionActor::execRaycastSingle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCollectionActor);
UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister()
{
	return AGeometryCollectionActor::StaticClass();
}
struct Z_Construct_UClass_AGeometryCollectionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryCollection/GeometryCollectionActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Destruction" },
		{ "Comment", "/* GeometryCollectionComponent */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|GeometryCollection" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
		{ "ToolTip", "GeometryCollectionComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionDebugDrawComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionDebugDrawComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryCollectionActor_RaycastSingle, "RaycastSingle" }, // 3243532787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent = { "GeometryCollectionComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionActor, GeometryCollectionComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionComponent_MetaData), NewProp_GeometryCollectionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent = { "GeometryCollectionDebugDrawComponent", nullptr, (EPropertyFlags)0x0114000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionActor, GeometryCollectionDebugDrawComponent_DEPRECATED), Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionDebugDrawComponent_MetaData), NewProp_GeometryCollectionDebugDrawComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionActor_Statics::NewProp_GeometryCollectionDebugDrawComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGeometryCollectionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionActor_Statics::ClassParams = {
	&AGeometryCollectionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeometryCollectionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeometryCollectionActor()
{
	if (!Z_Registration_Info_UClass_AGeometryCollectionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCollectionActor.OuterSingleton, Z_Construct_UClass_AGeometryCollectionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeometryCollectionActor.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionActor>()
{
	return AGeometryCollectionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionActor);
AGeometryCollectionActor::~AGeometryCollectionActor() {}
// End Class AGeometryCollectionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCollectionActor, AGeometryCollectionActor::StaticClass, TEXT("AGeometryCollectionActor"), &Z_Registration_Info_UClass_AGeometryCollectionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCollectionActor), 3551177231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_860524396(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
