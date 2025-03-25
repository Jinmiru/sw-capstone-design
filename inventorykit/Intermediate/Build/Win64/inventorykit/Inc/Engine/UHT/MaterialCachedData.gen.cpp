// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialCachedData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedExpressionData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskValue();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FMaterialFunctionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialFunctionInfo;
class UScriptStruct* FMaterialFunctionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialFunctionInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialFunctionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialFunctionInfo>()
{
	return FMaterialFunctionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores information about a function that this material references, used to know when the material needs to be recompiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Stores information about a function that this material references, used to know when the material needs to be recompiled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Id that the function had when this material was last compiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Id that the function had when this material was last compiled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Comment", "/** The function which this material has a dependency on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "The function which this material has a dependency on." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialFunctionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialFunctionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateId_MetaData), NewProp_StateId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialFunctionInfo, Function), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialFunctionInfo",
	Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers),
	sizeof(FMaterialFunctionInfo),
	alignof(FMaterialFunctionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.InnerSingleton;
}
// End ScriptStruct FMaterialFunctionInfo

// Begin ScriptStruct FMaterialParameterCollectionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo;
class UScriptStruct* FMaterialParameterCollectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialParameterCollectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialParameterCollectionInfo>()
{
	return FMaterialParameterCollectionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Id that the collection had when this material was last compiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Id that the collection had when this material was last compiled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[] = {
		{ "Comment", "/** The collection which this material has a dependency on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "The collection which this material has a dependency on." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParameterCollectionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParameterCollectionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateId_MetaData), NewProp_StateId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParameterCollectionInfo, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCollection_MetaData), NewProp_ParameterCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialParameterCollectionInfo",
	Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers),
	sizeof(FMaterialParameterCollectionInfo),
	alignof(FMaterialParameterCollectionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.InnerSingleton;
}
// End ScriptStruct FMaterialParameterCollectionInfo

// Begin ScriptStruct FMaterialCachedParameterEditorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo;
class UScriptStruct* FMaterialCachedParameterEditorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedParameterEditorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedParameterEditorInfo>()
{
	return FMaterialCachedParameterEditorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedParameterEditorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, SortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortPriority_MetaData), NewProp_SortPriority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_AssetIndex = { "AssetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, AssetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetIndex_MetaData), NewProp_AssetIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_ExpressionGuid = { "ExpressionGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, ExpressionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGuid_MetaData), NewProp_ExpressionGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_SortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_AssetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_ExpressionGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialCachedParameterEditorInfo",
	Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::PropPointers),
	sizeof(FMaterialCachedParameterEditorInfo),
	alignof(FMaterialCachedParameterEditorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.InnerSingleton;
}
// End ScriptStruct FMaterialCachedParameterEditorInfo

// Begin ScriptStruct FMaterialCachedParameterEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry;
class UScriptStruct* FMaterialCachedParameterEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedParameterEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedParameterEntry>()
{
	return FMaterialCachedParameterEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfoSet_MetaData[] = {
		{ "Comment", "// This is used to map FMaterialParameterInfos to indices, which are then used to index various TArrays containing values for each type of parameter\n// (ExpressionGuids and Overrides, along with ScalarValues, VectorValues, etc)\n" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "This is used to map FMaterialParameterInfos to indices, which are then used to index various TArrays containing values for each type of parameter\n(ExpressionGuids and Overrides, along with ScalarValues, VectorValues, etc)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfoSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ParameterInfoSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedParameterEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet_ElementProp = { "ParameterInfoSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(0, nullptr) }; // 682741679
static_assert(TModels_V<CGetTypeHashable, FMaterialParameterInfo>, "The structure 'FMaterialParameterInfo' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet = { "ParameterInfoSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedParameterEntry, ParameterInfoSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfoSet_MetaData), NewProp_ParameterInfoSet_MetaData) }; // 682741679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialCachedParameterEntry",
	Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers),
	sizeof(FMaterialCachedParameterEntry),
	alignof(FMaterialCachedParameterEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.InnerSingleton;
}
// End ScriptStruct FMaterialCachedParameterEntry

// Begin ScriptStruct FMaterialCachedParameterEditorEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorEntry;
class UScriptStruct* FMaterialCachedParameterEditorEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedParameterEditorEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedParameterEditorEntry>()
{
	return FMaterialCachedParameterEditorEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedParameterEditorEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::NewProp_EditorInfo_Inner = { "EditorInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo, METADATA_PARAMS(0, nullptr) }; // 3280521743
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::NewProp_EditorInfo = { "EditorInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorEntry, EditorInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorInfo_MetaData), NewProp_EditorInfo_MetaData) }; // 3280521743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::NewProp_EditorInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::NewProp_EditorInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialCachedParameterEditorEntry",
	Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::PropPointers),
	sizeof(FMaterialCachedParameterEditorEntry),
	alignof(FMaterialCachedParameterEditorEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorEntry.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorEntry.InnerSingleton;
}
// End ScriptStruct FMaterialCachedParameterEditorEntry

// Begin ScriptStruct FMaterialCachedExpressionEditorOnlyData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedExpressionEditorOnlyData;
class UScriptStruct* FMaterialCachedExpressionEditorOnlyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedExpressionEditorOnlyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedExpressionEditorOnlyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedExpressionEditorOnlyData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedExpressionEditorOnlyData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedExpressionEditorOnlyData>()
{
	return FMaterialCachedExpressionEditorOnlyData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticComponentMaskValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarMinMaxValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarCurveValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarCurveAtlasValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorChannelNameValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorUsedAsChannelMaskValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureChannelNameValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionIncludeFilePaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorOnlyEntries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorEntries;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StaticSwitchValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticComponentMaskValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticComponentMaskValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarMinMaxValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarMinMaxValues;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ScalarCurveValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarCurveValues;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ScalarCurveAtlasValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarCurveAtlasValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorChannelNameValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorChannelNameValues;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VectorUsedAsChannelMaskValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorUsedAsChannelMaskValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureChannelNameValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureChannelNameValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialLayers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayerNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionIncludeFilePaths_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ExpressionIncludeFilePaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedExpressionEditorOnlyData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_EditorOnlyEntries = { "EditorOnlyEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(EditorOnlyEntries, FMaterialCachedExpressionEditorOnlyData), STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, EditorOnlyEntries), Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorOnlyEntries_MetaData), NewProp_EditorOnlyEntries_MetaData) }; // 3843195589
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_EditorEntries = { "EditorEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(EditorEntries, FMaterialCachedExpressionEditorOnlyData), STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, EditorEntries), Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorEntries_MetaData), NewProp_EditorEntries_MetaData) }; // 3347804
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_StaticSwitchValues_Inner = { "StaticSwitchValues", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_StaticSwitchValues = { "StaticSwitchValues", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, StaticSwitchValues_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticSwitchValues_MetaData), NewProp_StaticSwitchValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_StaticComponentMaskValues_Inner = { "StaticComponentMaskValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticComponentMaskValue, METADATA_PARAMS(0, nullptr) }; // 1184454995
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_StaticComponentMaskValues = { "StaticComponentMaskValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, StaticComponentMaskValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticComponentMaskValues_MetaData), NewProp_StaticComponentMaskValues_MetaData) }; // 1184454995
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarMinMaxValues_Inner = { "ScalarMinMaxValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarMinMaxValues = { "ScalarMinMaxValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, ScalarMinMaxValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarMinMaxValues_MetaData), NewProp_ScalarMinMaxValues_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarCurveValues_Inner = { "ScalarCurveValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarCurveValues = { "ScalarCurveValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, ScalarCurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarCurveValues_MetaData), NewProp_ScalarCurveValues_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarCurveAtlasValues_Inner = { "ScalarCurveAtlasValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarCurveAtlasValues = { "ScalarCurveAtlasValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, ScalarCurveAtlasValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarCurveAtlasValues_MetaData), NewProp_ScalarCurveAtlasValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_VectorChannelNameValues_Inner = { "VectorChannelNameValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(0, nullptr) }; // 1866097793
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_VectorChannelNameValues = { "VectorChannelNameValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, VectorChannelNameValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorChannelNameValues_MetaData), NewProp_VectorChannelNameValues_MetaData) }; // 1866097793
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_VectorUsedAsChannelMaskValues_Inner = { "VectorUsedAsChannelMaskValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_VectorUsedAsChannelMaskValues = { "VectorUsedAsChannelMaskValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, VectorUsedAsChannelMaskValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorUsedAsChannelMaskValues_MetaData), NewProp_VectorUsedAsChannelMaskValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_TextureChannelNameValues_Inner = { "TextureChannelNameValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(0, nullptr) }; // 1866097793
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_TextureChannelNameValues = { "TextureChannelNameValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, TextureChannelNameValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureChannelNameValues_MetaData), NewProp_TextureChannelNameValues_MetaData) }; // 1866097793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_MaterialLayers = { "MaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, MaterialLayers), Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLayers_MetaData), NewProp_MaterialLayers_MetaData) }; // 4010625096
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, AssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPaths_MetaData), NewProp_AssetPaths_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_LandscapeLayerNames_Inner = { "LandscapeLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_LandscapeLayerNames = { "LandscapeLayerNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, LandscapeLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayerNames_MetaData), NewProp_LandscapeLayerNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ExpressionIncludeFilePaths_ElementProp = { "ExpressionIncludeFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ExpressionIncludeFilePaths = { "ExpressionIncludeFilePaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionEditorOnlyData, ExpressionIncludeFilePaths), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionIncludeFilePaths_MetaData), NewProp_ExpressionIncludeFilePaths_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_EditorOnlyEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_EditorEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_StaticSwitchValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_StaticSwitchValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_StaticComponentMaskValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_StaticComponentMaskValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarMinMaxValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarMinMaxValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarCurveValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarCurveValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarCurveAtlasValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ScalarCurveAtlasValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_VectorChannelNameValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_VectorChannelNameValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_VectorUsedAsChannelMaskValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_VectorUsedAsChannelMaskValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_TextureChannelNameValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_TextureChannelNameValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_MaterialLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_AssetPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_AssetPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_LandscapeLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_LandscapeLayerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ExpressionIncludeFilePaths_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewProp_ExpressionIncludeFilePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialCachedExpressionEditorOnlyData",
	Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::PropPointers),
	sizeof(FMaterialCachedExpressionEditorOnlyData),
	alignof(FMaterialCachedExpressionEditorOnlyData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedExpressionEditorOnlyData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedExpressionEditorOnlyData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedExpressionEditorOnlyData.InnerSingleton;
}
// End ScriptStruct FMaterialCachedExpressionEditorOnlyData

// Begin ScriptStruct FMaterialCachedExpressionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData;
class UScriptStruct* FMaterialCachedExpressionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedExpressionData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedExpressionData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedExpressionData>()
{
	return FMaterialCachedExpressionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarPrimitiveDataIndexValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorPrimitiveDataIndexValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSwitchValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleVectorValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontPageValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextureValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTextureValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextures_MetaData[] = {
		{ "Comment", "/** Array of all texture referenced by this material */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all texture referenced by this material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionInfos_MetaData[] = {
		{ "Comment", "/** Array of all functions this material depends on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all functions this material depends on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionInfosStateCRC_MetaData[] = {
		{ "Comment", "/** CRC of the FunctionInfos StateIds. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "CRC of the FunctionInfos StateIds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionInfos_MetaData[] = {
		{ "Comment", "/** Array of all parameter collections this material depends on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all parameter collections this material depends on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicParameterNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasMaterialLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRuntimeVirtualTextureOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSceneColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPerInstanceCustomData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPerInstanceRandom_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasVertexInterpolator_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyConnectedBitmask_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyConnectedMask_MetaData[] = {
		{ "Comment", "/** Each bit corresponds to EMaterialProperty connection status. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Each bit corresponds to EMaterialProperty connection status." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScalarPrimitiveDataIndexValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarPrimitiveDataIndexValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VectorPrimitiveDataIndexValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorPrimitiveDataIndexValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarValues;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StaticSwitchValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchValues;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DynamicSwitchValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicSwitchValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleVectorValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleVectorValues;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TextureValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureValues;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FontValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FontValues;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontPageValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FontPageValues;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RuntimeVirtualTextureValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextureValues;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SparseVolumeTextureValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SparseVolumeTextureValues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencedTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionInfos;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_FunctionInfosStateCRC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCollectionInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionInfos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrassTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrassTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialLayers;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DynamicParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicParameterNames;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_QualityLevelsUsed_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QualityLevelsUsed;
	static void NewProp_bHasMaterialLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaterialLayers;
	static void NewProp_bHasRuntimeVirtualTextureOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRuntimeVirtualTextureOutput;
	static void NewProp_bHasSceneColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSceneColor;
	static void NewProp_bHasPerInstanceCustomData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPerInstanceCustomData;
	static void NewProp_bHasPerInstanceRandom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPerInstanceRandom;
	static void NewProp_bHasVertexInterpolator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexInterpolator;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PropertyConnectedBitmask;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_PropertyConnectedMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedExpressionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_RuntimeEntries = { "RuntimeEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(RuntimeEntries, FMaterialCachedExpressionData), STRUCT_OFFSET(FMaterialCachedExpressionData, RuntimeEntries), Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeEntries_MetaData), NewProp_RuntimeEntries_MetaData) }; // 3843195589
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ScalarPrimitiveDataIndexValues_Inner = { "ScalarPrimitiveDataIndexValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ScalarPrimitiveDataIndexValues = { "ScalarPrimitiveDataIndexValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, ScalarPrimitiveDataIndexValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarPrimitiveDataIndexValues_MetaData), NewProp_ScalarPrimitiveDataIndexValues_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_VectorPrimitiveDataIndexValues_Inner = { "VectorPrimitiveDataIndexValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_VectorPrimitiveDataIndexValues = { "VectorPrimitiveDataIndexValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, VectorPrimitiveDataIndexValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorPrimitiveDataIndexValues_MetaData), NewProp_VectorPrimitiveDataIndexValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ScalarValues_Inner = { "ScalarValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ScalarValues = { "ScalarValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, ScalarValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarValues_MetaData), NewProp_ScalarValues_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_StaticSwitchValues_Inner = { "StaticSwitchValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_StaticSwitchValues = { "StaticSwitchValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, StaticSwitchValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticSwitchValues_MetaData), NewProp_StaticSwitchValues_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicSwitchValues_Inner = { "DynamicSwitchValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicSwitchValues = { "DynamicSwitchValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, DynamicSwitchValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSwitchValues_MetaData), NewProp_DynamicSwitchValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_VectorValues_Inner = { "VectorValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_VectorValues = { "VectorValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, VectorValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorValues_MetaData), NewProp_VectorValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DoubleVectorValues_Inner = { "DoubleVectorValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DoubleVectorValues = { "DoubleVectorValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, DoubleVectorValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleVectorValues_MetaData), NewProp_DoubleVectorValues_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_TextureValues_Inner = { "TextureValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_TextureValues = { "TextureValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, TextureValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureValues_MetaData), NewProp_TextureValues_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FontValues_Inner = { "FontValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FontValues = { "FontValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, FontValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontValues_MetaData), NewProp_FontValues_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FontPageValues_Inner = { "FontPageValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FontPageValues = { "FontPageValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, FontPageValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontPageValues_MetaData), NewProp_FontPageValues_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_RuntimeVirtualTextureValues_Inner = { "RuntimeVirtualTextureValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_RuntimeVirtualTextureValues = { "RuntimeVirtualTextureValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, RuntimeVirtualTextureValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextureValues_MetaData), NewProp_RuntimeVirtualTextureValues_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_SparseVolumeTextureValues_Inner = { "SparseVolumeTextureValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_SparseVolumeTextureValues = { "SparseVolumeTextureValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, SparseVolumeTextureValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparseVolumeTextureValues_MetaData), NewProp_SparseVolumeTextureValues_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_Inner = { "ReferencedTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures = { "ReferencedTextures", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, ReferencedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedTextures_MetaData), NewProp_ReferencedTextures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_Inner = { "FunctionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialFunctionInfo, METADATA_PARAMS(0, nullptr) }; // 3133082563
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos = { "FunctionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, FunctionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionInfos_MetaData), NewProp_FunctionInfos_MetaData) }; // 3133082563
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfosStateCRC = { "FunctionInfosStateCRC", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, FunctionInfosStateCRC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionInfosStateCRC_MetaData), NewProp_FunctionInfosStateCRC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_Inner = { "ParameterCollectionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, METADATA_PARAMS(0, nullptr) }; // 442138514
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos = { "ParameterCollectionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, ParameterCollectionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCollectionInfos_MetaData), NewProp_ParameterCollectionInfos_MetaData) }; // 442138514
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_Inner = { "GrassTypes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeGrassType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes = { "GrassTypes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, GrassTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassTypes_MetaData), NewProp_GrassTypes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialLayers = { "MaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, MaterialLayers), Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLayers_MetaData), NewProp_MaterialLayers_MetaData) }; // 1059352502
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_Inner = { "DynamicParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames = { "DynamicParameterNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, DynamicParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicParameterNames_MetaData), NewProp_DynamicParameterNames_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_Inner = { "QualityLevelsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed = { "QualityLevelsUsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, QualityLevelsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityLevelsUsed_MetaData), NewProp_QualityLevelsUsed_MetaData) };
void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers_SetBit(void* Obj)
{
	((FMaterialCachedExpressionData*)Obj)->bHasMaterialLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers = { "bHasMaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasMaterialLayers_MetaData), NewProp_bHasMaterialLayers_MetaData) };
void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_SetBit(void* Obj)
{
	((FMaterialCachedExpressionData*)Obj)->bHasRuntimeVirtualTextureOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput = { "bHasRuntimeVirtualTextureOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRuntimeVirtualTextureOutput_MetaData), NewProp_bHasRuntimeVirtualTextureOutput_MetaData) };
void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_SetBit(void* Obj)
{
	((FMaterialCachedExpressionData*)Obj)->bHasSceneColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor = { "bHasSceneColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSceneColor_MetaData), NewProp_bHasSceneColor_MetaData) };
void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData_SetBit(void* Obj)
{
	((FMaterialCachedExpressionData*)Obj)->bHasPerInstanceCustomData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData = { "bHasPerInstanceCustomData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPerInstanceCustomData_MetaData), NewProp_bHasPerInstanceCustomData_MetaData) };
void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom_SetBit(void* Obj)
{
	((FMaterialCachedExpressionData*)Obj)->bHasPerInstanceRandom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom = { "bHasPerInstanceRandom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPerInstanceRandom_MetaData), NewProp_bHasPerInstanceRandom_MetaData) };
void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator_SetBit(void* Obj)
{
	((FMaterialCachedExpressionData*)Obj)->bHasVertexInterpolator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator = { "bHasVertexInterpolator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasVertexInterpolator_MetaData), NewProp_bHasVertexInterpolator_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_PropertyConnectedBitmask = { "PropertyConnectedBitmask", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, PropertyConnectedBitmask_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyConnectedBitmask_MetaData), NewProp_PropertyConnectedBitmask_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_PropertyConnectedMask = { "PropertyConnectedMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, PropertyConnectedMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyConnectedMask_MetaData), NewProp_PropertyConnectedMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_RuntimeEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ScalarPrimitiveDataIndexValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ScalarPrimitiveDataIndexValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_VectorPrimitiveDataIndexValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_VectorPrimitiveDataIndexValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ScalarValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ScalarValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_StaticSwitchValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_StaticSwitchValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicSwitchValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicSwitchValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_VectorValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_VectorValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DoubleVectorValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DoubleVectorValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_TextureValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_TextureValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FontValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FontValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FontPageValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FontPageValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_RuntimeVirtualTextureValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_RuntimeVirtualTextureValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_SparseVolumeTextureValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_SparseVolumeTextureValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfosStateCRC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_PropertyConnectedBitmask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_PropertyConnectedMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialCachedExpressionData",
	Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers),
	sizeof(FMaterialCachedExpressionData),
	alignof(FMaterialCachedExpressionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedExpressionData()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.InnerSingleton;
}
// End ScriptStruct FMaterialCachedExpressionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialFunctionInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewStructOps, TEXT("MaterialFunctionInfo"), &Z_Registration_Info_UScriptStruct_MaterialFunctionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialFunctionInfo), 3133082563U) },
		{ FMaterialParameterCollectionInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewStructOps, TEXT("MaterialParameterCollectionInfo"), &Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialParameterCollectionInfo), 442138514U) },
		{ FMaterialCachedParameterEditorInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewStructOps, TEXT("MaterialCachedParameterEditorInfo"), &Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedParameterEditorInfo), 3280521743U) },
		{ FMaterialCachedParameterEntry::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewStructOps, TEXT("MaterialCachedParameterEntry"), &Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedParameterEntry), 3843195589U) },
		{ FMaterialCachedParameterEditorEntry::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedParameterEditorEntry_Statics::NewStructOps, TEXT("MaterialCachedParameterEditorEntry"), &Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedParameterEditorEntry), 3347804U) },
		{ FMaterialCachedExpressionEditorOnlyData::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedExpressionEditorOnlyData_Statics::NewStructOps, TEXT("MaterialCachedExpressionEditorOnlyData"), &Z_Registration_Info_UScriptStruct_MaterialCachedExpressionEditorOnlyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedExpressionEditorOnlyData), 3595852870U) },
		{ FMaterialCachedExpressionData::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewStructOps, TEXT("MaterialCachedExpressionData"), &Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedExpressionData), 3922942925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_3977406807(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
