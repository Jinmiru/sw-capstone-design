// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UModelComponent();
ENGINE_API UClass* Z_Construct_UClass_UModelComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UModelComponent
void UModelComponent::StaticRegisterNativesUModelComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelComponent);
UClass* Z_Construct_UClass_UModelComponent_NoRegister()
{
	return UModelComponent::StaticClass();
}
struct Z_Construct_UClass_UModelComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ModelComponents are PrimitiveComponents that represent elements of BSP geometry in a ULevel object.\n * They are used exclusively by ULevel and are not intended as general-purpose components.\n *\n * @see ULevel\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/ModelComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ModelComponent.h" },
		{ "ToolTip", "ModelComponents are PrimitiveComponents that represent elements of BSP geometry in a ULevel object.\nThey are used exclusively by ULevel and are not intended as general-purpose components.\n\n@see ULevel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelBodySetup_MetaData[] = {
		{ "Comment", "/** Description of collision */" },
		{ "ModuleRelativePath", "Classes/Components/ModelComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModelBodySetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModelComponent_Statics::NewProp_ModelBodySetup = { "ModelBodySetup", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModelComponent, ModelBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelBodySetup_MetaData), NewProp_ModelBodySetup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelComponent_Statics::NewProp_ModelBodySetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModelComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModelComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UModelComponent, IInterface_CollisionDataProvider), false },  // 4090871341
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelComponent_Statics::ClassParams = {
	&UModelComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModelComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModelComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModelComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModelComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModelComponent()
{
	if (!Z_Registration_Info_UClass_UModelComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelComponent.OuterSingleton, Z_Construct_UClass_UModelComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModelComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UModelComponent>()
{
	return UModelComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModelComponent);
UModelComponent::~UModelComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UModelComponent)
// End Class UModelComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModelComponent, UModelComponent::StaticClass, TEXT("UModelComponent"), &Z_Registration_Info_UClass_UModelComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelComponent), 2075373213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_2586111721(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ModelComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
