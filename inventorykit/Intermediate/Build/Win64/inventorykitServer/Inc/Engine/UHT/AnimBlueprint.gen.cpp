// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprint() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint();
ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimGroupInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimGroupInfo;
class UScriptStruct* FAnimGroupInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGroupInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimGroupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGroupInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimGroupInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AnimGroupInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimGroupInfo>()
{
	return FAnimGroupInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimGroupInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGroupInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimGroupInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimGroupInfo, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimGroupInfo",
	Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::PropPointers),
	sizeof(FAnimGroupInfo),
	alignof(FAnimGroupInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGroupInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimGroupInfo.InnerSingleton, Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimGroupInfo.InnerSingleton;
}
// End ScriptStruct FAnimGroupInfo

// Begin ScriptStruct FAnimParentNodeAssetOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride;
class UScriptStruct* FAnimParentNodeAssetOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimParentNodeAssetOverride"));
	}
	return Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimParentNodeAssetOverride>()
{
	return FAnimParentNodeAssetOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentNodeGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimParentNodeAssetOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimParentNodeAssetOverride, NewAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAsset_MetaData), NewProp_NewAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid = { "ParentNodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimParentNodeAssetOverride, ParentNodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNodeGuid_MetaData), NewProp_ParentNodeGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_NewAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewProp_ParentNodeGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimParentNodeAssetOverride",
	Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::PropPointers),
	sizeof(FAnimParentNodeAssetOverride),
	alignof(FAnimParentNodeAssetOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride()
{
	if (!Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.InnerSingleton, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride.InnerSingleton;
}
// End ScriptStruct FAnimParentNodeAssetOverride

// Begin Enum EPreviewAnimationBlueprintApplicationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod;
static UEnum* EPreviewAnimationBlueprintApplicationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPreviewAnimationBlueprintApplicationMethod"));
	}
	return Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPreviewAnimationBlueprintApplicationMethod>()
{
	return EPreviewAnimationBlueprintApplicationMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** The method by which a preview animation blueprint is applied */" },
		{ "LinkedAnimGraph.Comment", "/** Apply the preview animation blueprint using SetLinkedAnimGraphByTag */" },
		{ "LinkedAnimGraph.Name", "EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph" },
		{ "LinkedAnimGraph.ToolTip", "Apply the preview animation blueprint using SetLinkedAnimGraphByTag" },
		{ "LinkedLayers.Comment", "/** Apply the preview animation blueprint using LinkAnimClassLayers */" },
		{ "LinkedLayers.Name", "EPreviewAnimationBlueprintApplicationMethod::LinkedLayers" },
		{ "LinkedLayers.ToolTip", "Apply the preview animation blueprint using LinkAnimClassLayers" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The method by which a preview animation blueprint is applied" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPreviewAnimationBlueprintApplicationMethod::LinkedLayers", (int64)EPreviewAnimationBlueprintApplicationMethod::LinkedLayers },
		{ "EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph", (int64)EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPreviewAnimationBlueprintApplicationMethod",
	"EPreviewAnimationBlueprintApplicationMethod",
	Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod()
{
	if (!Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton;
}
// End Enum EPreviewAnimationBlueprintApplicationMethod

// Begin Class UAnimBlueprint
void UAnimBlueprint::StaticRegisterNativesUAnimBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprint);
UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister()
{
	return UAnimBlueprint::StaticClass();
}
struct Z_Construct_UClass_UAnimBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An Anim Blueprint is essentially a specialized Blueprint whose graphs control the animation of a Skeletal Mesh.\n * It can perform blending of animations, directly control the bones of the skeleton, and output a final pose\n * for a Skeletal Mesh each frame.\n */" },
		{ "IncludePath", "Animation/AnimBlueprint.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "An Anim Blueprint is essentially a specialized Blueprint whose graphs control the animation of a Skeletal Mesh.\nIt can perform blending of animations, directly control the bones of the skeleton, and output a final pose\nfor a Skeletal Mesh each frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "ClassOptions" },
		{ "Comment", "/**\n\x09 * This is the target skeleton asset for anim instances created from this blueprint; all animations\n\x09 * referenced by the BP should be compatible with this skeleton.  For advanced use only, it is easy\n\x09 * to cause errors if this is modified without updating or replacing all referenced animations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "This is the target skeleton asset for anim instances created from this blueprint; all animations\nreferenced by the BP should be compatible with this skeleton.  For advanced use only, it is easy\nto cause errors if this is modified without updating or replacing all referenced animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[] = {
		{ "Comment", "// List of animation sync groups\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "List of animation sync groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemplate_MetaData[] = {
		{ "Comment", "// This is an anim blueprint that acts as a set of template functionality without being tied to a specific skeleton.\n// Implies a null TargetSkeleton.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "This is an anim blueprint that acts as a set of template functionality without being tied to a specific skeleton.\nImplies a null TargetSkeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultiThreadedAnimationUpdate_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 * Allows this anim Blueprint to update its native update, blend tree, montages and asset players on\n\x09 * a worker thread. The compiler will attempt to pick up any issues that may occur with threaded update.\n\x09 * For updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded \n\x09 * Animation Update\" should be set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Allows this anim Blueprint to update its native update, blend tree, montages and asset players on\na worker thread. The compiler will attempt to pick up any issues that may occur with threaded update.\nFor updates to run in multiple threads both this flag and the project setting \"Allow Multi Threaded\nAnimation Update\" should be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarnAboutBlueprintUsage_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 * Selecting this option will cause the compiler to emit warnings whenever a call into Blueprint\n\x09 * is made from the animation graph. This can help track down optimizations that need to be made.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Selecting this option will cause the compiler to emit warnings whenever a call into Blueprint\nis made from the animation graph. This can help track down optimizations that need to be made." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLinkedAnimLayerInstanceSharing_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** If true, linked animation layers will be instantiated only once per AnimClass instead of once per AnimInstance, AnimClass and AnimGroup.\n\x09""Extra instances will be created if two or more active anim graph override the same layer Function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "If true, linked animation layers will be instantiated only once per AnimClass instead of once per AnimInstance, AnimClass and AnimGroup.\n      Extra instances will be created if two or more active anim graph override the same layer Function" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentAssetOverrides_MetaData[] = {
		{ "Comment", "// Array of overrides to asset containing nodes in the parent that have been overridden\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Array of overrides to asset containing nodes in the parent that have been overridden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseWatchFolders_MetaData[] = {
		{ "Comment", "// Array of active pose watches (pose watches allows us to see the bone pose at a \n// particular point of the anim graph and control debug draw for unselected anim nodes).\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "Array of active pose watches (pose watches allows us to see the bone pose at a\nparticular point of the anim graph and control debug draw for unselected anim nodes)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseWatches_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprint_MetaData[] = {
		{ "Comment", "/** \n\x09 * An animation Blueprint to overlay with this Blueprint. When working on layers, this allows this Blueprint to be previewed in the context of another 'outer' anim blueprint. \n\x09 * Setting this is the equivalent of running the preview animation blueprint on the preview mesh, then calling SetLayerOverlay with this anim blueprint.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "An animation Blueprint to overlay with this Blueprint. When working on layers, this allows this Blueprint to be previewed in the context of another 'outer' anim blueprint.\nSetting this is the equivalent of running the preview animation blueprint on the preview mesh, then calling SetLayerOverlay with this anim blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBindingClass_MetaData[] = {
		{ "AllowedClasses", "/Script/AnimGraph.AnimGraphNodeBinding" },
		{ "Category", "Bindings" },
		{ "Comment", "/** The default binding type that any new nodes will use when created */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "NoClear", "" },
		{ "ShowDisplayNames", "TRUE" },
		{ "ToolTip", "The default binding type that any new nodes will use when created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData[] = {
		{ "Comment", "/** The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprintTag_MetaData[] = {
		{ "Comment", "/** The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprint.h" },
		{ "ToolTip", "The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
	static void NewProp_bIsTemplate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemplate;
	static void NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultiThreadedAnimationUpdate;
	static void NewProp_bWarnAboutBlueprintUsage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutBlueprintUsage;
	static void NewProp_bEnableLinkedAnimLayerInstanceSharing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLinkedAnimLayerInstanceSharing;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentAssetOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentAssetOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseWatchFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseWatchFolders;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseWatches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseWatches;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewAnimationBlueprint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultBindingClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewAnimationBlueprintApplicationMethod;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewAnimationBlueprintTag;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0114050000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSkeleton_MetaData), NewProp_TargetSkeleton_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimGroupInfo, METADATA_PARAMS(0, nullptr) }; // 4001228674
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Groups_MetaData), NewProp_Groups_MetaData) }; // 4001228674
void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate_SetBit(void* Obj)
{
	((UAnimBlueprint*)Obj)->bIsTemplate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate = { "bIsTemplate", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemplate_MetaData), NewProp_bIsTemplate_MetaData) };
void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit(void* Obj)
{
	((UAnimBlueprint*)Obj)->bUseMultiThreadedAnimationUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate = { "bUseMultiThreadedAnimationUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMultiThreadedAnimationUpdate_MetaData), NewProp_bUseMultiThreadedAnimationUpdate_MetaData) };
void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit(void* Obj)
{
	((UAnimBlueprint*)Obj)->bWarnAboutBlueprintUsage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage = { "bWarnAboutBlueprintUsage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarnAboutBlueprintUsage_MetaData), NewProp_bWarnAboutBlueprintUsage_MetaData) };
void Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing_SetBit(void* Obj)
{
	((UAnimBlueprint*)Obj)->bEnableLinkedAnimLayerInstanceSharing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing = { "bEnableLinkedAnimLayerInstanceSharing", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimBlueprint), &Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLinkedAnimLayerInstanceSharing_MetaData), NewProp_bEnableLinkedAnimLayerInstanceSharing_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_Inner = { "ParentAssetOverrides", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride, METADATA_PARAMS(0, nullptr) }; // 31160420
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides = { "ParentAssetOverrides", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, ParentAssetOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentAssetOverrides_MetaData), NewProp_ParentAssetOverrides_MetaData) }; // 31160420
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders_Inner = { "PoseWatchFolders", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseWatchFolder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders = { "PoseWatchFolders", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, PoseWatchFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseWatchFolders_MetaData), NewProp_PoseWatchFolders_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_Inner = { "PoseWatches", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseWatch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches = { "PoseWatches", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, PoseWatches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseWatches_MetaData), NewProp_PoseWatches_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSkeletalMesh_MetaData), NewProp_PreviewSkeletalMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint = { "PreviewAnimationBlueprint", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAnimationBlueprint_MetaData), NewProp_PreviewAnimationBlueprint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_DefaultBindingClass = { "DefaultBindingClass", nullptr, (EPropertyFlags)0x0144000800000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, DefaultBindingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBindingClass_MetaData), NewProp_DefaultBindingClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod = { "PreviewAnimationBlueprintApplicationMethod", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprintApplicationMethod), Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData), NewProp_PreviewAnimationBlueprintApplicationMethod_MetaData) }; // 2539146438
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag = { "PreviewAnimationBlueprintTag", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimBlueprint, PreviewAnimationBlueprintTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAnimationBlueprintTag_MetaData), NewProp_PreviewAnimationBlueprintTag_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_TargetSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_Groups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_ParentAssetOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatchFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PoseWatches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_DefaultBindingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintApplicationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_PreviewAnimationBlueprintTag,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimBlueprint_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UAnimBlueprint, IInterface_PreviewMeshProvider), false },  // 1431543565
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprint_Statics::ClassParams = {
	&UAnimBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimBlueprint()
{
	if (!Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton, Z_Construct_UClass_UAnimBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimBlueprint>()
{
	return UAnimBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprint);
UAnimBlueprint::~UAnimBlueprint() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprint)
// End Class UAnimBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPreviewAnimationBlueprintApplicationMethod_StaticEnum, TEXT("EPreviewAnimationBlueprintApplicationMethod"), &Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2539146438U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimGroupInfo::StaticStruct, Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewStructOps, TEXT("AnimGroupInfo"), &Z_Registration_Info_UScriptStruct_AnimGroupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimGroupInfo), 4001228674U) },
		{ FAnimParentNodeAssetOverride::StaticStruct, Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewStructOps, TEXT("AnimParentNodeAssetOverride"), &Z_Registration_Info_UScriptStruct_AnimParentNodeAssetOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimParentNodeAssetOverride), 31160420U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprint, UAnimBlueprint::StaticClass, TEXT("UAnimBlueprint"), &Z_Registration_Info_UClass_UAnimBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprint), 1388201117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_956266103(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
