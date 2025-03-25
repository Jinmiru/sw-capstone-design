// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSceneCapture2D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDISceneCapture2DSourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode;
static UEnum* ENDISceneCapture2DSourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISceneCapture2DSourceMode"));
	}
	return Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDISceneCapture2DSourceMode>()
{
	return ENDISceneCapture2DSourceMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachParentOnly.Comment", "/* Only look at the attach parent to find the scene capture component. */" },
		{ "AttachParentOnly.Name", "ENDISceneCapture2DSourceMode::AttachParentOnly" },
		{ "AttachParentOnly.ToolTip", "Only look at the attach parent to find the scene capture component." },
		{ "Managed.Comment", "/* Managed mode, we will not search for any and instead create one internally. */" },
		{ "Managed.Name", "ENDISceneCapture2DSourceMode::Managed" },
		{ "Managed.ToolTip", "Managed mode, we will not search for any and instead create one internally." },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "UserParameterOnly.Comment", "/* Only check the user parameter to find the scene capture component. */" },
		{ "UserParameterOnly.Name", "ENDISceneCapture2DSourceMode::UserParameterOnly" },
		{ "UserParameterOnly.ToolTip", "Only check the user parameter to find the scene capture component." },
		{ "UserParameterThenAttachParent.Comment", "/* Check the user parameter then the attach parent to find the scene capture component. */" },
		{ "UserParameterThenAttachParent.Name", "ENDISceneCapture2DSourceMode::UserParameterThenAttachParent" },
		{ "UserParameterThenAttachParent.ToolTip", "Check the user parameter then the attach parent to find the scene capture component." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISceneCapture2DSourceMode::UserParameterThenAttachParent", (int64)ENDISceneCapture2DSourceMode::UserParameterThenAttachParent },
		{ "ENDISceneCapture2DSourceMode::UserParameterOnly", (int64)ENDISceneCapture2DSourceMode::UserParameterOnly },
		{ "ENDISceneCapture2DSourceMode::AttachParentOnly", (int64)ENDISceneCapture2DSourceMode::AttachParentOnly },
		{ "ENDISceneCapture2DSourceMode::Managed", (int64)ENDISceneCapture2DSourceMode::Managed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDISceneCapture2DSourceMode",
	"ENDISceneCapture2DSourceMode",
	Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode()
{
	if (!Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.InnerSingleton;
}
// End Enum ENDISceneCapture2DSourceMode

// Begin Enum ENDISceneCapture2DOffsetMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode;
static UEnum* ENDISceneCapture2DOffsetMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISceneCapture2DOffsetMode"));
	}
	return Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDISceneCapture2DOffsetMode>()
{
	return ENDISceneCapture2DOffsetMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbsoluteWorld.Comment", "/** The offset is applied directly, i.e. not added to the existing valud */" },
		{ "AbsoluteWorld.Name", "ENDISceneCapture2DOffsetMode::AbsoluteWorld" },
		{ "AbsoluteWorld.ToolTip", "The offset is applied directly, i.e. not added to the existing valud" },
		{ "Disabled.Comment", "/** The offset is disabled and will not be applied. */" },
		{ "Disabled.Name", "ENDISceneCapture2DOffsetMode::Disabled" },
		{ "Disabled.ToolTip", "The offset is disabled and will not be applied." },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "RelativeLocal.Comment", "/** The offset is in the component local space. */" },
		{ "RelativeLocal.Name", "ENDISceneCapture2DOffsetMode::RelativeLocal" },
		{ "RelativeLocal.ToolTip", "The offset is in the component local space." },
		{ "RelativeWorld.Comment", "/** The offset is in world space, i.e. added to the exising value directly. */" },
		{ "RelativeWorld.Name", "ENDISceneCapture2DOffsetMode::RelativeWorld" },
		{ "RelativeWorld.ToolTip", "The offset is in world space, i.e. added to the exising value directly." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISceneCapture2DOffsetMode::Disabled", (int64)ENDISceneCapture2DOffsetMode::Disabled },
		{ "ENDISceneCapture2DOffsetMode::RelativeLocal", (int64)ENDISceneCapture2DOffsetMode::RelativeLocal },
		{ "ENDISceneCapture2DOffsetMode::RelativeWorld", (int64)ENDISceneCapture2DOffsetMode::RelativeWorld },
		{ "ENDISceneCapture2DOffsetMode::AbsoluteWorld", (int64)ENDISceneCapture2DOffsetMode::AbsoluteWorld },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDISceneCapture2DOffsetMode",
	"ENDISceneCapture2DOffsetMode",
	Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode()
{
	if (!Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.InnerSingleton;
}
// End Enum ENDISceneCapture2DOffsetMode

// Begin Class UNiagaraDataInterfaceSceneCapture2D Function SetSceneCapture2DManagedShowOnlyActors
struct Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics
{
	struct NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms
	{
		UNiagaraComponent* NiagaraSystem;
		FName ParameterName;
		TArray<AActor*> ShowOnlyActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Allows you to set the show only actors when Niagara manages the component.  If Niagara does not manage the component use the regular BP methods. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Allows you to set the show only actors when Niagara manages the component.  If Niagara does not manage the component use the regular BP methods." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ShowOnlyActors_Inner = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ShowOnlyActors = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms, ShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ShowOnlyActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ShowOnlyActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D, nullptr, "SetSceneCapture2DManagedShowOnlyActors", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataInterfaceSceneCapture2D::execSetSceneCapture2DManagedShowOnlyActors)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_TARRAY(AActor*,Z_Param_ShowOnlyActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNiagaraDataInterfaceSceneCapture2D::SetSceneCapture2DManagedShowOnlyActors(Z_Param_NiagaraSystem,Z_Param_ParameterName,Z_Param_ShowOnlyActors);
	P_NATIVE_END;
}
// End Class UNiagaraDataInterfaceSceneCapture2D Function SetSceneCapture2DManagedShowOnlyActors

// Begin Class UNiagaraDataInterfaceSceneCapture2D
void UNiagaraDataInterfaceSceneCapture2D::StaticRegisterNativesUNiagaraDataInterfaceSceneCapture2D()
{
	UClass* Class = UNiagaraDataInterfaceSceneCapture2D::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSceneCapture2DManagedShowOnlyActors", &UNiagaraDataInterfaceSceneCapture2D::execSetSceneCapture2DManagedShowOnlyActors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSceneCapture2D);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_NoRegister()
{
	return UNiagaraDataInterfaceSceneCapture2D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Data Interface which can control or read from a scene capture component. */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Scene Capture 2D" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Data Interface which can control or read from a scene capture component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "How should we find the scene capture component to use?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureUserParameter_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "EditCondition", "SourceMode != ENDISceneCapture2DSourceMode::AttachParentOnly && SourceMode != ENDISceneCapture2DSourceMode::Managed" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "When valid should point to either a Scene Capture 2D Component or a Scene Capture 2D Actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoMoveWithComponent_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** When enabled the scene capture component will be automatically moved to the location of the NiagaraComponent with an optional offset. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "When enabled the scene capture component will be automatically moved to the location of the NiagaraComponent with an optional offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoMoveOffsetLocationMode_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** Should we apply the auto move offset in local or world space? */" },
		{ "EditCondition", "bAutoMoveWithComponent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Should we apply the auto move offset in local or world space?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoMoveOffsetLocation_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** Location offset when applying auto movement. */" },
		{ "EditCondition", "bAutoMoveWithComponent && AutoMoveOffsetLocationMode != ENDISceneCapture2DOffsetMode::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Location offset when applying auto movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoMoveOffsetRotationMode_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** How we should apply the rotation */" },
		{ "EditCondition", "bAutoMoveWithComponent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "How we should apply the rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoMoveOffsetRotation_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** Rotation offset when applying auto movement. */" },
		{ "EditCondition", "bAutoMoveWithComponent && AutoMoveOffsetRotationMode != ENDISceneCapture2DOffsetMode::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Rotation offset when applying auto movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedCaptureSource_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedTextureSize_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedTextureFormat_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedProjectionType_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedFOVAngle_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed && ManagedProjectionType == ECameraProjectionMode::Perspective" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedOrthoWidth_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed && ManagedProjectionType != ECameraProjectionMode::Perspective" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManagedCaptureEveryFrame_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManagedCaptureOnMovement_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedShowOnlyActors_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedCaptureComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneCaptureUserParameter;
	static void NewProp_bAutoMoveWithComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoMoveWithComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoMoveOffsetLocationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoMoveOffsetLocationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoMoveOffsetLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoMoveOffsetRotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoMoveOffsetRotationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoMoveOffsetRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ManagedCaptureSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManagedTextureSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ManagedTextureFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ManagedProjectionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManagedFOVAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManagedOrthoWidth;
	static void NewProp_bManagedCaptureEveryFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManagedCaptureEveryFrame;
	static void NewProp_bManagedCaptureOnMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManagedCaptureOnMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagedShowOnlyActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagedShowOnlyActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagedCaptureComponents_ValueProp;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_ManagedCaptureComponents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ManagedCaptureComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors, "SetSceneCapture2DManagedShowOnlyActors" }, // 3051977316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSceneCapture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, SourceMode), Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 1588945484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SceneCaptureUserParameter = { "SceneCaptureUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, SceneCaptureUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCaptureUserParameter_MetaData), NewProp_SceneCaptureUserParameter_MetaData) }; // 174428838
void Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSceneCapture2D*)Obj)->bAutoMoveWithComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent = { "bAutoMoveWithComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSceneCapture2D), &Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoMoveWithComponent_MetaData), NewProp_bAutoMoveWithComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode = { "AutoMoveOffsetLocationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetLocationMode), Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoMoveOffsetLocationMode_MetaData), NewProp_AutoMoveOffsetLocationMode_MetaData) }; // 688318691
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocation = { "AutoMoveOffsetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoMoveOffsetLocation_MetaData), NewProp_AutoMoveOffsetLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode = { "AutoMoveOffsetRotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetRotationMode), Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoMoveOffsetRotationMode_MetaData), NewProp_AutoMoveOffsetRotationMode_MetaData) }; // 688318691
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotation = { "AutoMoveOffsetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoMoveOffsetRotation_MetaData), NewProp_AutoMoveOffsetRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureSource = { "ManagedCaptureSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedCaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedCaptureSource_MetaData), NewProp_ManagedCaptureSource_MetaData) }; // 3067947701
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureSize = { "ManagedTextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedTextureSize_MetaData), NewProp_ManagedTextureSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureFormat = { "ManagedTextureFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedTextureFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedTextureFormat_MetaData), NewProp_ManagedTextureFormat_MetaData) }; // 338846453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedProjectionType = { "ManagedProjectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedProjectionType), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedProjectionType_MetaData), NewProp_ManagedProjectionType_MetaData) }; // 785982369
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedFOVAngle = { "ManagedFOVAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedFOVAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedFOVAngle_MetaData), NewProp_ManagedFOVAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedOrthoWidth = { "ManagedOrthoWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedOrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedOrthoWidth_MetaData), NewProp_ManagedOrthoWidth_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSceneCapture2D*)Obj)->bManagedCaptureEveryFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame = { "bManagedCaptureEveryFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSceneCapture2D), &Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManagedCaptureEveryFrame_MetaData), NewProp_bManagedCaptureEveryFrame_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceSceneCapture2D*)Obj)->bManagedCaptureOnMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement = { "bManagedCaptureOnMovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSceneCapture2D), &Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManagedCaptureOnMovement_MetaData), NewProp_bManagedCaptureOnMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors_Inner = { "ManagedShowOnlyActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors = { "ManagedShowOnlyActors", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedShowOnlyActors_MetaData), NewProp_ManagedShowOnlyActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_ValueProp = { "ManagedCaptureComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_Key_KeyProp = { "ManagedCaptureComponents_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents = { "ManagedCaptureComponents", nullptr, (EPropertyFlags)0x0124088000202008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedCaptureComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedCaptureComponents_MetaData), NewProp_ManagedCaptureComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SceneCaptureUserParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedProjectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedFOVAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedOrthoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::ClassParams = {
	&UNiagaraDataInterfaceSceneCapture2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSceneCapture2D>()
{
	return UNiagaraDataInterfaceSceneCapture2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSceneCapture2D);
UNiagaraDataInterfaceSceneCapture2D::~UNiagaraDataInterfaceSceneCapture2D() {}
// End Class UNiagaraDataInterfaceSceneCapture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDISceneCapture2DSourceMode_StaticEnum, TEXT("ENDISceneCapture2DSourceMode"), &Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1588945484U) },
		{ ENDISceneCapture2DOffsetMode_StaticEnum, TEXT("ENDISceneCapture2DOffsetMode"), &Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 688318691U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D, UNiagaraDataInterfaceSceneCapture2D::StaticClass, TEXT("UNiagaraDataInterfaceSceneCapture2D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSceneCapture2D), 2099385474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_2413638574(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
