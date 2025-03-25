// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueVoice() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice();
ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDialogueVoice
void UDialogueVoice::StaticRegisterNativesUDialogueVoice()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueVoice);
UClass* Z_Construct_UClass_UDialogueVoice_NoRegister()
{
	return UDialogueVoice::StaticClass();
}
struct Z_Construct_UClass_UDialogueVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueVoice.h" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "DialogueVoice" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plurality_MetaData[] = {
		{ "Category", "DialogueVoice" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Gender;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Plurality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalizationGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueVoice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueVoice, Gender), Z_Construct_UEnum_Engine_EGrammaticalGender, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) }; // 1979437957
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality = { "Plurality", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueVoice, Plurality), Z_Construct_UEnum_Engine_EGrammaticalNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plurality_MetaData), NewProp_Plurality_MetaData) }; // 1514099662
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID = { "LocalizationGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueVoice, LocalizationGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalizationGUID_MetaData), NewProp_LocalizationGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueVoice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueVoice_Statics::ClassParams = {
	&UDialogueVoice::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueVoice_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueVoice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueVoice()
{
	if (!Z_Registration_Info_UClass_UDialogueVoice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueVoice.OuterSingleton, Z_Construct_UClass_UDialogueVoice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueVoice.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDialogueVoice>()
{
	return UDialogueVoice::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueVoice);
UDialogueVoice::~UDialogueVoice() {}
// End Class UDialogueVoice

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueVoice, UDialogueVoice::StaticClass, TEXT("UDialogueVoice"), &Z_Registration_Info_UClass_UDialogueVoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueVoice), 2277803433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_2154012947(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
