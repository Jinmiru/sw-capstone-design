// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeMappingContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer();
ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeItem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNodeMappingContainer
void UNodeMappingContainer::StaticRegisterNativesUNodeMappingContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNodeMappingContainer);
UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister()
{
	return UNodeMappingContainer::StaticClass();
}
struct Z_Construct_UClass_UNodeMappingContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Animation" },
		{ "Comment", "/* Node Mapping Container Class\n * This saves source items, and target items, and mapping between\n * Used by Retargeting, Control Rig mapping. Will need to improve interface better\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/NodeMappingContainer.h" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "Node Mapping Container Class\n* This saves source items, and target items, and mapping between\n* Used by Retargeting, Control Rig mapping. Will need to improve interface better" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceItems_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetItems_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceToTarget_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// source asset that is used to create source\n// should be UNodeMappingProviderInterface\n" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "source asset that is used to create source\nshould be UNodeMappingProviderInterface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// source asset that is used to create target\n// should be UNodeMappingProviderInterface\n" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "source asset that is used to create target\nshould be UNodeMappingProviderInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceItems_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SourceItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetItems_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetItems;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceToTarget_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceToTarget_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SourceToTarget;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceAsset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNodeMappingContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_ValueProp = { "SourceItems", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNodeItem, METADATA_PARAMS(0, nullptr) }; // 2106811933
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_Key_KeyProp = { "SourceItems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems = { "SourceItems", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeMappingContainer, SourceItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceItems_MetaData), NewProp_SourceItems_MetaData) }; // 2106811933
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_ValueProp = { "TargetItems", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNodeItem, METADATA_PARAMS(0, nullptr) }; // 2106811933
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_Key_KeyProp = { "TargetItems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems = { "TargetItems", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeMappingContainer, TargetItems), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetItems_MetaData), NewProp_TargetItems_MetaData) }; // 2106811933
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_ValueProp = { "SourceToTarget", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_Key_KeyProp = { "SourceToTarget_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget = { "SourceToTarget", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeMappingContainer, SourceToTarget), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceToTarget_MetaData), NewProp_SourceToTarget_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeMappingContainer, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAsset_MetaData), NewProp_SourceAsset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset = { "TargetAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeMappingContainer, TargetAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAsset_MetaData), NewProp_TargetAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNodeMappingContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodeMappingContainer_Statics::ClassParams = {
	&UNodeMappingContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNodeMappingContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNodeMappingContainer()
{
	if (!Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton, Z_Construct_UClass_UNodeMappingContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNodeMappingContainer>()
{
	return UNodeMappingContainer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeMappingContainer);
UNodeMappingContainer::~UNodeMappingContainer() {}
// End Class UNodeMappingContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNodeMappingContainer, UNodeMappingContainer::StaticClass, TEXT("UNodeMappingContainer"), &Z_Registration_Info_UClass_UNodeMappingContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodeMappingContainer), 4210278216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_2782307973(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
