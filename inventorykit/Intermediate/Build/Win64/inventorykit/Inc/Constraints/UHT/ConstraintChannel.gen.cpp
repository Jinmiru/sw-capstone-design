// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Animation/Constraints/Public/ConstraintChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintChannel() {}

// Begin Cross Module References
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint_NoRegister();
CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintAndActiveChannel();
CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConstraintChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References

// Begin ScriptStruct FMovieSceneConstraintChannel
static_assert(std::is_polymorphic<FMovieSceneConstraintChannel>() == std::is_polymorphic<FMovieSceneBoolChannel>(), "USTRUCT FMovieSceneConstraintChannel cannot be polymorphic unless super FMovieSceneBoolChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneConstraintChannel;
class UScriptStruct* FMovieSceneConstraintChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneConstraintChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneConstraintChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneConstraintChannel, (UObject*)Z_Construct_UPackage__Script_Constraints(), TEXT("MovieSceneConstraintChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneConstraintChannel.OuterSingleton;
}
template<> CONSTRAINTS_API UScriptStruct* StaticStruct<FMovieSceneConstraintChannel>()
{
	return FMovieSceneConstraintChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneConstraintChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstraintChannel.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneConstraintChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneConstraintChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	Z_Construct_UScriptStruct_FMovieSceneBoolChannel,
	&NewStructOps,
	"MovieSceneConstraintChannel",
	nullptr,
	0,
	sizeof(FMovieSceneConstraintChannel),
	alignof(FMovieSceneConstraintChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneConstraintChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneConstraintChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneConstraintChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneConstraintChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneConstraintChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneConstraintChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneConstraintChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneConstraintChannel

// Begin ScriptStruct FConstraintAndActiveChannel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintAndActiveChannel;
class UScriptStruct* FConstraintAndActiveChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintAndActiveChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintAndActiveChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintAndActiveChannel, (UObject*)Z_Construct_UPackage__Script_Constraints(), TEXT("ConstraintAndActiveChannel"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintAndActiveChannel.OuterSingleton;
}
template<> CONSTRAINTS_API UScriptStruct* StaticStruct<FConstraintAndActiveChannel>()
{
	return FConstraintAndActiveChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// #if WITH_EDITOR\n// namespace MovieSceneClipboard\n// {\n// \x09template<> inline FName GetKeyTypeName<bool>()\n// \x09{\n// \x09\x09static FName Name(\"Bool\");\n// \x09\x09return Name;\n// \x09}\n// }\n// #endif\n" },
		{ "ModuleRelativePath", "Public/ConstraintChannel.h" },
		{ "ToolTip", "#if WITH_EDITOR\nnamespace MovieSceneClipboard\n{\n      template<> inline FName GetKeyTypeName<bool>()\n      {\n              static FName Name(\"Bool\");\n              return Name;\n      }\n}\n#endif" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConstraintChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintCopyToSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConstraintChannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintCopyToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintAndActiveChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::NewProp_ActiveChannel = { "ActiveChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintAndActiveChannel, ActiveChannel), Z_Construct_UScriptStruct_FMovieSceneConstraintChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveChannel_MetaData), NewProp_ActiveChannel_MetaData) }; // 134004234
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::NewProp_ConstraintCopyToSpawn = { "ConstraintCopyToSpawn", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintAndActiveChannel, ConstraintCopyToSpawn), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintCopyToSpawn_MetaData), NewProp_ConstraintCopyToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::NewProp_ActiveChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::NewProp_ConstraintCopyToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	nullptr,
	&NewStructOps,
	"ConstraintAndActiveChannel",
	Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::PropPointers),
	sizeof(FConstraintAndActiveChannel),
	alignof(FConstraintAndActiveChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintAndActiveChannel()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintAndActiveChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintAndActiveChannel.InnerSingleton, Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintAndActiveChannel.InnerSingleton;
}
// End ScriptStruct FConstraintAndActiveChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneConstraintChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneConstraintChannel_Statics::NewStructOps, TEXT("MovieSceneConstraintChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneConstraintChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneConstraintChannel), 134004234U) },
		{ FConstraintAndActiveChannel::StaticStruct, Z_Construct_UScriptStruct_FConstraintAndActiveChannel_Statics::NewStructOps, TEXT("ConstraintAndActiveChannel"), &Z_Registration_Info_UScriptStruct_ConstraintAndActiveChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintAndActiveChannel), 2244977431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintChannel_h_1014963457(TEXT("/Script/Constraints"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
