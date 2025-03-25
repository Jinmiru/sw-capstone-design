// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Engine/Public/InterchangeBlueprintPipelineBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeBlueprintPipelineBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBase();
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References

// Begin Class UInterchangeBlueprintPipelineBase
void UInterchangeBlueprintPipelineBase::StaticRegisterNativesUInterchangeBlueprintPipelineBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBlueprintPipelineBase);
UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBase_NoRegister()
{
	return UInterchangeBlueprintPipelineBase::StaticClass();
}
struct Z_Construct_UClass_UInterchangeBlueprintPipelineBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeBlueprintPipelineBase.h" },
		{ "ModuleRelativePath", "Public/InterchangeBlueprintPipelineBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBlueprintPipelineBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeBlueprintPipelineBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBlueprintPipelineBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBlueprintPipelineBase_Statics::ClassParams = {
	&UInterchangeBlueprintPipelineBase::StaticClass,
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
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBlueprintPipelineBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeBlueprintPipelineBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBase()
{
	if (!Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.OuterSingleton, Z_Construct_UClass_UInterchangeBlueprintPipelineBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeBlueprintPipelineBase>()
{
	return UInterchangeBlueprintPipelineBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBlueprintPipelineBase);
UInterchangeBlueprintPipelineBase::~UInterchangeBlueprintPipelineBase() {}
// End Class UInterchangeBlueprintPipelineBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeBlueprintPipelineBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBlueprintPipelineBase, UInterchangeBlueprintPipelineBase::StaticClass, TEXT("UInterchangeBlueprintPipelineBase"), &Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBlueprintPipelineBase), 33600006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeBlueprintPipelineBase_h_4288566127(TEXT("/Script/InterchangeEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeBlueprintPipelineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeBlueprintPipelineBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
