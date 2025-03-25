// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceSkeletalMesh.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSkeletalMesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDISkeletalMesh_SourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode;
static UEnum* ENDISkeletalMesh_SourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkeletalMesh_SourceMode"));
	}
	return Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDISkeletalMesh_SourceMode>()
{
	return ENDISkeletalMesh_SourceMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\x09Only use the parent actor or component the system is attached to. */" },
		{ "AttachParent.Name", "ENDISkeletalMesh_SourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "Default.Comment", "/**\n\x09""Default behavior.\n\x09- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component).\n\x09- When no source is specified, fall back on attached actor or component.\n\x09- If no attach actor look at the default mesh\n\x09*/" },
		{ "Default.Name", "ENDISkeletalMesh_SourceMode::Default" },
		{ "Default.ToolTip", "Default behavior.\n- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component).\n- When no source is specified, fall back on attached actor or component.\n- If no attach actor look at the default mesh" },
		{ "DefaultMeshOnly.Comment", "/** Only use the \"Default Mesh\" specified. */" },
		{ "DefaultMeshOnly.Name", "ENDISkeletalMesh_SourceMode::DefaultMeshOnly" },
		{ "DefaultMeshOnly.ToolTip", "Only use the \"Default Mesh\" specified." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "Source.Comment", "/**\x09Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component). */" },
		{ "Source.Name", "ENDISkeletalMesh_SourceMode::Source" },
		{ "Source.ToolTip", "Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISkeletalMesh_SourceMode::Default", (int64)ENDISkeletalMesh_SourceMode::Default },
		{ "ENDISkeletalMesh_SourceMode::Source", (int64)ENDISkeletalMesh_SourceMode::Source },
		{ "ENDISkeletalMesh_SourceMode::AttachParent", (int64)ENDISkeletalMesh_SourceMode::AttachParent },
		{ "ENDISkeletalMesh_SourceMode::DefaultMeshOnly", (int64)ENDISkeletalMesh_SourceMode::DefaultMeshOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDISkeletalMesh_SourceMode",
	"ENDISkeletalMesh_SourceMode",
	Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode()
{
	if (!Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton;
}
// End Enum ENDISkeletalMesh_SourceMode

// Begin Enum ENDISkeletalMesh_SkinningMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode;
static UEnum* ENDISkeletalMesh_SkinningMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkeletalMesh_SkinningMode"));
	}
	return Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDISkeletalMesh_SkinningMode>()
{
	return ENDISkeletalMesh_SkinningMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ENDISkeletalMesh_SkinningMode::Invalid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "None.Comment", "/**\n\x09No skinning, use for reference pose only.\n\x09- Bone and socket sampling will be calculated on demand.\n\x09- Triangle and vertex sampling will be calculated on demand.\n\x09*/" },
		{ "None.Name", "ENDISkeletalMesh_SkinningMode::None" },
		{ "None.ToolTip", "No skinning, use for reference pose only.\n- Bone and socket sampling will be calculated on demand.\n- Triangle and vertex sampling will be calculated on demand." },
		{ "PreSkin.Comment", "/**\n\x09Pre-skin the whole mesh, can be more optimal when reading a lot of triangle or vertex data.\n\x09- Bone and socket sampling will be calculated up front.\n\x09- Triangle and vertex sampling will be calculated up front (Note: CPU Access required).\n\x09*/" },
		{ "PreSkin.Name", "ENDISkeletalMesh_SkinningMode::PreSkin" },
		{ "PreSkin.ToolTip", "Pre-skin the whole mesh, can be more optimal when reading a lot of triangle or vertex data.\n- Bone and socket sampling will be calculated up front.\n- Triangle and vertex sampling will be calculated up front (Note: CPU Access required)." },
		{ "SkinOnTheFly.Comment", "/**\n\x09Skin as required, use for bone or socket sampling or when reading a subset of triangles or vertices.\n\x09- Bone and socket sampling will be calculated up front.\n\x09- Triangle and vertex sampling will be calculated on demand (Note: CPU Access required).\n\x09*/" },
		{ "SkinOnTheFly.Name", "ENDISkeletalMesh_SkinningMode::SkinOnTheFly" },
		{ "SkinOnTheFly.ToolTip", "Skin as required, use for bone or socket sampling or when reading a subset of triangles or vertices.\n- Bone and socket sampling will be calculated up front.\n- Triangle and vertex sampling will be calculated on demand (Note: CPU Access required)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISkeletalMesh_SkinningMode::Invalid", (int64)ENDISkeletalMesh_SkinningMode::Invalid },
		{ "ENDISkeletalMesh_SkinningMode::None", (int64)ENDISkeletalMesh_SkinningMode::None },
		{ "ENDISkeletalMesh_SkinningMode::SkinOnTheFly", (int64)ENDISkeletalMesh_SkinningMode::SkinOnTheFly },
		{ "ENDISkeletalMesh_SkinningMode::PreSkin", (int64)ENDISkeletalMesh_SkinningMode::PreSkin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDISkeletalMesh_SkinningMode",
	"ENDISkeletalMesh_SkinningMode",
	Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode()
{
	if (!Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton;
}
// End Enum ENDISkeletalMesh_SkinningMode

// Begin Class UNiagaraDataInterfaceSkeletalMesh Function OnSourceEndPlay
struct Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics
{
	struct NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms
	{
		AActor* InSource;
		TEnumAsByte<EEndPlayReason::Type> Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NewProp_InSource = { "InSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms, InSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms, Reason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(0, nullptr) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NewProp_InSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh, nullptr, "OnSourceEndPlay", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceSkeletalMesh::execOnSourceEndPlay)
{
	P_GET_OBJECT(AActor,Z_Param_InSource);
	P_GET_PROPERTY(FByteProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSourceEndPlay(Z_Param_InSource,EEndPlayReason::Type(Z_Param_Reason));
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceSkeletalMesh Function OnSourceEndPlay

// Begin Class UNiagaraDataInterfaceSkeletalMesh
void UNiagaraDataInterfaceSkeletalMesh::StaticRegisterNativesUNiagaraDataInterfaceSkeletalMesh()
{
	UClass* Class = UNiagaraDataInterfaceSkeletalMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSourceEndPlay", &UNiagaraDataInterfaceSkeletalMesh::execOnSourceEndPlay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSkeletalMesh);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister()
{
	return UNiagaraDataInterfaceSkeletalMesh::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Data Interface allowing sampling of skeletal meshes. */" },
		{ "DisplayName", "Skeletal Mesh" },
		{ "IncludePath", "NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Data Interface allowing sampling of skeletal meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Controls how to retrieve the Skeletal Mesh Component to attach to. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Controls how to retrieve the Skeletal Mesh Component to attach to." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds. */" },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds. */" },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceActor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world.*/" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTags_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If defined, the supplied tags will be used to identify a valid component */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "If defined, the supplied tags will be used to identify a valid component" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshUserParameter_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinningMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Selects which skinning mode to use, for most cases Skin On The Fly will cover your requirements, see individual tooltips for more information. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Selects which skinning mode to use, for most cases Skin On The Fly will cover your requirements, see individual tooltips for more information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRegions_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Sampling regions on the mesh from which to sample. Leave this empty to sample from the whole mesh. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Sampling regions on the mesh from which to sample. Leave this empty to sample from the whole mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WholeMeshLOD_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09If no regions are specified, we'll sample the whole mesh at this LODIndex.\n\x09-1 will use the lowest quality LOD available, i.e. Number of LODs - 1.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "If no regions are specified, we'll sample the whole mesh at this LODIndex.\n-1 will use the lowest quality LOD available, i.e. Number of LODs - 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredBones_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Set of filtered bones that can be used for sampling. Select from these with GetFilteredBoneAt and RandomFilteredBone. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Set of filtered bones that can be used for sampling. Select from these with GetFilteredBoneAt and RandomFilteredBone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilteredSockets_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Set of filtered sockets that can be used for sampling. Select from these with GetFilteredSocketAt and RandomFilteredSocket. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Set of filtered sockets that can be used for sampling. Select from these with GetFilteredSocketAt and RandomFilteredSocket." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeBoneName_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/**\n\x09Optionally remove a single bone from Random / Random Unfiltered access.\n\x09You can still include this bone in filtered list and access using the direct index functionality.\n\x09*/" },
		{ "EditCondition", "bExcludeBone" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Optionally remove a single bone from Random / Random Unfiltered access.\nYou can still include this bone in filtered list and access using the direct index functionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeBone_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UvSetIndex_MetaData[] = {
		{ "Category", "Experimental - UV Mapping" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReadDeformedGeometry_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09Overrides the project setting and allows you to opt out of reading from deformed geometry.\n\x09These is not performance gain from doing this, the branches will still exist in the generated code.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Overrides the project setting and allows you to opt out of reading from deformed geometry.\nThese is not performance gain from doing this, the branches will still exist in the generated code." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSourceActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTags;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshUserParameter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkinningMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkinningMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SamplingRegions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplingRegions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WholeMeshLOD;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredBones;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredSockets;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludeBoneName;
	static void NewProp_bExcludeBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeBone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UvSetIndex;
	static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
	static void NewProp_bReadDeformedGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadDeformedGeometry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay, "OnSourceEndPlay" }, // 3417271020
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSkeletalMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SourceMode), Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 3587506763
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, DefaultMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMesh_MetaData), NewProp_DefaultMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SoftSourceActor = { "SoftSourceActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SoftSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSourceActor_MetaData), NewProp_SoftSourceActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags_Inner = { "ComponentTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags = { "ComponentTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, ComponentTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTags_MetaData), NewProp_ComponentTags_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0124080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, Source_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SourceComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponent_MetaData), NewProp_SourceComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter = { "MeshUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshUserParameter_MetaData), NewProp_MeshUserParameter_MetaData) }; // 174428838
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode = { "SkinningMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SkinningMode), Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinningMode_MetaData), NewProp_SkinningMode_MetaData) }; // 777372688
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_Inner = { "SamplingRegions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions = { "SamplingRegions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingRegions_MetaData), NewProp_SamplingRegions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD = { "WholeMeshLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, WholeMeshLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WholeMeshLOD_MetaData), NewProp_WholeMeshLOD_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_Inner = { "FilteredBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones = { "FilteredBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, FilteredBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredBones_MetaData), NewProp_FilteredBones_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_Inner = { "FilteredSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets = { "FilteredSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilteredSockets_MetaData), NewProp_FilteredSockets_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName = { "ExcludeBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeBoneName_MetaData), NewProp_ExcludeBoneName_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSkeletalMesh*)Obj)->bExcludeBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone = { "bExcludeBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraDataInterfaceSkeletalMesh), &Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeBone_MetaData), NewProp_bExcludeBone_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_UvSetIndex = { "UvSetIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, UvSetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UvSetIndex_MetaData), NewProp_UvSetIndex_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSkeletalMesh*)Obj)->bRequireCurrentFrameData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSkeletalMesh), &Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireCurrentFrameData_MetaData), NewProp_bRequireCurrentFrameData_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bReadDeformedGeometry_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSkeletalMesh*)Obj)->bReadDeformedGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bReadDeformedGeometry = { "bReadDeformedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSkeletalMesh), &Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bReadDeformedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadDeformedGeometry_MetaData), NewProp_bReadDeformedGeometry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_DefaultMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SoftSourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_UvSetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bReadDeformedGeometry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::ClassParams = {
	&UNiagaraDataInterfaceSkeletalMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSkeletalMesh>()
{
	return UNiagaraDataInterfaceSkeletalMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSkeletalMesh);
UNiagaraDataInterfaceSkeletalMesh::~UNiagaraDataInterfaceSkeletalMesh() {}
// End Class UNiagaraDataInterfaceSkeletalMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDISkeletalMesh_SourceMode_StaticEnum, TEXT("ENDISkeletalMesh_SourceMode"), &Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3587506763U) },
		{ ENDISkeletalMesh_SkinningMode_StaticEnum, TEXT("ENDISkeletalMesh_SkinningMode"), &Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 777372688U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh, UNiagaraDataInterfaceSkeletalMesh::StaticClass, TEXT("UNiagaraDataInterfaceSkeletalMesh"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSkeletalMesh), 2846197255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_3375083668(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
