// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TriggerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ATriggerBox
void ATriggerBox::StaticRegisterNativesATriggerBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerBox);
UClass* Z_Construct_UClass_ATriggerBox_NoRegister()
{
	return ATriggerBox::StaticClass();
}
struct Z_Construct_UClass_ATriggerBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A box shaped trigger, used to generate overlap events in the level */" },
		{ "IncludePath", "Engine/TriggerBox.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerBox.h" },
		{ "ToolTip", "A box shaped trigger, used to generate overlap events in the level" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATriggerBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBox_Statics::ClassParams = {
	&ATriggerBox::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATriggerBox()
{
	if (!Z_Registration_Info_UClass_ATriggerBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerBox.OuterSingleton, Z_Construct_UClass_ATriggerBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerBox.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ATriggerBox>()
{
	return ATriggerBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBox);
ATriggerBox::~ATriggerBox() {}
// End Class ATriggerBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerBox, ATriggerBox::StaticClass, TEXT("ATriggerBox"), &Z_Registration_Info_UClass_ATriggerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerBox), 337364887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_2053778549(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
