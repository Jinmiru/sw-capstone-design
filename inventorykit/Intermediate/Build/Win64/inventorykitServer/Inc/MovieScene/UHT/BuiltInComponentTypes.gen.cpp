// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/BuiltInComponentTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuiltInComponentTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FEasingComponentData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackInstanceInputComponent();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FEasingComponentData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EasingComponentData;
class UScriptStruct* FEasingComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EasingComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EasingComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEasingComponentData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EasingComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_EasingComponentData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FEasingComponentData>()
{
	return FEasingComponentData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEasingComponentData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Easing component data.\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
		{ "ToolTip", "Easing component data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEasingComponentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEasingComponentData, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEasingComponentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEasingComponentData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEasingComponentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"EasingComponentData",
	Z_Construct_UScriptStruct_FEasingComponentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEasingComponentData_Statics::PropPointers),
	sizeof(FEasingComponentData),
	alignof(FEasingComponentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEasingComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEasingComponentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEasingComponentData()
{
	if (!Z_Registration_Info_UScriptStruct_EasingComponentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EasingComponentData.InnerSingleton, Z_Construct_UScriptStruct_FEasingComponentData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EasingComponentData.InnerSingleton;
}
// End ScriptStruct FEasingComponentData

// Begin ScriptStruct FMovieSceneTrackInstanceComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceComponent;
class UScriptStruct* FMovieSceneTrackInstanceComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackInstanceComponent"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceComponent.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackInstanceComponent>()
{
	return FMovieSceneTrackInstanceComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A component that defines a type for a track instance\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
		{ "ToolTip", "A component that defines a type for a track instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackInstanceClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackInstanceClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceComponent, Owner), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_TrackInstanceClass = { "TrackInstanceClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackInstanceComponent, TrackInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackInstanceClass_MetaData), NewProp_TrackInstanceClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewProp_TrackInstanceClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTrackInstanceComponent",
	Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::PropPointers),
	sizeof(FMovieSceneTrackInstanceComponent),
	alignof(FMovieSceneTrackInstanceComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceComponent.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceComponent.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackInstanceComponent

// Begin ScriptStruct FMovieSceneEvaluationHookComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookComponent;
class UScriptStruct* FMovieSceneEvaluationHookComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationHookComponent"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookComponent.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationHookComponent>()
{
	return FMovieSceneEvaluationHookComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A component that defines a hook for direct evaluation\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
		{ "ToolTip", "A component that defines a hook for direct evaluation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationHookComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationHookComponent, Interface), Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interface_MetaData), NewProp_Interface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewProp_Interface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationHookComponent",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationHookComponent),
	alignof(FMovieSceneEvaluationHookComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookComponent.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookComponent.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationHookComponent

// Begin ScriptStruct FTrackInstanceInputComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrackInstanceInputComponent;
class UScriptStruct* FTrackInstanceInputComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrackInstanceInputComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrackInstanceInputComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackInstanceInputComponent, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("TrackInstanceInputComponent"));
	}
	return Z_Registration_Info_UScriptStruct_TrackInstanceInputComponent.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FTrackInstanceInputComponent>()
{
	return FTrackInstanceInputComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/BuiltInComponentTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackInstanceInputComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrackInstanceInputComponent, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrackInstanceInputComponent, OutputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputIndex_MetaData), NewProp_OutputIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewProp_OutputIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"TrackInstanceInputComponent",
	Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::PropPointers),
	sizeof(FTrackInstanceInputComponent),
	alignof(FTrackInstanceInputComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTrackInstanceInputComponent()
{
	if (!Z_Registration_Info_UScriptStruct_TrackInstanceInputComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrackInstanceInputComponent.InnerSingleton, Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TrackInstanceInputComponent.InnerSingleton;
}
// End ScriptStruct FTrackInstanceInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_BuiltInComponentTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEasingComponentData::StaticStruct, Z_Construct_UScriptStruct_FEasingComponentData_Statics::NewStructOps, TEXT("EasingComponentData"), &Z_Registration_Info_UScriptStruct_EasingComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEasingComponentData), 328611817U) },
		{ FMovieSceneTrackInstanceComponent::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent_Statics::NewStructOps, TEXT("MovieSceneTrackInstanceComponent"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackInstanceComponent), 3014027891U) },
		{ FMovieSceneEvaluationHookComponent::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent_Statics::NewStructOps, TEXT("MovieSceneEvaluationHookComponent"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationHookComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationHookComponent), 603826402U) },
		{ FTrackInstanceInputComponent::StaticStruct, Z_Construct_UScriptStruct_FTrackInstanceInputComponent_Statics::NewStructOps, TEXT("TrackInstanceInputComponent"), &Z_Registration_Info_UScriptStruct_TrackInstanceInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrackInstanceInputComponent), 3841767504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_BuiltInComponentTypes_h_2609937663(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_BuiltInComponentTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_BuiltInComponentTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
