// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeNaniteComponent.h"
#include "Runtime/Landscape/Classes/LandscapeProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeNaniteComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeNaniteComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeNaniteComponent
void ULandscapeNaniteComponent::StaticRegisterNativesULandscapeNaniteComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeNaniteComponent);
UClass* Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister()
{
	return ULandscapeNaniteComponent::StaticClass();
}
struct Z_Construct_UClass_ULandscapeNaniteComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Collision Movement Rendering PrimitiveComponent Object Transform Mobility VirtualTexture Object Activation Components|Activation Trigger" },
		{ "IncludePath", "LandscapeNaniteComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeNaniteComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Rendering|Material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProxyContentId_MetaData[] = {
		{ "Comment", "/* The landscape proxy identity this Nanite representation was generated for */" },
		{ "ModuleRelativePath", "Classes/LandscapeNaniteComponent.h" },
		{ "ToolTip", "The landscape proxy identity this Nanite representation was generated for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeNaniteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLandscapeComponents_MetaData[] = {
		{ "Comment", "/** Landscape Components which were used to generate this ULandscapeNaniteComponent*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeNaniteComponent.h" },
		{ "ToolTip", "Landscape Components which were used to generate this ULandscapeNaniteComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyContentId;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceLandscapeComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceLandscapeComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeNaniteComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_ProxyContentId = { "ProxyContentId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeNaniteComponent, ProxyContentId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProxyContentId_MetaData), NewProp_ProxyContentId_MetaData) };
void Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ULandscapeNaniteComponent*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeNaniteComponent), &Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_SourceLandscapeComponents_Inner = { "SourceLandscapeComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_SourceLandscapeComponents = { "SourceLandscapeComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeNaniteComponent, SourceLandscapeComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLandscapeComponents_MetaData), NewProp_SourceLandscapeComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeNaniteComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_ProxyContentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_SourceLandscapeComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeNaniteComponent_Statics::NewProp_SourceLandscapeComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeNaniteComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeNaniteComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeNaniteComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeNaniteComponent_Statics::ClassParams = {
	&ULandscapeNaniteComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeNaniteComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeNaniteComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeNaniteComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeNaniteComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeNaniteComponent()
{
	if (!Z_Registration_Info_UClass_ULandscapeNaniteComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeNaniteComponent.OuterSingleton, Z_Construct_UClass_ULandscapeNaniteComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeNaniteComponent.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeNaniteComponent>()
{
	return ULandscapeNaniteComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeNaniteComponent);
ULandscapeNaniteComponent::~ULandscapeNaniteComponent() {}
// End Class ULandscapeNaniteComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeNaniteComponent, ULandscapeNaniteComponent::StaticClass, TEXT("ULandscapeNaniteComponent"), &Z_Registration_Info_UClass_ULandscapeNaniteComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeNaniteComponent), 4079725451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_2712688434(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
