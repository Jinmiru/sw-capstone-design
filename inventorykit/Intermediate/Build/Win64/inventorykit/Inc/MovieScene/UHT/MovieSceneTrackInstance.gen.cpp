// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTrackInstanceInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput;
class UScriptStruct* FMovieSceneTrackInstanceInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackInstanceInput"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackInstanceInput>()
{
	return FMovieSceneTrackInstanceInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "Comment", "/** The section that acts as an input for this animator */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ToolTip", "The section that acts as an input for this animator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceInput, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTrackInstanceInput",
	Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers),
	sizeof(FMovieSceneTrackInstanceInput),
	alignof(FMovieSceneTrackInstanceInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackInstanceInput

// Begin Class UMovieSceneTrackInstance
void UMovieSceneTrackInstance::StaticRegisterNativesUMovieSceneTrackInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackInstance);
UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister()
{
	return UMovieSceneTrackInstance::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneTrackInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all track instances. Can also be used for root tracks where AnimatedObject will be nullptr\n */" },
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ToolTip", "Base class for all track instances. Can also be used for root tracks where AnimatedObject will be nullptr" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakAnimatedObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRootTrackInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrivateLinker_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakAnimatedObject;
	static void NewProp_bIsRootTrackInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRootTrackInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateLinker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_WeakAnimatedObject = { "WeakAnimatedObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTrackInstance, WeakAnimatedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakAnimatedObject_MetaData), NewProp_WeakAnimatedObject_MetaData) };
void Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance_SetBit(void* Obj)
{
	((UMovieSceneTrackInstance*)Obj)->bIsRootTrackInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance = { "bIsRootTrackInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneTrackInstance), &Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRootTrackInstance_MetaData), NewProp_bIsRootTrackInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_PrivateLinker = { "PrivateLinker", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTrackInstance, PrivateLinker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrivateLinker_MetaData), NewProp_PrivateLinker_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput, METADATA_PARAMS(0, nullptr) }; // 2022899916
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneTrackInstance, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 2022899916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_WeakAnimatedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_PrivateLinker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::ClassParams = {
	&UMovieSceneTrackInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers),
	0,
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneTrackInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneTrackInstance()
{
	if (!Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstance>()
{
	return UMovieSceneTrackInstance::StaticClass();
}
UMovieSceneTrackInstance::UMovieSceneTrackInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstance);
UMovieSceneTrackInstance::~UMovieSceneTrackInstance() {}
// End Class UMovieSceneTrackInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTrackInstanceInput::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewStructOps, TEXT("MovieSceneTrackInstanceInput"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackInstanceInput), 2022899916U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrackInstance, UMovieSceneTrackInstance::StaticClass, TEXT("UMovieSceneTrackInstance"), &Z_Registration_Info_UClass_UMovieSceneTrackInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackInstance), 1219278682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_1628329291(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
