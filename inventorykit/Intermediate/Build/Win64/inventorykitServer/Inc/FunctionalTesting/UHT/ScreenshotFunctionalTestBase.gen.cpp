// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/ScreenshotFunctionalTestBase.h"
#include "Developer/FunctionalTesting/Public/AutomationScreenshotOptions.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTestBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Class AScreenshotFunctionalTestBase
void AScreenshotFunctionalTestBase::StaticRegisterNativesAScreenshotFunctionalTestBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScreenshotFunctionalTestBase);
UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister()
{
	return AScreenshotFunctionalTestBase::StaticClass();
}
struct Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class for screenshot functional test\n*/" },
		{ "HideCategories", "Actor Input Rendering HLOD" },
		{ "IncludePath", "ScreenshotFunctionalTestBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for screenshot functional test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotCamera_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotOptions_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Notes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenshotCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenshotOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreenshotFunctionalTestBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScreenshotFunctionalTestBase, Notes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Notes_MetaData), NewProp_Notes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera = { "ScreenshotCamera", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScreenshotFunctionalTestBase, ScreenshotCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotCamera_MetaData), NewProp_ScreenshotCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions = { "ScreenshotOptions", nullptr, (EPropertyFlags)0x00200a0000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScreenshotFunctionalTestBase, ScreenshotOptions), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenshotOptions_MetaData), NewProp_ScreenshotOptions_MetaData) }; // 2951369274
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::ClassParams = {
	&AScreenshotFunctionalTestBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase()
{
	if (!Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton, Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScreenshotFunctionalTestBase.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<AScreenshotFunctionalTestBase>()
{
	return AScreenshotFunctionalTestBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScreenshotFunctionalTestBase);
AScreenshotFunctionalTestBase::~AScreenshotFunctionalTestBase() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AScreenshotFunctionalTestBase)
// End Class AScreenshotFunctionalTestBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScreenshotFunctionalTestBase, AScreenshotFunctionalTestBase::StaticClass, TEXT("AScreenshotFunctionalTestBase"), &Z_Registration_Info_UClass_AScreenshotFunctionalTestBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScreenshotFunctionalTestBase), 1478208134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_3294538431(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTestBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
