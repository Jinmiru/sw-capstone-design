// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/Properties/MeshMaterialProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMaterialProperties() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshEditingViewProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshEditingViewProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UNewMeshMaterialProperties
void UNewMeshMaterialProperties::StaticRegisterNativesUNewMeshMaterialProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewMeshMaterialProperties);
UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister()
{
	return UNewMeshMaterialProperties::StaticClass();
}
struct Z_Construct_UClass_UNewMeshMaterialProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Standard material property settings for tools that generate new meshes\n" },
		{ "IncludePath", "Properties/MeshMaterialProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Standard material property settings for tools that generate new meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Material for new mesh */" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Material for new mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Scale factor for generated UVs */" },
		{ "Delta", "0.010000" },
		{ "DisplayName", "UV Scale" },
		{ "EditCondition", "bShowExtendedOptions" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Scale factor for generated UVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWorldSpaceUVScale_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, UV scale will be relative to world space. This means objects of different sizes created with the same UV scale have the same average texel size. */" },
		{ "DisplayName", "World Space UV Scale" },
		{ "EditCondition", "bShowExtendedOptions" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "If true, UV scale will be relative to world space. This means objects of different sizes created with the same UV scale have the same average texel size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, overlays preview with wireframe */" },
		{ "EditCondition", "bShowExtendedOptions" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "If true, overlays preview with wireframe" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowExtendedOptions_MetaData[] = {
		{ "Comment", "/** If true, extended options are available */" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "If true, extended options are available" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
	static void NewProp_bWorldSpaceUVScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpaceUVScale;
	static void NewProp_bShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
	static void NewProp_bShowExtendedOptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowExtendedOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewMeshMaterialProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000400000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNewMeshMaterialProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNewMeshMaterialProperties, UVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScale_MetaData), NewProp_UVScale_MetaData) };
void Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bWorldSpaceUVScale_SetBit(void* Obj)
{
	((UNewMeshMaterialProperties*)Obj)->bWorldSpaceUVScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bWorldSpaceUVScale = { "bWorldSpaceUVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNewMeshMaterialProperties), &Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bWorldSpaceUVScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWorldSpaceUVScale_MetaData), NewProp_bWorldSpaceUVScale_MetaData) };
void Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
{
	((UNewMeshMaterialProperties*)Obj)->bShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNewMeshMaterialProperties), &Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframe_MetaData), NewProp_bShowWireframe_MetaData) };
void Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bShowExtendedOptions_SetBit(void* Obj)
{
	((UNewMeshMaterialProperties*)Obj)->bShowExtendedOptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bShowExtendedOptions = { "bShowExtendedOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNewMeshMaterialProperties), &Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bShowExtendedOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowExtendedOptions_MetaData), NewProp_bShowExtendedOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewMeshMaterialProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_UVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bWorldSpaceUVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bShowWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMeshMaterialProperties_Statics::NewProp_bShowExtendedOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewMeshMaterialProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNewMeshMaterialProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewMeshMaterialProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewMeshMaterialProperties_Statics::ClassParams = {
	&UNewMeshMaterialProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNewMeshMaterialProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNewMeshMaterialProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewMeshMaterialProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewMeshMaterialProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNewMeshMaterialProperties()
{
	if (!Z_Registration_Info_UClass_UNewMeshMaterialProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewMeshMaterialProperties.OuterSingleton, Z_Construct_UClass_UNewMeshMaterialProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNewMeshMaterialProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UNewMeshMaterialProperties>()
{
	return UNewMeshMaterialProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNewMeshMaterialProperties);
UNewMeshMaterialProperties::~UNewMeshMaterialProperties() {}
// End Class UNewMeshMaterialProperties

// Begin Enum ESetMeshMaterialMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetMeshMaterialMode;
static UEnum* ESetMeshMaterialMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESetMeshMaterialMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESetMeshMaterialMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("ESetMeshMaterialMode"));
	}
	return Z_Registration_Info_UEnum_ESetMeshMaterialMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<ESetMeshMaterialMode>()
{
	return ESetMeshMaterialMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Checkerboard.Comment", "/** Checkerboard material */" },
		{ "Checkerboard.Name", "ESetMeshMaterialMode::Checkerboard" },
		{ "Checkerboard.ToolTip", "Checkerboard material" },
		{ "Comment", "/** Standard material modes for tools that need to set custom materials for visualization */" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "Original.Comment", "/** Input material */" },
		{ "Original.Name", "ESetMeshMaterialMode::Original" },
		{ "Original.ToolTip", "Input material" },
		{ "Override.Comment", "/** Override material */" },
		{ "Override.Name", "ESetMeshMaterialMode::Override" },
		{ "Override.ToolTip", "Override material" },
		{ "ToolTip", "Standard material modes for tools that need to set custom materials for visualization" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESetMeshMaterialMode::Original", (int64)ESetMeshMaterialMode::Original },
		{ "ESetMeshMaterialMode::Checkerboard", (int64)ESetMeshMaterialMode::Checkerboard },
		{ "ESetMeshMaterialMode::Override", (int64)ESetMeshMaterialMode::Override },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"ESetMeshMaterialMode",
	"ESetMeshMaterialMode",
	Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode()
{
	if (!Z_Registration_Info_UEnum_ESetMeshMaterialMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetMeshMaterialMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESetMeshMaterialMode.InnerSingleton;
}
// End Enum ESetMeshMaterialMode

// Begin Class UExistingMeshMaterialProperties Function GetUVChannelNamesFunc
struct Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics
{
	struct ExistingMeshMaterialProperties_eventGetUVChannelNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExistingMeshMaterialProperties_eventGetUVChannelNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExistingMeshMaterialProperties, nullptr, "GetUVChannelNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::ExistingMeshMaterialProperties_eventGetUVChannelNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::ExistingMeshMaterialProperties_eventGetUVChannelNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExistingMeshMaterialProperties::execGetUVChannelNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVChannelNamesFunc();
	P_NATIVE_END;
}
// End Class UExistingMeshMaterialProperties Function GetUVChannelNamesFunc

// Begin Class UExistingMeshMaterialProperties
void UExistingMeshMaterialProperties::StaticRegisterNativesUExistingMeshMaterialProperties()
{
	UClass* Class = UExistingMeshMaterialProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUVChannelNamesFunc", &UExistingMeshMaterialProperties::execGetUVChannelNamesFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExistingMeshMaterialProperties);
UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister()
{
	return UExistingMeshMaterialProperties::StaticClass();
}
struct Z_Construct_UClass_UExistingMeshMaterialProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Standard material property settings for tools that visualize materials on existing meshes (e.g. to help show UVs)\n" },
		{ "IncludePath", "Properties/MeshMaterialProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Standard material property settings for tools that visualize materials on existing meshes (e.g. to help show UVs)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMode_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Material that will be used on the mesh */" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Material that will be used on the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerDensity_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of checkerboard tiles within the 0 to 1 range; only available when Checkerboard is selected as material mode */" },
		{ "EditCondition", "MaterialMode == ESetMeshMaterialMode::Checkerboard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Number of checkerboard tiles within the 0 to 1 range; only available when Checkerboard is selected as material mode" },
		{ "UIMax", "40.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Material to use instead of the original material; only available when Override is selected as material mode */" },
		{ "EditCondition", "MaterialMode == ESetMeshMaterialMode::Override" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Material to use instead of the original material; only available when Override is selected as material mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[] = {
		{ "Category", "PreviewMaterial" },
		{ "Comment", "/** Which UV channel to use for visualizing the checkerboard material on the mesh; note that this does not affect the preview layout */" },
		{ "DisplayName", "Preview UV Channel" },
		{ "EditCondition", "MaterialMode == ESetMeshMaterialMode::Checkerboard" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetUVChannelNamesFunc" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Which UV channel to use for visualizing the checkerboard material on the mesh; note that this does not affect the preview layout" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckerDensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannelNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UVChannelNamesList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckerMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExistingMeshMaterialProperties_GetUVChannelNamesFunc, "GetUVChannelNamesFunc" }, // 2361788115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExistingMeshMaterialProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_MaterialMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_MaterialMode = { "MaterialMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExistingMeshMaterialProperties, MaterialMode), Z_Construct_UEnum_MeshModelingTools_ESetMeshMaterialMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialMode_MetaData), NewProp_MaterialMode_MetaData) }; // 1646084346
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_CheckerDensity = { "CheckerDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExistingMeshMaterialProperties, CheckerDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerDensity_MetaData), NewProp_CheckerDensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExistingMeshMaterialProperties, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterial_MetaData), NewProp_OverrideMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExistingMeshMaterialProperties, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannel_MetaData), NewProp_UVChannel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_UVChannelNamesList_Inner = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_UVChannelNamesList = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExistingMeshMaterialProperties, UVChannelNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelNamesList_MetaData), NewProp_UVChannelNamesList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_CheckerMaterial = { "CheckerMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExistingMeshMaterialProperties, CheckerMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerMaterial_MetaData), NewProp_CheckerMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_MaterialMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_MaterialMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_CheckerDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_OverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_UVChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_UVChannelNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_UVChannelNamesList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::NewProp_CheckerMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::ClassParams = {
	&UExistingMeshMaterialProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExistingMeshMaterialProperties()
{
	if (!Z_Registration_Info_UClass_UExistingMeshMaterialProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExistingMeshMaterialProperties.OuterSingleton, Z_Construct_UClass_UExistingMeshMaterialProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExistingMeshMaterialProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UExistingMeshMaterialProperties>()
{
	return UExistingMeshMaterialProperties::StaticClass();
}
UExistingMeshMaterialProperties::UExistingMeshMaterialProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExistingMeshMaterialProperties);
UExistingMeshMaterialProperties::~UExistingMeshMaterialProperties() {}
// End Class UExistingMeshMaterialProperties

// Begin Enum EMeshEditingMaterialModes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshEditingMaterialModes;
static UEnum* EMeshEditingMaterialModes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshEditingMaterialModes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshEditingMaterialModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EMeshEditingMaterialModes"));
	}
	return Z_Registration_Info_UEnum_EMeshEditingMaterialModes.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EMeshEditingMaterialModes>()
{
	return EMeshEditingMaterialModes_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.Name", "EMeshEditingMaterialModes::Custom" },
		{ "CustomImage.Name", "EMeshEditingMaterialModes::CustomImage" },
		{ "Diffuse.Name", "EMeshEditingMaterialModes::Diffuse" },
		{ "ExistingMaterial.Name", "EMeshEditingMaterialModes::ExistingMaterial" },
		{ "Grey.Name", "EMeshEditingMaterialModes::Grey" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "Soft.Name", "EMeshEditingMaterialModes::Soft" },
		{ "TangentNormal.Name", "EMeshEditingMaterialModes::TangentNormal" },
		{ "Transparent.Name", "EMeshEditingMaterialModes::Transparent" },
		{ "VertexColor.Name", "EMeshEditingMaterialModes::VertexColor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshEditingMaterialModes::ExistingMaterial", (int64)EMeshEditingMaterialModes::ExistingMaterial },
		{ "EMeshEditingMaterialModes::Diffuse", (int64)EMeshEditingMaterialModes::Diffuse },
		{ "EMeshEditingMaterialModes::Grey", (int64)EMeshEditingMaterialModes::Grey },
		{ "EMeshEditingMaterialModes::Soft", (int64)EMeshEditingMaterialModes::Soft },
		{ "EMeshEditingMaterialModes::Transparent", (int64)EMeshEditingMaterialModes::Transparent },
		{ "EMeshEditingMaterialModes::TangentNormal", (int64)EMeshEditingMaterialModes::TangentNormal },
		{ "EMeshEditingMaterialModes::VertexColor", (int64)EMeshEditingMaterialModes::VertexColor },
		{ "EMeshEditingMaterialModes::CustomImage", (int64)EMeshEditingMaterialModes::CustomImage },
		{ "EMeshEditingMaterialModes::Custom", (int64)EMeshEditingMaterialModes::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EMeshEditingMaterialModes",
	"EMeshEditingMaterialModes",
	Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes()
{
	if (!Z_Registration_Info_UEnum_EMeshEditingMaterialModes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshEditingMaterialModes.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshEditingMaterialModes.InnerSingleton;
}
// End Enum EMeshEditingMaterialModes

// Begin Class UMeshEditingViewProperties
void UMeshEditingViewProperties::StaticRegisterNativesUMeshEditingViewProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshEditingViewProperties);
UClass* Z_Construct_UClass_UMeshEditingViewProperties_NoRegister()
{
	return UMeshEditingViewProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshEditingViewProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/MeshMaterialProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Toggle drawing of wireframe overlay on/off [Alt+W] */" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Toggle drawing of wireframe overlay on/off [Alt+W]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Set which material to use on object */" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Set which material to use on object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlatShading_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Toggle flat shading on/off */" },
		{ "EditCondition", "MaterialMode != EMeshEditingMaterialModes::ExistingMaterial && MaterialMode != EMeshEditingMaterialModes::Transparent && MaterialMode != EMeshEditingMaterialModes::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Toggle flat shading on/off" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Main Color of Material */" },
		{ "EditCondition", "MaterialMode == EMeshEditingMaterialModes::Diffuse" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Main Color of Material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Image used in Image-Based Material */" },
		{ "EditCondition", "MaterialMode == EMeshEditingMaterialModes::CustomImage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Image used in Image-Based Material" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Opacity of transparent material */" },
		{ "EditCondition", "MaterialMode == EMeshEditingMaterialModes::Transparent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Opacity of transparent material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransparentMaterialColor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//~ Could have used the same property as Color, above, but the user may want different saved values for the two\n" },
		{ "DisplayName", "Color" },
		{ "EditCondition", "MaterialMode == EMeshEditingMaterialModes::Transparent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwoSided_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Although a two-sided transparent material causes rendering issues with overlapping faces, it is still frequently useful to see the shape when sculpting around other objects. */" },
		{ "EditCondition", "MaterialMode == EMeshEditingMaterialModes::Transparent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
		{ "ToolTip", "Although a two-sided transparent material causes rendering issues with overlapping faces, it is still frequently useful to see the shape when sculpting around other objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "EditCondition", "MaterialMode == EMeshEditingMaterialModes::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/MeshMaterialProperties.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialMode;
	static void NewProp_bFlatShading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlatShading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransparentMaterialColor;
	static void NewProp_bTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwoSided;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CustomMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshEditingViewProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
{
	((UMeshEditingViewProperties*)Obj)->bShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshEditingViewProperties), &Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframe_MetaData), NewProp_bShowWireframe_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_MaterialMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_MaterialMode = { "MaterialMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshEditingViewProperties, MaterialMode), Z_Construct_UEnum_MeshModelingTools_EMeshEditingMaterialModes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialMode_MetaData), NewProp_MaterialMode_MetaData) }; // 4021756206
void Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bFlatShading_SetBit(void* Obj)
{
	((UMeshEditingViewProperties*)Obj)->bFlatShading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bFlatShading = { "bFlatShading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshEditingViewProperties), &Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bFlatShading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlatShading_MetaData), NewProp_bFlatShading_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshEditingViewProperties, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshEditingViewProperties, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshEditingViewProperties, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_TransparentMaterialColor = { "TransparentMaterialColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshEditingViewProperties, TransparentMaterialColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransparentMaterialColor_MetaData), NewProp_TransparentMaterialColor_MetaData) };
void Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bTwoSided_SetBit(void* Obj)
{
	((UMeshEditingViewProperties*)Obj)->bTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bTwoSided = { "bTwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshEditingViewProperties), &Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwoSided_MetaData), NewProp_bTwoSided_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_CustomMaterial = { "CustomMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshEditingViewProperties, CustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMaterial_MetaData), NewProp_CustomMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshEditingViewProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bShowWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_MaterialMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_MaterialMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bFlatShading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_TransparentMaterialColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_bTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshEditingViewProperties_Statics::NewProp_CustomMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshEditingViewProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshEditingViewProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshEditingViewProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshEditingViewProperties_Statics::ClassParams = {
	&UMeshEditingViewProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshEditingViewProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshEditingViewProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshEditingViewProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshEditingViewProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshEditingViewProperties()
{
	if (!Z_Registration_Info_UClass_UMeshEditingViewProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshEditingViewProperties.OuterSingleton, Z_Construct_UClass_UMeshEditingViewProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshEditingViewProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UMeshEditingViewProperties>()
{
	return UMeshEditingViewProperties::StaticClass();
}
UMeshEditingViewProperties::UMeshEditingViewProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshEditingViewProperties);
UMeshEditingViewProperties::~UMeshEditingViewProperties() {}
// End Class UMeshEditingViewProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESetMeshMaterialMode_StaticEnum, TEXT("ESetMeshMaterialMode"), &Z_Registration_Info_UEnum_ESetMeshMaterialMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1646084346U) },
		{ EMeshEditingMaterialModes_StaticEnum, TEXT("EMeshEditingMaterialModes"), &Z_Registration_Info_UEnum_EMeshEditingMaterialModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4021756206U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNewMeshMaterialProperties, UNewMeshMaterialProperties::StaticClass, TEXT("UNewMeshMaterialProperties"), &Z_Registration_Info_UClass_UNewMeshMaterialProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewMeshMaterialProperties), 2091769711U) },
		{ Z_Construct_UClass_UExistingMeshMaterialProperties, UExistingMeshMaterialProperties::StaticClass, TEXT("UExistingMeshMaterialProperties"), &Z_Registration_Info_UClass_UExistingMeshMaterialProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExistingMeshMaterialProperties), 2943777595U) },
		{ Z_Construct_UClass_UMeshEditingViewProperties, UMeshEditingViewProperties::StaticClass, TEXT("UMeshEditingViewProperties"), &Z_Registration_Info_UClass_UMeshEditingViewProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshEditingViewProperties), 3126304944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_3080824170(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_MeshMaterialProperties_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
