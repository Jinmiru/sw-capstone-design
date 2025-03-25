// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneMaterialTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialTrack() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister();
MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentMaterialInfo();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Enum EComponentMaterialType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComponentMaterialType;
static UEnum* EComponentMaterialType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EComponentMaterialType"));
	}
	return Z_Registration_Info_UEnum_EComponentMaterialType.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EComponentMaterialType>()
{
	return EComponentMaterialType_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DecalMaterial.Comment", "/* A decal material*/" },
		{ "DecalMaterial.Name", "EComponentMaterialType::DecalMaterial" },
		{ "DecalMaterial.ToolTip", "A decal material" },
		{ "Empty.Comment", "/* Empty/Uninitialized*/" },
		{ "Empty.Name", "EComponentMaterialType::Empty" },
		{ "Empty.ToolTip", "Empty/Uninitialized" },
		{ "IndexedMaterial.Comment", "/* A material in one of the indexed slots on a primitive component*/" },
		{ "IndexedMaterial.Name", "EComponentMaterialType::IndexedMaterial" },
		{ "IndexedMaterial.ToolTip", "A material in one of the indexed slots on a primitive component" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "OverlayMaterial.Comment", "/* An overlay material on a mesh component*/" },
		{ "OverlayMaterial.Name", "EComponentMaterialType::OverlayMaterial" },
		{ "OverlayMaterial.ToolTip", "An overlay material on a mesh component" },
		{ "VolumetricCloudMaterial.Comment", "/* Volumetric Cloud Material*/" },
		{ "VolumetricCloudMaterial.Name", "EComponentMaterialType::VolumetricCloudMaterial" },
		{ "VolumetricCloudMaterial.ToolTip", "Volumetric Cloud Material" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComponentMaterialType::Empty", (int64)EComponentMaterialType::Empty },
		{ "EComponentMaterialType::IndexedMaterial", (int64)EComponentMaterialType::IndexedMaterial },
		{ "EComponentMaterialType::OverlayMaterial", (int64)EComponentMaterialType::OverlayMaterial },
		{ "EComponentMaterialType::DecalMaterial", (int64)EComponentMaterialType::DecalMaterial },
		{ "EComponentMaterialType::VolumetricCloudMaterial", (int64)EComponentMaterialType::VolumetricCloudMaterial },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	"EComponentMaterialType",
	"EComponentMaterialType",
	Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType()
{
	if (!Z_Registration_Info_UEnum_EComponentMaterialType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComponentMaterialType.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComponentMaterialType.InnerSingleton;
}
// End Enum EComponentMaterialType

// Begin ScriptStruct FComponentMaterialInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentMaterialInfo;
class UScriptStruct* FComponentMaterialInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentMaterialInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentMaterialInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentMaterialInfo, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ComponentMaterialInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentMaterialInfo.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FComponentMaterialInfo>()
{
	return FComponentMaterialInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains what is necessary to uniquely identify a material on a component, whether that be an indexed material, one with a slot name, or an overlay material.\n */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "Contains what is necessary to uniquely identify a material on a component, whether that be an indexed material, one with a slot name, or an overlay material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentMaterialInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentMaterialInfo, MaterialSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotName_MetaData), NewProp_MaterialSlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewProp_MaterialSlotIndex = { "MaterialSlotIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentMaterialInfo, MaterialSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotIndex_MetaData), NewProp_MaterialSlotIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentMaterialInfo, MaterialType), Z_Construct_UEnum_MovieSceneTracks_EComponentMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialType_MetaData), NewProp_MaterialType_MetaData) }; // 3097426420
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewProp_MaterialSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewProp_MaterialSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewProp_MaterialType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewProp_MaterialType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"ComponentMaterialInfo",
	Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::PropPointers),
	sizeof(FComponentMaterialInfo),
	alignof(FComponentMaterialInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentMaterialInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentMaterialInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentMaterialInfo.InnerSingleton, Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComponentMaterialInfo.InnerSingleton;
}
// End ScriptStruct FComponentMaterialInfo

// Begin Class UMovieSceneMaterialTrack
void UMovieSceneMaterialTrack::StaticRegisterNativesUMovieSceneMaterialTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMaterialTrack);
UClass* Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister()
{
	return UMovieSceneMaterialTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneMaterialTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of material parameters in a movie scene.\n */" },
		{ "IncludePath", "Tracks/MovieSceneMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of material parameters in a movie scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The sections owned by this track .*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "The sections owned by this track ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionToKey_MetaData[] = {
		{ "Comment", "/** Section we should Key */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "Section we should Key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionToKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMaterialTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_SectionToKey = { "SectionToKey", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneMaterialTrack, SectionToKey), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionToKey_MetaData), NewProp_SectionToKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_SectionToKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::ClassParams = {
	&UMovieSceneMaterialTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneMaterialTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneMaterialTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMaterialTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneMaterialTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMaterialTrack>()
{
	return UMovieSceneMaterialTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialTrack);
UMovieSceneMaterialTrack::~UMovieSceneMaterialTrack() {}
// End Class UMovieSceneMaterialTrack

// Begin Class UMovieSceneComponentMaterialTrack
void UMovieSceneComponentMaterialTrack::StaticRegisterNativesUMovieSceneComponentMaterialTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentMaterialTrack);
UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister()
{
	return UMovieSceneComponentMaterialTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material track which is specialized for animation materials which are owned by actor components.\n */" },
		{ "IncludePath", "Tracks/MovieSceneMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "A material track which is specialized for animation materials which are owned by actor components." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "Comment", "/** The index of this material this track is animating. Has been deprecated in favor of MaterialInfo*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use MaterialInfo instead." },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "The index of this material this track is animating. Has been deprecated in favor of MaterialInfo" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInfo_MetaData[] = {
		{ "Comment", "/** The info on the material this track is animating.*/" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "The info on the material this track is animating." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentMaterialTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneComponentMaterialTrack, MaterialIndex_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialInfo = { "MaterialInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneComponentMaterialTrack, MaterialInfo), Z_Construct_UScriptStruct_FComponentMaterialInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInfo_MetaData), NewProp_MaterialInfo_MetaData) }; // 3517514751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialIndex,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComponentMaterialTrack, IMovieSceneEntityProvider), false },  // 1280352339
	{ Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComponentMaterialTrack, IMovieSceneParameterSectionExtender), false },  // 2306681948
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::ClassParams = {
	&UMovieSceneComponentMaterialTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentMaterialTrack>()
{
	return UMovieSceneComponentMaterialTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentMaterialTrack);
UMovieSceneComponentMaterialTrack::~UMovieSceneComponentMaterialTrack() {}
// End Class UMovieSceneComponentMaterialTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EComponentMaterialType_StaticEnum, TEXT("EComponentMaterialType"), &Z_Registration_Info_UEnum_EComponentMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3097426420U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComponentMaterialInfo::StaticStruct, Z_Construct_UScriptStruct_FComponentMaterialInfo_Statics::NewStructOps, TEXT("ComponentMaterialInfo"), &Z_Registration_Info_UScriptStruct_ComponentMaterialInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentMaterialInfo), 3517514751U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMaterialTrack, UMovieSceneMaterialTrack::StaticClass, TEXT("UMovieSceneMaterialTrack"), &Z_Registration_Info_UClass_UMovieSceneMaterialTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMaterialTrack), 2150557381U) },
		{ Z_Construct_UClass_UMovieSceneComponentMaterialTrack, UMovieSceneComponentMaterialTrack::StaticClass, TEXT("UMovieSceneComponentMaterialTrack"), &Z_Registration_Info_UClass_UMovieSceneComponentMaterialTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentMaterialTrack), 1717417938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_3460171539(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialTrack_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
