// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig_Hearing.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Hearing() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISenseConfig_Hearing
void UAISenseConfig_Hearing::StaticRegisterNativesUAISenseConfig_Hearing()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Hearing);
UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister()
{
	return UAISenseConfig_Hearing::StaticClass();
}
struct Z_Construct_UClass_UAISenseConfig_Hearing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "AI Hearing config" },
		{ "IncludePath", "Perception/AISenseConfig_Hearing.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
		{ "UIMin", "0.000000" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoSHearingRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bUseLoSHearing" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
		{ "UIMin", "0.000000" },
		{ "Units", "Centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLoSHearing_MetaData[] = {
		{ "Category", "Sense" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Implementation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoSHearingRange;
	static void NewProp_bUseLoSHearing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLoSHearing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Hearing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Hearing, Implementation), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_Hearing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Implementation_MetaData), NewProp_Implementation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange = { "HearingRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Hearing, HearingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingRange_MetaData), NewProp_HearingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange = { "LoSHearingRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Hearing, LoSHearingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoSHearingRange_MetaData), NewProp_LoSHearingRange_MetaData) };
void Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_SetBit(void* Obj)
{
	((UAISenseConfig_Hearing*)Obj)->bUseLoSHearing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing = { "bUseLoSHearing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAISenseConfig_Hearing), &Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLoSHearing_MetaData), NewProp_bUseLoSHearing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISenseConfig_Hearing, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionByAffiliation_MetaData), NewProp_DetectionByAffiliation_MetaData) }; // 1287263908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISenseConfig_Hearing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::ClassParams = {
	&UAISenseConfig_Hearing::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers),
	0,
	0x000810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISenseConfig_Hearing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISenseConfig_Hearing()
{
	if (!Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Hearing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISenseConfig_Hearing.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Hearing>()
{
	return UAISenseConfig_Hearing::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Hearing);
UAISenseConfig_Hearing::~UAISenseConfig_Hearing() {}
// End Class UAISenseConfig_Hearing

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Hearing, UAISenseConfig_Hearing::StaticClass, TEXT("UAISenseConfig_Hearing"), &Z_Registration_Info_UClass_UAISenseConfig_Hearing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Hearing), 2220137879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_1036725282(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Hearing_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
