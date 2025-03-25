// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneBindingOverrides.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingOverrides() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneBindingOverrideData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData;
class UScriptStruct* FMovieSceneBindingOverrideData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingOverrideData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBindingOverrideData>()
{
	return FMovieSceneBindingOverrideData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Movie scene binding override data */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Movie scene binding override data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingId_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies the object binding to override. */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies the object binding to override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies the object to override the binding with. */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies the object to override the binding with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesDefault_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true). */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingId;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Object;
	static void NewProp_bOverridesDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingOverrideData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId = { "ObjectBindingId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingOverrideData, ObjectBindingId), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindingId_MetaData), NewProp_ObjectBindingId_MetaData) }; // 2701874266
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneBindingOverrideData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit(void* Obj)
{
	((FMovieSceneBindingOverrideData*)Obj)->bOverridesDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault = { "bOverridesDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneBindingOverrideData), &Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesDefault_MetaData), NewProp_bOverridesDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneBindingOverrideData",
	Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers),
	sizeof(FMovieSceneBindingOverrideData),
	alignof(FMovieSceneBindingOverrideData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.InnerSingleton;
}
// End ScriptStruct FMovieSceneBindingOverrideData

// Begin Class UMovieSceneBindingOverrides
void UMovieSceneBindingOverrides::StaticRegisterNativesUMovieSceneBindingOverrides()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBindingOverrides);
UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister()
{
	return UMovieSceneBindingOverrides::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneBindingOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A one-to-many definition of movie scene object binding IDs to overridden objects that should be bound to that binding.\n */" },
		{ "IncludePath", "MovieSceneBindingOverrides.h" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A one-to-many definition of movie scene object binding IDs to overridden objects that should be bound to that binding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingData_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The actual binding data */" },
		{ "DisplayName", "Binding Overrides" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "The actual binding data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBindingOverrides>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_Inner = { "BindingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData, METADATA_PARAMS(0, nullptr) }; // 3279942523
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData = { "BindingData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneBindingOverrides, BindingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingData_MetaData), NewProp_BindingData_MetaData) }; // 3279942523
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::ClassParams = {
	&UMovieSceneBindingOverrides::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneBindingOverrides()
{
	if (!Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton, Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBindingOverrides>()
{
	return UMovieSceneBindingOverrides::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingOverrides);
UMovieSceneBindingOverrides::~UMovieSceneBindingOverrides() {}
// End Class UMovieSceneBindingOverrides

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneBindingOverrideData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewStructOps, TEXT("MovieSceneBindingOverrideData"), &Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBindingOverrideData), 3279942523U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBindingOverrides, UMovieSceneBindingOverrides::StaticClass, TEXT("UMovieSceneBindingOverrides"), &Z_Registration_Info_UClass_UMovieSceneBindingOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBindingOverrides), 2091812914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_2825495939(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
