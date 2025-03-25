// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperGroupedSpriteComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteInstanceData();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FSpriteInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpriteInstanceData;
class UScriptStruct* FSpriteInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpriteInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteInstanceData, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_SpriteInstanceData.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteInstanceData>()
{
	return FSpriteInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpriteInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSprite_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceSprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpriteInstanceData, Transform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite = { "SourceSprite", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpriteInstanceData, SourceSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSprite_MetaData), NewProp_SourceSprite_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpriteInstanceData, VertexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColor_MetaData), NewProp_VertexColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpriteInstanceData, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"SpriteInstanceData",
	Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers),
	sizeof(FSpriteInstanceData),
	alignof(FSpriteInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpriteInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpriteInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpriteInstanceData.InnerSingleton;
}
// End ScriptStruct FSpriteInstanceData

// Begin Class UPaperGroupedSpriteComponent Function AddInstance
struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics
{
	struct PaperGroupedSpriteComponent_eventAddInstance_Parms
	{
		FTransform Transform;
		UPaperSprite* Sprite;
		bool bWorldSpace;
		FLinearColor Color;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Add an instance to this component. Transform can be given either in the local space of this component or world space.  */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform can be given either in the local space of this component or world space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventAddInstance_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventAddInstance_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "AddInstance", nullptr, nullptr, Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PaperGroupedSpriteComponent_eventAddInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PaperGroupedSpriteComponent_eventAddInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execAddInstance)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_Transform,Z_Param_Sprite,Z_Param_bWorldSpace,Z_Param_Color);
	P_NATIVE_END;
}
// End Class UPaperGroupedSpriteComponent Function AddInstance

// Begin Class UPaperGroupedSpriteComponent Function ClearInstances
struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Clear all instances being rendered by this component */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Clear all instances being rendered by this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "ClearInstances", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execClearInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearInstances();
	P_NATIVE_END;
}
// End Class UPaperGroupedSpriteComponent Function ClearInstances

// Begin Class UPaperGroupedSpriteComponent Function GetInstanceCount
struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics
{
	struct PaperGroupedSpriteComponent_eventGetInstanceCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Get the number of instances in this component */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Get the number of instances in this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "GetInstanceCount", nullptr, nullptr, Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PaperGroupedSpriteComponent_eventGetInstanceCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PaperGroupedSpriteComponent_eventGetInstanceCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execGetInstanceCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInstanceCount();
	P_NATIVE_END;
}
// End Class UPaperGroupedSpriteComponent Function GetInstanceCount

// Begin Class UPaperGroupedSpriteComponent Function GetInstanceTransform
struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics
{
	struct PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms
	{
		int32 InstanceIndex;
		FTransform OutInstanceTransform;
		bool bWorldSpace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success. */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInstanceTransform;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform = { "OutInstanceTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms, OutInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "GetInstanceTransform", nullptr, nullptr, Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execGetInstanceTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace);
	P_NATIVE_END;
}
// End Class UPaperGroupedSpriteComponent Function GetInstanceTransform

// Begin Class UPaperGroupedSpriteComponent Function RemoveInstance
struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics
{
	struct PaperGroupedSpriteComponent_eventRemoveInstance_Parms
	{
		int32 InstanceIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Remove the instance specified. Returns True on success. */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Remove the instance specified. Returns True on success." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventRemoveInstance_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventRemoveInstance_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "RemoveInstance", nullptr, nullptr, Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PaperGroupedSpriteComponent_eventRemoveInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PaperGroupedSpriteComponent_eventRemoveInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execRemoveInstance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex);
	P_NATIVE_END;
}
// End Class UPaperGroupedSpriteComponent Function RemoveInstance

// Begin Class UPaperGroupedSpriteComponent Function SortInstancesAlongAxis
struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics
{
	struct PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms
	{
		FVector WorldSpaceSortAxis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Sort all instances by their world space position along the specified axis */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Sort all instances by their world space position along the specified axis" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceSortAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::NewProp_WorldSpaceSortAxis = { "WorldSpaceSortAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms, WorldSpaceSortAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::NewProp_WorldSpaceSortAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "SortInstancesAlongAxis", nullptr, nullptr, Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execSortInstancesAlongAxis)
{
	P_GET_STRUCT(FVector,Z_Param_WorldSpaceSortAxis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortInstancesAlongAxis(Z_Param_WorldSpaceSortAxis);
	P_NATIVE_END;
}
// End Class UPaperGroupedSpriteComponent Function SortInstancesAlongAxis

// Begin Class UPaperGroupedSpriteComponent Function UpdateInstanceColor
struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics
{
	struct PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms
	{
		int32 InstanceIndex;
		FLinearColor NewInstanceColor;
		bool bMarkRenderStateDirty;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Update the color for the instance specified. Returns True on success. */" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Update the color for the instance specified. Returns True on success." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstanceColor;
	static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_NewInstanceColor = { "NewInstanceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms, NewInstanceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms*)Obj)->bMarkRenderStateDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_NewInstanceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "UpdateInstanceColor", nullptr, nullptr, Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execUpdateInstanceColor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_STRUCT(FLinearColor,Z_Param_NewInstanceColor);
	P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateInstanceColor(Z_Param_InstanceIndex,Z_Param_NewInstanceColor,Z_Param_bMarkRenderStateDirty);
	P_NATIVE_END;
}
// End Class UPaperGroupedSpriteComponent Function UpdateInstanceColor

// Begin Class UPaperGroupedSpriteComponent Function UpdateInstanceTransform
struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics
{
	struct PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms
	{
		int32 InstanceIndex;
		FTransform NewInstanceTransform;
		bool bWorldSpace;
		bool bMarkRenderStateDirty;
		bool bTeleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Update the transform for the instance specified. Instance is given in local space of this component unless bWorldSpace is set.  Returns True on success. */" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Update the transform for the instance specified. Instance is given in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewInstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstanceTransform;
	static void NewProp_bWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
	static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
	static void NewProp_bTeleport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform = { "NewInstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms, NewInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewInstanceTransform_MetaData), NewProp_NewInstanceTransform_MetaData) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bTeleport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "UpdateInstanceTransform", nullptr, nullptr, Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execUpdateInstanceTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform);
	P_GET_UBOOL(Z_Param_bWorldSpace);
	P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
	P_GET_UBOOL(Z_Param_bTeleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
	P_NATIVE_END;
}
// End Class UPaperGroupedSpriteComponent Function UpdateInstanceTransform

// Begin Class UPaperGroupedSpriteComponent
void UPaperGroupedSpriteComponent::StaticRegisterNativesUPaperGroupedSpriteComponent()
{
	UClass* Class = UPaperGroupedSpriteComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInstance", &UPaperGroupedSpriteComponent::execAddInstance },
		{ "ClearInstances", &UPaperGroupedSpriteComponent::execClearInstances },
		{ "GetInstanceCount", &UPaperGroupedSpriteComponent::execGetInstanceCount },
		{ "GetInstanceTransform", &UPaperGroupedSpriteComponent::execGetInstanceTransform },
		{ "RemoveInstance", &UPaperGroupedSpriteComponent::execRemoveInstance },
		{ "SortInstancesAlongAxis", &UPaperGroupedSpriteComponent::execSortInstancesAlongAxis },
		{ "UpdateInstanceColor", &UPaperGroupedSpriteComponent::execUpdateInstanceColor },
		{ "UpdateInstanceTransform", &UPaperGroupedSpriteComponent::execUpdateInstanceTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperGroupedSpriteComponent);
UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister()
{
	return UPaperGroupedSpriteComponent::StaticClass();
}
struct Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "Comment", "/**\n * A component that handles rendering and collision for many instances of one or more UPaperSprite assets.\n *\n * @see UPrimitiveComponent, UPaperSprite\n */" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "HideCategories", "Trigger" },
		{ "IncludePath", "PaperGroupedSpriteComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "A component that handles rendering and collision for many instances of one or more UPaperSprite assets.\n\n@see UPrimitiveComponent, UPaperSprite" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceMaterials_MetaData[] = {
		{ "Comment", "/** Array of materials used by the instances */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Array of materials used by the instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSpriteData_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Array of instances */" },
		{ "DisplayName", "Instances" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Array of instances" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstanceSpriteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSpriteData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance, "AddInstance" }, // 2106112048
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances, "ClearInstances" }, // 3592337610
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount, "GetInstanceCount" }, // 3529085111
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform, "GetInstanceTransform" }, // 3537766343
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance, "RemoveInstance" }, // 1451251400
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis, "SortInstancesAlongAxis" }, // 415994864
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor, "UpdateInstanceColor" }, // 3768488788
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform, "UpdateInstanceTransform" }, // 1334469889
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperGroupedSpriteComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_Inner = { "InstanceMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials = { "InstanceMaterials", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperGroupedSpriteComponent, InstanceMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceMaterials_MetaData), NewProp_InstanceMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_Inner = { "PerInstanceSpriteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpriteInstanceData, METADATA_PARAMS(0, nullptr) }; // 1655873993
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData = { "PerInstanceSpriteData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperGroupedSpriteComponent, PerInstanceSpriteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceSpriteData_MetaData), NewProp_PerInstanceSpriteData_MetaData) }; // 1655873993
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::ClassParams = {
	&UPaperGroupedSpriteComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent()
{
	if (!Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton, Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperGroupedSpriteComponent>()
{
	return UPaperGroupedSpriteComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperGroupedSpriteComponent);
UPaperGroupedSpriteComponent::~UPaperGroupedSpriteComponent() {}
// End Class UPaperGroupedSpriteComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpriteInstanceData::StaticStruct, Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewStructOps, TEXT("SpriteInstanceData"), &Z_Registration_Info_UScriptStruct_SpriteInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpriteInstanceData), 1655873993U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperGroupedSpriteComponent, UPaperGroupedSpriteComponent::StaticClass, TEXT("UPaperGroupedSpriteComponent"), &Z_Registration_Info_UClass_UPaperGroupedSpriteComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperGroupedSpriteComponent), 2825018914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_3978862546(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
