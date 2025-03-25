// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Animation/Constraints/Public/ConstraintsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintsManager() {}

// Begin Cross Module References
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsManager();
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsManager_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint_NoRegister();
CONSTRAINTS_API UFunction* Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature();
CONSTRAINTS_API UFunction* Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature();
CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintTickFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References

// Begin ScriptStruct FConstraintTickFunction
static_assert(std::is_polymorphic<FConstraintTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FConstraintTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintTickFunction;
class UScriptStruct* FConstraintTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintTickFunction, (UObject*)Z_Construct_UPackage__Script_Constraints(), TEXT("ConstraintTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintTickFunction.OuterSingleton;
}
template<> CONSTRAINTS_API UScriptStruct* StaticStruct<FConstraintTickFunction>()
{
	return FConstraintTickFunction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintTickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * FConstraintTickFunction\n * Represents the interface of constraint as a tick function. This allows both to evaluate a constraint in the\n * UE ticking system but also to handle dependencies between parents/children and constraints between themselves\n * using the tick prerequisites system.\n **/" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "FConstraintTickFunction\nRepresents the interface of constraint as a tick function. This allows both to evaluate a constraint in the\nUE ticking system but also to handle dependencies between parents/children and constraints between themselves\nusing the tick prerequisites system." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"ConstraintTickFunction",
	nullptr,
	0,
	sizeof(FConstraintTickFunction),
	alignof(FConstraintTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintTickFunction()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintTickFunction.InnerSingleton;
}
// End ScriptStruct FConstraintTickFunction

// Begin Class UTickableConstraint
void UTickableConstraint::StaticRegisterNativesUTickableConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableConstraint);
UClass* Z_Construct_UClass_UTickableConstraint_NoRegister()
{
	return UTickableConstraint::StaticClass();
}
struct Z_Construct_UClass_UTickableConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableConstraint\n * Represents the basic interface of constraint within the constraints manager.\n **/" },
		{ "IncludePath", "ConstraintsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "UTickableConstraint\nRepresents the basic interface of constraint within the constraints manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** @todo documentation. */" },
		{ "DisplayName", "Active State" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "@todo documentation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active_SetBit(void* Obj)
{
	((UTickableConstraint*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTickableConstraint), &Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
void Z_Construct_UClass_UTickableConstraint_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((UTickableConstraint*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableConstraint_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTickableConstraint), &Z_Construct_UClass_UTickableConstraint_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableConstraint_Statics::NewProp_bValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTickableConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableConstraint_Statics::ClassParams = {
	&UTickableConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTickableConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTickableConstraint_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTickableConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UTickableConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTickableConstraint()
{
	if (!Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton, Z_Construct_UClass_UTickableConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UTickableConstraint>()
{
	return UTickableConstraint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableConstraint);
// End Class UTickableConstraint

// Begin Delegate FOnConstraintAdded
struct Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics
{
	struct ConstraintsManager_eventOnConstraintAdded_Parms
	{
		UConstraintsManager* Mananger;
		UTickableConstraint* Constraint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic blueprintable delegates for knowing when a constraints are added or deleted*/" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "Dynamic blueprintable delegates for knowing when a constraints are added or deleted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mananger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::NewProp_Mananger = { "Mananger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsManager_eventOnConstraintAdded_Parms, Mananger), Z_Construct_UClass_UConstraintsManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsManager_eventOnConstraintAdded_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::NewProp_Mananger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::NewProp_Constraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsManager, nullptr, "OnConstraintAdded__DelegateSignature", "ConstraintsManager", "OnConstraintAdded_BP", Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::ConstraintsManager_eventOnConstraintAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::ConstraintsManager_eventOnConstraintAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UConstraintsManager::FOnConstraintAdded_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintAdded, UConstraintsManager* Mananger, UTickableConstraint* Constraint)
{
	struct ConstraintsManager_eventOnConstraintAdded_Parms
	{
		UConstraintsManager* Mananger;
		UTickableConstraint* Constraint;
	};
	ConstraintsManager_eventOnConstraintAdded_Parms Parms;
	Parms.Mananger=Mananger;
	Parms.Constraint=Constraint;
	OnConstraintAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnConstraintAdded

// Begin Delegate FOnConstraintRemoved
struct Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics
{
	struct ConstraintsManager_eventOnConstraintRemoved_Parms
	{
		UConstraintsManager* Mananger;
		UTickableConstraint* Constraint;
		bool bDoNotCompensate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mananger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
	static void NewProp_bDoNotCompensate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotCompensate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_Mananger = { "Mananger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsManager_eventOnConstraintRemoved_Parms, Mananger), Z_Construct_UClass_UConstraintsManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsManager_eventOnConstraintRemoved_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_bDoNotCompensate_SetBit(void* Obj)
{
	((ConstraintsManager_eventOnConstraintRemoved_Parms*)Obj)->bDoNotCompensate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_bDoNotCompensate = { "bDoNotCompensate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConstraintsManager_eventOnConstraintRemoved_Parms), &Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_bDoNotCompensate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_Mananger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_bDoNotCompensate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsManager, nullptr, "OnConstraintRemoved__DelegateSignature", "ConstraintsManager", "OnConstraintRemoved_BP", Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::ConstraintsManager_eventOnConstraintRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::ConstraintsManager_eventOnConstraintRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UConstraintsManager::FOnConstraintRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintRemoved, UConstraintsManager* Mananger, UTickableConstraint* Constraint, bool bDoNotCompensate)
{
	struct ConstraintsManager_eventOnConstraintRemoved_Parms
	{
		UConstraintsManager* Mananger;
		UTickableConstraint* Constraint;
		bool bDoNotCompensate;
	};
	ConstraintsManager_eventOnConstraintRemoved_Parms Parms;
	Parms.Mananger=Mananger;
	Parms.Constraint=Constraint;
	Parms.bDoNotCompensate=bDoNotCompensate ? true : false;
	OnConstraintRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnConstraintRemoved

// Begin Class UConstraintsManager
void UConstraintsManager::StaticRegisterNativesUConstraintsManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstraintsManager);
UClass* Z_Construct_UClass_UConstraintsManager_NoRegister()
{
	return UConstraintsManager::StaticClass();
}
struct Z_Construct_UClass_UConstraintsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UConstraintsManager\n * This object gathers the different static/nonanimated constraints of the level and is held by the ConstraintsActor (unique in the level)\n * Note in 5.4 all of the constraints are owned by the subsystem, so need to get that to get at animated constraints\n **/" },
		{ "IncludePath", "ConstraintsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "UConstraintsManager\nThis object gathers the different static/nonanimated constraints of the level and is held by the ConstraintsActor (unique in the level)\nNote in 5.4 all of the constraints are owned by the subsystem, so need to get that to get at animated constraints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConstraintAdded_BP_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** BP Delegate fired when constraints are added*/" },
		{ "DisplayName", "OnConstraintAdded" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "BP Delegate fired when constraints are added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConstraintRemoved_BP_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** BP Delegate fired when constraints are removed*/" },
		{ "DisplayName", "OnConstraintRemoved" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "BP Delegate fired when constraints are removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Comment", "/**  For 5.4, this now just contains all of the static constraints.\n\x09Other constraints will exist in the subsystem and owned by the section*/" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "For 5.4, this now just contains all of the static constraints.\n     Other constraints will exist in the subsystem and owned by the section" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintAdded_BP;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintRemoved_BP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature, "OnConstraintAdded__DelegateSignature" }, // 2486851284
		{ &Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature, "OnConstraintRemoved__DelegateSignature" }, // 1843980254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstraintsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintAdded_BP = { "OnConstraintAdded_BP", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstraintsManager, OnConstraintAdded_BP), Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConstraintAdded_BP_MetaData), NewProp_OnConstraintAdded_BP_MetaData) }; // 2486851284
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintRemoved_BP = { "OnConstraintRemoved_BP", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstraintsManager, OnConstraintRemoved_BP), Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConstraintRemoved_BP_MetaData), NewProp_OnConstraintRemoved_BP_MetaData) }; // 1843980254
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstraintsManager, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstraintsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintAdded_BP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintRemoved_BP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConstraintsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstraintsManager_Statics::ClassParams = {
	&UConstraintsManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConstraintsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstraintsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConstraintsManager()
{
	if (!Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton, Z_Construct_UClass_UConstraintsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UConstraintsManager>()
{
	return UConstraintsManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConstraintsManager);
// End Class UConstraintsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConstraintTickFunction::StaticStruct, Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::NewStructOps, TEXT("ConstraintTickFunction"), &Z_Registration_Info_UScriptStruct_ConstraintTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintTickFunction), 834967048U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTickableConstraint, UTickableConstraint::StaticClass, TEXT("UTickableConstraint"), &Z_Registration_Info_UClass_UTickableConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableConstraint), 2726820005U) },
		{ Z_Construct_UClass_UConstraintsManager, UConstraintsManager::StaticClass, TEXT("UConstraintsManager"), &Z_Registration_Info_UClass_UConstraintsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstraintsManager), 1747670459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_412516877(TEXT("/Script/Constraints"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
