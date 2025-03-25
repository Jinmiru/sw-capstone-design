// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequence/Public/ActorSequence.h"
#include "ActorSequence/Public/ActorSequenceObjectReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequence() {}

// Begin Cross Module References
ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence();
ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence_NoRegister();
ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
UPackage* Z_Construct_UPackage__Script_ActorSequence();
// End Cross Module References

// Begin Class UActorSequence
void UActorSequence::StaticRegisterNativesUActorSequence()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSequence);
UClass* Z_Construct_UClass_UActorSequence_NoRegister()
{
	return UActorSequence::StaticClass();
}
struct Z_Construct_UClass_UActorSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Movie scene animation embedded within an actor.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ActorSequence.h" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene animation embedded within an actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this animation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[] = {
		{ "Comment", "/** Collection of object references. */" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ToolTip", "Collection of object references." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectReferences;
#if WITH_EDITORONLY_DATA
	static void NewProp_bHasBeenInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenInitialized;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieScene_MetaData), NewProp_MovieScene_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences = { "ObjectReferences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorSequence, ObjectReferences), Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectReferences_MetaData), NewProp_ObjectReferences_MetaData) }; // 2434119850
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_SetBit(void* Obj)
{
	((UActorSequence*)Obj)->bHasBeenInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized = { "bHasBeenInitialized", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActorSequence), &Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasBeenInitialized_MetaData), NewProp_bHasBeenInitialized_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSequence_Statics::ClassParams = {
	&UActorSequence::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActorSequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorSequence()
{
	if (!Z_Registration_Info_UClass_UActorSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSequence.OuterSingleton, Z_Construct_UClass_UActorSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorSequence.OuterSingleton;
}
template<> ACTORSEQUENCE_API UClass* StaticClass<UActorSequence>()
{
	return UActorSequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequence);
UActorSequence::~UActorSequence() {}
// End Class UActorSequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorSequence, UActorSequence::StaticClass, TEXT("UActorSequence"), &Z_Registration_Info_UClass_UActorSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSequence), 2621622113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_999761822(TEXT("/Script/ActorSequence"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequence_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
