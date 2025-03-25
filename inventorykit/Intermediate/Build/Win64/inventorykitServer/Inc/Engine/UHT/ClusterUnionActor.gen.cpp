// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ClusterUnionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClusterUnionActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AClusterUnionActor();
ENGINE_API UClass* Z_Construct_UClass_AClusterUnionActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UClusterUnionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AClusterUnionActor Function GetClusterUnionComponent
struct Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics
{
	struct ClusterUnionActor_eventGetClusterUnionComponent_Parms
	{
		UClusterUnionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ClusterUnionActor_eventGetClusterUnionComponent_Parms, ReturnValue), Z_Construct_UClass_UClusterUnionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClusterUnionActor, nullptr, "GetClusterUnionComponent", nullptr, nullptr, Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::ClusterUnionActor_eventGetClusterUnionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::ClusterUnionActor_eventGetClusterUnionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AClusterUnionActor::execGetClusterUnionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClusterUnionComponent**)Z_Param__Result=P_THIS->GetClusterUnionComponent();
	P_NATIVE_END;
}
// End Class AClusterUnionActor Function GetClusterUnionComponent

// Begin Class AClusterUnionActor
void AClusterUnionActor::StaticRegisterNativesAClusterUnionActor()
{
	UClass* Class = AClusterUnionActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetClusterUnionComponent", &AClusterUnionActor::execGetClusterUnionComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClusterUnionActor);
UClass* Z_Construct_UClass_AClusterUnionActor_NoRegister()
{
	return AClusterUnionActor::StaticClass();
}
struct Z_Construct_UClass_AClusterUnionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A lightweight actor that can be used to own a cluster union component.\n */" },
		{ "IncludePath", "PhysicsEngine/ClusterUnionActor.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A lightweight actor that can be used to own a cluster union component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterUnion_MetaData[] = {
		{ "Category", "Cluster Union" },
		{ "Comment", "/** The pivot used while building. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ClusterUnionActor.h" },
		{ "ToolTip", "The pivot used while building." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClusterUnion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AClusterUnionActor_GetClusterUnionComponent, "GetClusterUnionComponent" }, // 651970183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClusterUnionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClusterUnionActor_Statics::NewProp_ClusterUnion = { "ClusterUnion", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClusterUnionActor, ClusterUnion), Z_Construct_UClass_UClusterUnionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterUnion_MetaData), NewProp_ClusterUnion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClusterUnionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClusterUnionActor_Statics::NewProp_ClusterUnion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClusterUnionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClusterUnionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClusterUnionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClusterUnionActor_Statics::ClassParams = {
	&AClusterUnionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AClusterUnionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AClusterUnionActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClusterUnionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AClusterUnionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClusterUnionActor()
{
	if (!Z_Registration_Info_UClass_AClusterUnionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClusterUnionActor.OuterSingleton, Z_Construct_UClass_AClusterUnionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClusterUnionActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AClusterUnionActor>()
{
	return AClusterUnionActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClusterUnionActor);
AClusterUnionActor::~AClusterUnionActor() {}
// End Class AClusterUnionActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClusterUnionActor, AClusterUnionActor::StaticClass, TEXT("AClusterUnionActor"), &Z_Registration_Info_UClass_AClusterUnionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClusterUnionActor), 2476613683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_2300262799(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
