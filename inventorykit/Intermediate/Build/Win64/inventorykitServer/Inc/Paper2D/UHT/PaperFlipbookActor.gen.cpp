// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperFlipbookActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbookActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PAPER2D_API UClass* Z_Construct_UClass_APaperFlipbookActor();
PAPER2D_API UClass* Z_Construct_UClass_APaperFlipbookActor_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class APaperFlipbookActor
void APaperFlipbookActor::StaticRegisterNativesAPaperFlipbookActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperFlipbookActor);
UClass* Z_Construct_UClass_APaperFlipbookActor_NoRegister()
{
	return APaperFlipbookActor::StaticClass();
}
struct Z_Construct_UClass_APaperFlipbookActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An instance of a UPaperFlipbook in a level.\n *\n * This actor is created when you drag a flipbook asset from the content browser into the level, and\n * it is just a thin wrapper around a UPaperFlipbookComponent that actually references the asset.\n */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PaperFlipbookActor.h" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookActor.h" },
		{ "ToolTip", "An instance of a UPaperFlipbook in a level.\n\nThis actor is created when you drag a flipbook asset from the content browser into the level, and\nit is just a thin wrapper around a UPaperFlipbookComponent that actually references the asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sprite,Rendering,Physics,Components|Flipbook" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperFlipbookActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperFlipbookActor_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaperFlipbookActor, RenderComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderComponent_MetaData), NewProp_RenderComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperFlipbookActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperFlipbookActor_Statics::NewProp_RenderComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperFlipbookActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaperFlipbookActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaperFlipbookActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperFlipbookActor_Statics::ClassParams = {
	&APaperFlipbookActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APaperFlipbookActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APaperFlipbookActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaperFlipbookActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APaperFlipbookActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaperFlipbookActor()
{
	if (!Z_Registration_Info_UClass_APaperFlipbookActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperFlipbookActor.OuterSingleton, Z_Construct_UClass_APaperFlipbookActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaperFlipbookActor.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<APaperFlipbookActor>()
{
	return APaperFlipbookActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaperFlipbookActor);
APaperFlipbookActor::~APaperFlipbookActor() {}
// End Class APaperFlipbookActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaperFlipbookActor, APaperFlipbookActor::StaticClass, TEXT("APaperFlipbookActor"), &Z_Registration_Info_UClass_APaperFlipbookActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperFlipbookActor), 1518890410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookActor_h_1004208382(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
