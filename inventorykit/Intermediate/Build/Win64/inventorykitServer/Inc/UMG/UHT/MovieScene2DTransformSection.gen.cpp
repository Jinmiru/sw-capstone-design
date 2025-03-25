// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformSection() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection();
UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformMask();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FMovieScene2DTransformMask
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask;
class UScriptStruct* FMovieScene2DTransformMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene2DTransformMask, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("MovieScene2DTransformMask"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FMovieScene2DTransformMask>()
{
	return FMovieScene2DTransformMask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Mask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene2DTransformMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScene2DTransformMask, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"MovieScene2DTransformMask",
	Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers),
	sizeof(FMovieScene2DTransformMask),
	alignof(FMovieScene2DTransformMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformMask()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.InnerSingleton, Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask.InnerSingleton;
}
// End ScriptStruct FMovieScene2DTransformMask

// Begin Class UMovieScene2DTransformSection
void UMovieScene2DTransformSection::StaticRegisterNativesUMovieScene2DTransformSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene2DTransformSection);
UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister()
{
	return UMovieScene2DTransformSection::StaticClass();
}
struct Z_Construct_UClass_UMovieScene2DTransformSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A transform section\n */" },
		{ "IncludePath", "Animation/MovieScene2DTransformSection.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "A transform section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "Comment", "/** Translation curves*/" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Translation curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation curve */" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Rotation curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Comment", "/** Scale curves */" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Scale curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[] = {
		{ "Comment", "/** Shear curve */" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Shear curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene2DTransformSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask = { "TransformMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene2DTransformSection, TransformMask), Z_Construct_UScriptStruct_FMovieScene2DTransformMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformMask_MetaData), NewProp_TransformMask_MetaData) }; // 3726100070
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Translation, UMovieScene2DTransformSection), STRUCT_OFFSET(UMovieScene2DTransformSection, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene2DTransformSection, Rotation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Scale, UMovieScene2DTransformSection), STRUCT_OFFSET(UMovieScene2DTransformSection, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Shear, UMovieScene2DTransformSection), STRUCT_OFFSET(UMovieScene2DTransformSection, Shear), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shear_MetaData), NewProp_Shear_MetaData) }; // 139010471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScene2DTransformSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScene2DTransformSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::ClassParams = {
	&UMovieScene2DTransformSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene2DTransformSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene2DTransformSection()
{
	if (!Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton, Z_Construct_UClass_UMovieScene2DTransformSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene2DTransformSection.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UMovieScene2DTransformSection>()
{
	return UMovieScene2DTransformSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformSection);
UMovieScene2DTransformSection::~UMovieScene2DTransformSection() {}
// End Class UMovieScene2DTransformSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieScene2DTransformMask::StaticStruct, Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewStructOps, TEXT("MovieScene2DTransformMask"), &Z_Registration_Info_UScriptStruct_MovieScene2DTransformMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScene2DTransformMask), 3726100070U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene2DTransformSection, UMovieScene2DTransformSection::StaticClass, TEXT("UMovieScene2DTransformSection"), &Z_Registration_Info_UClass_UMovieScene2DTransformSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene2DTransformSection), 3420851006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_1496969224(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieScene2DTransformSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
