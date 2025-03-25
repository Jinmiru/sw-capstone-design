// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowEnginePlugin/Public/Dataflow/DataflowActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowActor() {}

// Begin Cross Module References
DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_ADataflowActor();
DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_ADataflowActor_NoRegister();
DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DataflowEnginePlugin();
// End Cross Module References

// Begin Class ADataflowActor
void ADataflowActor::StaticRegisterNativesADataflowActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADataflowActor);
UClass* Z_Construct_UClass_ADataflowActor_NoRegister()
{
	return ADataflowActor::StaticClass();
}
struct Z_Construct_UClass_ADataflowActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowActor.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataflowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Destruction" },
		{ "Comment", "/* DataflowComponent */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowActor.h" },
		{ "ToolTip", "DataflowComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataflowComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataflowActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataflowActor_Statics::NewProp_DataflowComponent = { "DataflowComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataflowActor, DataflowComponent), Z_Construct_UClass_UDataflowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataflowComponent_MetaData), NewProp_DataflowComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADataflowActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataflowActor_Statics::NewProp_DataflowComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADataflowActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADataflowActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEnginePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADataflowActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADataflowActor_Statics::ClassParams = {
	&ADataflowActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADataflowActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADataflowActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADataflowActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADataflowActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADataflowActor()
{
	if (!Z_Registration_Info_UClass_ADataflowActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADataflowActor.OuterSingleton, Z_Construct_UClass_ADataflowActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADataflowActor.OuterSingleton;
}
template<> DATAFLOWENGINEPLUGIN_API UClass* StaticClass<ADataflowActor>()
{
	return ADataflowActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADataflowActor);
ADataflowActor::~ADataflowActor() {}
// End Class ADataflowActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADataflowActor, ADataflowActor::StaticClass, TEXT("ADataflowActor"), &Z_Registration_Info_UClass_ADataflowActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADataflowActor), 3840353144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_3834255239(TEXT("/Script/DataflowEnginePlugin"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
