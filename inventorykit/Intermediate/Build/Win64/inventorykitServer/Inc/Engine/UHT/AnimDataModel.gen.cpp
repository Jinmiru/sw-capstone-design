// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimData/AnimDataModel.h"
#include "Runtime/Engine/Classes/Animation/AnimData/IAnimationDataModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimDataModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel();
ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimatedBoneAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimationTrack();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimDataModel
void UAnimDataModel::StaticRegisterNativesUAnimDataModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimDataModel);
UClass* Z_Construct_UClass_UAnimDataModel_NoRegister()
{
	return UAnimDataModel::StaticClass();
}
struct Z_Construct_UClass_UAnimDataModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Model represents the source data for animations. It contains both bone animation data as well as animated curves.\n * They are currently only a sub-object of a AnimSequenceBase instance. The instance derives all runtime data from the source data. \n */" },
		{ "DebugTreeLeaf", "" },
		{ "IncludePath", "Animation/AnimData/AnimDataModel.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "The Model represents the source data for animations. It contains both bone animation data as well as animated curves.\nThey are currently only a sub-object of a AnimSequenceBase instance. The instance derives all runtime data from the source data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BracketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedEventDynamic_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/** Dynamic delegate event allows scripting to register to any broadcasted notify. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ScriptName", "ModifiedEvent" },
		{ "ToolTip", "Dynamic delegate event allows scripting to register to any broadcasted notify." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneAnimationTracks_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** All individual bone animation tracks */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "All individual bone animation tracks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Rate at which the animated data is sampled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Rate at which the animated data is sampled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFrames_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Total number of sampled animated frames */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Total number of sampled animated frames" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfKeys_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Total number of sampled animated keys */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Total number of sampled animated keys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Container with all animated curve data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Container with all animated curve data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedBoneAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Container with all animated (bone) attribute data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Container with all animated (bone) attribute data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPopulated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BracketCounter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ModifiedEventDynamic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneAnimationTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneAnimationTracks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimatedBoneAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimatedBoneAttributes;
	static void NewProp_bPopulated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPopulated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimDataModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter = { "BracketCounter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, BracketCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BracketCounter_MetaData), NewProp_BracketCounter_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic = { "ModifiedEventDynamic", nullptr, (EPropertyFlags)0x0040000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, ModifiedEventDynamic), Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedEventDynamic_MetaData), NewProp_ModifiedEventDynamic_MetaData) }; // 454067400
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_Inner = { "BoneAnimationTracks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(0, nullptr) }; // 1699093893
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks = { "BoneAnimationTracks", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, BoneAnimationTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneAnimationTracks_MetaData), NewProp_BoneAnimationTracks_MetaData) }; // 1699093893
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength = { "PlayLength", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, PlayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayLength_MetaData), NewProp_PlayLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, NumberOfFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfFrames_MetaData), NewProp_NumberOfFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys = { "NumberOfKeys", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, NumberOfKeys), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfKeys_MetaData), NewProp_NumberOfKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, CurveData), Z_Construct_UScriptStruct_FAnimationCurveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveData_MetaData), NewProp_CurveData_MetaData) }; // 1930232712
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_Inner = { "AnimatedBoneAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimatedBoneAttribute, METADATA_PARAMS(0, nullptr) }; // 242392124
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes = { "AnimatedBoneAttributes", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimDataModel, AnimatedBoneAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedBoneAttributes_MetaData), NewProp_AnimatedBoneAttributes_MetaData) }; // 242392124
void Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated_SetBit(void* Obj)
{
	((UAnimDataModel*)Obj)->bPopulated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated = { "bPopulated", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimDataModel), &Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPopulated_MetaData), NewProp_bPopulated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimDataModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_bPopulated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimDataModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimDataModel_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAnimationDataModel_NoRegister, (int32)VTABLE_OFFSET(UAnimDataModel, IAnimationDataModel), false },  // 1252915660
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimDataModel_Statics::ClassParams = {
	&UAnimDataModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimDataModel_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimDataModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimDataModel()
{
	if (!Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton, Z_Construct_UClass_UAnimDataModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimDataModel>()
{
	return UAnimDataModel::StaticClass();
}
UAnimDataModel::UAnimDataModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimDataModel);
UAnimDataModel::~UAnimDataModel() {}
// End Class UAnimDataModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimDataModel, UAnimDataModel::StaticClass, TEXT("UAnimDataModel"), &Z_Registration_Info_UClass_UAnimDataModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimDataModel), 3754090001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_1222747068(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
