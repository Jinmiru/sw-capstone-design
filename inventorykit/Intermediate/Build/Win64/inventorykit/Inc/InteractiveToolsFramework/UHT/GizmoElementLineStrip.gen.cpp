// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementLineStrip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementLineStrip() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineStrip();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineStrip_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementLineStrip
void UGizmoElementLineStrip::StaticRegisterNativesUGizmoElementLineStrip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementLineStrip);
UClass* Z_Construct_UClass_UGizmoElementLineStrip_NoRegister()
{
	return UGizmoElementLineStrip::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementLineStrip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a rectangle based on parameters.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementLineStrip.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineStrip.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a rectangle based on parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Comment", "// The vertices of the line strip\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineStrip.h" },
		{ "ToolTip", "The vertices of the line strip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Comment", "// Base Location of the line strip\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineStrip.h" },
		{ "ToolTip", "Base Location of the line strip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "Comment", "// Up direction\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineStrip.h" },
		{ "ToolTip", "Up direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideDirection_MetaData[] = {
		{ "Comment", "// Side direction\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineStrip.h" },
		{ "ToolTip", "Side direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLineStrip_MetaData[] = {
		{ "Comment", "// Defines if the vertices should be treated as a connected strip or separate line segments\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineStrip.h" },
		{ "ToolTip", "Defines if the vertices should be treated as a connected strip or separate line segments" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SideDirection;
	static void NewProp_bDrawLineStrip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLineStrip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementLineStrip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementLineStrip, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementLineStrip, Base), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementLineStrip, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_SideDirection = { "SideDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGizmoElementLineStrip, SideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideDirection_MetaData), NewProp_SideDirection_MetaData) };
void Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_bDrawLineStrip_SetBit(void* Obj)
{
	((UGizmoElementLineStrip*)Obj)->bDrawLineStrip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_bDrawLineStrip = { "bDrawLineStrip", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementLineStrip), &Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_bDrawLineStrip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLineStrip_MetaData), NewProp_bDrawLineStrip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementLineStrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_SideDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineStrip_Statics::NewProp_bDrawLineStrip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineStrip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementLineStrip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementLineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineStrip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementLineStrip_Statics::ClassParams = {
	&UGizmoElementLineStrip::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementLineStrip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineStrip_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineStrip_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementLineStrip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementLineStrip()
{
	if (!Z_Registration_Info_UClass_UGizmoElementLineStrip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementLineStrip.OuterSingleton, Z_Construct_UClass_UGizmoElementLineStrip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementLineStrip.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementLineStrip>()
{
	return UGizmoElementLineStrip::StaticClass();
}
UGizmoElementLineStrip::UGizmoElementLineStrip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementLineStrip);
UGizmoElementLineStrip::~UGizmoElementLineStrip() {}
// End Class UGizmoElementLineStrip

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementLineStrip, UGizmoElementLineStrip::StaticClass, TEXT("UGizmoElementLineStrip"), &Z_Registration_Info_UClass_UGizmoElementLineStrip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementLineStrip), 1154174871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_3847896986(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineStrip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
