// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/JsonUtilities/Public/JsonObjectWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonObjectWrapper() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject();
JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister();
JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
UPackage* Z_Construct_UPackage__Script_JsonUtilities();
// End Cross Module References

// Begin ScriptStruct FJsonObjectWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JsonObjectWrapper;
class UScriptStruct* FJsonObjectWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JsonObjectWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JsonObjectWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectWrapper, (UObject*)Z_Construct_UPackage__Script_JsonUtilities(), TEXT("JsonObjectWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_JsonObjectWrapper.OuterSingleton;
}
template<> JSONUTILITIES_API UScriptStruct* StaticStruct<FJsonObjectWrapper>()
{
	return FJsonObjectWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UStruct that holds a JsonObject, can be used by structs passed to JsonObjectConverter to pass through JsonObjects directly */" },
		{ "DisplayName", "JsonObject" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
		{ "ToolTip", "UStruct that holds a JsonObject, can be used by structs passed to JsonObjectConverter to pass through JsonObjects directly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonObjectWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJsonObjectWrapper, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JsonUtilities,
	nullptr,
	&NewStructOps,
	"JsonObjectWrapper",
	Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers),
	sizeof(FJsonObjectWrapper),
	alignof(FJsonObjectWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_JsonObjectWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JsonObjectWrapper.InnerSingleton, Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JsonObjectWrapper.InnerSingleton;
}
// End ScriptStruct FJsonObjectWrapper

// Begin Class UJsonUtilitiesDummyObject
void UJsonUtilitiesDummyObject::StaticRegisterNativesUJsonUtilitiesDummyObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJsonUtilitiesDummyObject);
UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister()
{
	return UJsonUtilitiesDummyObject::StaticClass();
}
struct Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JsonObjectWrapper.h" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonUtilitiesDummyObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_JsonUtilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::ClassParams = {
	&UJsonUtilitiesDummyObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject()
{
	if (!Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton, Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton;
}
template<> JSONUTILITIES_API UClass* StaticClass<UJsonUtilitiesDummyObject>()
{
	return UJsonUtilitiesDummyObject::StaticClass();
}
UJsonUtilitiesDummyObject::UJsonUtilitiesDummyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonUtilitiesDummyObject);
UJsonUtilitiesDummyObject::~UJsonUtilitiesDummyObject() {}
// End Class UJsonUtilitiesDummyObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJsonObjectWrapper::StaticStruct, Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewStructOps, TEXT("JsonObjectWrapper"), &Z_Registration_Info_UScriptStruct_JsonObjectWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJsonObjectWrapper), 3936905286U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJsonUtilitiesDummyObject, UJsonUtilitiesDummyObject::StaticClass, TEXT("UJsonUtilitiesDummyObject"), &Z_Registration_Info_UClass_UJsonUtilitiesDummyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJsonUtilitiesDummyObject), 1834575143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_708541669(TEXT("/Script/JsonUtilities"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
