// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction_BlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_BlueprintBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UDEPRECATED_PawnAction_BlueprintBase Function ActionFinished
struct PawnAction_BlueprintBase_eventActionFinished_Parms
{
	APawn* ControlledPawn;
	TEnumAsByte<EPawnActionResult::Type> WithResult;
};
static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished = FName(TEXT("ActionFinished"));
void UDEPRECATED_PawnAction_BlueprintBase::ActionFinished(APawn* ControlledPawn, EPawnActionResult::Type WithResult)
{
	PawnAction_BlueprintBase_eventActionFinished_Parms Parms;
	Parms.ControlledPawn=ControlledPawn;
	Parms.WithResult=WithResult;
	ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished),&Parms);
}
struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WithResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionFinished_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::NewProp_WithResult = { "WithResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionFinished_Parms, WithResult), Z_Construct_UEnum_AIModule_EPawnActionResult, METADATA_PARAMS(0, nullptr) }; // 3429844247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::NewProp_ControlledPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::NewProp_WithResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionFinished", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::PropPointers), sizeof(PawnAction_BlueprintBase_eventActionFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(PawnAction_BlueprintBase_eventActionFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDEPRECATED_PawnAction_BlueprintBase Function ActionFinished

// Begin Class UDEPRECATED_PawnAction_BlueprintBase Function ActionPause
struct PawnAction_BlueprintBase_eventActionPause_Parms
{
	APawn* ControlledPawn;
};
static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionPause = FName(TEXT("ActionPause"));
void UDEPRECATED_PawnAction_BlueprintBase::ActionPause(APawn* ControlledPawn)
{
	PawnAction_BlueprintBase_eventActionPause_Parms Parms;
	Parms.ControlledPawn=ControlledPawn;
	ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionPause),&Parms);
}
struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionPause_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::NewProp_ControlledPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionPause", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::PropPointers), sizeof(PawnAction_BlueprintBase_eventActionPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::Function_MetaDataParams) };
static_assert(sizeof(PawnAction_BlueprintBase_eventActionPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDEPRECATED_PawnAction_BlueprintBase Function ActionPause

// Begin Class UDEPRECATED_PawnAction_BlueprintBase Function ActionResume
struct PawnAction_BlueprintBase_eventActionResume_Parms
{
	APawn* ControlledPawn;
};
static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionResume = FName(TEXT("ActionResume"));
void UDEPRECATED_PawnAction_BlueprintBase::ActionResume(APawn* ControlledPawn)
{
	PawnAction_BlueprintBase_eventActionResume_Parms Parms;
	Parms.ControlledPawn=ControlledPawn;
	ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionResume),&Parms);
}
struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionResume_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::NewProp_ControlledPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionResume", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::PropPointers), sizeof(PawnAction_BlueprintBase_eventActionResume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::Function_MetaDataParams) };
static_assert(sizeof(PawnAction_BlueprintBase_eventActionResume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDEPRECATED_PawnAction_BlueprintBase Function ActionResume

// Begin Class UDEPRECATED_PawnAction_BlueprintBase Function ActionStart
struct PawnAction_BlueprintBase_eventActionStart_Parms
{
	APawn* ControlledPawn;
};
static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionStart = FName(TEXT("ActionStart"));
void UDEPRECATED_PawnAction_BlueprintBase::ActionStart(APawn* ControlledPawn)
{
	PawnAction_BlueprintBase_eventActionStart_Parms Parms;
	Parms.ControlledPawn=ControlledPawn;
	ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionStart),&Parms);
}
struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "Comment", "//----------------------------------------------------------------------//\n// Blueprint interface\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
		{ "ToolTip", "Blueprint interface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionStart_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::NewProp_ControlledPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionStart", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::PropPointers), sizeof(PawnAction_BlueprintBase_eventActionStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(PawnAction_BlueprintBase_eventActionStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDEPRECATED_PawnAction_BlueprintBase Function ActionStart

// Begin Class UDEPRECATED_PawnAction_BlueprintBase Function ActionTick
struct PawnAction_BlueprintBase_eventActionTick_Parms
{
	APawn* ControlledPawn;
	float DeltaSeconds;
};
static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionTick = FName(TEXT("ActionTick"));
void UDEPRECATED_PawnAction_BlueprintBase::ActionTick(APawn* ControlledPawn, float DeltaSeconds)
{
	PawnAction_BlueprintBase_eventActionTick_Parms Parms;
	Parms.ControlledPawn=ControlledPawn;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionTick),&Parms);
}
struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionTick_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionTick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::NewProp_ControlledPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionTick", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::PropPointers), sizeof(PawnAction_BlueprintBase_eventActionTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(PawnAction_BlueprintBase_eventActionTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDEPRECATED_PawnAction_BlueprintBase Function ActionTick

// Begin Class UDEPRECATED_PawnAction_BlueprintBase
void UDEPRECATED_PawnAction_BlueprintBase::StaticRegisterNativesUDEPRECATED_PawnAction_BlueprintBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnAction_BlueprintBase);
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_NoRegister()
{
	return UDEPRECATED_PawnAction_BlueprintBase::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actions/PawnAction_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished, "ActionFinished" }, // 1302352610
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause, "ActionPause" }, // 393763203
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume, "ActionResume" }, // 1152749636
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart, "ActionStart" }, // 3640673013
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick, "ActionTick" }, // 1754723423
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnAction_BlueprintBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDEPRECATED_PawnAction,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::ClassParams = {
	&UDEPRECATED_PawnAction_BlueprintBase::StaticClass,
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
	0x028812A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_PawnAction_BlueprintBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnAction_BlueprintBase.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_PawnAction_BlueprintBase.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnAction_BlueprintBase>()
{
	return UDEPRECATED_PawnAction_BlueprintBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnAction_BlueprintBase);
UDEPRECATED_PawnAction_BlueprintBase::~UDEPRECATED_PawnAction_BlueprintBase() {}
// End Class UDEPRECATED_PawnAction_BlueprintBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, UDEPRECATED_PawnAction_BlueprintBase::StaticClass, TEXT("UDEPRECATED_PawnAction_BlueprintBase"), &Z_Registration_Info_UClass_UDEPRECATED_PawnAction_BlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnAction_BlueprintBase), 720946335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_1993498883(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
