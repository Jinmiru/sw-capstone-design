// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeMappingProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface();
ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeItem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNodeItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeItem;
class UScriptStruct* FNodeItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeItem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NodeItem"));
	}
	return Z_Registration_Info_UScriptStruct_NodeItem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNodeItem>()
{
	return FNodeItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNodeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* Node Information to save with */" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Node Information to save with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
		{ "Comment", "/* Parent Name. If NAME_None, it will consider no parent */" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Parent Name. If NAME_None, it will consider no parent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/* Space transform (Not based on parent). Used by control rig system */" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Space transform (Not based on parent). Used by control rig system" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeItem, ParentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentName_MetaData), NewProp_ParentName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeItem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NodeItem",
	Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers),
	sizeof(FNodeItem),
	alignof(FNodeItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNodeItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNodeItem()
{
	if (!Z_Registration_Info_UScriptStruct_NodeItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeItem.InnerSingleton, Z_Construct_UScriptStruct_FNodeItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NodeItem.InnerSingleton;
}
// End ScriptStruct FNodeItem

// Begin Interface UNodeMappingProviderInterface
void UNodeMappingProviderInterface::StaticRegisterNativesUNodeMappingProviderInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNodeMappingProviderInterface);
UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister()
{
	return UNodeMappingProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UNodeMappingProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INodeMappingProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNodeMappingProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodeMappingProviderInterface_Statics::ClassParams = {
	&UNodeMappingProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UNodeMappingProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNodeMappingProviderInterface()
{
	if (!Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton, Z_Construct_UClass_UNodeMappingProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNodeMappingProviderInterface>()
{
	return UNodeMappingProviderInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeMappingProviderInterface);
UNodeMappingProviderInterface::~UNodeMappingProviderInterface() {}
// End Interface UNodeMappingProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNodeItem::StaticStruct, Z_Construct_UScriptStruct_FNodeItem_Statics::NewStructOps, TEXT("NodeItem"), &Z_Registration_Info_UScriptStruct_NodeItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeItem), 2106811933U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNodeMappingProviderInterface, UNodeMappingProviderInterface::StaticClass, TEXT("UNodeMappingProviderInterface"), &Z_Registration_Info_UClass_UNodeMappingProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodeMappingProviderInterface), 2699525937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_1430441573(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
