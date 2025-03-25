// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementRectangle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementRectangle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementRectangle();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementRectangle_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementRectangle
void UGizmoElementRectangle::StaticRegisterNativesUGizmoElementRectangle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementRectangle);
UClass* Z_Construct_UClass_UGizmoElementRectangle_NoRegister()
{
	return UGizmoElementRectangle::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementRectangle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a rectangle based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementRectangle.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a rectangle based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Comment", "// Location of rectangle center\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Location of rectangle center" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Comment", "// Width\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Width" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Comment", "// Height\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Height" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "Comment", "// Up direction\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Up direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideDirection_MetaData[] = {
		{ "Comment", "// Side direction\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
		{ "ToolTip", "Side direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLine_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitLine_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRectangle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SideDirection;
	static void NewProp_bDrawMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMesh;
	static void NewProp_bDrawLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLine;
	static void NewProp_bHitMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitMesh;
	static void NewProp_bHitLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementRectangle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementRectangle, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementRectangle, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementRectangle, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementRectangle, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_SideDirection = { "SideDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementRectangle, SideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideDirection_MetaData), NewProp_SideDirection_MetaData) };
void Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh_SetBit(void* Obj)
{
	((UGizmoElementRectangle*)Obj)->bDrawMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh = { "bDrawMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementRectangle), &Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawMesh_MetaData), NewProp_bDrawMesh_MetaData) };
void Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine_SetBit(void* Obj)
{
	((UGizmoElementRectangle*)Obj)->bDrawLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine = { "bDrawLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementRectangle), &Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLine_MetaData), NewProp_bDrawLine_MetaData) };
void Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh_SetBit(void* Obj)
{
	((UGizmoElementRectangle*)Obj)->bHitMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh = { "bHitMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementRectangle), &Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitMesh_MetaData), NewProp_bHitMesh_MetaData) };
void Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine_SetBit(void* Obj)
{
	((UGizmoElementRectangle*)Obj)->bHitLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine = { "bHitLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementRectangle), &Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitLine_MetaData), NewProp_bHitLine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementRectangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_SideDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bDrawLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementRectangle_Statics::NewProp_bHitLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementRectangle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementLineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementRectangle_Statics::ClassParams = {
	&UGizmoElementRectangle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementRectangle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementRectangle_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementRectangle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementRectangle()
{
	if (!Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton, Z_Construct_UClass_UGizmoElementRectangle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementRectangle.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementRectangle>()
{
	return UGizmoElementRectangle::StaticClass();
}
UGizmoElementRectangle::UGizmoElementRectangle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementRectangle);
UGizmoElementRectangle::~UGizmoElementRectangle() {}
// End Class UGizmoElementRectangle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementRectangle, UGizmoElementRectangle::StaticClass, TEXT("UGizmoElementRectangle"), &Z_Registration_Info_UClass_UGizmoElementRectangle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementRectangle), 1358306851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_4202776552(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRectangle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
