// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Sequencer/MovieSceneControlRigSpaceChannel.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigSpaceChannel() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum EMovieSceneControlRigSpaceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType;
static UEnum* EMovieSceneControlRigSpaceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EMovieSceneControlRigSpaceType"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EMovieSceneControlRigSpaceType>()
{
	return EMovieSceneControlRigSpaceType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ControlRig.Name", "EMovieSceneControlRigSpaceType::ControlRig" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "Parent.Name", "EMovieSceneControlRigSpaceType::Parent" },
		{ "World.Name", "EMovieSceneControlRigSpaceType::World" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneControlRigSpaceType::Parent", (int64)EMovieSceneControlRigSpaceType::Parent },
		{ "EMovieSceneControlRigSpaceType::World", (int64)EMovieSceneControlRigSpaceType::World },
		{ "EMovieSceneControlRigSpaceType::ControlRig", (int64)EMovieSceneControlRigSpaceType::ControlRig },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EMovieSceneControlRigSpaceType",
	"EMovieSceneControlRigSpaceType",
	Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.InnerSingleton, Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.InnerSingleton;
}
// End Enum EMovieSceneControlRigSpaceType

// Begin ScriptStruct FMovieSceneControlRigSpaceBaseKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey;
class UScriptStruct* FMovieSceneControlRigSpaceBaseKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("MovieSceneControlRigSpaceBaseKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMovieSceneControlRigSpaceBaseKey>()
{
	return FMovieSceneControlRigSpaceBaseKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceType_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigElement_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpaceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpaceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRigElement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneControlRigSpaceBaseKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType = { "SpaceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneControlRigSpaceBaseKey, SpaceType), Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceType_MetaData), NewProp_SpaceType_MetaData) }; // 405676628
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_ControlRigElement = { "ControlRigElement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneControlRigSpaceBaseKey, ControlRigElement), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRigElement_MetaData), NewProp_ControlRigElement_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_ControlRigElement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"MovieSceneControlRigSpaceBaseKey",
	Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::PropPointers),
	sizeof(FMovieSceneControlRigSpaceBaseKey),
	alignof(FMovieSceneControlRigSpaceBaseKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.InnerSingleton;
}
// End ScriptStruct FMovieSceneControlRigSpaceBaseKey

// Begin ScriptStruct FMovieSceneControlRigSpaceChannel
static_assert(std::is_polymorphic<FMovieSceneControlRigSpaceChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneControlRigSpaceChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel;
class UScriptStruct* FMovieSceneControlRigSpaceChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("MovieSceneControlRigSpaceChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMovieSceneControlRigSpaceChannel>()
{
	return FMovieSceneControlRigSpaceChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A curve of spaces */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "ToolTip", "A curve of spaces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Sorted array of key times */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "ToolTip", "Sorted array of key times" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneControlRigSpaceChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneControlRigSpaceChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyTimes_MetaData), NewProp_KeyTimes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey, METADATA_PARAMS(0, nullptr) }; // 361182672
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneControlRigSpaceChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyValues_MetaData), NewProp_KeyValues_MetaData) }; // 361182672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneControlRigSpaceChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyHandles_MetaData), NewProp_KeyHandles_MetaData) }; // 3777546645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneControlRigSpaceChannel",
	Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::PropPointers),
	sizeof(FMovieSceneControlRigSpaceChannel),
	alignof(FMovieSceneControlRigSpaceChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneControlRigSpaceChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneControlRigSpaceType_StaticEnum, TEXT("EMovieSceneControlRigSpaceType"), &Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 405676628U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneControlRigSpaceBaseKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewStructOps, TEXT("MovieSceneControlRigSpaceBaseKey"), &Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneControlRigSpaceBaseKey), 361182672U) },
		{ FMovieSceneControlRigSpaceChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewStructOps, TEXT("MovieSceneControlRigSpaceChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneControlRigSpaceChannel), 2152607669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_836602192(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
