// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig_Touch.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Touch() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Touch();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Touch_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISenseConfig_Touch
void UAISenseConfig_Touch::StaticRegisterNativesUAISenseConfig_Touch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Touch);
UClass* Z_Construct_UClass_UAISenseConfig_Touch_NoRegister()
{
	return UAISenseConfig_Touch::StaticClass();
}
struct Z_Construct_UClass_UAISenseConfig_Touch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "AI Touch config" },
		{ "IncludePath", "Perception/AISenseConfig_Touch.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Touch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Touch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Touch_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Touch, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionByAffiliation_MetaData), NewProp_DetectionByAffiliation_MetaData) }; // 1287263908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Touch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Touch_Statics::NewProp_DetectionByAffiliation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Touch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISenseConfig_Touch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Touch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Touch_Statics::ClassParams = {
	&UAISenseConfig_Touch::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISenseConfig_Touch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Touch_Statics::PropPointers),
	0,
	0x000810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Touch_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseConfig_Touch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseConfig_Touch()
{
	if (!Z_Registration_Info_UClass_UAISenseConfig_Touch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Touch.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Touch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseConfig_Touch.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Touch>()
{
	return UAISenseConfig_Touch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Touch);
UAISenseConfig_Touch::~UAISenseConfig_Touch() {}
// End Class UAISenseConfig_Touch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Touch, UAISenseConfig_Touch::StaticClass, TEXT("UAISenseConfig_Touch"), &Z_Registration_Info_UClass_UAISenseConfig_Touch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Touch), 2789678805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_1880208372(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Touch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
