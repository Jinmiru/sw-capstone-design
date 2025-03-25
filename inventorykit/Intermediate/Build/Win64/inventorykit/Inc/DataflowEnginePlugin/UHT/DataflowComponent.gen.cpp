// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowEnginePlugin/Public/Dataflow/DataflowComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowComponent() {}

// Begin Cross Module References
DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent();
DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_DataflowEnginePlugin();
// End Cross Module References

// Begin Class UDataflowComponent
void UDataflowComponent::StaticRegisterNativesUDataflowComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowComponent);
UClass* Z_Construct_UClass_UDataflowComponent_NoRegister()
{
	return UDataflowComponent::StaticClass();
}
struct Z_Construct_UClass_UDataflowComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09UDataflowComponent\n*/" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Dataflow/DataflowComponent.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowComponent.h" },
		{ "ToolTip", "UDataflowComponent" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEnginePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowComponent_Statics::ClassParams = {
	&UDataflowComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowComponent()
{
	if (!Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton, Z_Construct_UClass_UDataflowComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowComponent.OuterSingleton;
}
template<> DATAFLOWENGINEPLUGIN_API UClass* StaticClass<UDataflowComponent>()
{
	return UDataflowComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowComponent);
// End Class UDataflowComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowComponent, UDataflowComponent::StaticClass, TEXT("UDataflowComponent"), &Z_Registration_Info_UClass_UDataflowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowComponent), 705861553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_1898591790(TEXT("/Script/DataflowEnginePlugin"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
