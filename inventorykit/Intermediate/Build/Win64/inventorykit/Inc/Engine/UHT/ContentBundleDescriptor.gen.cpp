// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleDescriptor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleDescriptor();
ENGINE_API UClass* Z_Construct_UClass_UContentBundleDescriptor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UContentBundleDescriptor
void UContentBundleDescriptor::StaticRegisterNativesUContentBundleDescriptor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleDescriptor);
UClass* Z_Construct_UClass_UContentBundleDescriptor_NoRegister()
{
	return UContentBundleDescriptor::StaticClass();
}
struct Z_Construct_UClass_UContentBundleDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "BaseInformation" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "BaseInformation" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "BaseInformation" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleDescriptor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentBundleDescriptor, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0040000000200001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentBundleDescriptor, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040040000220001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentBundleDescriptor, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UContentBundleDescriptor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleDescriptor_Statics::ClassParams = {
	&UContentBundleDescriptor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UContentBundleDescriptor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentBundleDescriptor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentBundleDescriptor()
{
	if (!Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton, Z_Construct_UClass_UContentBundleDescriptor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UContentBundleDescriptor>()
{
	return UContentBundleDescriptor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleDescriptor);
UContentBundleDescriptor::~UContentBundleDescriptor() {}
// End Class UContentBundleDescriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleDescriptor, UContentBundleDescriptor::StaticClass, TEXT("UContentBundleDescriptor"), &Z_Registration_Info_UClass_UContentBundleDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleDescriptor), 644200034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_706398722(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
