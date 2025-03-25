// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Tests/TextPropertyTestObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextPropertyTestObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject();
ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextPropertyTestObject
void UTextPropertyTestObject::StaticRegisterNativesUTextPropertyTestObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextPropertyTestObject);
UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister()
{
	return UTextPropertyTestObject::StaticClass();
}
struct Z_Construct_UClass_UTextPropertyTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/TextPropertyTestObject.h" },
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultedText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndefaultedText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultedText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UndefaultedText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TransientText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextPropertyTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText = { "DefaultedText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextPropertyTestObject, DefaultedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultedText_MetaData), NewProp_DefaultedText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText = { "UndefaultedText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextPropertyTestObject, UndefaultedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndefaultedText_MetaData), NewProp_UndefaultedText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText = { "TransientText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextPropertyTestObject, TransientText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientText_MetaData), NewProp_TransientText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextPropertyTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextPropertyTestObject_Statics::ClassParams = {
	&UTextPropertyTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextPropertyTestObject()
{
	if (!Z_Registration_Info_UClass_UTextPropertyTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextPropertyTestObject.OuterSingleton, Z_Construct_UClass_UTextPropertyTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextPropertyTestObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextPropertyTestObject>()
{
	return UTextPropertyTestObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextPropertyTestObject);
UTextPropertyTestObject::~UTextPropertyTestObject() {}
// End Class UTextPropertyTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextPropertyTestObject, UTextPropertyTestObject::StaticClass, TEXT("UTextPropertyTestObject"), &Z_Registration_Info_UClass_UTextPropertyTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextPropertyTestObject), 1145606728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_4094027063(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_TextPropertyTestObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
