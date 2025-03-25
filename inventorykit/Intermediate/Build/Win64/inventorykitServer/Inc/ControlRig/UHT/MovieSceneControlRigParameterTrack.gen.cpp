// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Sequencer/MovieSceneControlRigParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigParameterTrack() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack();
CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRotationOrder();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FControlRotationOrder
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRotationOrder;
class UScriptStruct* FControlRotationOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRotationOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRotationOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRotationOrder, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRotationOrder"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRotationOrder.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRotationOrder>()
{
	return FControlRotationOrder::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRotationOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[] = {
		{ "Comment", "/* Rotation Order*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Rotation Order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSetting_MetaData[] = {
		{ "Comment", "/** Override the default control setting*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Override the default control setting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
	static void NewProp_bOverrideSetting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRotationOrder>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRotationOrder, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOrder_MetaData), NewProp_RotationOrder_MetaData) }; // 1031303920
void Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting_SetBit(void* Obj)
{
	((FControlRotationOrder*)Obj)->bOverrideSetting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting = { "bOverrideSetting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlRotationOrder), &Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSetting_MetaData), NewProp_bOverrideSetting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRotationOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRotationOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRotationOrder_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlRotationOrder",
	Z_Construct_UScriptStruct_FControlRotationOrder_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRotationOrder_Statics::PropPointers),
	sizeof(FControlRotationOrder),
	alignof(FControlRotationOrder),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRotationOrder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRotationOrder_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRotationOrder()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRotationOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRotationOrder.InnerSingleton, Z_Construct_UScriptStruct_FControlRotationOrder_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRotationOrder.InnerSingleton;
}
// End ScriptStruct FControlRotationOrder

// Begin Class UMovieSceneControlRigParameterTrack
void UMovieSceneControlRigParameterTrack::StaticRegisterNativesUMovieSceneControlRigParameterTrack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneControlRigParameterTrack);
UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister()
{
	return UMovieSceneControlRigParameterTrack::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of skeletal mesh actors using animation ControlRigs\n */" },
		{ "IncludePath", "Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Handles animation of skeletal mesh actors using animation ControlRigs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[] = {
		{ "Comment", "/** Control Rig we control*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Control Rig we control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionToKey_MetaData[] = {
		{ "Comment", "/** Section we should Key */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Section we should Key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The sections owned by this track .*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "The sections owned by this track ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Unique Name*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Unique Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsRotationOrder_MetaData[] = {
		{ "Comment", "/** Uses Rotation Order*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Uses Rotation Order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameWorldControlRigs_MetaData[] = {
		{ "Comment", "/** copy of the controlled control rig that we use in the game world so editor control rig doesn't conflict*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "copy of the controlled control rig that we use in the game world so editor control rig doesn't conflict" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionToKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlsRotationOrder_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlsRotationOrder_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControlsRotationOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOrder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameWorldControlRigs_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GameWorldControlRigs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GameWorldControlRigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneControlRigParameterTrack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRig_MetaData), NewProp_ControlRig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey = { "SectionToKey", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, SectionToKey), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionToKey_MetaData), NewProp_SectionToKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_ValueProp = { "ControlsRotationOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FControlRotationOrder, METADATA_PARAMS(0, nullptr) }; // 1876054455
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_Key_KeyProp = { "ControlsRotationOrder_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder = { "ControlsRotationOrder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, ControlsRotationOrder), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsRotationOrder_MetaData), NewProp_ControlsRotationOrder_MetaData) }; // 1876054455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, PriorityOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityOrder_MetaData), NewProp_PriorityOrder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_GameWorldControlRigs_ValueProp = { "GameWorldControlRigs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_GameWorldControlRigs_Key_KeyProp = { "GameWorldControlRigs_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_GameWorldControlRigs = { "GameWorldControlRigs", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, GameWorldControlRigs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameWorldControlRigs_MetaData), NewProp_GameWorldControlRigs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_PriorityOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_GameWorldControlRigs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_GameWorldControlRigs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_GameWorldControlRigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneControlRigParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2607263461
	{ Z_Construct_UClass_UNodeAndChannelMappings_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneControlRigParameterTrack, INodeAndChannelMappings), false },  // 586091683
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::ClassParams = {
	&UMovieSceneControlRigParameterTrack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack()
{
	if (!Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UMovieSceneControlRigParameterTrack>()
{
	return UMovieSceneControlRigParameterTrack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneControlRigParameterTrack);
UMovieSceneControlRigParameterTrack::~UMovieSceneControlRigParameterTrack() {}
// End Class UMovieSceneControlRigParameterTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlRotationOrder::StaticStruct, Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewStructOps, TEXT("ControlRotationOrder"), &Z_Registration_Info_UScriptStruct_ControlRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRotationOrder), 1876054455U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneControlRigParameterTrack, UMovieSceneControlRigParameterTrack::StaticClass, TEXT("UMovieSceneControlRigParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneControlRigParameterTrack), 1680203093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_432636813(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
