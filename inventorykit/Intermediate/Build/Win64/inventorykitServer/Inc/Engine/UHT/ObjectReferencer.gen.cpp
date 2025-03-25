// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ObjectReferencer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReferencer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer();
ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UObjectReferencer
void UObjectReferencer::StaticRegisterNativesUObjectReferencer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectReferencer);
UClass* Z_Construct_UClass_UObjectReferencer_NoRegister()
{
	return UObjectReferencer::StaticClass();
}
struct Z_Construct_UClass_UObjectReferencer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ObjectReferencer.h" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectReferencer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[] = {
		{ "Category", "ObjectReferencer" },
		{ "Comment", "/** Array of objects being referenced. */" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectReferencer.h" },
		{ "ToolTip", "Array of objects being referenced." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectReferencer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectReferencer, ReferencedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedObjects_MetaData), NewProp_ReferencedObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectReferencer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectReferencer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectReferencer_Statics::ClassParams = {
	&UObjectReferencer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectReferencer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectReferencer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectReferencer()
{
	if (!Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton, Z_Construct_UClass_UObjectReferencer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UObjectReferencer>()
{
	return UObjectReferencer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReferencer);
UObjectReferencer::~UObjectReferencer() {}
// End Class UObjectReferencer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectReferencer, UObjectReferencer::StaticClass, TEXT("UObjectReferencer"), &Z_Registration_Info_UClass_UObjectReferencer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectReferencer), 2272894764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_128767554(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
