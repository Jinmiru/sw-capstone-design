// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/DefaultLevelSequenceInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultLevelSequenceInstanceData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin Class UDefaultLevelSequenceInstanceData
void UDefaultLevelSequenceInstanceData::StaticRegisterNativesUDefaultLevelSequenceInstanceData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultLevelSequenceInstanceData);
UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister()
{
	return UDefaultLevelSequenceInstanceData::StaticClass();
}
struct Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin. */" },
		{ "IncludePath", "DefaultLevelSequenceInstanceData.h" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformOriginActor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When set, this actor's world position will be used as the transform origin for all absolute transform sections */" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ToolTip", "When set, this actor's world position will be used as the transform origin for all absolute transform sections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformOrigin_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Specifies a transform that offsets all absolute transform sections in this sequence. Scale is ignored. Not applied to Relative or Additive sections. */" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ToolTip", "Specifies a transform that offsets all absolute transform sections in this sequence. Scale is ignored. Not applied to Relative or Additive sections." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformOriginActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultLevelSequenceInstanceData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor = { "TransformOriginActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOriginActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformOriginActor_MetaData), NewProp_TransformOriginActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin = { "TransformOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformOrigin_MetaData), NewProp_TransformOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister, (int32)VTABLE_OFFSET(UDefaultLevelSequenceInstanceData, IMovieSceneTransformOrigin), false },  // 3756855739
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::ClassParams = {
	&UDefaultLevelSequenceInstanceData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData()
{
	if (!Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton, Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<UDefaultLevelSequenceInstanceData>()
{
	return UDefaultLevelSequenceInstanceData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultLevelSequenceInstanceData);
UDefaultLevelSequenceInstanceData::~UDefaultLevelSequenceInstanceData() {}
// End Class UDefaultLevelSequenceInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultLevelSequenceInstanceData, UDefaultLevelSequenceInstanceData::StaticClass, TEXT("UDefaultLevelSequenceInstanceData"), &Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultLevelSequenceInstanceData), 181807188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_3375812041(TEXT("/Script/LevelSequence"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
