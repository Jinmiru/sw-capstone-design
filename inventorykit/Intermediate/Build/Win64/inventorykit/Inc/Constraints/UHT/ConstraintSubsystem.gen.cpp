// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Animation/Constraints/Private/ConstraintSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintSubsystem() {}

// Begin Cross Module References
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintSubsystem();
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintSubsystem_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint_NoRegister();
CONSTRAINTS_API UFunction* Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature();
CONSTRAINTS_API UFunction* Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature();
CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintsInWorld();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References

// Begin ScriptStruct FConstraintsInWorld
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintsInWorld;
class UScriptStruct* FConstraintsInWorld::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintsInWorld.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintsInWorld.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintsInWorld, (UObject*)Z_Construct_UPackage__Script_Constraints(), TEXT("ConstraintsInWorld"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintsInWorld.OuterSingleton;
}
template<> CONSTRAINTS_API UScriptStruct* StaticStruct<FConstraintsInWorld>()
{
	return FConstraintsInWorld::StaticStruct();
}
struct Z_Construct_UScriptStruct_FConstraintsInWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintsInWorld>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsInWorld, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsInWorld, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::NewProp_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	nullptr,
	&NewStructOps,
	"ConstraintsInWorld",
	Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::PropPointers),
	sizeof(FConstraintsInWorld),
	alignof(FConstraintsInWorld),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FConstraintsInWorld()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintsInWorld.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintsInWorld.InnerSingleton, Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ConstraintsInWorld.InnerSingleton;
}
// End ScriptStruct FConstraintsInWorld

// Begin Delegate FOnConstraintAddedToSystem
struct Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics
{
	struct ConstraintSubsystem_eventOnConstraintAddedToSystem_Parms
	{
		UConstraintSubsystem* Mananger;
		UTickableConstraint* Constraint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic blueprintable delegates for knowing when a constraints are added or deleted*/" },
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
		{ "ToolTip", "Dynamic blueprintable delegates for knowing when a constraints are added or deleted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mananger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::NewProp_Mananger = { "Mananger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintSubsystem_eventOnConstraintAddedToSystem_Parms, Mananger), Z_Construct_UClass_UConstraintSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintSubsystem_eventOnConstraintAddedToSystem_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::NewProp_Mananger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::NewProp_Constraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintSubsystem, nullptr, "OnConstraintAddedToSystem__DelegateSignature", "ConstraintSubsystem", "OnConstraintAddedToSystem_BP", Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::ConstraintSubsystem_eventOnConstraintAddedToSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::ConstraintSubsystem_eventOnConstraintAddedToSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UConstraintSubsystem::FOnConstraintAddedToSystem_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintAddedToSystem, UConstraintSubsystem* Mananger, UTickableConstraint* Constraint)
{
	struct ConstraintSubsystem_eventOnConstraintAddedToSystem_Parms
	{
		UConstraintSubsystem* Mananger;
		UTickableConstraint* Constraint;
	};
	ConstraintSubsystem_eventOnConstraintAddedToSystem_Parms Parms;
	Parms.Mananger=Mananger;
	Parms.Constraint=Constraint;
	OnConstraintAddedToSystem.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnConstraintAddedToSystem

// Begin Delegate FOnConstraintRemovedFromSystem
struct Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics
{
	struct ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms
	{
		UConstraintSubsystem* Mananger;
		UTickableConstraint* Constraint;
		bool bDoNotCompensate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mananger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
	static void NewProp_bDoNotCompensate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotCompensate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::NewProp_Mananger = { "Mananger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms, Mananger), Z_Construct_UClass_UConstraintSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::NewProp_bDoNotCompensate_SetBit(void* Obj)
{
	((ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms*)Obj)->bDoNotCompensate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::NewProp_bDoNotCompensate = { "bDoNotCompensate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms), &Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::NewProp_bDoNotCompensate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::NewProp_Mananger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::NewProp_bDoNotCompensate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintSubsystem, nullptr, "OnConstraintRemovedFromSystem__DelegateSignature", "ConstraintSubsystem", "OnConstraintRemovedFromSystem_BP", Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UConstraintSubsystem::FOnConstraintRemovedFromSystem_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintRemovedFromSystem, UConstraintSubsystem* Mananger, UTickableConstraint* Constraint, bool bDoNotCompensate)
{
	struct ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms
	{
		UConstraintSubsystem* Mananger;
		UTickableConstraint* Constraint;
		bool bDoNotCompensate;
	};
	ConstraintSubsystem_eventOnConstraintRemovedFromSystem_Parms Parms;
	Parms.Mananger=Mananger;
	Parms.Constraint=Constraint;
	Parms.bDoNotCompensate=bDoNotCompensate ? true : false;
	OnConstraintRemovedFromSystem.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnConstraintRemovedFromSystem

// Begin Class UConstraintSubsystem
void UConstraintSubsystem::StaticRegisterNativesUConstraintSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstraintSubsystem);
UClass* Z_Construct_UClass_UConstraintSubsystem_NoRegister()
{
	return UConstraintSubsystem::StaticClass();
}
struct Z_Construct_UClass_UConstraintSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConstraintSubsystem.h" },
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConstraintAddedToSystem_BP_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** BP Delegate fired when constraints are added*/" },
		{ "DisplayName", "OnConstraintAdded" },
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
		{ "ToolTip", "BP Delegate fired when constraints are added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConstraintRemovedFromSystem_BP_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** BP Delegate fired when constraints are removed*/" },
		{ "DisplayName", "OnConstraintRemoved" },
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
		{ "ToolTip", "BP Delegate fired when constraints are removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsInWorld_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConstraintSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintAddedToSystem_BP;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintRemovedFromSystem_BP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintsInWorld_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintsInWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature, "OnConstraintAddedToSystem__DelegateSignature" }, // 2803121519
		{ &Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature, "OnConstraintRemovedFromSystem__DelegateSignature" }, // 470323571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstraintSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConstraintSubsystem_Statics::NewProp_OnConstraintAddedToSystem_BP = { "OnConstraintAddedToSystem_BP", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstraintSubsystem, OnConstraintAddedToSystem_BP), Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintAddedToSystem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConstraintAddedToSystem_BP_MetaData), NewProp_OnConstraintAddedToSystem_BP_MetaData) }; // 2803121519
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConstraintSubsystem_Statics::NewProp_OnConstraintRemovedFromSystem_BP = { "OnConstraintRemovedFromSystem_BP", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstraintSubsystem, OnConstraintRemovedFromSystem_BP), Z_Construct_USparseDelegateFunction_UConstraintSubsystem_OnConstraintRemovedFromSystem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConstraintRemovedFromSystem_BP_MetaData), NewProp_OnConstraintRemovedFromSystem_BP_MetaData) }; // 470323571
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConstraintSubsystem_Statics::NewProp_ConstraintsInWorld_Inner = { "ConstraintsInWorld", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConstraintsInWorld, METADATA_PARAMS(0, nullptr) }; // 1310852144
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConstraintSubsystem_Statics::NewProp_ConstraintsInWorld = { "ConstraintsInWorld", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConstraintSubsystem, ConstraintsInWorld), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintsInWorld_MetaData), NewProp_ConstraintsInWorld_MetaData) }; // 1310852144
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstraintSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintSubsystem_Statics::NewProp_OnConstraintAddedToSystem_BP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintSubsystem_Statics::NewProp_OnConstraintRemovedFromSystem_BP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintSubsystem_Statics::NewProp_ConstraintsInWorld_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintSubsystem_Statics::NewProp_ConstraintsInWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConstraintSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstraintSubsystem_Statics::ClassParams = {
	&UConstraintSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConstraintSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintSubsystem_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstraintSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConstraintSubsystem()
{
	if (!Z_Registration_Info_UClass_UConstraintSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstraintSubsystem.OuterSingleton, Z_Construct_UClass_UConstraintSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstraintSubsystem.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UConstraintSubsystem>()
{
	return UConstraintSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConstraintSubsystem);
UConstraintSubsystem::~UConstraintSubsystem() {}
// End Class UConstraintSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FConstraintsInWorld::StaticStruct, Z_Construct_UScriptStruct_FConstraintsInWorld_Statics::NewStructOps, TEXT("ConstraintsInWorld"), &Z_Registration_Info_UScriptStruct_ConstraintsInWorld, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintsInWorld), 1310852144U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConstraintSubsystem, UConstraintSubsystem::StaticClass, TEXT("UConstraintSubsystem"), &Z_Registration_Info_UClass_UConstraintSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstraintSubsystem), 130014795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_3974660840(TEXT("/Script/Constraints"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
