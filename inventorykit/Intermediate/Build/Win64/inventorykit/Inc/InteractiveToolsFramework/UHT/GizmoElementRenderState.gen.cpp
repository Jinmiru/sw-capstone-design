// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementRenderState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementRenderState() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementColorAttribute();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute();
INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin ScriptStruct FGizmoElementColorAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoElementColorAttribute;
class UScriptStruct* FGizmoElementColorAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoElementColorAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoElementColorAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoElementColorAttribute, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoElementColorAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoElementColorAttribute.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoElementColorAttribute>()
{
	return FGizmoElementColorAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//\n// Color state attribute struct \n//\n// Stores color state value, whether state is set and whether it overrides child state. \n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Color state attribute struct\n\nStores color state value, whether state is set and whether it overrides child state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Comment", "// Color value\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Color value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasValue_MetaData[] = {
		{ "Comment", "// True if value has been set.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "True if value has been set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesChildState_MetaData[] = {
		{ "Comment", "// True if this attribute overrides child state attributes\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "True if this attribute overrides child state attributes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bHasValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValue;
	static void NewProp_bOverridesChildState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesChildState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoElementColorAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementColorAttribute, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bHasValue_SetBit(void* Obj)
{
	((FGizmoElementColorAttribute*)Obj)->bHasValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bHasValue = { "bHasValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGizmoElementColorAttribute), &Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bHasValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasValue_MetaData), NewProp_bHasValue_MetaData) };
void Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bOverridesChildState_SetBit(void* Obj)
{
	((FGizmoElementColorAttribute*)Obj)->bOverridesChildState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bOverridesChildState = { "bOverridesChildState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGizmoElementColorAttribute), &Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bOverridesChildState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesChildState_MetaData), NewProp_bOverridesChildState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bHasValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewProp_bOverridesChildState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"GizmoElementColorAttribute",
	Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::PropPointers),
	sizeof(FGizmoElementColorAttribute),
	alignof(FGizmoElementColorAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementColorAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoElementColorAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoElementColorAttribute.InnerSingleton, Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GizmoElementColorAttribute.InnerSingleton;
}
// End ScriptStruct FGizmoElementColorAttribute

// Begin ScriptStruct FGizmoElementMaterialAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoElementMaterialAttribute;
class UScriptStruct* FGizmoElementMaterialAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoElementMaterialAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoElementMaterialAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoElementMaterialAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoElementMaterialAttribute.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoElementMaterialAttribute>()
{
	return FGizmoElementMaterialAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//\n// Material state attribute struct\n//\n// Stores material state value, whether state is set and whether it overrides child state.\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Material state attribute struct\n\nStores material state value, whether state is set and whether it overrides child state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Comment", "// Material value\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Material value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesChildState_MetaData[] = {
		{ "Comment", "// True if this attribute overrides child state attributes \n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "True if this attribute overrides child state attributes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Value;
	static void NewProp_bOverridesChildState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesChildState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoElementMaterialAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementMaterialAttribute, Value), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::NewProp_bOverridesChildState_SetBit(void* Obj)
{
	((FGizmoElementMaterialAttribute*)Obj)->bOverridesChildState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::NewProp_bOverridesChildState = { "bOverridesChildState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGizmoElementMaterialAttribute), &Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::NewProp_bOverridesChildState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesChildState_MetaData), NewProp_bOverridesChildState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::NewProp_bOverridesChildState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"GizmoElementMaterialAttribute",
	Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::PropPointers),
	sizeof(FGizmoElementMaterialAttribute),
	alignof(FGizmoElementMaterialAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoElementMaterialAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoElementMaterialAttribute.InnerSingleton, Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GizmoElementMaterialAttribute.InnerSingleton;
}
// End ScriptStruct FGizmoElementMaterialAttribute

// Begin ScriptStruct FGizmoElementMeshRenderStateAttributes
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoElementMeshRenderStateAttributes;
class UScriptStruct* FGizmoElementMeshRenderStateAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoElementMeshRenderStateAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoElementMeshRenderStateAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoElementMeshRenderStateAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoElementMeshRenderStateAttributes.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoElementMeshRenderStateAttributes>()
{
	return FGizmoElementMeshRenderStateAttributes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//\n// Mesh render state structure.\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Mesh render state structure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Comment", "// Default material\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Default material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverMaterial_MetaData[] = {
		{ "Comment", "// Hover material\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Hover material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractMaterial_MetaData[] = {
		{ "Comment", "// Interact material\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Interact material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[] = {
		{ "Comment", "// Mesh vertex color\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Mesh vertex color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverVertexColor_MetaData[] = {
		{ "Comment", "// Hover mesh vertex color\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Hover mesh vertex color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractVertexColor_MetaData[] = {
		{ "Comment", "// Interact mesh vertex color\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Interact mesh vertex color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverVertexColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractVertexColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoElementMeshRenderStateAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementMeshRenderStateAttributes, Material), Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) }; // 497136565
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_HoverMaterial = { "HoverMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementMeshRenderStateAttributes, HoverMaterial), Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverMaterial_MetaData), NewProp_HoverMaterial_MetaData) }; // 497136565
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_InteractMaterial = { "InteractMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementMeshRenderStateAttributes, InteractMaterial), Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractMaterial_MetaData), NewProp_InteractMaterial_MetaData) }; // 497136565
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementMeshRenderStateAttributes, VertexColor), Z_Construct_UScriptStruct_FGizmoElementColorAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColor_MetaData), NewProp_VertexColor_MetaData) }; // 1237346683
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_HoverVertexColor = { "HoverVertexColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementMeshRenderStateAttributes, HoverVertexColor), Z_Construct_UScriptStruct_FGizmoElementColorAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverVertexColor_MetaData), NewProp_HoverVertexColor_MetaData) }; // 1237346683
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_InteractVertexColor = { "InteractVertexColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementMeshRenderStateAttributes, InteractVertexColor), Z_Construct_UScriptStruct_FGizmoElementColorAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractVertexColor_MetaData), NewProp_InteractVertexColor_MetaData) }; // 1237346683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_HoverMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_InteractMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_VertexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_HoverVertexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewProp_InteractVertexColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"GizmoElementMeshRenderStateAttributes",
	Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::PropPointers),
	sizeof(FGizmoElementMeshRenderStateAttributes),
	alignof(FGizmoElementMeshRenderStateAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoElementMeshRenderStateAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoElementMeshRenderStateAttributes.InnerSingleton, Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GizmoElementMeshRenderStateAttributes.InnerSingleton;
}
// End ScriptStruct FGizmoElementMeshRenderStateAttributes

// Begin ScriptStruct FGizmoElementLineRenderStateAttributes
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoElementLineRenderStateAttributes;
class UScriptStruct* FGizmoElementLineRenderStateAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoElementLineRenderStateAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoElementLineRenderStateAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoElementLineRenderStateAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoElementLineRenderStateAttributes.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoElementLineRenderStateAttributes>()
{
	return FGizmoElementLineRenderStateAttributes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//\n// Line render state structure.\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Line render state structure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "Comment", "// Line color\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Line color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverLineColor_MetaData[] = {
		{ "Comment", "// Hover line color\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Hover line color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractLineColor_MetaData[] = {
		{ "Comment", "// Interact line color\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementRenderState.h" },
		{ "ToolTip", "Interact line color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverLineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractLineColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoElementLineRenderStateAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementLineRenderStateAttributes, LineColor), Z_Construct_UScriptStruct_FGizmoElementColorAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) }; // 1237346683
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::NewProp_HoverLineColor = { "HoverLineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementLineRenderStateAttributes, HoverLineColor), Z_Construct_UScriptStruct_FGizmoElementColorAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverLineColor_MetaData), NewProp_HoverLineColor_MetaData) }; // 1237346683
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::NewProp_InteractLineColor = { "InteractLineColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoElementLineRenderStateAttributes, InteractLineColor), Z_Construct_UScriptStruct_FGizmoElementColorAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractLineColor_MetaData), NewProp_InteractLineColor_MetaData) }; // 1237346683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::NewProp_HoverLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::NewProp_InteractLineColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	nullptr,
	&NewStructOps,
	"GizmoElementLineRenderStateAttributes",
	Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::PropPointers),
	sizeof(FGizmoElementLineRenderStateAttributes),
	alignof(FGizmoElementLineRenderStateAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoElementLineRenderStateAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoElementLineRenderStateAttributes.InnerSingleton, Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GizmoElementLineRenderStateAttributes.InnerSingleton;
}
// End ScriptStruct FGizmoElementLineRenderStateAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRenderState_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGizmoElementColorAttribute::StaticStruct, Z_Construct_UScriptStruct_FGizmoElementColorAttribute_Statics::NewStructOps, TEXT("GizmoElementColorAttribute"), &Z_Registration_Info_UScriptStruct_GizmoElementColorAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoElementColorAttribute), 1237346683U) },
		{ FGizmoElementMaterialAttribute::StaticStruct, Z_Construct_UScriptStruct_FGizmoElementMaterialAttribute_Statics::NewStructOps, TEXT("GizmoElementMaterialAttribute"), &Z_Registration_Info_UScriptStruct_GizmoElementMaterialAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoElementMaterialAttribute), 497136565U) },
		{ FGizmoElementMeshRenderStateAttributes::StaticStruct, Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes_Statics::NewStructOps, TEXT("GizmoElementMeshRenderStateAttributes"), &Z_Registration_Info_UScriptStruct_GizmoElementMeshRenderStateAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoElementMeshRenderStateAttributes), 2069010658U) },
		{ FGizmoElementLineRenderStateAttributes::StaticStruct, Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes_Statics::NewStructOps, TEXT("GizmoElementLineRenderStateAttributes"), &Z_Registration_Info_UScriptStruct_GizmoElementLineRenderStateAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoElementLineRenderStateAttributes), 1825412841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRenderState_h_2961566926(TEXT("/Script/InteractiveToolsFramework"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRenderState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementRenderState_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
