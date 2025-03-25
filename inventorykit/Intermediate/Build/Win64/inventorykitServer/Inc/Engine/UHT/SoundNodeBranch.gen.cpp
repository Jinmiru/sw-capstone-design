// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeBranch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeBranch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeBranch
void USoundNodeBranch::StaticRegisterNativesUSoundNodeBranch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeBranch);
UClass* Z_Construct_UClass_USoundNodeBranch_NoRegister()
{
	return USoundNodeBranch::StaticClass();
}
struct Z_Construct_UClass_USoundNodeBranch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Selects a child node based on the value of a boolean parameter\n */" },
		{ "DisplayName", "Branch" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeBranch.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeBranch.h" },
		{ "ToolTip", "Selects a child node based on the value of a boolean parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolParameterName_MetaData[] = {
		{ "Category", "Branch" },
		{ "Comment", "/** The name of the boolean parameter to use to determine which branch we should take */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeBranch.h" },
		{ "ToolTip", "The name of the boolean parameter to use to determine which branch we should take" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoolParameterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeBranch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName = { "BoolParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeBranch, BoolParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolParameterName_MetaData), NewProp_BoolParameterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeBranch_Statics::NewProp_BoolParameterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeBranch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeBranch_Statics::ClassParams = {
	&USoundNodeBranch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeBranch_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeBranch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeBranch()
{
	if (!Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton, Z_Construct_UClass_USoundNodeBranch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeBranch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeBranch>()
{
	return USoundNodeBranch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeBranch);
USoundNodeBranch::~USoundNodeBranch() {}
// End Class USoundNodeBranch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeBranch, USoundNodeBranch::StaticClass, TEXT("USoundNodeBranch"), &Z_Registration_Info_UClass_USoundNodeBranch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeBranch), 4040631742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_129996781(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeBranch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
