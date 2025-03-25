// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References

// Begin Class AGeometryCacheActor Function GetGeometryCacheComponent
struct Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics
{
	struct GeometryCacheActor_eventGetGeometryCacheComponent_Parms
	{
		UGeometryCacheComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Returns GeometryCacheComponent subobject **/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
		{ "ToolTip", "Returns GeometryCacheComponent subobject *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryCacheActor_eventGetGeometryCacheComponent_Parms, ReturnValue), Z_Construct_UClass_UGeometryCacheComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryCacheActor, nullptr, "GetGeometryCacheComponent", nullptr, nullptr, Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::GeometryCacheActor_eventGetGeometryCacheComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::GeometryCacheActor_eventGetGeometryCacheComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGeometryCacheActor::execGetGeometryCacheComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGeometryCacheComponent**)Z_Param__Result=P_THIS->GetGeometryCacheComponent();
	P_NATIVE_END;
}
// End Class AGeometryCacheActor Function GetGeometryCacheComponent

// Begin Class AGeometryCacheActor
void AGeometryCacheActor::StaticRegisterNativesAGeometryCacheActor()
{
	UClass* Class = AGeometryCacheActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGeometryCacheComponent", &AGeometryCacheActor::execGetGeometryCacheComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCacheActor);
UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister()
{
	return AGeometryCacheActor::StaticClass();
}
struct Z_Construct_UClass_AGeometryCacheActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** GeometryCache actor, serves as a place-able actor for GeometryCache objects*/" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "GeometryCacheActor.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
		{ "ToolTip", "GeometryCache actor, serves as a place-able actor for GeometryCache objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GeometryCacheActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCacheComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent, "GetGeometryCacheComponent" }, // 1668569052
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCacheActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent = { "GeometryCacheComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCacheActor, GeometryCacheComponent), Z_Construct_UClass_UGeometryCacheComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCacheComponent_MetaData), NewProp_GeometryCacheComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGeometryCacheActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCacheActor_Statics::ClassParams = {
	&AGeometryCacheActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeometryCacheActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeometryCacheActor()
{
	if (!Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton, Z_Construct_UClass_AGeometryCacheActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton;
}
template<> GEOMETRYCACHE_API UClass* StaticClass<AGeometryCacheActor>()
{
	return AGeometryCacheActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCacheActor);
AGeometryCacheActor::~AGeometryCacheActor() {}
// End Class AGeometryCacheActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCacheActor, AGeometryCacheActor::StaticClass, TEXT("AGeometryCacheActor"), &Z_Registration_Info_UClass_AGeometryCacheActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCacheActor), 3362984262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_3243713806(TEXT("/Script/GeometryCache"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
