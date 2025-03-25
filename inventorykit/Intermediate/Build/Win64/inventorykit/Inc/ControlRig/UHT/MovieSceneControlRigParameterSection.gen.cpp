// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Sequencer/MovieSceneControlRigParameterSection.h"
#include "ControlRig/Public/Sequencer/MovieSceneControlRigSpaceChannel.h"
#include "Runtime/Experimental/Animation/Constraints/Public/ConstraintChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneByteChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneIntegerChannel.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieScene3DTransformSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigParameterSection() {}

// Begin Cross Module References
CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintAndActiveChannel();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection();
CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FChannelMapInfo();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FEnumParameterNameAndCurve();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FSpaceControlNameAndChannel();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FEnumParameterNameAndCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve;
class UScriptStruct* FEnumParameterNameAndCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EnumParameterNameAndCurve"));
	}
	return Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FEnumParameterNameAndCurve>()
{
	return FEnumParameterNameAndCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumParameterNameAndCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnumParameterNameAndCurve, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnumParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCurve_MetaData), NewProp_ParameterCurve_MetaData) }; // 2019839941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"EnumParameterNameAndCurve",
	Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::PropPointers),
	sizeof(FEnumParameterNameAndCurve),
	alignof(FEnumParameterNameAndCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnumParameterNameAndCurve()
{
	if (!Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.InnerSingleton, Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.InnerSingleton;
}
// End ScriptStruct FEnumParameterNameAndCurve

// Begin ScriptStruct FIntegerParameterNameAndCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve;
class UScriptStruct* FIntegerParameterNameAndCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("IntegerParameterNameAndCurve"));
	}
	return Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FIntegerParameterNameAndCurve>()
{
	return FIntegerParameterNameAndCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegerParameterNameAndCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegerParameterNameAndCurve, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegerParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCurve_MetaData), NewProp_ParameterCurve_MetaData) }; // 1279923975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"IntegerParameterNameAndCurve",
	Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::PropPointers),
	sizeof(FIntegerParameterNameAndCurve),
	alignof(FIntegerParameterNameAndCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve()
{
	if (!Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.InnerSingleton, Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.InnerSingleton;
}
// End ScriptStruct FIntegerParameterNameAndCurve

// Begin ScriptStruct FSpaceControlNameAndChannel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel;
class UScriptStruct* FSpaceControlNameAndChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("SpaceControlNameAndChannel"));
	}
	return Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FSpaceControlNameAndChannel>()
{
	return FSpaceControlNameAndChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpaceControlNameAndChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpaceControlNameAndChannel, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlName_MetaData), NewProp_ControlName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_SpaceCurve = { "SpaceCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpaceControlNameAndChannel, SpaceCurve), Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceCurve_MetaData), NewProp_SpaceCurve_MetaData) }; // 2152607669
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_SpaceCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"SpaceControlNameAndChannel",
	Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::PropPointers),
	sizeof(FSpaceControlNameAndChannel),
	alignof(FSpaceControlNameAndChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpaceControlNameAndChannel()
{
	if (!Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.InnerSingleton, Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.InnerSingleton;
}
// End ScriptStruct FSpaceControlNameAndChannel

// Begin ScriptStruct FChannelMapInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChannelMapInfo;
class UScriptStruct* FChannelMapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelMapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChannelMapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelMapInfo, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ChannelMapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChannelMapInfo.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FChannelMapInfo>()
{
	return FChannelMapInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChannelMapInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalChannelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentControlIndex_MetaData[] = {
		{ "Comment", "//channel index for it's type.. (e.g  float, int, bool).\n" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "channel index for it's type.. (e.g  float, int, bool)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelTypeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoesHaveSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceChannelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskIndex_MetaData[] = {
		{ "Comment", "//if it has space what's the space channel index\n" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "if it has space what's the space channel index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryIndex_MetaData[] = {
		{ "Comment", "//index for the mask\n" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "index for the mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsIndex_MetaData[] = {
		{ "Comment", "//temp index set by the ControlRigParameterTrack, not saved\n" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "temp index set by the ControlRigParameterTrack, not saved" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControlIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalChannelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentControlIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelTypeName;
	static void NewProp_bDoesHaveSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoesHaveSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpaceChannelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryIndex;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstraintsIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintsIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelMapInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ControlIndex = { "ControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, ControlIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlIndex_MetaData), NewProp_ControlIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_TotalChannelIndex = { "TotalChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, TotalChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalChannelIndex_MetaData), NewProp_TotalChannelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, ChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelIndex_MetaData), NewProp_ChannelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ParentControlIndex = { "ParentControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, ParentControlIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentControlIndex_MetaData), NewProp_ParentControlIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelTypeName = { "ChannelTypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, ChannelTypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelTypeName_MetaData), NewProp_ChannelTypeName_MetaData) };
void Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace_SetBit(void* Obj)
{
	((FChannelMapInfo*)Obj)->bDoesHaveSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace = { "bDoesHaveSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChannelMapInfo), &Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoesHaveSpace_MetaData), NewProp_bDoesHaveSpace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_SpaceChannelIndex = { "SpaceChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, SpaceChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceChannelIndex_MetaData), NewProp_SpaceChannelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_MaskIndex = { "MaskIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, MaskIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskIndex_MetaData), NewProp_MaskIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_CategoryIndex = { "CategoryIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, CategoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryIndex_MetaData), NewProp_CategoryIndex_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex_Inner = { "ConstraintsIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex = { "ConstraintsIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelMapInfo, ConstraintsIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintsIndex_MetaData), NewProp_ConstraintsIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelMapInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ControlIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_TotalChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ParentControlIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelTypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_SpaceChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_MaskIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_CategoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ChannelMapInfo",
	Z_Construct_UScriptStruct_FChannelMapInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::PropPointers),
	sizeof(FChannelMapInfo),
	alignof(FChannelMapInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChannelMapInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChannelMapInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelMapInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChannelMapInfo.InnerSingleton, Z_Construct_UScriptStruct_FChannelMapInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChannelMapInfo.InnerSingleton;
}
// End ScriptStruct FChannelMapInfo

// Begin Class UMovieSceneControlRigParameterSection
void UMovieSceneControlRigParameterSection::StaticRegisterNativesUMovieSceneControlRigParameterSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneControlRigParameterSection);
UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister()
{
	return UMovieSceneControlRigParameterSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that controls animation controller animation\n */" },
		{ "IncludePath", "Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Movie scene section that controls animation controller animation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[] = {
		{ "Comment", "/** Control Rig that controls us*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Control Rig that controls us" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigClass_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The class of control rig to instantiate */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "The class of control rig to instantiate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsMask_MetaData[] = {
		{ "Comment", "/** Mask for controls themselves*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Mask for controls themselves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformMask_MetaData[] = {
		{ "Comment", "/** Mask for Transform Mask*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Mask for Transform Mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Comment", "/** The weight curve for this animation controller section */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "The weight curve for this animation controller section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlChannelMap_MetaData[] = {
		{ "Comment", "/** Map from the control name to where it starts as a channel*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Map from the control name to where it starts as a channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** Enum Curves*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Enum Curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/*Integer Curves*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Integer Curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceChannels_MetaData[] = {
		{ "Comment", "/** Space Channels*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Space Channels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsChannels_MetaData[] = {
		{ "Comment", "/** Space Channels*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Space Channels" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlRig;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ControlsMask_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlsMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlChannelMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlChannelMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControlChannelMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnumParameterNamesAndCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumParameterNamesAndCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntegerParameterNamesAndCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntegerParameterNamesAndCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpaceChannels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintsChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintsChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneControlRigParameterSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRig_MetaData), NewProp_ControlRig_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRigClass_MetaData), NewProp_ControlRigClass_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask_Inner = { "ControlsMask", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask = { "ControlsMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ControlsMask), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsMask_MetaData), NewProp_ControlsMask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_TransformMask = { "TransformMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, TransformMask), Z_Construct_UScriptStruct_FMovieSceneTransformMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformMask_MetaData), NewProp_TransformMask_MetaData) }; // 1549057003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_ValueProp = { "ControlChannelMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FChannelMapInfo, METADATA_PARAMS(0, nullptr) }; // 1912792529
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_Key_KeyProp = { "ControlChannelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap = { "ControlChannelMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ControlChannelMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlChannelMap_MetaData), NewProp_ControlChannelMap_MetaData) }; // 1912792529
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves_Inner = { "EnumParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnumParameterNameAndCurve, METADATA_PARAMS(0, nullptr) }; // 1205860512
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves = { "EnumParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, EnumParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumParameterNamesAndCurves_MetaData), NewProp_EnumParameterNamesAndCurves_MetaData) }; // 1205860512
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves_Inner = { "IntegerParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve, METADATA_PARAMS(0, nullptr) }; // 2383538106
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves = { "IntegerParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, IntegerParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerParameterNamesAndCurves_MetaData), NewProp_IntegerParameterNamesAndCurves_MetaData) }; // 2383538106
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels_Inner = { "SpaceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpaceControlNameAndChannel, METADATA_PARAMS(0, nullptr) }; // 3317657420
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels = { "SpaceChannels", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, SpaceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceChannels_MetaData), NewProp_SpaceChannels_MetaData) }; // 3317657420
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels_Inner = { "ConstraintsChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintAndActiveChannel, METADATA_PARAMS(0, nullptr) }; // 2244977431
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels = { "ConstraintsChannels", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ConstraintsChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintsChannels_MetaData), NewProp_ConstraintsChannels_MetaData) }; // 2244977431
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRigClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_TransformMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneParameterSection,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneControlRigParameterSection, IMovieSceneConstrainedSection), false },  // 888017118
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::ClassParams = {
	&UMovieSceneControlRigParameterSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.OuterSingleton, Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UMovieSceneControlRigParameterSection>()
{
	return UMovieSceneControlRigParameterSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneControlRigParameterSection);
UMovieSceneControlRigParameterSection::~UMovieSceneControlRigParameterSection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneControlRigParameterSection)
// End Class UMovieSceneControlRigParameterSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEnumParameterNameAndCurve::StaticStruct, Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewStructOps, TEXT("EnumParameterNameAndCurve"), &Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumParameterNameAndCurve), 1205860512U) },
		{ FIntegerParameterNameAndCurve::StaticStruct, Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewStructOps, TEXT("IntegerParameterNameAndCurve"), &Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegerParameterNameAndCurve), 2383538106U) },
		{ FSpaceControlNameAndChannel::StaticStruct, Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewStructOps, TEXT("SpaceControlNameAndChannel"), &Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpaceControlNameAndChannel), 3317657420U) },
		{ FChannelMapInfo::StaticStruct, Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewStructOps, TEXT("ChannelMapInfo"), &Z_Registration_Info_UScriptStruct_ChannelMapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChannelMapInfo), 1912792529U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneControlRigParameterSection, UMovieSceneControlRigParameterSection::StaticClass, TEXT("UMovieSceneControlRigParameterSection"), &Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneControlRigParameterSection), 3033140179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_3507132228(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
