// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRigGizmoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigGizmoActor() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_AControlRigShapeActor();
CONTROLRIG_API UClass* Z_Construct_UClass_AControlRigShapeActor_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlShapeActorCreationParam();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FControlShapeActorCreationParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlShapeActorCreationParam;
class UScriptStruct* FControlShapeActorCreationParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlShapeActorCreationParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlShapeActorCreationParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlShapeActorCreationParam, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlShapeActorCreationParam"));
	}
	return Z_Registration_Info_UScriptStruct_ControlShapeActorCreationParam.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlShapeActorCreationParam>()
{
	return FControlShapeActorCreationParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlShapeActorCreationParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"ControlShapeActorCreationParam",
	nullptr,
	0,
	sizeof(FControlShapeActorCreationParam),
	alignof(FControlShapeActorCreationParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlShapeActorCreationParam()
{
	if (!Z_Registration_Info_UScriptStruct_ControlShapeActorCreationParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlShapeActorCreationParam.InnerSingleton, Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlShapeActorCreationParam.InnerSingleton;
}
// End ScriptStruct FControlShapeActorCreationParam

// Begin Class AControlRigShapeActor Function GetGlobalTransform
struct Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics
{
	struct ControlRigShapeActor_eventGetGlobalTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig|Shape" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigShapeActor_eventGetGlobalTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "GetGlobalTransform", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::ControlRigShapeActor_eventGetGlobalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::ControlRigShapeActor_eventGetGlobalTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execGetGlobalTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetGlobalTransform();
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function GetGlobalTransform

// Begin Class AControlRigShapeActor Function IsEnabled
struct Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics
{
	struct ControlRigShapeActor_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Get whether the control is enabled/disabled */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Get whether the control is enabled/disabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventIsEnabled_Parms), &Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::ControlRigShapeActor_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::ControlRigShapeActor_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled();
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function IsEnabled

// Begin Class AControlRigShapeActor Function IsHovered
struct Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics
{
	struct ControlRigShapeActor_eventIsHovered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Get whether the control is hovered */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Get whether the control is hovered" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventIsHovered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventIsHovered_Parms), &Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "IsHovered", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::ControlRigShapeActor_eventIsHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::ControlRigShapeActor_eventIsHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_IsHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_IsHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execIsHovered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHovered();
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function IsHovered

// Begin Class AControlRigShapeActor Function IsSelectedInEditor
struct Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics
{
	struct ControlRigShapeActor_eventIsSelectedInEditor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Get whether the control is selected/unselected */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Get whether the control is selected/unselected" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventIsSelectedInEditor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventIsSelectedInEditor_Parms), &Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "IsSelectedInEditor", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::ControlRigShapeActor_eventIsSelectedInEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::ControlRigShapeActor_eventIsSelectedInEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execIsSelectedInEditor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSelectedInEditor();
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function IsSelectedInEditor

// Begin Class AControlRigShapeActor Function OnEnabledChanged
struct ControlRigShapeActor_eventOnEnabledChanged_Parms
{
	bool bIsEnabled;
};
static FName NAME_AControlRigShapeActor_OnEnabledChanged = FName(TEXT("OnEnabledChanged"));
void AControlRigShapeActor::OnEnabledChanged(bool bIsEnabled)
{
	ControlRigShapeActor_eventOnEnabledChanged_Parms Parms;
	Parms.bIsEnabled=bIsEnabled ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AControlRigShapeActor_OnEnabledChanged),&Parms);
}
struct Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event called when the enabled state of this control has changed */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Event called when the enabled state of this control has changed" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventOnEnabledChanged_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventOnEnabledChanged_Parms), &Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "OnEnabledChanged", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::PropPointers), sizeof(ControlRigShapeActor_eventOnEnabledChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigShapeActor_eventOnEnabledChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AControlRigShapeActor Function OnEnabledChanged

// Begin Class AControlRigShapeActor Function OnHoveredChanged
struct ControlRigShapeActor_eventOnHoveredChanged_Parms
{
	bool bIsSelected;
};
static FName NAME_AControlRigShapeActor_OnHoveredChanged = FName(TEXT("OnHoveredChanged"));
void AControlRigShapeActor::OnHoveredChanged(bool bIsSelected)
{
	ControlRigShapeActor_eventOnHoveredChanged_Parms Parms;
	Parms.bIsSelected=bIsSelected ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AControlRigShapeActor_OnHoveredChanged),&Parms);
}
struct Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event called when the hovered state of this control has changed */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Event called when the hovered state of this control has changed" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventOnHoveredChanged_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventOnHoveredChanged_Parms), &Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "OnHoveredChanged", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::PropPointers), sizeof(ControlRigShapeActor_eventOnHoveredChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigShapeActor_eventOnHoveredChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AControlRigShapeActor Function OnHoveredChanged

// Begin Class AControlRigShapeActor Function OnManipulatingChanged
struct ControlRigShapeActor_eventOnManipulatingChanged_Parms
{
	bool bIsManipulating;
};
static FName NAME_AControlRigShapeActor_OnManipulatingChanged = FName(TEXT("OnManipulatingChanged"));
void AControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating)
{
	ControlRigShapeActor_eventOnManipulatingChanged_Parms Parms;
	Parms.bIsManipulating=bIsManipulating ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AControlRigShapeActor_OnManipulatingChanged),&Parms);
}
struct Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event called when the manipulating state of this control has changed */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Event called when the manipulating state of this control has changed" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsManipulating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsManipulating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::NewProp_bIsManipulating_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventOnManipulatingChanged_Parms*)Obj)->bIsManipulating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::NewProp_bIsManipulating = { "bIsManipulating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventOnManipulatingChanged_Parms), &Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::NewProp_bIsManipulating_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::NewProp_bIsManipulating,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "OnManipulatingChanged", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::PropPointers), sizeof(ControlRigShapeActor_eventOnManipulatingChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigShapeActor_eventOnManipulatingChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AControlRigShapeActor Function OnManipulatingChanged

// Begin Class AControlRigShapeActor Function OnSelectionChanged
struct ControlRigShapeActor_eventOnSelectionChanged_Parms
{
	bool bIsSelected;
};
static FName NAME_AControlRigShapeActor_OnSelectionChanged = FName(TEXT("OnSelectionChanged"));
void AControlRigShapeActor::OnSelectionChanged(bool bIsSelected)
{
	ControlRigShapeActor_eventOnSelectionChanged_Parms Parms;
	Parms.bIsSelected=bIsSelected ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AControlRigShapeActor_OnSelectionChanged),&Parms);
}
struct Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event called when the selection state of this control has changed */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Event called when the selection state of this control has changed" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventOnSelectionChanged_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventOnSelectionChanged_Parms), &Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "OnSelectionChanged", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::PropPointers), sizeof(ControlRigShapeActor_eventOnSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigShapeActor_eventOnSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AControlRigShapeActor Function OnSelectionChanged

// Begin Class AControlRigShapeActor Function OnTransformChanged
struct ControlRigShapeActor_eventOnTransformChanged_Parms
{
	FTransform NewTransform;
};
static FName NAME_AControlRigShapeActor_OnTransformChanged = FName(TEXT("OnTransformChanged"));
void AControlRigShapeActor::OnTransformChanged(FTransform const& NewTransform)
{
	ControlRigShapeActor_eventOnTransformChanged_Parms Parms;
	Parms.NewTransform=NewTransform;
	ProcessEvent(FindFunctionChecked(NAME_AControlRigShapeActor_OnTransformChanged),&Parms);
}
struct Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Event called when the transform of this control has changed */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Event called when the transform of this control has changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigShapeActor_eventOnTransformChanged_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTransform_MetaData), NewProp_NewTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::NewProp_NewTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "OnTransformChanged", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::PropPointers), sizeof(ControlRigShapeActor_eventOnTransformChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(ControlRigShapeActor_eventOnTransformChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AControlRigShapeActor Function OnTransformChanged

// Begin Class AControlRigShapeActor Function SetEnabled
struct Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics
{
	struct ControlRigShapeActor_eventSetEnabled_Parms
	{
		bool bInEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Set the control to be enabled/disabled */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Set the control to be enabled/disabled" },
	};
#endif // WITH_METADATA
	static void NewProp_bInEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventSetEnabled_Parms*)Obj)->bInEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventSetEnabled_Parms), &Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::NewProp_bInEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "SetEnabled", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::ControlRigShapeActor_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::ControlRigShapeActor_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_bInEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnabled(Z_Param_bInEnabled);
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function SetEnabled

// Begin Class AControlRigShapeActor Function SetGlobalTransform
struct Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics
{
	struct ControlRigShapeActor_eventSetGlobalTransform_Parms
	{
		FTransform InTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig|Shape" },
		{ "Comment", "// this returns root component transform based on attach\n// when there is no attach, it is based on 0\n" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "this returns root component transform based on attach\nwhen there is no attach, it is based on 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigShapeActor_eventSetGlobalTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTransform_MetaData), NewProp_InTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::NewProp_InTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "SetGlobalTransform", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::ControlRigShapeActor_eventSetGlobalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::ControlRigShapeActor_eventSetGlobalTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execSetGlobalTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalTransform(Z_Param_Out_InTransform);
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function SetGlobalTransform

// Begin Class AControlRigShapeActor Function SetHovered
struct Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics
{
	struct ControlRigShapeActor_eventSetHovered_Parms
	{
		bool bInHovered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Set the control to be hovered */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Set the control to be hovered" },
	};
#endif // WITH_METADATA
	static void NewProp_bInHovered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHovered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::NewProp_bInHovered_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventSetHovered_Parms*)Obj)->bInHovered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::NewProp_bInHovered = { "bInHovered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventSetHovered_Parms), &Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::NewProp_bInHovered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::NewProp_bInHovered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "SetHovered", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::ControlRigShapeActor_eventSetHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::ControlRigShapeActor_eventSetHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_SetHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_SetHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execSetHovered)
{
	P_GET_UBOOL(Z_Param_bInHovered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHovered(Z_Param_bInHovered);
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function SetHovered

// Begin Class AControlRigShapeActor Function SetSelectable
struct Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics
{
	struct ControlRigShapeActor_eventSetSelectable_Parms
	{
		bool bInSelectable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Set the control to be selected/unselected */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Set the control to be selected/unselected" },
	};
#endif // WITH_METADATA
	static void NewProp_bInSelectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSelectable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::NewProp_bInSelectable_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventSetSelectable_Parms*)Obj)->bInSelectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::NewProp_bInSelectable = { "bInSelectable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventSetSelectable_Parms), &Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::NewProp_bInSelectable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::NewProp_bInSelectable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "SetSelectable", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::ControlRigShapeActor_eventSetSelectable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::ControlRigShapeActor_eventSetSelectable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_SetSelectable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_SetSelectable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execSetSelectable)
{
	P_GET_UBOOL(Z_Param_bInSelectable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectable(Z_Param_bInSelectable);
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function SetSelectable

// Begin Class AControlRigShapeActor Function SetSelected
struct Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics
{
	struct ControlRigShapeActor_eventSetSelected_Parms
	{
		bool bInSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Set the control to be selected/unselected */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Set the control to be selected/unselected" },
	};
#endif // WITH_METADATA
	static void NewProp_bInSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::NewProp_bInSelected_SetBit(void* Obj)
{
	((ControlRigShapeActor_eventSetSelected_Parms*)Obj)->bInSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::NewProp_bInSelected = { "bInSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigShapeActor_eventSetSelected_Parms), &Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::NewProp_bInSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::NewProp_bInSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigShapeActor, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::ControlRigShapeActor_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::ControlRigShapeActor_eventSetSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControlRigShapeActor_SetSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigShapeActor_SetSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControlRigShapeActor::execSetSelected)
{
	P_GET_UBOOL(Z_Param_bInSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelected(Z_Param_bInSelected);
	P_NATIVE_END;
}
// End Class AControlRigShapeActor Function SetSelected

// Begin Class AControlRigShapeActor
void AControlRigShapeActor::StaticRegisterNativesAControlRigShapeActor()
{
	UClass* Class = AControlRigShapeActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGlobalTransform", &AControlRigShapeActor::execGetGlobalTransform },
		{ "IsEnabled", &AControlRigShapeActor::execIsEnabled },
		{ "IsHovered", &AControlRigShapeActor::execIsHovered },
		{ "IsSelectedInEditor", &AControlRigShapeActor::execIsSelectedInEditor },
		{ "SetEnabled", &AControlRigShapeActor::execSetEnabled },
		{ "SetGlobalTransform", &AControlRigShapeActor::execSetGlobalTransform },
		{ "SetHovered", &AControlRigShapeActor::execSetHovered },
		{ "SetSelectable", &AControlRigShapeActor::execSetSelectable },
		{ "SetSelected", &AControlRigShapeActor::execSetSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AControlRigShapeActor);
UClass* Z_Construct_UClass_AControlRigShapeActor_NoRegister()
{
	return AControlRigShapeActor::StaticClass();
}
struct Z_Construct_UClass_AControlRigShapeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** An actor used to represent a rig control */" },
		{ "IncludePath", "ControlRigGizmoActor.h" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An actor used to represent a rig control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorRootComponent_MetaData[] = {
		{ "Comment", "// this is the one holding transform for the controls\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "this is the one holding transform for the controls" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMesh" },
		{ "Comment", "// this is visual representation of the transform\n" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "this is visual representation of the transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigIndex_MetaData[] = {
		{ "Comment", "// the name of the control this actor is referencing\n" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "the name of the control this actor is referencing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[] = {
		{ "Comment", "//  control rig this actor is referencing we can have multiple control rig's visible\n" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "control rig this actor is referencing we can have multiple control rig's visible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
		{ "Comment", "// the name of the control this actor is referencing\n" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "the name of the control this actor is referencing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeName_MetaData[] = {
		{ "Comment", "// the name of the shape to use on this actor\n" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "the name of the shape to use on this actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameterName_MetaData[] = {
		{ "Comment", "// the name of the color parameter on the material\n" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "the name of the color parameter on the material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
		{ "BlueprintGetter", "IsSelectedInEditor" },
		{ "BlueprintSetter", "SetSelected" },
		{ "Category", "ControlRig|Shape" },
		{ "Comment", "/** Whether this control is selected */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Whether this control is selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHovered_MetaData[] = {
		{ "BlueprintGetter", "IsHovered" },
		{ "BlueprintSetter", "SetHovered" },
		{ "Category", "ControlRig|Shape" },
		{ "Comment", "/** Whether this control is hovered */" },
		{ "ModuleRelativePath", "Public/ControlRigGizmoActor.h" },
		{ "ToolTip", "Whether this control is hovered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ControlRigIndex;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ControlRig;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShapeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColorParameterName;
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static void NewProp_bHovered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHovered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AControlRigShapeActor_GetGlobalTransform, "GetGlobalTransform" }, // 2734698307
		{ &Z_Construct_UFunction_AControlRigShapeActor_IsEnabled, "IsEnabled" }, // 2715542789
		{ &Z_Construct_UFunction_AControlRigShapeActor_IsHovered, "IsHovered" }, // 3244131588
		{ &Z_Construct_UFunction_AControlRigShapeActor_IsSelectedInEditor, "IsSelectedInEditor" }, // 1226809204
		{ &Z_Construct_UFunction_AControlRigShapeActor_OnEnabledChanged, "OnEnabledChanged" }, // 1432246676
		{ &Z_Construct_UFunction_AControlRigShapeActor_OnHoveredChanged, "OnHoveredChanged" }, // 3676243652
		{ &Z_Construct_UFunction_AControlRigShapeActor_OnManipulatingChanged, "OnManipulatingChanged" }, // 1968121259
		{ &Z_Construct_UFunction_AControlRigShapeActor_OnSelectionChanged, "OnSelectionChanged" }, // 5271508
		{ &Z_Construct_UFunction_AControlRigShapeActor_OnTransformChanged, "OnTransformChanged" }, // 2565928161
		{ &Z_Construct_UFunction_AControlRigShapeActor_SetEnabled, "SetEnabled" }, // 1328877570
		{ &Z_Construct_UFunction_AControlRigShapeActor_SetGlobalTransform, "SetGlobalTransform" }, // 3483829425
		{ &Z_Construct_UFunction_AControlRigShapeActor_SetHovered, "SetHovered" }, // 2037297780
		{ &Z_Construct_UFunction_AControlRigShapeActor_SetSelectable, "SetSelectable" }, // 2624361481
		{ &Z_Construct_UFunction_AControlRigShapeActor_SetSelected, "SetSelected" }, // 1420101537
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlRigShapeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ActorRootComponent = { "ActorRootComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlRigShapeActor, ActorRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorRootComponent_MetaData), NewProp_ActorRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlRigShapeActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ControlRigIndex = { "ControlRigIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlRigShapeActor, ControlRigIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRigIndex_MetaData), NewProp_ControlRigIndex_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlRigShapeActor, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRig_MetaData), NewProp_ControlRig_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlRigShapeActor, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlName_MetaData), NewProp_ControlName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ShapeName = { "ShapeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlRigShapeActor, ShapeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeName_MetaData), NewProp_ShapeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ColorParameterName = { "ColorParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControlRigShapeActor, ColorParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorParameterName_MetaData), NewProp_ColorParameterName_MetaData) };
void Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((AControlRigShapeActor*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AControlRigShapeActor), &Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelected_MetaData), NewProp_bSelected_MetaData) };
void Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bHovered_SetBit(void* Obj)
{
	((AControlRigShapeActor*)Obj)->bHovered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bHovered = { "bHovered", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AControlRigShapeActor), &Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bHovered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHovered_MetaData), NewProp_bHovered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControlRigShapeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ActorRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ControlRigIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ShapeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_ColorParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigShapeActor_Statics::NewProp_bHovered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigShapeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AControlRigShapeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigShapeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AControlRigShapeActor_Statics::ClassParams = {
	&AControlRigShapeActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AControlRigShapeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigShapeActor_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigShapeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AControlRigShapeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AControlRigShapeActor()
{
	if (!Z_Registration_Info_UClass_AControlRigShapeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AControlRigShapeActor.OuterSingleton, Z_Construct_UClass_AControlRigShapeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AControlRigShapeActor.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<AControlRigShapeActor>()
{
	return AControlRigShapeActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AControlRigShapeActor);
AControlRigShapeActor::~AControlRigShapeActor() {}
// End Class AControlRigShapeActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FControlShapeActorCreationParam::StaticStruct, Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics::NewStructOps, TEXT("ControlShapeActorCreationParam"), &Z_Registration_Info_UScriptStruct_ControlShapeActorCreationParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlShapeActorCreationParam), 2002763613U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AControlRigShapeActor, AControlRigShapeActor::StaticClass, TEXT("AControlRigShapeActor"), &Z_Registration_Info_UClass_AControlRigShapeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AControlRigShapeActor), 1446259425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_4045552463(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
