// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeSplineActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplineActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineActor();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineActor_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ALandscapeSplineActor
void ALandscapeSplineActor::StaticRegisterNativesALandscapeSplineActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeSplineActor);
UClass* Z_Construct_UClass_ALandscapeSplineActor_NoRegister()
{
	return ALandscapeSplineActor::StaticClass();
}
struct Z_Construct_UClass_ALandscapeSplineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Lighting Input" },
		{ "IncludePath", "LandscapeSplineActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[] = {
		{ "Comment", "/** Guid for LandscapeInfo **/" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineActor.h" },
		{ "ToolTip", "Guid for LandscapeInfo *" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeActor_MetaData[] = {
		{ "Category", "Target Landscape" },
		{ "Comment", "/** Landscape **/" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineActor.h" },
		{ "ToolTip", "Landscape *" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeActor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeSplineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeSplineActor, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeGuid_MetaData), NewProp_LandscapeGuid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeActor = { "LandscapeActor", nullptr, (EPropertyFlags)0x0124080800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeSplineActor, LandscapeActor), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeActor_MetaData), NewProp_LandscapeActor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeSplineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeGuid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeActor,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALandscapeSplineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALandscapeSplineActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULandscapeSplineInterface_NoRegister, (int32)VTABLE_OFFSET(ALandscapeSplineActor, ILandscapeSplineInterface), false },  // 4288334296
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeSplineActor_Statics::ClassParams = {
	&ALandscapeSplineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALandscapeSplineActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeSplineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandscapeSplineActor()
{
	if (!Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton, Z_Construct_UClass_ALandscapeSplineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ALandscapeSplineActor>()
{
	return ALandscapeSplineActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeSplineActor);
ALandscapeSplineActor::~ALandscapeSplineActor() {}
// End Class ALandscapeSplineActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeSplineActor, ALandscapeSplineActor::StaticClass, TEXT("ALandscapeSplineActor"), &Z_Registration_Info_UClass_ALandscapeSplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeSplineActor), 1573949707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_2385783226(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
