// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavGraph/NavigationGraphNodeComponent.h"
#include "Runtime/NavigationSystem/Public/NavGraph/NavigationGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraphNodeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationGraphNodeComponent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister();
NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavigationGraphNodeComponent
void UNavigationGraphNodeComponent::StaticRegisterNativesUNavigationGraphNodeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationGraphNodeComponent);
UClass* Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister()
{
	return UNavigationGraphNodeComponent::StaticClass();
}
struct Z_Construct_UClass_UNavigationGraphNodeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "NavGraph/NavigationGraphNodeComponent.h" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextNodeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNodeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevNodeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNodeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextNodeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevNodeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationGraphNodeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationGraphNodeComponent, Node), Z_Construct_UScriptStruct_FNavGraphNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 648619321
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_NextNodeComponent = { "NextNodeComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationGraphNodeComponent, NextNodeComponent), Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextNodeComponent_MetaData), NewProp_NextNodeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_PrevNodeComponent = { "PrevNodeComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationGraphNodeComponent, PrevNodeComponent), Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevNodeComponent_MetaData), NewProp_PrevNodeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_NextNodeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_PrevNodeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::ClassParams = {
	&UNavigationGraphNodeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationGraphNodeComponent()
{
	if (!Z_Registration_Info_UClass_UNavigationGraphNodeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationGraphNodeComponent.OuterSingleton, Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationGraphNodeComponent.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationGraphNodeComponent>()
{
	return UNavigationGraphNodeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationGraphNodeComponent);
UNavigationGraphNodeComponent::~UNavigationGraphNodeComponent() {}
// End Class UNavigationGraphNodeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationGraphNodeComponent, UNavigationGraphNodeComponent::StaticClass, TEXT("UNavigationGraphNodeComponent"), &Z_Registration_Info_UClass_UNavigationGraphNodeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationGraphNodeComponent), 2956618242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_2010900804(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
