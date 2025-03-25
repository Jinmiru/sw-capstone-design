// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawFrustumComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent();
ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDrawFrustumComponent
void UDrawFrustumComponent::StaticRegisterNativesUDrawFrustumComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawFrustumComponent);
UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister()
{
	return UDrawFrustumComponent::StaticClass();
}
struct Z_Construct_UClass_UDrawFrustumComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis.\n */" },
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/DrawFrustumComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrustumEnabled_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "// Enable or disable frustum visualization for this camera\n" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Enable or disable frustum visualization for this camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumColor_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Color to draw the wireframe frustum. */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Color to draw the wireframe frustum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumAngle_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Angle of longest dimension of view shape. \n\x09  * If the angle is 0 then an orthographic projection is used */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Angle of longest dimension of view shape.\nIf the angle is 0 then an orthographic projection is used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumAspectRatio_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Ratio of horizontal size over vertical size. */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Ratio of horizontal size over vertical size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumStartDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Distance from origin to start drawing the frustum. */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Distance from origin to start drawing the frustum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumEndDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Distance from origin to stop drawing the frustum. */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Distance from origin to stop drawing the frustum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** optional texture to show on the near plane */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "optional texture to show on the near plane" },
	};
#endif // WITH_METADATA
	static void NewProp_bFrustumEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrustumEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrustumColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumAspectRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumStartDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumEndDist;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawFrustumComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled_SetBit(void* Obj)
{
	((UDrawFrustumComponent*)Obj)->bFrustumEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled = { "bFrustumEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawFrustumComponent), &Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrustumEnabled_MetaData), NewProp_bFrustumEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor = { "FrustumColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumColor_MetaData), NewProp_FrustumColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle = { "FrustumAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumAngle_MetaData), NewProp_FrustumAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio = { "FrustumAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumAspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumAspectRatio_MetaData), NewProp_FrustumAspectRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist = { "FrustumStartDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumStartDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumStartDist_MetaData), NewProp_FrustumStartDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist = { "FrustumEndDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumEndDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumEndDist_MetaData), NewProp_FrustumEndDist_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawFrustumComponent, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDrawFrustumComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawFrustumComponent_Statics::ClassParams = {
	&UDrawFrustumComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers),
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawFrustumComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawFrustumComponent()
{
	if (!Z_Registration_Info_UClass_UDrawFrustumComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawFrustumComponent.OuterSingleton, Z_Construct_UClass_UDrawFrustumComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawFrustumComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDrawFrustumComponent>()
{
	return UDrawFrustumComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawFrustumComponent);
UDrawFrustumComponent::~UDrawFrustumComponent() {}
// End Class UDrawFrustumComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrawFrustumComponent, UDrawFrustumComponent::StaticClass, TEXT("UDrawFrustumComponent"), &Z_Registration_Info_UClass_UDrawFrustumComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawFrustumComponent), 4198973075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_3269358884(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
