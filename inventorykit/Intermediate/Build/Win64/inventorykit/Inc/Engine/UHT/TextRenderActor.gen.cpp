// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextRenderActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor();
ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ATextRenderActor
void ATextRenderActor::StaticRegisterNativesATextRenderActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATextRenderActor);
UClass* Z_Construct_UClass_ATextRenderActor_NoRegister()
{
	return ATextRenderActor::StaticClass();
}
struct Z_Construct_UClass_ATextRenderActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/TextRenderActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextRender_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TextRenderActor" },
		{ "Comment", "/** Component to render a text in 3d with a font */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
		{ "ToolTip", "Component to render a text in 3d with a font" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "// Reference to the billboard component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
		{ "ToolTip", "Reference to the billboard component" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextRender;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATextRenderActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender = { "TextRender", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATextRenderActor, TextRender), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextRender_MetaData), NewProp_TextRender_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATextRenderActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATextRenderActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATextRenderActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATextRenderActor_Statics::ClassParams = {
	&ATextRenderActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATextRenderActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATextRenderActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATextRenderActor()
{
	if (!Z_Registration_Info_UClass_ATextRenderActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATextRenderActor.OuterSingleton, Z_Construct_UClass_ATextRenderActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATextRenderActor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ATextRenderActor>()
{
	return ATextRenderActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATextRenderActor);
ATextRenderActor::~ATextRenderActor() {}
// End Class ATextRenderActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATextRenderActor, ATextRenderActor::StaticClass, TEXT("ATextRenderActor"), &Z_Registration_Info_UClass_ATextRenderActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATextRenderActor), 588492190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_1502965620(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
