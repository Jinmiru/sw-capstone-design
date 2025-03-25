// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavigationInvokerComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationInvokerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationInvokerPriority();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavigationInvokerComponent
void UNavigationInvokerComponent::StaticRegisterNativesUNavigationInvokerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationInvokerComponent);
UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister()
{
	return UNavigationInvokerComponent::StaticClass();
}
struct Z_Construct_UClass_UNavigationInvokerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "IncludePath", "NavigationInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileGenerationRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileRemovalRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** restrict navigation generation to specific agents */" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "ToolTip", "restrict navigation generation to specific agents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Experimental invocation priority. It will modify the order in which invoked tiles are being built if SortPendingTilesMethod is set to SortByPriority. */" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "ToolTip", "Experimental invocation priority. It will modify the order in which invoked tiles are being built if SortPendingTilesMethod is set to SortByPriority." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileGenerationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileRemovalRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationInvokerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius = { "TileGenerationRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationInvokerComponent, TileGenerationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileGenerationRadius_MetaData), NewProp_TileGenerationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius = { "TileRemovalRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationInvokerComponent, TileRemovalRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileRemovalRadius_MetaData), NewProp_TileRemovalRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationInvokerComponent, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAgents_MetaData), NewProp_SupportedAgents_MetaData) }; // 1400047301
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationInvokerComponent, Priority), Z_Construct_UEnum_Engine_ENavigationInvokerPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 3258851762
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_SupportedAgents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationInvokerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::ClassParams = {
	&UNavigationInvokerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationInvokerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationInvokerComponent()
{
	if (!Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton, Z_Construct_UClass_UNavigationInvokerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationInvokerComponent>()
{
	return UNavigationInvokerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationInvokerComponent);
UNavigationInvokerComponent::~UNavigationInvokerComponent() {}
// End Class UNavigationInvokerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationInvokerComponent, UNavigationInvokerComponent::StaticClass, TEXT("UNavigationInvokerComponent"), &Z_Registration_Info_UClass_UNavigationInvokerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationInvokerComponent), 1325992918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_2290889248(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
