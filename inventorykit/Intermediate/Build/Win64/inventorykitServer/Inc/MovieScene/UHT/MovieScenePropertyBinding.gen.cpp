// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieScenePropertyBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyBinding() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieScenePropertyBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding;
class UScriptStruct* FMovieScenePropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertyBinding, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePropertyBinding>()
{
	return FMovieScenePropertyBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Source property binding information for an entity on a moviescene timeline\n * Comprises a leaf property name and a path and a cached boolean signifying whether the binding is allowed to perform a fast class-wise property lookup\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Source property binding information for an entity on a moviescene timeline\nComprises a leaf property name and a path and a cached boolean signifying whether the binding is allowed to perform a fast class-wise property lookup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** Leaf name of the property to animate */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Leaf name of the property to animate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[] = {
		{ "Comment", "/** Full path to the property from the object including struct and array indirection */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Full path to the property from the object including struct and array indirection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseClassLookup_MetaData[] = {
		{ "Comment", "/** True if this property can be considered for fast property offset resolution(ie the property address is _always_ a constant offset from the obejct ptr), false otherwise */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "True if this property can be considered for fast property offset resolution(ie the property address is _always_ a constant offset from the obejct ptr), false otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyPath;
	static void NewProp_bCanUseClassLookup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseClassLookup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertyBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePropertyBinding, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieScenePropertyBinding, PropertyPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyPath_MetaData), NewProp_PropertyPath_MetaData) };
void Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_SetBit(void* Obj)
{
	((FMovieScenePropertyBinding*)Obj)->bCanUseClassLookup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup = { "bCanUseClassLookup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieScenePropertyBinding), &Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanUseClassLookup_MetaData), NewProp_bCanUseClassLookup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieScenePropertyBinding",
	Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers),
	sizeof(FMovieScenePropertyBinding),
	alignof(FMovieScenePropertyBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.InnerSingleton;
}
// End ScriptStruct FMovieScenePropertyBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieScenePropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewStructOps, TEXT("MovieScenePropertyBinding"), &Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePropertyBinding), 509261761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_3852672561(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
