// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraPreviewGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPreviewGrid() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewBase();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewGrid();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class ANiagaraPreviewBase Function SetLabelText
struct NiagaraPreviewBase_eventSetLabelText_Parms
{
	FText InXAxisText;
	FText InYAxisText;
};
static FName NAME_ANiagaraPreviewBase_SetLabelText = FName(TEXT("SetLabelText"));
void ANiagaraPreviewBase::SetLabelText(FText const& InXAxisText, FText const& InYAxisText)
{
	NiagaraPreviewBase_eventSetLabelText_Parms Parms;
	Parms.InXAxisText=InXAxisText;
	Parms.InYAxisText=InYAxisText;
	ProcessEvent(FindFunctionChecked(NAME_ANiagaraPreviewBase_SetLabelText),&Parms);
}
struct Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Niagara|Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InXAxisText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InYAxisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InXAxisText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InYAxisText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InXAxisText = { "InXAxisText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPreviewBase_eventSetLabelText_Parms, InXAxisText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InXAxisText_MetaData), NewProp_InXAxisText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InYAxisText = { "InYAxisText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPreviewBase_eventSetLabelText_Parms, InYAxisText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InYAxisText_MetaData), NewProp_InYAxisText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InXAxisText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::NewProp_InYAxisText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewBase, nullptr, "SetLabelText", nullptr, nullptr, Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::PropPointers), sizeof(NiagaraPreviewBase_eventSetLabelText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::Function_MetaDataParams) };
static_assert(sizeof(NiagaraPreviewBase_eventSetLabelText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANiagaraPreviewBase Function SetLabelText

// Begin Class ANiagaraPreviewBase Function SetSystem
struct NiagaraPreviewBase_eventSetSystem_Parms
{
	UNiagaraSystem* InSystem;
};
static FName NAME_ANiagaraPreviewBase_SetSystem = FName(TEXT("SetSystem"));
void ANiagaraPreviewBase::SetSystem(UNiagaraSystem* InSystem)
{
	NiagaraPreviewBase_eventSetSystem_Parms Parms;
	Parms.InSystem=InSystem;
	ProcessEvent(FindFunctionChecked(NAME_ANiagaraPreviewBase_SetSystem),&Parms);
}
struct Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Niagara|Preview" },
		{ "Comment", "//AActor Interface End\n" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "AActor Interface End" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::NewProp_InSystem = { "InSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPreviewBase_eventSetSystem_Parms, InSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::NewProp_InSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewBase, nullptr, "SetSystem", nullptr, nullptr, Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::PropPointers), sizeof(NiagaraPreviewBase_eventSetSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NiagaraPreviewBase_eventSetSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANiagaraPreviewBase Function SetSystem

// Begin Class ANiagaraPreviewBase
void ANiagaraPreviewBase::StaticRegisterNativesANiagaraPreviewBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANiagaraPreviewBase);
UClass* Z_Construct_UClass_ANiagaraPreviewBase_NoRegister()
{
	return ANiagaraPreviewBase::StaticClass();
}
struct Z_Construct_UClass_ANiagaraPreviewBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base actor for preview actors used in UNiagaraPreviewAxis. */" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Base actor for preview actors used in UNiagaraPreviewAxis." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANiagaraPreviewBase_SetLabelText, "SetLabelText" }, // 366711102
		{ &Z_Construct_UFunction_ANiagaraPreviewBase_SetSystem, "SetSystem" }, // 2940719826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraPreviewBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANiagaraPreviewBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraPreviewBase_Statics::ClassParams = {
	&ANiagaraPreviewBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008000ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANiagaraPreviewBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANiagaraPreviewBase()
{
	if (!Z_Registration_Info_UClass_ANiagaraPreviewBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiagaraPreviewBase.OuterSingleton, Z_Construct_UClass_ANiagaraPreviewBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANiagaraPreviewBase.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<ANiagaraPreviewBase>()
{
	return ANiagaraPreviewBase::StaticClass();
}
ANiagaraPreviewBase::ANiagaraPreviewBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraPreviewBase);
ANiagaraPreviewBase::~ANiagaraPreviewBase() {}
// End Class ANiagaraPreviewBase

// Begin Class UNiagaraPreviewAxis Function ApplyToPreview
struct NiagaraPreviewAxis_eventApplyToPreview_Parms
{
	UNiagaraComponent* PreviewComponent;
	int32 PreviewIndex;
	bool bIsXAxis;
	FString OutLabelText;
};
static FName NAME_UNiagaraPreviewAxis_ApplyToPreview = FName(TEXT("ApplyToPreview"));
void UNiagaraPreviewAxis::ApplyToPreview(UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText)
{
	NiagaraPreviewAxis_eventApplyToPreview_Parms Parms;
	Parms.PreviewComponent=PreviewComponent;
	Parms.PreviewIndex=PreviewIndex;
	Parms.bIsXAxis=bIsXAxis ? true : false;
	Parms.OutLabelText=OutLabelText;
	ProcessEvent(FindFunctionChecked(NAME_UNiagaraPreviewAxis_ApplyToPreview),&Parms);
	OutLabelText=Parms.OutLabelText;
}
struct Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Applies this axis for the preview at PreviewIndex on this axis. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Applies this axis for the preview at PreviewIndex on this axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
	static void NewProp_bIsXAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsXAxis;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutLabelText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewComponent = { "PreviewComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPreviewAxis_eventApplyToPreview_Parms, PreviewComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewComponent_MetaData), NewProp_PreviewComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPreviewAxis_eventApplyToPreview_Parms, PreviewIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis_SetBit(void* Obj)
{
	((NiagaraPreviewAxis_eventApplyToPreview_Parms*)Obj)->bIsXAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis = { "bIsXAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraPreviewAxis_eventApplyToPreview_Parms), &Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_OutLabelText = { "OutLabelText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPreviewAxis_eventApplyToPreview_Parms, OutLabelText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_PreviewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_bIsXAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::NewProp_OutLabelText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPreviewAxis, nullptr, "ApplyToPreview", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::PropPointers), sizeof(NiagaraPreviewAxis_eventApplyToPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::Function_MetaDataParams) };
static_assert(sizeof(NiagaraPreviewAxis_eventApplyToPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraPreviewAxis::execApplyToPreview)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_PreviewComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
	P_GET_UBOOL(Z_Param_bIsXAxis);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutLabelText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyToPreview_Implementation(Z_Param_PreviewComponent,Z_Param_PreviewIndex,Z_Param_bIsXAxis,Z_Param_Out_OutLabelText);
	P_NATIVE_END;
}
// End Class UNiagaraPreviewAxis Function ApplyToPreview

// Begin Class UNiagaraPreviewAxis Function Num
struct NiagaraPreviewAxis_eventNum_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	NiagaraPreviewAxis_eventNum_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UNiagaraPreviewAxis_Num = FName(TEXT("Num"));
int32 UNiagaraPreviewAxis::Num()
{
	NiagaraPreviewAxis_eventNum_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UNiagaraPreviewAxis_Num),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the number of previews for this axis. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Returns the number of previews for this axis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPreviewAxis_eventNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraPreviewAxis, nullptr, "Num", nullptr, nullptr, Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::PropPointers), sizeof(NiagaraPreviewAxis_eventNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::Function_MetaDataParams) };
static_assert(sizeof(NiagaraPreviewAxis_eventNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraPreviewAxis_Num()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraPreviewAxis_Num_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraPreviewAxis::execNum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Num_Implementation();
	P_NATIVE_END;
}
// End Class UNiagaraPreviewAxis Function Num

// Begin Class UNiagaraPreviewAxis
void UNiagaraPreviewAxis::StaticRegisterNativesUNiagaraPreviewAxis()
{
	UClass* Class = UNiagaraPreviewAxis::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyToPreview", &UNiagaraPreviewAxis::execApplyToPreview },
		{ "Num", &UNiagaraPreviewAxis::execNum },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPreviewAxis);
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister()
{
	return UNiagaraPreviewAxis::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPreviewAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nBase class for all preview axis types.\nNiagaraPreviewGrid uses these to control how many systems to spawn in each axis and how each system varies on that axis.\nC++ Examples are show below. You can also create these as Blueprint classes as show in the Plugin content folder.\n*/" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Base class for all preview axis types.\nNiagaraPreviewGrid uses these to control how many systems to spawn in each axis and how each system varies on that axis.\nC++ Examples are show below. You can also create these as Blueprint classes as show in the Plugin content folder." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraPreviewAxis_ApplyToPreview, "ApplyToPreview" }, // 2316637721
		{ &Z_Construct_UFunction_UNiagaraPreviewAxis_Num, "Num" }, // 3935632144
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_Statics::ClassParams = {
	&UNiagaraPreviewAxis::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPreviewAxis_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPreviewAxis()
{
	if (!Z_Registration_Info_UClass_UNiagaraPreviewAxis.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPreviewAxis.OuterSingleton, Z_Construct_UClass_UNiagaraPreviewAxis_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPreviewAxis.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis>()
{
	return UNiagaraPreviewAxis::StaticClass();
}
UNiagaraPreviewAxis::UNiagaraPreviewAxis(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis);
UNiagaraPreviewAxis::~UNiagaraPreviewAxis() {}
// End Class UNiagaraPreviewAxis

// Begin Class UNiagaraPreviewAxis_InterpParamBase
void UNiagaraPreviewAxis_InterpParamBase::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPreviewAxis_InterpParamBase);
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_NoRegister()
{
	return UNiagaraPreviewAxis_InterpParamBase::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Param;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamBase, Param), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Param_MetaData), NewProp_Param_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamBase, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::ClassParams = {
	&UNiagaraPreviewAxis_InterpParamBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::PropPointers),
	0,
	0x000010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase()
{
	if (!Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.OuterSingleton, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamBase>()
{
	return UNiagaraPreviewAxis_InterpParamBase::StaticClass();
}
UNiagaraPreviewAxis_InterpParamBase::UNiagaraPreviewAxis_InterpParamBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamBase);
UNiagaraPreviewAxis_InterpParamBase::~UNiagaraPreviewAxis_InterpParamBase() {}
// End Class UNiagaraPreviewAxis_InterpParamBase

// Begin Class UNiagaraPreviewAxis_InterpParamInt32
void UNiagaraPreviewAxis_InterpParamInt32::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamInt32()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPreviewAxis_InterpParamInt32);
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_NoRegister()
{
	return UNiagaraPreviewAxis_InterpParamInt32::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamInt32>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamInt32, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamInt32, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::ClassParams = {
	&UNiagaraPreviewAxis_InterpParamInt32::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32()
{
	if (!Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.OuterSingleton, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamInt32>()
{
	return UNiagaraPreviewAxis_InterpParamInt32::StaticClass();
}
UNiagaraPreviewAxis_InterpParamInt32::UNiagaraPreviewAxis_InterpParamInt32(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamInt32);
UNiagaraPreviewAxis_InterpParamInt32::~UNiagaraPreviewAxis_InterpParamInt32() {}
// End Class UNiagaraPreviewAxis_InterpParamInt32

// Begin Class UNiagaraPreviewAxis_InterpParamFloat
void UNiagaraPreviewAxis_InterpParamFloat::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamFloat()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPreviewAxis_InterpParamFloat);
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_NoRegister()
{
	return UNiagaraPreviewAxis_InterpParamFloat::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamFloat, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamFloat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::ClassParams = {
	&UNiagaraPreviewAxis_InterpParamFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat()
{
	if (!Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.OuterSingleton, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamFloat>()
{
	return UNiagaraPreviewAxis_InterpParamFloat::StaticClass();
}
UNiagaraPreviewAxis_InterpParamFloat::UNiagaraPreviewAxis_InterpParamFloat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamFloat);
UNiagaraPreviewAxis_InterpParamFloat::~UNiagaraPreviewAxis_InterpParamFloat() {}
// End Class UNiagaraPreviewAxis_InterpParamFloat

// Begin Class UNiagaraPreviewAxis_InterpParamVector2D
void UNiagaraPreviewAxis_InterpParamVector2D::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPreviewAxis_InterpParamVector2D);
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_NoRegister()
{
	return UNiagaraPreviewAxis_InterpParamVector2D::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamVector2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector2D, Min), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector2D, Max), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::ClassParams = {
	&UNiagaraPreviewAxis_InterpParamVector2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D()
{
	if (!Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.OuterSingleton, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamVector2D>()
{
	return UNiagaraPreviewAxis_InterpParamVector2D::StaticClass();
}
UNiagaraPreviewAxis_InterpParamVector2D::UNiagaraPreviewAxis_InterpParamVector2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamVector2D);
UNiagaraPreviewAxis_InterpParamVector2D::~UNiagaraPreviewAxis_InterpParamVector2D() {}
// End Class UNiagaraPreviewAxis_InterpParamVector2D

// Begin Class UNiagaraPreviewAxis_InterpParamVector
void UNiagaraPreviewAxis_InterpParamVector::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPreviewAxis_InterpParamVector);
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_NoRegister()
{
	return UNiagaraPreviewAxis_InterpParamVector::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::ClassParams = {
	&UNiagaraPreviewAxis_InterpParamVector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector()
{
	if (!Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.OuterSingleton, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamVector>()
{
	return UNiagaraPreviewAxis_InterpParamVector::StaticClass();
}
UNiagaraPreviewAxis_InterpParamVector::UNiagaraPreviewAxis_InterpParamVector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamVector);
UNiagaraPreviewAxis_InterpParamVector::~UNiagaraPreviewAxis_InterpParamVector() {}
// End Class UNiagaraPreviewAxis_InterpParamVector

// Begin Class UNiagaraPreviewAxis_InterpParamVector4
void UNiagaraPreviewAxis_InterpParamVector4::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamVector4()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPreviewAxis_InterpParamVector4);
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_NoRegister()
{
	return UNiagaraPreviewAxis_InterpParamVector4::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamVector4>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector4, Min), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamVector4, Max), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::ClassParams = {
	&UNiagaraPreviewAxis_InterpParamVector4::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4()
{
	if (!Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.OuterSingleton, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamVector4>()
{
	return UNiagaraPreviewAxis_InterpParamVector4::StaticClass();
}
UNiagaraPreviewAxis_InterpParamVector4::UNiagaraPreviewAxis_InterpParamVector4(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamVector4);
UNiagaraPreviewAxis_InterpParamVector4::~UNiagaraPreviewAxis_InterpParamVector4() {}
// End Class UNiagaraPreviewAxis_InterpParamVector4

// Begin Class UNiagaraPreviewAxis_InterpParamLinearColor
void UNiagaraPreviewAxis_InterpParamLinearColor::StaticRegisterNativesUNiagaraPreviewAxis_InterpParamLinearColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraPreviewAxis_InterpParamLinearColor);
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_NoRegister()
{
	return UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass();
}
struct Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Axis" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraPreviewAxis_InterpParamLinearColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamLinearColor, Min), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraPreviewAxis_InterpParamLinearColor, Max), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::ClassParams = {
	&UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor()
{
	if (!Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.OuterSingleton, Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraPreviewAxis_InterpParamLinearColor>()
{
	return UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass();
}
UNiagaraPreviewAxis_InterpParamLinearColor::UNiagaraPreviewAxis_InterpParamLinearColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraPreviewAxis_InterpParamLinearColor);
UNiagaraPreviewAxis_InterpParamLinearColor::~UNiagaraPreviewAxis_InterpParamLinearColor() {}
// End Class UNiagaraPreviewAxis_InterpParamLinearColor

// Begin Enum ENiagaraPreviewGridResetMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode;
static UEnum* ENiagaraPreviewGridResetMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPreviewGridResetMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPreviewGridResetMode>()
{
	return ENiagaraPreviewGridResetMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Resets each preview as it completes. */" },
		{ "All.Name", "ENiagaraPreviewGridResetMode::All" },
		{ "All.ToolTip", "Resets each preview as it completes." },
		{ "Individual.Comment", "/** Never resets the previews. */" },
		{ "Individual.Name", "ENiagaraPreviewGridResetMode::Individual" },
		{ "Individual.ToolTip", "Never resets the previews." },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "Never.Name", "ENiagaraPreviewGridResetMode::Never" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraPreviewGridResetMode::Never", (int64)ENiagaraPreviewGridResetMode::Never },
		{ "ENiagaraPreviewGridResetMode::Individual", (int64)ENiagaraPreviewGridResetMode::Individual },
		{ "ENiagaraPreviewGridResetMode::All", (int64)ENiagaraPreviewGridResetMode::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraPreviewGridResetMode",
	"ENiagaraPreviewGridResetMode",
	Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode.InnerSingleton;
}
// End Enum ENiagaraPreviewGridResetMode

// Begin Class ANiagaraPreviewGrid Function ActivatePreviews
struct Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics
{
	struct NiagaraPreviewGrid_eventActivatePreviews_Parms
	{
		bool bReset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "Comment", "//AActor Interface End\n" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "AActor Interface End" },
	};
#endif // WITH_METADATA
	static void NewProp_bReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset_SetBit(void* Obj)
{
	((NiagaraPreviewGrid_eventActivatePreviews_Parms*)Obj)->bReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraPreviewGrid_eventActivatePreviews_Parms), &Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NewProp_bReset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewGrid, nullptr, "ActivatePreviews", nullptr, nullptr, Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NiagaraPreviewGrid_eventActivatePreviews_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::NiagaraPreviewGrid_eventActivatePreviews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANiagaraPreviewGrid::execActivatePreviews)
{
	P_GET_UBOOL(Z_Param_bReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePreviews(Z_Param_bReset);
	P_NATIVE_END;
}
// End Class ANiagaraPreviewGrid Function ActivatePreviews

// Begin Class ANiagaraPreviewGrid Function DeactivatePreviews
struct Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewGrid, nullptr, "DeactivatePreviews", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANiagaraPreviewGrid::execDeactivatePreviews)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivatePreviews();
	P_NATIVE_END;
}
// End Class ANiagaraPreviewGrid Function DeactivatePreviews

// Begin Class ANiagaraPreviewGrid Function GetPreviews
struct Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics
{
	struct NiagaraPreviewGrid_eventGetPreviews_Parms
	{
		TArray<UNiagaraComponent*> OutPreviews;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPreviews_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPreviews_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPreviews;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews_Inner = { "OutPreviews", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews = { "OutPreviews", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraPreviewGrid_eventGetPreviews_Parms, OutPreviews), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPreviews_MetaData), NewProp_OutPreviews_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NewProp_OutPreviews,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewGrid, nullptr, "GetPreviews", nullptr, nullptr, Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NiagaraPreviewGrid_eventGetPreviews_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::NiagaraPreviewGrid_eventGetPreviews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANiagaraPreviewGrid::execGetPreviews)
{
	P_GET_TARRAY_REF(UNiagaraComponent*,Z_Param_Out_OutPreviews);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPreviews(Z_Param_Out_OutPreviews);
	P_NATIVE_END;
}
// End Class ANiagaraPreviewGrid Function GetPreviews

// Begin Class ANiagaraPreviewGrid Function SetPaused
struct Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics
{
	struct NiagaraPreviewGrid_eventSetPaused_Parms
	{
		bool bPaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused_SetBit(void* Obj)
{
	((NiagaraPreviewGrid_eventSetPaused_Parms*)Obj)->bPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraPreviewGrid_eventSetPaused_Parms), &Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NewProp_bPaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraPreviewGrid, nullptr, "SetPaused", nullptr, nullptr, Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NiagaraPreviewGrid_eventSetPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::NiagaraPreviewGrid_eventSetPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANiagaraPreviewGrid::execSetPaused)
{
	P_GET_UBOOL(Z_Param_bPaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPaused(Z_Param_bPaused);
	P_NATIVE_END;
}
// End Class ANiagaraPreviewGrid Function SetPaused

// Begin Class ANiagaraPreviewGrid
void ANiagaraPreviewGrid::StaticRegisterNativesANiagaraPreviewGrid()
{
	UClass* Class = ANiagaraPreviewGrid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivatePreviews", &ANiagaraPreviewGrid::execActivatePreviews },
		{ "DeactivatePreviews", &ANiagaraPreviewGrid::execDeactivatePreviews },
		{ "GetPreviews", &ANiagaraPreviewGrid::execGetPreviews },
		{ "SetPaused", &ANiagaraPreviewGrid::execSetPaused },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANiagaraPreviewGrid);
UClass* Z_Construct_UClass_ANiagaraPreviewGrid_NoRegister()
{
	return ANiagaraPreviewGrid::StaticClass();
}
struct Z_Construct_UClass_ANiagaraPreviewGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraPreviewGrid.h" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetMode_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAxisX_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Object controlling behavior varying on the X axis. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Object controlling behavior varying on the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAxisY_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Object controlling behavior varying on the Y axis. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Object controlling behavior varying on the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewClass_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Class used to for previews in this grid. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Class used to for previews in this grid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingX_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** The default spacing between previews in X if the axis does not override it. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "The default spacing between previews in X if the axis does not override it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingY_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** The default spacing between previews if the axis does not override it. */" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "The default spacing between previews if the axis does not override it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumX_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumY_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "// Reference to sprite visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Reference to sprite visualization component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "// Reference to arrow visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraPreviewGrid.h" },
		{ "ToolTip", "Reference to arrow visualization component" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_System;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResetMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResetMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewAxisX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewAxisY;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewComponents;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANiagaraPreviewGrid_ActivatePreviews, "ActivatePreviews" }, // 1151513888
		{ &Z_Construct_UFunction_ANiagaraPreviewGrid_DeactivatePreviews, "DeactivatePreviews" }, // 4155429393
		{ &Z_Construct_UFunction_ANiagaraPreviewGrid_GetPreviews, "GetPreviews" }, // 3654543112
		{ &Z_Construct_UFunction_ANiagaraPreviewGrid_SetPaused, "SetPaused" }, // 336493787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraPreviewGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, System), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_System_MetaData), NewProp_System_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode = { "ResetMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, ResetMode), Z_Construct_UEnum_Niagara_ENiagaraPreviewGridResetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetMode_MetaData), NewProp_ResetMode_MetaData) }; // 3959499177
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisX = { "PreviewAxisX", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewAxisX), Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAxisX_MetaData), NewProp_PreviewAxisX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisY = { "PreviewAxisY", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewAxisY), Z_Construct_UClass_UNiagaraPreviewAxis_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewAxisY_MetaData), NewProp_PreviewAxisY_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewClass = { "PreviewClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ANiagaraPreviewBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewClass_MetaData), NewProp_PreviewClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingX = { "SpacingX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, SpacingX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingX_MetaData), NewProp_SpacingX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingY = { "SpacingY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, SpacingY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingY_MetaData), NewProp_SpacingY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumX = { "NumX", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, NumX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumX_MetaData), NewProp_NumX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumY = { "NumY", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, NumY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumY_MetaData), NewProp_NumY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents_Inner = { "PreviewComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents = { "PreviewComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, PreviewComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewComponents_MetaData), NewProp_PreviewComponents_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPreviewGrid, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiagaraPreviewGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_System,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ResetMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewAxisY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpacingY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_NumY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_PreviewComponents,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_SpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPreviewGrid_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANiagaraPreviewGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraPreviewGrid_Statics::ClassParams = {
	&ANiagaraPreviewGrid::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANiagaraPreviewGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPreviewGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_ANiagaraPreviewGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANiagaraPreviewGrid()
{
	if (!Z_Registration_Info_UClass_ANiagaraPreviewGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiagaraPreviewGrid.OuterSingleton, Z_Construct_UClass_ANiagaraPreviewGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANiagaraPreviewGrid.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<ANiagaraPreviewGrid>()
{
	return ANiagaraPreviewGrid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraPreviewGrid);
ANiagaraPreviewGrid::~ANiagaraPreviewGrid() {}
// End Class ANiagaraPreviewGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraPreviewGridResetMode_StaticEnum, TEXT("ENiagaraPreviewGridResetMode"), &Z_Registration_Info_UEnum_ENiagaraPreviewGridResetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3959499177U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANiagaraPreviewBase, ANiagaraPreviewBase::StaticClass, TEXT("ANiagaraPreviewBase"), &Z_Registration_Info_UClass_ANiagaraPreviewBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiagaraPreviewBase), 1067886979U) },
		{ Z_Construct_UClass_UNiagaraPreviewAxis, UNiagaraPreviewAxis::StaticClass, TEXT("UNiagaraPreviewAxis"), &Z_Registration_Info_UClass_UNiagaraPreviewAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPreviewAxis), 2105128891U) },
		{ Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamBase, UNiagaraPreviewAxis_InterpParamBase::StaticClass, TEXT("UNiagaraPreviewAxis_InterpParamBase"), &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPreviewAxis_InterpParamBase), 1189500990U) },
		{ Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamInt32, UNiagaraPreviewAxis_InterpParamInt32::StaticClass, TEXT("UNiagaraPreviewAxis_InterpParamInt32"), &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamInt32, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPreviewAxis_InterpParamInt32), 3669338248U) },
		{ Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamFloat, UNiagaraPreviewAxis_InterpParamFloat::StaticClass, TEXT("UNiagaraPreviewAxis_InterpParamFloat"), &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPreviewAxis_InterpParamFloat), 980220331U) },
		{ Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector2D, UNiagaraPreviewAxis_InterpParamVector2D::StaticClass, TEXT("UNiagaraPreviewAxis_InterpParamVector2D"), &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPreviewAxis_InterpParamVector2D), 4044087541U) },
		{ Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector, UNiagaraPreviewAxis_InterpParamVector::StaticClass, TEXT("UNiagaraPreviewAxis_InterpParamVector"), &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPreviewAxis_InterpParamVector), 3841598485U) },
		{ Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamVector4, UNiagaraPreviewAxis_InterpParamVector4::StaticClass, TEXT("UNiagaraPreviewAxis_InterpParamVector4"), &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamVector4, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPreviewAxis_InterpParamVector4), 1007853494U) },
		{ Z_Construct_UClass_UNiagaraPreviewAxis_InterpParamLinearColor, UNiagaraPreviewAxis_InterpParamLinearColor::StaticClass, TEXT("UNiagaraPreviewAxis_InterpParamLinearColor"), &Z_Registration_Info_UClass_UNiagaraPreviewAxis_InterpParamLinearColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraPreviewAxis_InterpParamLinearColor), 755779251U) },
		{ Z_Construct_UClass_ANiagaraPreviewGrid, ANiagaraPreviewGrid::StaticClass, TEXT("ANiagaraPreviewGrid"), &Z_Registration_Info_UClass_ANiagaraPreviewGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiagaraPreviewGrid), 3672665534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_3039608820(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraPreviewGrid_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
