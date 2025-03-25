// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseTools/MeshSurfacePointTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSurfacePointTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UMeshSurfacePointToolBuilder
void UMeshSurfacePointToolBuilder::StaticRegisterNativesUMeshSurfacePointToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSurfacePointToolBuilder);
UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder_NoRegister()
{
	return UMeshSurfacePointToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseTools/MeshSurfacePointTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSurfacePointToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::ClassParams = {
	&UMeshSurfacePointToolBuilder::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshSurfacePointToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshSurfacePointToolBuilder>()
{
	return UMeshSurfacePointToolBuilder::StaticClass();
}
UMeshSurfacePointToolBuilder::UMeshSurfacePointToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSurfacePointToolBuilder);
UMeshSurfacePointToolBuilder::~UMeshSurfacePointToolBuilder() {}
// End Class UMeshSurfacePointToolBuilder

// Begin Class UMeshSurfacePointTool
void UMeshSurfacePointTool::StaticRegisterNativesUMeshSurfacePointTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSurfacePointTool);
UClass* Z_Construct_UClass_UMeshSurfacePointTool_NoRegister()
{
	return UMeshSurfacePointTool::StaticClass();
}
struct Z_Construct_UClass_UMeshSurfacePointTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshSurfacePointTool is a base Tool implementation that can be used to implement various\n * \"point on surface\" interactions. The tool acts on an input IMeshDescriptionSource object,\n * which the standard Builder can extract from the current selection (eg Editor selection).\n * \n * Subclasses override the OnBeginDrag/OnUpdateDrag/OnEndDrag and OnUpdateHover functions\n * to implement custom behavior.\n */" },
		{ "IncludePath", "BaseTools/MeshSurfacePointTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointTool.h" },
		{ "ToolTip", "UMeshSurfacePointTool is a base Tool implementation that can be used to implement various\n\"point on surface\" interactions. The tool acts on an input IMeshDescriptionSource object,\nwhich the standard Builder can extract from the current selection (eg Editor selection).\n\nSubclasses override the OnBeginDrag/OnUpdateDrag/OnEndDrag and OnUpdateHover functions\nto implement custom behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/MeshSurfacePointTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSurfacePointTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMeshSurfacePointTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshSurfacePointTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSurfacePointTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSurfacePointTool_Statics::NewProp_TargetWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshSurfacePointTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSurfacePointTool_Statics::ClassParams = {
	&UMeshSurfacePointTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshSurfacePointTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointTool_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSurfacePointTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSurfacePointTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSurfacePointTool()
{
	if (!Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton, Z_Construct_UClass_UMeshSurfacePointTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSurfacePointTool.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshSurfacePointTool>()
{
	return UMeshSurfacePointTool::StaticClass();
}
UMeshSurfacePointTool::UMeshSurfacePointTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSurfacePointTool);
UMeshSurfacePointTool::~UMeshSurfacePointTool() {}
// End Class UMeshSurfacePointTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSurfacePointToolBuilder, UMeshSurfacePointToolBuilder::StaticClass, TEXT("UMeshSurfacePointToolBuilder"), &Z_Registration_Info_UClass_UMeshSurfacePointToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSurfacePointToolBuilder), 386238034U) },
		{ Z_Construct_UClass_UMeshSurfacePointTool, UMeshSurfacePointTool::StaticClass, TEXT("UMeshSurfacePointTool"), &Z_Registration_Info_UClass_UMeshSurfacePointTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSurfacePointTool), 4103642977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_3558257036(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseTools_MeshSurfacePointTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
