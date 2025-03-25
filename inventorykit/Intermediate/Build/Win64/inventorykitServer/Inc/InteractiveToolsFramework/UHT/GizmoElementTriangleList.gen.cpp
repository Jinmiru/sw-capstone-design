// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementTriangleList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementTriangleList() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementTriangleList();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementTriangleList_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementTriangleList
void UGizmoElementTriangleList::StaticRegisterNativesUGizmoElementTriangleList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementTriangleList);
UClass* Z_Construct_UClass_UGizmoElementTriangleList_NoRegister()
{
	return UGizmoElementTriangleList::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementTriangleList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a solid 3D sphere based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementTriangleList.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTriangleList.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a solid 3D sphere based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Comment", "// The vertices of the triangle list, each tuple of 3 forming a triangle\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTriangleList.h" },
		{ "ToolTip", "The vertices of the triangle list, each tuple of 3 forming a triangle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Comment", "// Base location the triangles\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTriangleList.h" },
		{ "ToolTip", "Base location the triangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "Comment", "// Up direction\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTriangleList.h" },
		{ "ToolTip", "Up direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideDirection_MetaData[] = {
		{ "Comment", "// Side direction\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementTriangleList.h" },
		{ "ToolTip", "Side direction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SideDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementTriangleList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementTriangleList, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementTriangleList, Base), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementTriangleList, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_SideDirection = { "SideDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementTriangleList, SideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideDirection_MetaData), NewProp_SideDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementTriangleList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementTriangleList_Statics::NewProp_SideDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTriangleList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementTriangleList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTriangleList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementTriangleList_Statics::ClassParams = {
	&UGizmoElementTriangleList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementTriangleList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTriangleList_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementTriangleList_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementTriangleList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementTriangleList()
{
	if (!Z_Registration_Info_UClass_UGizmoElementTriangleList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementTriangleList.OuterSingleton, Z_Construct_UClass_UGizmoElementTriangleList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementTriangleList.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementTriangleList>()
{
	return UGizmoElementTriangleList::StaticClass();
}
UGizmoElementTriangleList::UGizmoElementTriangleList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementTriangleList);
UGizmoElementTriangleList::~UGizmoElementTriangleList() {}
// End Class UGizmoElementTriangleList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTriangleList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementTriangleList, UGizmoElementTriangleList::StaticClass, TEXT("UGizmoElementTriangleList"), &Z_Registration_Info_UClass_UGizmoElementTriangleList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementTriangleList), 3289260968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTriangleList_h_191618111(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTriangleList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementTriangleList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
