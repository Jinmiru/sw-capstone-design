// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode_Documentation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_Documentation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UEdGraphNode_Documentation
void UEdGraphNode_Documentation::StaticRegisterNativesUEdGraphNode_Documentation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_Documentation);
UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister()
{
	return UEdGraphNode_Documentation::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_Documentation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphNode_Documentation.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[] = {
		{ "Comment", "/** Documentation Link */" },
		{ "DisplayName", "Documentation Link" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
		{ "ToolTip", "Documentation Link" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Excerpt_MetaData[] = {
		{ "Comment", "/** Documentation Excerpt */" },
		{ "DisplayName", "Documentation Excerpt" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
		{ "ToolTip", "Documentation Excerpt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Link;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Excerpt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_Documentation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_Documentation, Link), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Link_MetaData), NewProp_Link_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt = { "Excerpt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_Documentation, Excerpt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Excerpt_MetaData), NewProp_Excerpt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_Documentation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::ClassParams = {
	&UEdGraphNode_Documentation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_Documentation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_Documentation()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_Documentation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_Documentation.OuterSingleton, Z_Construct_UClass_UEdGraphNode_Documentation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_Documentation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEdGraphNode_Documentation>()
{
	return UEdGraphNode_Documentation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_Documentation);
UEdGraphNode_Documentation::~UEdGraphNode_Documentation() {}
// End Class UEdGraphNode_Documentation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_Documentation, UEdGraphNode_Documentation::StaticClass, TEXT("UEdGraphNode_Documentation"), &Z_Registration_Info_UClass_UEdGraphNode_Documentation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_Documentation), 4173779260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_3518173116(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_Documentation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
