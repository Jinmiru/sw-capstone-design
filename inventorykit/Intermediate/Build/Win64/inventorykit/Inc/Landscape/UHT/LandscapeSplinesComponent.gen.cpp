// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeSplinesComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplinesComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignControlPointData();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignSplineSegmentData();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignWorldSplineData();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FForeignControlPointData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForeignControlPointData;
class UScriptStruct* FForeignControlPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForeignControlPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForeignControlPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignControlPointData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignControlPointData"));
	}
	return Z_Registration_Info_UScriptStruct_ForeignControlPointData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FForeignControlPointData>()
{
	return FForeignControlPointData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FForeignControlPointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// structs for ForeignWorldSplineDataMap\n// these are editor-only, but we don't have the concept of an editor-only USTRUCT\n" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "structs for ForeignWorldSplineDataMap\nthese are editor-only, but we don't have the concept of an editor-only USTRUCT" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignControlPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_ModificationKey = { "ModificationKey", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignControlPointData, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModificationKey_MetaData), NewProp_ModificationKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0114000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignControlPointData, MeshComponent), Z_Construct_UClass_UControlPointMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignControlPointData, Identifier), Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForeignControlPointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_ModificationKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_Identifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForeignControlPointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"ForeignControlPointData",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::PropPointers), 0),
	sizeof(FForeignControlPointData),
	alignof(FForeignControlPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FForeignControlPointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FForeignControlPointData()
{
	if (!Z_Registration_Info_UScriptStruct_ForeignControlPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForeignControlPointData.InnerSingleton, Z_Construct_UScriptStruct_FForeignControlPointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ForeignControlPointData.InnerSingleton;
}
// End ScriptStruct FForeignControlPointData

// Begin ScriptStruct FForeignSplineSegmentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForeignSplineSegmentData;
class UScriptStruct* FForeignSplineSegmentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForeignSplineSegmentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForeignSplineSegmentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignSplineSegmentData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignSplineSegmentData"));
	}
	return Z_Registration_Info_UScriptStruct_ForeignSplineSegmentData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FForeignSplineSegmentData>()
{
	return FForeignSplineSegmentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignSplineSegmentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_ModificationKey = { "ModificationKey", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignSplineSegmentData, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModificationKey_MetaData), NewProp_ModificationKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0114008800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignSplineSegmentData, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponents_MetaData), NewProp_MeshComponents_MetaData) };
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignSplineSegmentData, Identifier), Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_ModificationKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_Identifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"ForeignSplineSegmentData",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::PropPointers), 0),
	sizeof(FForeignSplineSegmentData),
	alignof(FForeignSplineSegmentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FForeignSplineSegmentData()
{
	if (!Z_Registration_Info_UScriptStruct_ForeignSplineSegmentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForeignSplineSegmentData.InnerSingleton, Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ForeignSplineSegmentData.InnerSingleton;
}
// End ScriptStruct FForeignSplineSegmentData

// Begin ScriptStruct FForeignWorldSplineData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForeignWorldSplineData;
class UScriptStruct* FForeignWorldSplineData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForeignWorldSplineData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForeignWorldSplineData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignWorldSplineData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignWorldSplineData"));
	}
	return Z_Registration_Info_UScriptStruct_ForeignWorldSplineData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FForeignWorldSplineData>()
{
	return FForeignWorldSplineData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForeignControlPointDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForeignControlPointData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForeignSplineSegmentDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForeignSplineSegmentData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForeignControlPointDataMap_ValueProp;
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_ForeignControlPointDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ForeignControlPointDataMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForeignControlPointData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ForeignControlPointData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForeignSplineSegmentDataMap_ValueProp;
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_ForeignSplineSegmentDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ForeignSplineSegmentDataMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForeignSplineSegmentData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ForeignSplineSegmentData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignWorldSplineData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_ValueProp = { "ForeignControlPointDataMap", nullptr, (EPropertyFlags)0x0000008820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FForeignControlPointData, METADATA_PARAMS(0, nullptr) }; // 3846394887
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_Key_KeyProp = { "ForeignControlPointDataMap_Key", nullptr, (EPropertyFlags)0x0004008800000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap = { "ForeignControlPointDataMap", nullptr, (EPropertyFlags)0x0010008820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignWorldSplineData, ForeignControlPointDataMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForeignControlPointDataMap_MetaData), NewProp_ForeignControlPointDataMap_MetaData) }; // 3846394887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData_Inner = { "ForeignControlPointData", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FForeignControlPointData, METADATA_PARAMS(0, nullptr) }; // 3846394887
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData = { "ForeignControlPointData", nullptr, (EPropertyFlags)0x0010008800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignWorldSplineData, ForeignControlPointData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForeignControlPointData_MetaData), NewProp_ForeignControlPointData_MetaData) }; // 3846394887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_ValueProp = { "ForeignSplineSegmentDataMap", nullptr, (EPropertyFlags)0x0000008820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FForeignSplineSegmentData, METADATA_PARAMS(0, nullptr) }; // 3202163765
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_Key_KeyProp = { "ForeignSplineSegmentDataMap_Key", nullptr, (EPropertyFlags)0x0004008800000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap = { "ForeignSplineSegmentDataMap", nullptr, (EPropertyFlags)0x0010008820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignWorldSplineData, ForeignSplineSegmentDataMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForeignSplineSegmentDataMap_MetaData), NewProp_ForeignSplineSegmentDataMap_MetaData) }; // 3202163765
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData_Inner = { "ForeignSplineSegmentData", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FForeignSplineSegmentData, METADATA_PARAMS(0, nullptr) }; // 3202163765
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData = { "ForeignSplineSegmentData", nullptr, (EPropertyFlags)0x0010008800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForeignWorldSplineData, ForeignSplineSegmentData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForeignSplineSegmentData_MetaData), NewProp_ForeignSplineSegmentData_MetaData) }; // 3202163765
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"ForeignWorldSplineData",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::PropPointers), 0),
	sizeof(FForeignWorldSplineData),
	alignof(FForeignWorldSplineData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FForeignWorldSplineData()
{
	if (!Z_Registration_Info_UScriptStruct_ForeignWorldSplineData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForeignWorldSplineData.InnerSingleton, Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ForeignWorldSplineData.InnerSingleton;
}
// End ScriptStruct FForeignWorldSplineData

// Begin Class ULandscapeSplinesComponent Function GetSplineMeshComponents
struct Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics
{
	struct LandscapeSplinesComponent_eventGetSplineMeshComponents_Parms
	{
		TArray<USplineMeshComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LandscapeSplines" },
		{ "Comment", "/** Get a list of spline mesh components representing this landscape spline (Editor only) */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Get a list of spline mesh components representing this landscape spline (Editor only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeSplinesComponent_eventGetSplineMeshComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeSplinesComponent, nullptr, "GetSplineMeshComponents", nullptr, nullptr, Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::LandscapeSplinesComponent_eventGetSplineMeshComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::LandscapeSplinesComponent_eventGetSplineMeshComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULandscapeSplinesComponent::execGetSplineMeshComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USplineMeshComponent*>*)Z_Param__Result=P_THIS->GetSplineMeshComponents();
	P_NATIVE_END;
}
// End Class ULandscapeSplinesComponent Function GetSplineMeshComponents

// Begin Class ULandscapeSplinesComponent
void ULandscapeSplinesComponent::StaticRegisterNativesULandscapeSplinesComponent()
{
	UClass* Class = ULandscapeSplinesComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSplineMeshComponents", &ULandscapeSplinesComponent::execGetSplineMeshComponents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSplinesComponent);
UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister()
{
	return ULandscapeSplinesComponent::StaticClass();
}
struct Z_Construct_UClass_ULandscapeSplinesComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// ULandscapeSplinesComponent\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeSplinesComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "ULandscapeSplinesComponent" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineResolution_MetaData[] = {
		{ "Comment", "/** Resolution of the spline, in distance per point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Resolution of the spline, in distance per point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineColor_MetaData[] = {
		{ "Comment", "/** Color to use to draw the splines */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Color to use to draw the splines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointSprite_MetaData[] = {
		{ "Comment", "/** Sprite used to draw control points */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Sprite used to draw control points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineEditorMesh_MetaData[] = {
		{ "Comment", "/** Mesh used to draw splines that have no mesh */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Mesh used to draw splines that have no mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSplineEditorMesh_MetaData[] = {
		{ "Comment", "/** Whether we are in-editor and showing spline editor meshes */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Whether we are in-editor and showing spline editor meshes" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForeignWorldSplineDataMap_MetaData[] = {
		{ "Comment", "// Serialized\n" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Serialized" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedForeignMeshComponents_MetaData[] = {
		{ "Comment", "// References to components owned by landscape splines in other levels\n// for cooked build (uncooked keeps references via ForeignWorldSplineDataMap)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "References to components owned by landscape splines in other levels\nfor cooked build (uncooked keeps references via ForeignWorldSplineDataMap)" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlPointSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineEditorMesh;
	static void NewProp_bShowSplineEditorMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSplineEditorMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForeignWorldSplineDataMap_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ForeignWorldSplineDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ForeignWorldSplineDataMap;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CookedForeignMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CookedForeignMeshComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents, "GetSplineMeshComponents" }, // 2803137453
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSplinesComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineResolution = { "SplineResolution", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineResolution_MetaData), NewProp_SplineResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineColor = { "SplineColor", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineColor_MetaData), NewProp_SplineColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPointSprite = { "ControlPointSprite", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, ControlPointSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPointSprite_MetaData), NewProp_ControlPointSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineEditorMesh = { "SplineEditorMesh", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineEditorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineEditorMesh_MetaData), NewProp_SplineEditorMesh_MetaData) };
void Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh_SetBit(void* Obj)
{
	((ULandscapeSplinesComponent*)Obj)->bShowSplineEditorMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh = { "bShowSplineEditorMesh", nullptr, (EPropertyFlags)0x0010000c00002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULandscapeSplinesComponent), &Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSplineEditorMesh_MetaData), NewProp_bShowSplineEditorMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0124480000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0124480000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_ValueProp = { "ForeignWorldSplineDataMap", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FForeignWorldSplineData, METADATA_PARAMS(0, nullptr) }; // 1393791983
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_Key_KeyProp = { "ForeignWorldSplineDataMap_Key", nullptr, (EPropertyFlags)0x0004008800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap = { "ForeignWorldSplineDataMap", nullptr, (EPropertyFlags)0x0020488800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, ForeignWorldSplineDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForeignWorldSplineDataMap_MetaData), NewProp_ForeignWorldSplineDataMap_MetaData) }; // 1393791983
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents_Inner = { "CookedForeignMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents = { "CookedForeignMeshComponents", nullptr, (EPropertyFlags)0x0124488000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, CookedForeignMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedForeignMeshComponents_MetaData), NewProp_CookedForeignMeshComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSplinesComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPointSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineEditorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeSplinesComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::ClassParams = {
	&ULandscapeSplinesComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULandscapeSplinesComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeSplinesComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeSplinesComponent()
{
	if (!Z_Registration_Info_UClass_ULandscapeSplinesComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSplinesComponent.OuterSingleton, Z_Construct_UClass_ULandscapeSplinesComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeSplinesComponent.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSplinesComponent>()
{
	return ULandscapeSplinesComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplinesComponent);
ULandscapeSplinesComponent::~ULandscapeSplinesComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplinesComponent)
// End Class ULandscapeSplinesComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FForeignControlPointData::StaticStruct, Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewStructOps, TEXT("ForeignControlPointData"), &Z_Registration_Info_UScriptStruct_ForeignControlPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForeignControlPointData), 3846394887U) },
		{ FForeignSplineSegmentData::StaticStruct, Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewStructOps, TEXT("ForeignSplineSegmentData"), &Z_Registration_Info_UScriptStruct_ForeignSplineSegmentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForeignSplineSegmentData), 3202163765U) },
		{ FForeignWorldSplineData::StaticStruct, Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewStructOps, TEXT("ForeignWorldSplineData"), &Z_Registration_Info_UScriptStruct_ForeignWorldSplineData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForeignWorldSplineData), 1393791983U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSplinesComponent, ULandscapeSplinesComponent::StaticClass, TEXT("ULandscapeSplinesComponent"), &Z_Registration_Info_UClass_ULandscapeSplinesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSplinesComponent), 3016103449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_2345254600(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplinesComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
