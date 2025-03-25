// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Drawing/TriangleSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangleSetComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FRenderableTriangle();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FRenderableTriangleVertex();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin ScriptStruct FRenderableTriangleVertex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderableTriangleVertex;
class UScriptStruct* FRenderableTriangleVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderableTriangleVertex, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("RenderableTriangleVertex"));
	}
	return Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FRenderableTriangleVertex>()
{
	return FRenderableTriangleVertex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderableTriangleVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderableTriangleVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderableTriangleVertex, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV_MetaData), NewProp_UV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderableTriangleVertex, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderableTriangleVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"RenderableTriangleVertex",
	Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::PropPointers),
	sizeof(FRenderableTriangleVertex),
	alignof(FRenderableTriangleVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRenderableTriangleVertex()
{
	if (!Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.InnerSingleton, Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.InnerSingleton;
}
// End ScriptStruct FRenderableTriangleVertex

// Begin ScriptStruct FRenderableTriangle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderableTriangle;
class UScriptStruct* FRenderableTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderableTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderableTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderableTriangle, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("RenderableTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_RenderableTriangle.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FRenderableTriangle>()
{
	return FRenderableTriangle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRenderableTriangle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertex0_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertex1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertex2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderableTriangle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderableTriangle, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex0 = { "Vertex0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderableTriangle, Vertex0), Z_Construct_UScriptStruct_FRenderableTriangleVertex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertex0_MetaData), NewProp_Vertex0_MetaData) }; // 508991342
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex1 = { "Vertex1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderableTriangle, Vertex1), Z_Construct_UScriptStruct_FRenderableTriangleVertex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertex1_MetaData), NewProp_Vertex1_MetaData) }; // 508991342
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex2 = { "Vertex2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderableTriangle, Vertex2), Z_Construct_UScriptStruct_FRenderableTriangleVertex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertex2_MetaData), NewProp_Vertex2_MetaData) }; // 508991342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderableTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	nullptr,
	&NewStructOps,
	"RenderableTriangle",
	Z_Construct_UScriptStruct_FRenderableTriangle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::PropPointers),
	sizeof(FRenderableTriangle),
	alignof(FRenderableTriangle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRenderableTriangle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRenderableTriangle()
{
	if (!Z_Registration_Info_UScriptStruct_RenderableTriangle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderableTriangle.InnerSingleton, Z_Construct_UScriptStruct_FRenderableTriangle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RenderableTriangle.InnerSingleton;
}
// End ScriptStruct FRenderableTriangle

// Begin Class UTriangleSetComponent
void UTriangleSetComponent::StaticRegisterNativesUTriangleSetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriangleSetComponent);
UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister()
{
	return UTriangleSetComponent::StaticClass();
}
struct Z_Construct_UClass_UTriangleSetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A component for rendering an arbitrary assortment of triangles. Suitable, for instance, for rendering highlighted faces.\n*/" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/TriangleSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
		{ "ToolTip", "A component for rendering an arbitrary assortment of triangles. Suitable, for instance, for rendering highlighted faces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoundsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bBoundsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundsDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangleSetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangleSetComponent, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
void Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty_SetBit(void* Obj)
{
	((UTriangleSetComponent*)Obj)->bBoundsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty = { "bBoundsDirty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTriangleSetComponent), &Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoundsDirty_MetaData), NewProp_bBoundsDirty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriangleSetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleSetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTriangleSetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleSetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriangleSetComponent_Statics::ClassParams = {
	&UTriangleSetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTriangleSetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleSetComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleSetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriangleSetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriangleSetComponent()
{
	if (!Z_Registration_Info_UClass_UTriangleSetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriangleSetComponent.OuterSingleton, Z_Construct_UClass_UTriangleSetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriangleSetComponent.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UTriangleSetComponent>()
{
	return UTriangleSetComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangleSetComponent);
UTriangleSetComponent::~UTriangleSetComponent() {}
// End Class UTriangleSetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRenderableTriangleVertex::StaticStruct, Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewStructOps, TEXT("RenderableTriangleVertex"), &Z_Registration_Info_UScriptStruct_RenderableTriangleVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderableTriangleVertex), 508991342U) },
		{ FRenderableTriangle::StaticStruct, Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewStructOps, TEXT("RenderableTriangle"), &Z_Registration_Info_UScriptStruct_RenderableTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderableTriangle), 596206254U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriangleSetComponent, UTriangleSetComponent::StaticClass, TEXT("UTriangleSetComponent"), &Z_Registration_Info_UClass_UTriangleSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriangleSetComponent), 2825606427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_224329884(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
