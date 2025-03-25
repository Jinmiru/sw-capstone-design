// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneCapture/Public/LevelCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelCapture() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_ULevelCapture();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_ULevelCapture_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture();
UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References

// Begin Class ULevelCapture
void ULevelCapture::StaticRegisterNativesULevelCapture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelCapture);
UClass* Z_Construct_UClass_ULevelCapture_NoRegister()
{
	return ULevelCapture::StaticClass();
}
struct Z_Construct_UClass_ULevelCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelCapture.h" },
		{ "ModuleRelativePath", "Public/LevelCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartCapture_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Specifies whether the capture should start immediately, or whether it will be invoked externally (through StartMovieCapture/StopMovieCapture exec commands) */" },
		{ "ModuleRelativePath", "Public/LevelCapture.h" },
		{ "ToolTip", "Specifies whether the capture should start immediately, or whether it will be invoked externally (through StartMovieCapture/StopMovieCapture exec commands)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteActorId_MetaData[] = {
		{ "Comment", "/** Copy of the ID from PrerequisiteActor. Required because JSON serialization exports the path of the object, rather that its GUID */" },
		{ "ModuleRelativePath", "Public/LevelCapture.h" },
		{ "ToolTip", "Copy of the ID from PrerequisiteActor. Required because JSON serialization exports the path of the object, rather that its GUID" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoStartCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartCapture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrerequisiteActorId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULevelCapture_Statics::NewProp_bAutoStartCapture_SetBit(void* Obj)
{
	((ULevelCapture*)Obj)->bAutoStartCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelCapture_Statics::NewProp_bAutoStartCapture = { "bAutoStartCapture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelCapture), &Z_Construct_UClass_ULevelCapture_Statics::NewProp_bAutoStartCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartCapture_MetaData), NewProp_bAutoStartCapture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelCapture_Statics::NewProp_PrerequisiteActorId = { "PrerequisiteActorId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelCapture, PrerequisiteActorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerequisiteActorId_MetaData), NewProp_PrerequisiteActorId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelCapture_Statics::NewProp_bAutoStartCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelCapture_Statics::NewProp_PrerequisiteActorId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelCapture_Statics::ClassParams = {
	&ULevelCapture::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelCapture_Statics::PropPointers),
	0,
	0x008804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelCapture()
{
	if (!Z_Registration_Info_UClass_ULevelCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelCapture.OuterSingleton, Z_Construct_UClass_ULevelCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelCapture.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<ULevelCapture>()
{
	return ULevelCapture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelCapture);
ULevelCapture::~ULevelCapture() {}
// End Class ULevelCapture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelCapture, ULevelCapture::StaticClass, TEXT("ULevelCapture"), &Z_Registration_Info_UClass_ULevelCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelCapture), 2014510907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_124563271(TEXT("/Script/MovieSceneCapture"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
