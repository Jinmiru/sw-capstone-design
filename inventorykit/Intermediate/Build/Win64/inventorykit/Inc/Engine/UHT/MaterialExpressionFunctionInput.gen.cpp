// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFunctionInput() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFunctionInputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EFunctionInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFunctionInputType;
static UEnum* EFunctionInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFunctionInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFunctionInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFunctionInputType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFunctionInputType"));
	}
	return Z_Registration_Info_UEnum_EFunctionInputType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EFunctionInputType>()
{
	return EFunctionInputType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EFunctionInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Supported input types */" },
		{ "FunctionInput_Bool.Name", "FunctionInput_Bool" },
		{ "FunctionInput_MaterialAttributes.Name", "FunctionInput_MaterialAttributes" },
		{ "FunctionInput_MAX.Name", "FunctionInput_MAX" },
		{ "FunctionInput_Scalar.Name", "FunctionInput_Scalar" },
		{ "FunctionInput_StaticBool.Name", "FunctionInput_StaticBool" },
		{ "FunctionInput_Substrate.Name", "FunctionInput_Substrate" },
		{ "FunctionInput_Texture2D.Name", "FunctionInput_Texture2D" },
		{ "FunctionInput_Texture2DArray.Name", "FunctionInput_Texture2DArray" },
		{ "FunctionInput_TextureCube.Name", "FunctionInput_TextureCube" },
		{ "FunctionInput_TextureExternal.Name", "FunctionInput_TextureExternal" },
		{ "FunctionInput_Vector2.Name", "FunctionInput_Vector2" },
		{ "FunctionInput_Vector3.Name", "FunctionInput_Vector3" },
		{ "FunctionInput_Vector4.Name", "FunctionInput_Vector4" },
		{ "FunctionInput_VolumeTexture.Name", "FunctionInput_VolumeTexture" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Supported input types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FunctionInput_Scalar", (int64)FunctionInput_Scalar },
		{ "FunctionInput_Vector2", (int64)FunctionInput_Vector2 },
		{ "FunctionInput_Vector3", (int64)FunctionInput_Vector3 },
		{ "FunctionInput_Vector4", (int64)FunctionInput_Vector4 },
		{ "FunctionInput_Texture2D", (int64)FunctionInput_Texture2D },
		{ "FunctionInput_TextureCube", (int64)FunctionInput_TextureCube },
		{ "FunctionInput_Texture2DArray", (int64)FunctionInput_Texture2DArray },
		{ "FunctionInput_VolumeTexture", (int64)FunctionInput_VolumeTexture },
		{ "FunctionInput_StaticBool", (int64)FunctionInput_StaticBool },
		{ "FunctionInput_MaterialAttributes", (int64)FunctionInput_MaterialAttributes },
		{ "FunctionInput_TextureExternal", (int64)FunctionInput_TextureExternal },
		{ "FunctionInput_Bool", (int64)FunctionInput_Bool },
		{ "FunctionInput_Substrate", (int64)FunctionInput_Substrate },
		{ "FunctionInput_MAX", (int64)FunctionInput_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFunctionInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EFunctionInputType",
	"EFunctionInputType",
	Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EFunctionInputType()
{
	if (!Z_Registration_Info_UEnum_EFunctionInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFunctionInputType.InnerSingleton, Z_Construct_UEnum_Engine_EFunctionInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFunctionInputType.InnerSingleton;
}
// End Enum EFunctionInputType

// Begin Class UMaterialExpressionFunctionInput
void UMaterialExpressionFunctionInput::StaticRegisterNativesUMaterialExpressionFunctionInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFunctionInput);
UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister()
{
	return UMaterialExpressionFunctionInput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFunctionInput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "Comment", "/** Used for previewing when editing the function, or when bUsePreviewValueAsDefault is enabled. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Used for previewing when editing the function, or when bUsePreviewValueAsDefault is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** The input's name, which will be drawn on the connector in function call expressions that use this function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "The input's name, which will be drawn on the connector in function call expressions that use this function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** The input's description, which will be used as a tooltip on the connector in function call expressions that use this function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "The input's description, which will be used as a tooltip on the connector in function call expressions that use this function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Comment", "/** Id of this input, used to maintain references through name changes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Id of this input, used to maintain references through name changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** \n\x09 * Type of this input.  \n\x09 * Input code chunks will be cast to this type, and a compiler error will be emitted if the cast fails.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Type of this input.\nInput code chunks will be cast to this type, and a compiler error will be emitted if the cast fails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewValue_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** Value used to preview this input when editing the material function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "OverridingInputProperty", "Preview" },
		{ "ToolTip", "Value used to preview this input when editing the material function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreviewValueAsDefault_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** Whether to use the preview value or texture as the default value for this input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Whether to use the preview value or texture as the default value for this input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "Comment", "/** Controls where the input is displayed relative to the other inputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Controls where the input is displayed relative to the other inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompilingFunctionPreview_MetaData[] = {
		{ "Comment", "/** \n\x09 * true when this expression is being compiled in a function preview, \n\x09 * false when this expression is being compiled into a material that uses the function.\n\x09 * Only valid in Compile()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "true when this expression is being compiled in a function preview,\nfalse when this expression is being compiled into a material that uses the function.\nOnly valid in Compile()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewValue;
	static void NewProp_bUsePreviewValueAsDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreviewValueAsDefault;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
	static void NewProp_bCompilingFunctionPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompilingFunctionPreview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFunctionInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Preview), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, InputType), Z_Construct_UEnum_Engine_EFunctionInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputType_MetaData), NewProp_InputType_MetaData) }; // 4165588519
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue = { "PreviewValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, PreviewValue), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewValue_MetaData), NewProp_PreviewValue_MetaData) };
void Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_SetBit(void* Obj)
{
	((UMaterialExpressionFunctionInput*)Obj)->bUsePreviewValueAsDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault = { "bUsePreviewValueAsDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionFunctionInput), &Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePreviewValueAsDefault_MetaData), NewProp_bUsePreviewValueAsDefault_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFunctionInput, SortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortPriority_MetaData), NewProp_SortPriority_MetaData) };
void Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_SetBit(void* Obj)
{
	((UMaterialExpressionFunctionInput*)Obj)->bCompilingFunctionPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview = { "bCompilingFunctionPreview", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionFunctionInput), &Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompilingFunctionPreview_MetaData), NewProp_bCompilingFunctionPreview_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::ClassParams = {
	&UMaterialExpressionFunctionInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFunctionInput>()
{
	return UMaterialExpressionFunctionInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFunctionInput);
UMaterialExpressionFunctionInput::~UMaterialExpressionFunctionInput() {}
// End Class UMaterialExpressionFunctionInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFunctionInputType_StaticEnum, TEXT("EFunctionInputType"), &Z_Registration_Info_UEnum_EFunctionInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4165588519U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFunctionInput, UMaterialExpressionFunctionInput::StaticClass, TEXT("UMaterialExpressionFunctionInput"), &Z_Registration_Info_UClass_UMaterialExpressionFunctionInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFunctionInput), 146867920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_3933609285(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
