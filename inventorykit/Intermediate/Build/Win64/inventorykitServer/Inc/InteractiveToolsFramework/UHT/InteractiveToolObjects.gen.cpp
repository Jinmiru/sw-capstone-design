// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/InteractiveToolObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolObjects() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolFrameworkComponent();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolFrameworkComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class AInternalToolFrameworkActor
void AInternalToolFrameworkActor::StaticRegisterNativesAInternalToolFrameworkActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInternalToolFrameworkActor);
UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister()
{
	return AInternalToolFrameworkActor::StaticClass();
}
struct Z_Construct_UClass_AInternalToolFrameworkActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AInternalToolFrameworkActor is a base class for internal Actors that the\n * ToolsFramework may spawn (for gizmos, mesh previews, etc). These Actors\n * may need special-case handling, for example to prevent the user from\n * selecting and deleting them. \n */" },
		{ "IncludePath", "InteractiveToolObjects.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InteractiveToolObjects.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "AInternalToolFrameworkActor is a base class for internal Actors that the\nToolsFramework may spawn (for gizmos, mesh previews, etc). These Actors\nmay need special-case handling, for example to prevent the user from\nselecting and deleting them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelectableInEditor_MetaData[] = {
		{ "Comment", "/** Controls whether this InternalToolFrameworkActor can be selected in the Editor. */" },
		{ "ModuleRelativePath", "Public/InteractiveToolObjects.h" },
		{ "ToolTip", "Controls whether this InternalToolFrameworkActor can be selected in the Editor." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSelectableInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelectableInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInternalToolFrameworkActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor_SetBit(void* Obj)
{
	((AInternalToolFrameworkActor*)Obj)->bIsSelectableInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor = { "bIsSelectableInEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInternalToolFrameworkActor), &Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelectableInEditor_MetaData), NewProp_bIsSelectableInEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInternalToolFrameworkActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInternalToolFrameworkActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInternalToolFrameworkActor_Statics::ClassParams = {
	&AInternalToolFrameworkActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInternalToolFrameworkActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::PropPointers),
	0,
	0x018802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInternalToolFrameworkActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInternalToolFrameworkActor()
{
	if (!Z_Registration_Info_UClass_AInternalToolFrameworkActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInternalToolFrameworkActor.OuterSingleton, Z_Construct_UClass_AInternalToolFrameworkActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInternalToolFrameworkActor.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<AInternalToolFrameworkActor>()
{
	return AInternalToolFrameworkActor::StaticClass();
}
AInternalToolFrameworkActor::AInternalToolFrameworkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInternalToolFrameworkActor);
AInternalToolFrameworkActor::~AInternalToolFrameworkActor() {}
// End Class AInternalToolFrameworkActor

// Begin Interface UToolFrameworkComponent
void UToolFrameworkComponent::StaticRegisterNativesUToolFrameworkComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolFrameworkComponent);
UClass* Z_Construct_UClass_UToolFrameworkComponent_NoRegister()
{
	return UToolFrameworkComponent::StaticClass();
}
struct Z_Construct_UClass_UToolFrameworkComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolObjects.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolFrameworkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolFrameworkComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolFrameworkComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolFrameworkComponent_Statics::ClassParams = {
	&UToolFrameworkComponent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolFrameworkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolFrameworkComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolFrameworkComponent()
{
	if (!Z_Registration_Info_UClass_UToolFrameworkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolFrameworkComponent.OuterSingleton, Z_Construct_UClass_UToolFrameworkComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolFrameworkComponent.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolFrameworkComponent>()
{
	return UToolFrameworkComponent::StaticClass();
}
UToolFrameworkComponent::UToolFrameworkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolFrameworkComponent);
UToolFrameworkComponent::~UToolFrameworkComponent() {}
// End Interface UToolFrameworkComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInternalToolFrameworkActor, AInternalToolFrameworkActor::StaticClass, TEXT("AInternalToolFrameworkActor"), &Z_Registration_Info_UClass_AInternalToolFrameworkActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInternalToolFrameworkActor), 3897280115U) },
		{ Z_Construct_UClass_UToolFrameworkComponent, UToolFrameworkComponent::StaticClass, TEXT("UToolFrameworkComponent"), &Z_Registration_Info_UClass_UToolFrameworkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolFrameworkComponent), 1682361775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_1298833359(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
