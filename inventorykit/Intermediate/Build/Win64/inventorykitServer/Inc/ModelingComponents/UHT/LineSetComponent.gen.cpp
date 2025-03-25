// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Drawing/LineSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineSetComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class ULineSetComponent
void ULineSetComponent::StaticRegisterNativesULineSetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineSetComponent);
UClass* Z_Construct_UClass_ULineSetComponent_NoRegister()
{
	return ULineSetComponent::StaticClass();
}
struct Z_Construct_UClass_ULineSetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/LineSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[] = {
		{ "Comment", "//~ End USceneComponent Interface.\n" },
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoundsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/LineSetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bBoundsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundsDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineSetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULineSetComponent_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineSetComponent, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMaterial_MetaData), NewProp_LineMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULineSetComponent_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULineSetComponent, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
void Z_Construct_UClass_ULineSetComponent_Statics::NewProp_bBoundsDirty_SetBit(void* Obj)
{
	((ULineSetComponent*)Obj)->bBoundsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULineSetComponent_Statics::NewProp_bBoundsDirty = { "bBoundsDirty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULineSetComponent), &Z_Construct_UClass_ULineSetComponent_Statics::NewProp_bBoundsDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoundsDirty_MetaData), NewProp_bBoundsDirty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULineSetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSetComponent_Statics::NewProp_LineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSetComponent_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineSetComponent_Statics::NewProp_bBoundsDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineSetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULineSetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULineSetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineSetComponent_Statics::ClassParams = {
	&ULineSetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULineSetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULineSetComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULineSetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULineSetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULineSetComponent()
{
	if (!Z_Registration_Info_UClass_ULineSetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineSetComponent.OuterSingleton, Z_Construct_UClass_ULineSetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULineSetComponent.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<ULineSetComponent>()
{
	return ULineSetComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULineSetComponent);
ULineSetComponent::~ULineSetComponent() {}
// End Class ULineSetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULineSetComponent, ULineSetComponent::StaticClass, TEXT("ULineSetComponent"), &Z_Registration_Info_UClass_ULineSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineSetComponent), 1010028209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_4172014386(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_LineSetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
