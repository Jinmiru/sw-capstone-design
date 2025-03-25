// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBrushComponent();
ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UModel();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBrushComponent
void UBrushComponent::StaticRegisterNativesUBrushComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushComponent);
UClass* Z_Construct_UClass_UBrushComponent_NoRegister()
{
	return UBrushComponent::StaticClass();
}
struct Z_Construct_UClass_UBrushComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""A brush component defines a shape that can be modified within the editor. They are used both as part of BSP building, and for volumes. \n *\x09@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes\n *\x09@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Brushes\n */" },
		{ "HideCategories", "Physics Lighting LOD Rendering TextureStreaming Transform Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/BrushComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
		{ "ShowCategories", "Rendering|Material" },
		{ "ToolTip", "A brush component defines a shape that can be modified within the editor. They are used both as part of BSP building, and for volumes.\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Brushes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushBodySetup_MetaData[] = {
		{ "Comment", "/** Description of collision */" },
		{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrePivot_MetaData[] = {
		{ "Comment", "/** Local space translation */" },
		{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
		{ "ToolTip", "Local space translation" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushBodySetup;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrePivot;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushComponent_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushComponent, Brush), Z_Construct_UClass_UModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushComponent_Statics::NewProp_BrushBodySetup = { "BrushBodySetup", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushComponent, BrushBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushBodySetup_MetaData), NewProp_BrushBodySetup_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushComponent_Statics::NewProp_PrePivot = { "PrePivot", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushComponent, PrePivot_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrePivot_MetaData), NewProp_PrePivot_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushComponent_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushComponent_Statics::NewProp_BrushBodySetup,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushComponent_Statics::NewProp_PrePivot,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBrushComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushComponent_Statics::ClassParams = {
	&UBrushComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBrushComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushComponent()
{
	if (!Z_Registration_Info_UClass_UBrushComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushComponent.OuterSingleton, Z_Construct_UClass_UBrushComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBrushComponent>()
{
	return UBrushComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushComponent);
UBrushComponent::~UBrushComponent() {}
// End Class UBrushComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrushComponent, UBrushComponent::StaticClass, TEXT("UBrushComponent"), &Z_Registration_Info_UClass_UBrushComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushComponent), 2238539937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_3146536766(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BrushComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
