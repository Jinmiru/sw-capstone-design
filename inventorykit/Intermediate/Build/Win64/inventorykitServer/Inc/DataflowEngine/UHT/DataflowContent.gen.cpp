// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowContent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBaseContent();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBaseContent_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContextObject();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowContextObject_NoRegister();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowSkeletalContent();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowSkeletalContent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References

// Begin Class UDataflowContextObject
void UDataflowContextObject::StaticRegisterNativesUDataflowContextObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowContextObject);
UClass* Z_Construct_UClass_UDataflowContextObject_NoRegister()
{
	return UDataflowContextObject::StaticClass();
}
struct Z_Construct_UClass_UDataflowContextObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Context object used for selection/rendering \n */" },
		{ "IncludePath", "Dataflow/DataflowContent.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Context object used for selection/rendering" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowContextObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataflowContextObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowContextObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowContextObject_Statics::ClassParams = {
	&UDataflowContextObject::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowContextObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowContextObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowContextObject()
{
	if (!Z_Registration_Info_UClass_UDataflowContextObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowContextObject.OuterSingleton, Z_Construct_UClass_UDataflowContextObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowContextObject.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowContextObject>()
{
	return UDataflowContextObject::StaticClass();
}
UDataflowContextObject::UDataflowContextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowContextObject);
UDataflowContextObject::~UDataflowContextObject() {}
// End Class UDataflowContextObject

// Begin Class UDataflowBaseContent
void UDataflowBaseContent::StaticRegisterNativesUDataflowBaseContent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowBaseContent);
UClass* Z_Construct_UClass_UDataflowBaseContent_NoRegister()
{
	return UDataflowBaseContent::StaticClass();
}
struct Z_Construct_UClass_UDataflowBaseContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Dataflow content owning dataflow asset that that will be used to evaluate the graph\n */" },
		{ "IncludePath", "Dataflow/DataflowContent.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Dataflow content owning dataflow asset that that will be used to evaluate the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataflowAsset_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "/** Data flow asset that we will edit */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Data flow asset that we will edit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataflowTerminal_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "/** Data flow terminal path for evaluation */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Data flow terminal path for evaluation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataflowAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DataflowTerminal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowBaseContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_DataflowAsset = { "DataflowAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowBaseContent, DataflowAsset), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataflowAsset_MetaData), NewProp_DataflowAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_DataflowTerminal = { "DataflowTerminal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowBaseContent, DataflowTerminal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataflowTerminal_MetaData), NewProp_DataflowTerminal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflowBaseContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_DataflowAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowBaseContent_Statics::NewProp_DataflowTerminal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBaseContent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataflowBaseContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataflowContextObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBaseContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowBaseContent_Statics::ClassParams = {
	&UDataflowBaseContent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataflowBaseContent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBaseContent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowBaseContent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowBaseContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowBaseContent()
{
	if (!Z_Registration_Info_UClass_UDataflowBaseContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowBaseContent.OuterSingleton, Z_Construct_UClass_UDataflowBaseContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowBaseContent.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowBaseContent>()
{
	return UDataflowBaseContent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowBaseContent);
UDataflowBaseContent::~UDataflowBaseContent() {}
// End Class UDataflowBaseContent

// Begin Class UDataflowSkeletalContent
void UDataflowSkeletalContent::StaticRegisterNativesUDataflowSkeletalContent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowSkeletalContent);
UClass* Z_Construct_UClass_UDataflowSkeletalContent_NoRegister()
{
	return UDataflowSkeletalContent::StaticClass();
}
struct Z_Construct_UClass_UDataflowSkeletalContent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Dataflow content owning dataflow and skelmesh assets that that will be used to evaluate the graph\n */" },
		{ "IncludePath", "Dataflow/DataflowContent.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Dataflow content owning dataflow and skelmesh assets that that will be used to evaluate the graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Data flow skeletal mesh*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Data flow skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAsset_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Animation asset to be used to preview simulation */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Animation asset to be used to preview simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Data flow skeleton */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContent.h" },
		{ "ToolTip", "Data flow skeleton" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowSkeletalContent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowSkeletalContent, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowSkeletalContent, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationAsset_MetaData), NewProp_AnimationAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataflowSkeletalContent, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflowSkeletalContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_AnimationAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSkeletalContent_Statics::NewProp_Skeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSkeletalContent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataflowSkeletalContent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataflowBaseContent,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSkeletalContent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowSkeletalContent_Statics::ClassParams = {
	&UDataflowSkeletalContent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataflowSkeletalContent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSkeletalContent_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSkeletalContent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowSkeletalContent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowSkeletalContent()
{
	if (!Z_Registration_Info_UClass_UDataflowSkeletalContent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowSkeletalContent.OuterSingleton, Z_Construct_UClass_UDataflowSkeletalContent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowSkeletalContent.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowSkeletalContent>()
{
	return UDataflowSkeletalContent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowSkeletalContent);
// End Class UDataflowSkeletalContent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowContextObject, UDataflowContextObject::StaticClass, TEXT("UDataflowContextObject"), &Z_Registration_Info_UClass_UDataflowContextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowContextObject), 1618624977U) },
		{ Z_Construct_UClass_UDataflowBaseContent, UDataflowBaseContent::StaticClass, TEXT("UDataflowBaseContent"), &Z_Registration_Info_UClass_UDataflowBaseContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowBaseContent), 1584067499U) },
		{ Z_Construct_UClass_UDataflowSkeletalContent, UDataflowSkeletalContent::StaticClass, TEXT("UDataflowSkeletalContent"), &Z_Registration_Info_UClass_UDataflowSkeletalContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowSkeletalContent), 824146436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_2443398905(TEXT("/Script/DataflowEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
