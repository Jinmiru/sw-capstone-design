// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/RetainerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetainerBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UMG_API UClass* Z_Construct_UClass_URetainerBox();
UMG_API UClass* Z_Construct_UClass_URetainerBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class URetainerBox Function GetEffectMaterial
struct Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics
{
	struct RetainerBox_eventGetEffectMaterial_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "Comment", "/**\n\x09 * Get the current dynamic effect material applied to the retainer box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Get the current dynamic effect material applied to the retainer box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RetainerBox_eventGetEffectMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "GetEffectMaterial", nullptr, nullptr, Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::RetainerBox_eventGetEffectMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::RetainerBox_eventGetEffectMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URetainerBox_GetEffectMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URetainerBox::execGetEffectMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetEffectMaterial();
	P_NATIVE_END;
}
// End Class URetainerBox Function GetEffectMaterial

// Begin Class URetainerBox Function RequestRender
struct Z_Construct_UFunction_URetainerBox_RequestRender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Retainer" },
		{ "Comment", "/**\n\x09 * Requests the retainer redrawn the contents it has.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Requests the retainer redrawn the contents it has." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_RequestRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "RequestRender", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_RequestRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_URetainerBox_RequestRender_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URetainerBox_RequestRender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_RequestRender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URetainerBox::execRequestRender)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRender();
	P_NATIVE_END;
}
// End Class URetainerBox Function RequestRender

// Begin Class URetainerBox Function SetEffectMaterial
struct Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics
{
	struct RetainerBox_eventSetEffectMaterial_Parms
	{
		UMaterialInterface* EffectMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "Comment", "/**\n\x09 * Set a new effect material to the retainer widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Set a new effect material to the retainer widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::NewProp_EffectMaterial = { "EffectMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RetainerBox_eventSetEffectMaterial_Parms, EffectMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::NewProp_EffectMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetEffectMaterial", nullptr, nullptr, Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::RetainerBox_eventSetEffectMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::RetainerBox_eventSetEffectMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URetainerBox_SetEffectMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URetainerBox::execSetEffectMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_EffectMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEffectMaterial(Z_Param_EffectMaterial);
	P_NATIVE_END;
}
// End Class URetainerBox Function SetEffectMaterial

// Begin Class URetainerBox Function SetRenderingPhase
struct Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics
{
	struct RetainerBox_eventSetRenderingPhase_Parms
	{
		int32 RenderPhase;
		int32 TotalPhases;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Retainer" },
		{ "Comment", "/**\n\x09 * Requests the retainer redrawn the contents it has.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Requests the retainer redrawn the contents it has." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderPhase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPhases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_RenderPhase = { "RenderPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RetainerBox_eventSetRenderingPhase_Parms, RenderPhase), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_TotalPhases = { "TotalPhases", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RetainerBox_eventSetRenderingPhase_Parms, TotalPhases), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_RenderPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_TotalPhases,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetRenderingPhase", nullptr, nullptr, Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::RetainerBox_eventSetRenderingPhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::RetainerBox_eventSetRenderingPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URetainerBox_SetRenderingPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URetainerBox::execSetRenderingPhase)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RenderPhase);
	P_GET_PROPERTY(FIntProperty,Z_Param_TotalPhases);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderingPhase(Z_Param_RenderPhase,Z_Param_TotalPhases);
	P_NATIVE_END;
}
// End Class URetainerBox Function SetRenderingPhase

// Begin Class URetainerBox Function SetRetainRendering
struct Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics
{
	struct RetainerBox_eventSetRetainRendering_Parms
	{
		bool bInRetainRendering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Retainer" },
		{ "Comment", "/**\n\x09* Set the flag for if we retain the render or pass-through\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Set the flag for if we retain the render or pass-through" },
	};
#endif // WITH_METADATA
	static void NewProp_bInRetainRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRetainRendering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::NewProp_bInRetainRendering_SetBit(void* Obj)
{
	((RetainerBox_eventSetRetainRendering_Parms*)Obj)->bInRetainRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::NewProp_bInRetainRendering = { "bInRetainRendering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RetainerBox_eventSetRetainRendering_Parms), &Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::NewProp_bInRetainRendering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::NewProp_bInRetainRendering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetRetainRendering", nullptr, nullptr, Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::RetainerBox_eventSetRetainRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::RetainerBox_eventSetRetainRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URetainerBox_SetRetainRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URetainerBox::execSetRetainRendering)
{
	P_GET_UBOOL(Z_Param_bInRetainRendering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRetainRendering(Z_Param_bInRetainRendering);
	P_NATIVE_END;
}
// End Class URetainerBox Function SetRetainRendering

// Begin Class URetainerBox Function SetTextureParameter
struct Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics
{
	struct RetainerBox_eventSetTextureParameter_Parms
	{
		FName TextureParameter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "Comment", "/**\n\x09 * Sets the name of the texture parameter to set the render target to on the material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Sets the name of the texture parameter to set the render target to on the material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::NewProp_TextureParameter = { "TextureParameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RetainerBox_eventSetTextureParameter_Parms, TextureParameter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::NewProp_TextureParameter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetTextureParameter", nullptr, nullptr, Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::RetainerBox_eventSetTextureParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::RetainerBox_eventSetTextureParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URetainerBox_SetTextureParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URetainerBox::execSetTextureParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TextureParameter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureParameter(Z_Param_TextureParameter);
	P_NATIVE_END;
}
// End Class URetainerBox Function SetTextureParameter

// Begin Class URetainerBox
void URetainerBox::GetbRetainRender_WrapperImpl(const void* Object, void* OutValue)
{
	const URetainerBox* Obj = (const URetainerBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsRetainRendering();
}
void URetainerBox::SetbRetainRender_WrapperImpl(void* Object, const void* InValue)
{
	URetainerBox* Obj = (URetainerBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetRetainRendering(Value);
}
void URetainerBox::GetRenderOnInvalidation_WrapperImpl(const void* Object, void* OutValue)
{
	const URetainerBox* Obj = (const URetainerBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsRenderOnInvalidation();
}
void URetainerBox::GetRenderOnPhase_WrapperImpl(const void* Object, void* OutValue)
{
	const URetainerBox* Obj = (const URetainerBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsRenderOnPhase();
}
void URetainerBox::GetPhase_WrapperImpl(const void* Object, void* OutValue)
{
	const URetainerBox* Obj = (const URetainerBox*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetPhase();
}
void URetainerBox::GetPhaseCount_WrapperImpl(const void* Object, void* OutValue)
{
	const URetainerBox* Obj = (const URetainerBox*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetPhaseCount();
}
void URetainerBox::GetEffectMaterial_WrapperImpl(const void* Object, void* OutValue)
{
	const URetainerBox* Obj = (const URetainerBox*)Object;
	UMaterialInterface*& Result = *(UMaterialInterface**)OutValue;
	Result = (UMaterialInterface*)Obj->GetEffectMaterialInterface();
}
void URetainerBox::SetEffectMaterial_WrapperImpl(void* Object, const void* InValue)
{
	URetainerBox* Obj = (URetainerBox*)Object;
	UMaterialInterface*& Value = *(UMaterialInterface**)InValue;
	Obj->SetEffectMaterial(Value);
}
void URetainerBox::GetTextureParameter_WrapperImpl(const void* Object, void* OutValue)
{
	const URetainerBox* Obj = (const URetainerBox*)Object;
	FName& Result = *(FName*)OutValue;
	Result = (FName)Obj->GetTextureParameter();
}
void URetainerBox::SetTextureParameter_WrapperImpl(void* Object, const void* InValue)
{
	URetainerBox* Obj = (URetainerBox*)Object;
	FName& Value = *(FName*)InValue;
	Obj->SetTextureParameter(Value);
}
void URetainerBox::StaticRegisterNativesURetainerBox()
{
	UClass* Class = URetainerBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEffectMaterial", &URetainerBox::execGetEffectMaterial },
		{ "RequestRender", &URetainerBox::execRequestRender },
		{ "SetEffectMaterial", &URetainerBox::execSetEffectMaterial },
		{ "SetRenderingPhase", &URetainerBox::execSetRenderingPhase },
		{ "SetRetainRendering", &URetainerBox::execSetRetainRendering },
		{ "SetTextureParameter", &URetainerBox::execSetTextureParameter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetainerBox);
UClass* Z_Construct_UClass_URetainerBox_NoRegister()
{
	return URetainerBox::StaticClass();
}
struct Z_Construct_UClass_URetainerBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Retainer Box renders children widgets to a render target first before\n * later rendering that render target to the screen.  This allows both frequency\n * and phase to be controlled so that the UI can actually render less often than the\n * frequency of the main game render.  It also has the side benefit of allow materials\n * to be applied to the render target after drawing the widgets to apply a simple post process.\n *\n * * Single Child\n * * Caching / Performance\n */" },
		{ "IncludePath", "Components/RetainerBox.h" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The Retainer Box renders children widgets to a render target first before\nlater rendering that render target to the screen.  This allows both frequency\nand phase to be controlled so that the UI can actually render less often than the\nfrequency of the main game render.  It also has the side benefit of allow materials\nto be applied to the render target after drawing the widgets to apply a simple post process.\n\n* Single Child\n* Caching / Performance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetainRender_MetaData[] = {
		{ "BlueprintSetter", "SetRetainRendering" },
		{ "Category", "Render Rules" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderOnInvalidation_MetaData[] = {
		{ "Category", "Render Rules" },
		{ "Comment", "/**\n\x09 * Should this widget redraw the contents it has every time it receives an invalidation request\n\x09 * from it's children, similar to the invalidation panel.\n\x09 */" },
		{ "EditCondition", "bRetainRender" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Should this widget redraw the contents it has every time it receives an invalidation request\nfrom it's children, similar to the invalidation panel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderOnPhase_MetaData[] = {
		{ "Category", "Render Rules" },
		{ "Comment", "/**\n\x09 * Should this widget redraw the contents it has every time the phase occurs.\n\x09 */" },
		{ "EditCondition", "bRetainRender" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Should this widget redraw the contents it has every time the phase occurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
		{ "Category", "Render Rules" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The Phase this widget will draw on.\n\x09 *\n\x09 * If the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\n\x09 * If the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\n\x09 * other frame.  So in a 60Hz game, the UI would render at 30Hz.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The Phase this widget will draw on.\n\nIf the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\nIf the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\nother frame.  So in a 60Hz game, the UI would render at 30Hz." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseCount_MetaData[] = {
		{ "Category", "Render Rules" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The PhaseCount controls how many phases are possible know what to modulus the current frame \n\x09 * count by to determine if this is the current frame to draw the widget on.\n\x09 * \n\x09 * If the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.  \n\x09 * If the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every \n\x09 * other frame.  So in a 60Hz game, the UI would render at 30Hz.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The PhaseCount controls how many phases are possible know what to modulus the current frame\ncount by to determine if this is the current frame to draw the widget on.\n\nIf the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\nIf the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\nother frame.  So in a 60Hz game, the UI would render at 30Hz." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetEffectMaterial" },
		{ "Category", "Effect" },
		{ "Comment", "/**\n\x09 * The effect to optionally apply to the render target.  We will set the texture sampler based on the name\n\x09 * set in the @TextureParameter property.\n\x09 * \n\x09 * If you want to adjust transparency of the final image, make sure you set Blend Mode to AlphaComposite (Pre-Multiplied Alpha)\n\x09 * and make sure to multiply the alpha you're apply across the surface to the color and the alpha of the render target, otherwise\n\x09 * you won't see the expected color.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The effect to optionally apply to the render target.  We will set the texture sampler based on the name\nset in the @TextureParameter property.\n\nIf you want to adjust transparency of the final image, make sure you set Blend Mode to AlphaComposite (Pre-Multiplied Alpha)\nand make sure to multiply the alpha you're apply across the surface to the color and the alpha of the render target, otherwise\nyou won't see the expected color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameter_MetaData[] = {
		{ "BlueprintSetter", "SetTextureParameter" },
		{ "Category", "Effect" },
		{ "Comment", "/**\n\x09 * The texture sampler parameter of the @EffectMaterial, that we'll set to the render target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The texture sampler parameter of the @EffectMaterial, that we'll set to the render target." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEffectsInDesigner_MetaData[] = {
		{ "Category", "Effect" },
		{ "Comment", "/**\n\x09 * If true, retained rendering occurs in designer\n\x09 */" },
		{ "EditCondition", "bRetainRender" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "If true, retained rendering occurs in designer" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bRetainRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetainRender;
	static void NewProp_RenderOnInvalidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderOnInvalidation;
	static void NewProp_RenderOnPhase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderOnPhase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Phase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PhaseCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectMaterial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameter;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShowEffectsInDesigner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEffectsInDesigner;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URetainerBox_GetEffectMaterial, "GetEffectMaterial" }, // 700803707
		{ &Z_Construct_UFunction_URetainerBox_RequestRender, "RequestRender" }, // 3124231140
		{ &Z_Construct_UFunction_URetainerBox_SetEffectMaterial, "SetEffectMaterial" }, // 262059756
		{ &Z_Construct_UFunction_URetainerBox_SetRenderingPhase, "SetRenderingPhase" }, // 1437627610
		{ &Z_Construct_UFunction_URetainerBox_SetRetainRendering, "SetRetainRendering" }, // 3510181829
		{ &Z_Construct_UFunction_URetainerBox_SetTextureParameter, "SetTextureParameter" }, // 2206599306
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetainerBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender_SetBit(void* Obj)
{
	((URetainerBox*)Obj)->bRetainRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender = { "bRetainRender", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &URetainerBox::SetbRetainRender_WrapperImpl, &URetainerBox::GetbRetainRender_WrapperImpl, 1, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetainRender_MetaData), NewProp_bRetainRender_MetaData) };
void Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_SetBit(void* Obj)
{
	((URetainerBox*)Obj)->RenderOnInvalidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation = { "RenderOnInvalidation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &URetainerBox::GetRenderOnInvalidation_WrapperImpl, 1, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderOnInvalidation_MetaData), NewProp_RenderOnInvalidation_MetaData) };
void Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_SetBit(void* Obj)
{
	((URetainerBox*)Obj)->RenderOnPhase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase = { "RenderOnPhase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &URetainerBox::GetRenderOnPhase_WrapperImpl, 1, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderOnPhase_MetaData), NewProp_RenderOnPhase_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &URetainerBox::GetPhase_WrapperImpl, 1, STRUCT_OFFSET(URetainerBox, Phase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Phase_MetaData), NewProp_Phase_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount = { "PhaseCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &URetainerBox::GetPhaseCount_WrapperImpl, 1, STRUCT_OFFSET(URetainerBox, PhaseCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseCount_MetaData), NewProp_PhaseCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial = { "EffectMaterial", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &URetainerBox::SetEffectMaterial_WrapperImpl, &URetainerBox::GetEffectMaterial_WrapperImpl, 1, STRUCT_OFFSET(URetainerBox, EffectMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectMaterial_MetaData), NewProp_EffectMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter = { "TextureParameter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, &URetainerBox::SetTextureParameter_WrapperImpl, &URetainerBox::GetTextureParameter_WrapperImpl, 1, STRUCT_OFFSET(URetainerBox, TextureParameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureParameter_MetaData), NewProp_TextureParameter_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_URetainerBox_Statics::NewProp_bShowEffectsInDesigner_SetBit(void* Obj)
{
	((URetainerBox*)Obj)->bShowEffectsInDesigner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_bShowEffectsInDesigner = { "bShowEffectsInDesigner", nullptr, (EPropertyFlags)0x0020080800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_bShowEffectsInDesigner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEffectsInDesigner_MetaData), NewProp_bShowEffectsInDesigner_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetainerBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_bShowEffectsInDesigner,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URetainerBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URetainerBox_Statics::ClassParams = {
	&URetainerBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URetainerBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::Class_MetaDataParams), Z_Construct_UClass_URetainerBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URetainerBox()
{
	if (!Z_Registration_Info_UClass_URetainerBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetainerBox.OuterSingleton, Z_Construct_UClass_URetainerBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URetainerBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<URetainerBox>()
{
	return URetainerBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URetainerBox);
URetainerBox::~URetainerBox() {}
// End Class URetainerBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URetainerBox, URetainerBox::StaticClass, TEXT("URetainerBox"), &Z_Registration_Info_UClass_URetainerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetainerBox), 433784285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_2077870983(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
