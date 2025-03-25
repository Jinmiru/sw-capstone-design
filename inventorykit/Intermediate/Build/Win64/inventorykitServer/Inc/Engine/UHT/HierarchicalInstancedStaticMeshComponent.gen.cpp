// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalInstancedStaticMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHISMViewRelevanceType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EHISMViewRelevanceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHISMViewRelevanceType;
static UEnum* EHISMViewRelevanceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHISMViewRelevanceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHISMViewRelevanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHISMViewRelevanceType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHISMViewRelevanceType"));
	}
	return Z_Registration_Info_UEnum_EHISMViewRelevanceType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHISMViewRelevanceType>()
{
	return EHISMViewRelevanceType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Foliage.Name", "EHISMViewRelevanceType::Foliage" },
		{ "Grass.Name", "EHISMViewRelevanceType::Grass" },
		{ "HISM.Name", "EHISMViewRelevanceType::HISM" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHISMViewRelevanceType::Grass", (int64)EHISMViewRelevanceType::Grass },
		{ "EHISMViewRelevanceType::Foliage", (int64)EHISMViewRelevanceType::Foliage },
		{ "EHISMViewRelevanceType::HISM", (int64)EHISMViewRelevanceType::HISM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHISMViewRelevanceType",
	"EHISMViewRelevanceType",
	Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHISMViewRelevanceType()
{
	if (!Z_Registration_Info_UEnum_EHISMViewRelevanceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHISMViewRelevanceType.InnerSingleton, Z_Construct_UEnum_Engine_EHISMViewRelevanceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHISMViewRelevanceType.InnerSingleton;
}
// End Enum EHISMViewRelevanceType

// Begin ScriptStruct FClusterNode_DEPRECATED
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED;
class UScriptStruct* FClusterNode_DEPRECATED::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode_DEPRECATED"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterNode_DEPRECATED>()
{
	return FClusterNode_DEPRECATED::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Due to BulkSerialize we can't edit the struct, so we must deprecated this one and create a new one\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Due to BulkSerialize we can't edit the struct, so we must deprecated this one and create a new one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstChild;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastChild;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode_DEPRECATED>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin = { "BoundMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, BoundMin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundMin_MetaData), NewProp_BoundMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild = { "FirstChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, FirstChild), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstChild_MetaData), NewProp_FirstChild_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax = { "BoundMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, BoundMax), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundMax_MetaData), NewProp_BoundMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild = { "LastChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, LastChild), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChild_MetaData), NewProp_LastChild_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance = { "FirstInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, FirstInstance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstInstance_MetaData), NewProp_FirstInstance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance = { "LastInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, LastInstance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInstance_MetaData), NewProp_LastInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClusterNode_DEPRECATED",
	Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers),
	sizeof(FClusterNode_DEPRECATED),
	alignof(FClusterNode_DEPRECATED),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.InnerSingleton, Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED.InnerSingleton;
}
// End ScriptStruct FClusterNode_DEPRECATED

// Begin ScriptStruct FClusterNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterNode;
class UScriptStruct* FClusterNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterNode>()
{
	return FClusterNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInstanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInstanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstChild;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastChild;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinInstanceScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxInstanceScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin = { "BoundMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode, BoundMin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundMin_MetaData), NewProp_BoundMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild = { "FirstChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode, FirstChild), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstChild_MetaData), NewProp_FirstChild_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax = { "BoundMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode, BoundMax), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundMax_MetaData), NewProp_BoundMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild = { "LastChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode, LastChild), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChild_MetaData), NewProp_LastChild_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance = { "FirstInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode, FirstInstance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstInstance_MetaData), NewProp_FirstInstance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance = { "LastInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode, LastInstance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInstance_MetaData), NewProp_LastInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale = { "MinInstanceScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode, MinInstanceScale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInstanceScale_MetaData), NewProp_MinInstanceScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale = { "MaxInstanceScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterNode, MaxInstanceScale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInstanceScale_MetaData), NewProp_MaxInstanceScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ClusterNode",
	Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers),
	sizeof(FClusterNode),
	alignof(FClusterNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterNode()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterNode.InnerSingleton;
}
// End ScriptStruct FClusterNode

// Begin Class UHierarchicalInstancedStaticMeshComponent
void UHierarchicalInstancedStaticMeshComponent::StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHierarchicalInstancedStaticMeshComponent);
UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister()
{
	return UHierarchicalInstancedStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTranslatedInstanceSpace_MetaData[] = {
		{ "Comment", "// If true then we allow a translated space when building the cluster tree.\n// This can help for impementations (foliage) where we can have instances with offsets to large for single float precision.\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "If true then we allow a translated space when building the cluster tree.\nThis can help for impementations (foliage) where we can have instances with offsets to large for single float precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslatedInstanceSpaceOrigin_MetaData[] = {
		{ "Comment", "// Origin of the translated space used when building the cluster tree.\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Origin of the translated space used when building the cluster tree." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortedInstances_MetaData[] = {
		{ "Comment", "// Table for remapping instances from cluster tree to PerInstanceSMData order\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Table for remapping instances from cluster tree to PerInstanceSMData order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBuiltInstances_MetaData[] = {
		{ "Comment", "// The number of instances in the ClusterTree. Subsequent instances will always be rendered.\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The number of instances in the ClusterTree. Subsequent instances will always be rendered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuiltInstanceBounds_MetaData[] = {
		{ "Comment", "// Bounding box of any built instances (cached from the ClusterTree)\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounding box of any built instances (cached from the ClusterTree)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBounds_MetaData[] = {
		{ "Comment", "// Bounding box of any unbuilt instances\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounding box of any unbuilt instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBoundsList_MetaData[] = {
		{ "Comment", "// Bounds of each individual unbuilt instance, used for LOD calculation\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounds of each individual unbuilt instance, used for LOD calculation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Comment", "// Enable for detail meshes that don't really affect the game. Disable for anything important.\n// Typically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Enable for detail meshes that don't really affect the game. Disable for anything important.\nTypically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionLayerNumNodes_MetaData[] = {
		{ "Comment", "// The number of nodes in the occlusion layer\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The number of nodes in the occlusion layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheMeshExtendedBounds_MetaData[] = {
		{ "Comment", "// The last mesh bounds that was cache\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The last mesh bounds that was cache" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceCountToRender_MetaData[] = {
		{ "Comment", "// Instances to render (including removed one until the build is complete)\n" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Instances to render (including removed one until the build is complete)" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseTranslatedInstanceSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTranslatedInstanceSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslatedInstanceSpaceOrigin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortedInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedInstances;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBuiltInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuiltInstanceBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBoundsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnbuiltInstanceBoundsList;
	static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OcclusionLayerNumNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheMeshExtendedBounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceCountToRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalInstancedStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace_SetBit(void* Obj)
{
	((UHierarchicalInstancedStaticMeshComponent*)Obj)->bUseTranslatedInstanceSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace = { "bUseTranslatedInstanceSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTranslatedInstanceSpace_MetaData), NewProp_bUseTranslatedInstanceSpace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_TranslatedInstanceSpaceOrigin = { "TranslatedInstanceSpaceOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, TranslatedInstanceSpaceOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslatedInstanceSpaceOrigin_MetaData), NewProp_TranslatedInstanceSpaceOrigin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_Inner = { "SortedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances = { "SortedInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, SortedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortedInstances_MetaData), NewProp_SortedInstances_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances = { "NumBuiltInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, NumBuiltInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBuiltInstances_MetaData), NewProp_NumBuiltInstances_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds = { "BuiltInstanceBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, BuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuiltInstanceBounds_MetaData), NewProp_BuiltInstanceBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds = { "UnbuiltInstanceBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnbuiltInstanceBounds_MetaData), NewProp_UnbuiltInstanceBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_Inner = { "UnbuiltInstanceBoundsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList = { "UnbuiltInstanceBoundsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBoundsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnbuiltInstanceBoundsList_MetaData), NewProp_UnbuiltInstanceBoundsList_MetaData) };
void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
{
	((UHierarchicalInstancedStaticMeshComponent*)Obj)->bEnableDensityScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDensityScaling_MetaData), NewProp_bEnableDensityScaling_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes = { "OcclusionLayerNumNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, OcclusionLayerNumNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionLayerNumNodes_MetaData), NewProp_OcclusionLayerNumNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds = { "CacheMeshExtendedBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, CacheMeshExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheMeshExtendedBounds_MetaData), NewProp_CacheMeshExtendedBounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender = { "InstanceCountToRender", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, InstanceCountToRender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceCountToRender_MetaData), NewProp_InstanceCountToRender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bUseTranslatedInstanceSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_TranslatedInstanceSpaceOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::ClassParams = {
	&UHierarchicalInstancedStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHierarchicalInstancedStaticMeshComponent>()
{
	return UHierarchicalInstancedStaticMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalInstancedStaticMeshComponent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent)
// End Class UHierarchicalInstancedStaticMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHISMViewRelevanceType_StaticEnum, TEXT("EHISMViewRelevanceType"), &Z_Registration_Info_UEnum_EHISMViewRelevanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3026685803U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClusterNode_DEPRECATED::StaticStruct, Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewStructOps, TEXT("ClusterNode_DEPRECATED"), &Z_Registration_Info_UScriptStruct_ClusterNode_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterNode_DEPRECATED), 1336821588U) },
		{ FClusterNode::StaticStruct, Z_Construct_UScriptStruct_FClusterNode_Statics::NewStructOps, TEXT("ClusterNode"), &Z_Registration_Info_UScriptStruct_ClusterNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterNode), 3112882312U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent::StaticClass, TEXT("UHierarchicalInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHierarchicalInstancedStaticMeshComponent), 2419845395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_4236046840(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
