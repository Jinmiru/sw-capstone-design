// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Mirror.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Mirror() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MirrorBase();
ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_MirrorBase
static_assert(std::is_polymorphic<FAnimNode_MirrorBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_MirrorBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase;
class UScriptStruct* FAnimNode_MirrorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MirrorBase, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MirrorBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MirrorBase>()
{
	return FAnimNode_MirrorBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MirrorBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MirrorBase, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1074011079
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_MirrorBase",
	Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::PropPointers),
	sizeof(FAnimNode_MirrorBase),
	alignof(FAnimNode_MirrorBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MirrorBase()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase.InnerSingleton;
}
// End ScriptStruct FAnimNode_MirrorBase

// Begin ScriptStruct FAnimNode_Mirror
static_assert(std::is_polymorphic<FAnimNode_Mirror>() == std::is_polymorphic<FAnimNode_MirrorBase>(), "USTRUCT FAnimNode_Mirror cannot be polymorphic unless super FAnimNode_MirrorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Mirror;
class UScriptStruct* FAnimNode_Mirror::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Mirror.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Mirror.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Mirror"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Mirror.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Mirror>()
{
	return FAnimNode_Mirror::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirror_MetaData[] = {
		{ "Category", "Settings" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Settings" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "MirrorTransition" },
		{ "Comment", "// Inertialization blend time to use when transitioning between mirrored and unmirrored states\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Inertialization blend time to use when transitioning between mirrored and unmirrored states" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetChild_MetaData[] = {
		{ "Category", "MirrorTransition" },
		{ "Comment", "// Whether to reset (reinitialize) the child (source) pose when the mirror state changes\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "ToolTip", "Whether to reset (reinitialize) the child (source) pose when the mirror state changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoneMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Bone" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCurveMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Curve" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttributeMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Attributes" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bMirror_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirror;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MirrorDataTable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static void NewProp_bResetChild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetChild;
	static void NewProp_bBoneMirroring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoneMirroring;
	static void NewProp_bCurveMirroring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurveMirroring;
	static void NewProp_bAttributeMirroring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttributeMirroring;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Mirror>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror_SetBit(void* Obj)
{
	((FAnimNode_Mirror*)Obj)->bMirror = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror = { "bMirror", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirror_MetaData), NewProp_bMirror_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0124080800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Mirror, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorDataTable_MetaData), NewProp_MirrorDataTable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Mirror, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild_SetBit(void* Obj)
{
	((FAnimNode_Mirror*)Obj)->bResetChild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild = { "bResetChild", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetChild_MetaData), NewProp_bResetChild_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring_SetBit(void* Obj)
{
	((FAnimNode_Mirror*)Obj)->bBoneMirroring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring = { "bBoneMirroring", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoneMirroring_MetaData), NewProp_bBoneMirroring_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring_SetBit(void* Obj)
{
	((FAnimNode_Mirror*)Obj)->bCurveMirroring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring = { "bCurveMirroring", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCurveMirroring_MetaData), NewProp_bCurveMirroring_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring_SetBit(void* Obj)
{
	((FAnimNode_Mirror*)Obj)->bAttributeMirroring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring = { "bAttributeMirroring", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttributeMirroring_MetaData), NewProp_bAttributeMirroring_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bMirror,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_MirrorDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bResetChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bBoneMirroring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bCurveMirroring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_bAttributeMirroring,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_MirrorBase,
	&NewStructOps,
	"AnimNode_Mirror",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers), 0),
	sizeof(FAnimNode_Mirror),
	alignof(FAnimNode_Mirror),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Mirror.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Mirror.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Mirror.InnerSingleton;
}
// End ScriptStruct FAnimNode_Mirror

// Begin ScriptStruct FAnimNode_Mirror_Standalone
static_assert(std::is_polymorphic<FAnimNode_Mirror_Standalone>() == std::is_polymorphic<FAnimNode_MirrorBase>(), "USTRUCT FAnimNode_Mirror_Standalone cannot be polymorphic unless super FAnimNode_MirrorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone;
class UScriptStruct* FAnimNode_Mirror_Standalone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Mirror_Standalone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Mirror_Standalone>()
{
	return FAnimNode_Mirror_Standalone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirror_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "MirrorTransition" },
		{ "Comment", "// Inertialization blend time to use when transitioning between mirrored and unmirrored states\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Inertialization blend time to use when transitioning between mirrored and unmirrored states" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetChild_MetaData[] = {
		{ "Category", "MirrorTransition" },
		{ "Comment", "// Whether to reset (reinitialize) the child (source) pose when the mirror state changes\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
		{ "ToolTip", "Whether to reset (reinitialize) the child (source) pose when the mirror state changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoneMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Bone" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCurveMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Curve" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttributeMirroring_MetaData[] = {
		{ "Category", "MirroredChannels" },
		{ "DisplayName", "Attributes" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Mirror.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMirror_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirror;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MirrorDataTable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static void NewProp_bResetChild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetChild;
	static void NewProp_bBoneMirroring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoneMirroring;
	static void NewProp_bCurveMirroring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurveMirroring;
	static void NewProp_bAttributeMirroring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttributeMirroring;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Mirror_Standalone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror_SetBit(void* Obj)
{
	((FAnimNode_Mirror_Standalone*)Obj)->bMirror = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror = { "bMirror", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirror_MetaData), NewProp_bMirror_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Mirror_Standalone, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorDataTable_MetaData), NewProp_MirrorDataTable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Mirror_Standalone, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild_SetBit(void* Obj)
{
	((FAnimNode_Mirror_Standalone*)Obj)->bResetChild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild = { "bResetChild", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetChild_MetaData), NewProp_bResetChild_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring_SetBit(void* Obj)
{
	((FAnimNode_Mirror_Standalone*)Obj)->bBoneMirroring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring = { "bBoneMirroring", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoneMirroring_MetaData), NewProp_bBoneMirroring_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring_SetBit(void* Obj)
{
	((FAnimNode_Mirror_Standalone*)Obj)->bCurveMirroring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring = { "bCurveMirroring", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCurveMirroring_MetaData), NewProp_bCurveMirroring_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring_SetBit(void* Obj)
{
	((FAnimNode_Mirror_Standalone*)Obj)->bAttributeMirroring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring = { "bAttributeMirroring", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Mirror_Standalone), &Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttributeMirroring_MetaData), NewProp_bAttributeMirroring_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bMirror,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_MirrorDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bResetChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bBoneMirroring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bCurveMirroring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewProp_bAttributeMirroring,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_MirrorBase,
	&NewStructOps,
	"AnimNode_Mirror_Standalone",
	Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::PropPointers),
	sizeof(FAnimNode_Mirror_Standalone),
	alignof(FAnimNode_Mirror_Standalone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone.InnerSingleton;
}
// End ScriptStruct FAnimNode_Mirror_Standalone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_MirrorBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MirrorBase_Statics::NewStructOps, TEXT("AnimNode_MirrorBase"), &Z_Registration_Info_UScriptStruct_AnimNode_MirrorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MirrorBase), 2745821184U) },
		{ FAnimNode_Mirror::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewStructOps, TEXT("AnimNode_Mirror"), &Z_Registration_Info_UScriptStruct_AnimNode_Mirror, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Mirror), 201795675U) },
		{ FAnimNode_Mirror_Standalone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone_Statics::NewStructOps, TEXT("AnimNode_Mirror_Standalone"), &Z_Registration_Info_UScriptStruct_AnimNode_Mirror_Standalone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Mirror_Standalone), 2037241209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_3906903383(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Mirror_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
