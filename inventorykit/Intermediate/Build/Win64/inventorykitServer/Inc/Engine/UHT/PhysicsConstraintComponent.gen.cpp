// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PlasticDeformationEventSignature__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstrainComponentPropName();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintFrame();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPhysicsConstraintComponent Function BreakConstraint
struct Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Break this constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Break this constraint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "BreakConstraint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execBreakConstraint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BreakConstraint();
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function BreakConstraint

// Begin Class UPhysicsConstraintComponent Function GetConstrainedComponents
struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics
{
	struct PhysicsConstraintComponent_eventGetConstrainedComponents_Parms
	{
		UPrimitiveComponent* OutComponent1;
		FName OutBoneName1;
		UPrimitiveComponent* OutComponent2;
		FName OutBoneName2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Get connected components and potential related attachement bones */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Get connected components and potential related attachement bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutComponent2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutComponent1;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutBoneName1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutComponent2;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutBoneName2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::NewProp_OutComponent1 = { "OutComponent1", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstrainedComponents_Parms, OutComponent1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutComponent1_MetaData), NewProp_OutComponent1_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::NewProp_OutBoneName1 = { "OutBoneName1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstrainedComponents_Parms, OutBoneName1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::NewProp_OutComponent2 = { "OutComponent2", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstrainedComponents_Parms, OutComponent2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutComponent2_MetaData), NewProp_OutComponent2_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::NewProp_OutBoneName2 = { "OutBoneName2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstrainedComponents_Parms, OutBoneName2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::NewProp_OutComponent1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::NewProp_OutBoneName1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::NewProp_OutComponent2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::NewProp_OutBoneName2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetConstrainedComponents", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::PhysicsConstraintComponent_eventGetConstrainedComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::PhysicsConstraintComponent_eventGetConstrainedComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetConstrainedComponents)
{
	P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_OutComponent1);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutBoneName1);
	P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_OutComponent2);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutBoneName2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetConstrainedComponents(P_ARG_GC_BARRIER(Z_Param_Out_OutComponent1),Z_Param_Out_OutBoneName1,P_ARG_GC_BARRIER(Z_Param_Out_OutComponent2),Z_Param_Out_OutBoneName2);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function GetConstrainedComponents

// Begin Class UPhysicsConstraintComponent Function GetConstraint
struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics
{
	struct PhysicsConstraintComponent_eventGetConstraint_Parms
	{
		FConstraintInstanceAccessor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Gets the constraint object */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the constraint object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraint_Parms, ReturnValue), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(0, nullptr) }; // 1862825663
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetConstraint", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::PhysicsConstraintComponent_eventGetConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::PhysicsConstraintComponent_eventGetConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetConstraint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FConstraintInstanceAccessor*)Z_Param__Result=P_THIS->GetConstraint();
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function GetConstraint

// Begin Class UPhysicsConstraintComponent Function GetConstraintForce
struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics
{
	struct PhysicsConstraintComponent_eventGetConstraintForce_Parms
	{
		FVector OutLinearForce;
		FVector OutAngularForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Retrieve the constraint force most recently applied to maintain this constraint. Returns 0 forces if the constraint is not initialized or broken.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Retrieve the constraint force most recently applied to maintain this constraint. Returns 0 forces if the constraint is not initialized or broken." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLinearForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAngularForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutLinearForce = { "OutLinearForce", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraintForce_Parms, OutLinearForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutAngularForce = { "OutAngularForce", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraintForce_Parms, OutAngularForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutLinearForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutAngularForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetConstraintForce", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PhysicsConstraintComponent_eventGetConstraintForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PhysicsConstraintComponent_eventGetConstraintForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetConstraintForce)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLinearForce);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutAngularForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetConstraintForce(Z_Param_Out_OutLinearForce,Z_Param_Out_OutAngularForce);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function GetConstraintForce

// Begin Class UPhysicsConstraintComponent Function GetCurrentSwing1
struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics
{
	struct PhysicsConstraintComponent_eventGetCurrentSwing1_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Gets the current Swing1 of the constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Swing1 of the constraint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentSwing1_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetCurrentSwing1", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PhysicsConstraintComponent_eventGetCurrentSwing1_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PhysicsConstraintComponent_eventGetCurrentSwing1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetCurrentSwing1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentSwing1();
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function GetCurrentSwing1

// Begin Class UPhysicsConstraintComponent Function GetCurrentSwing2
struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics
{
	struct PhysicsConstraintComponent_eventGetCurrentSwing2_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Gets the current Swing2 of the constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Swing2 of the constraint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentSwing2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetCurrentSwing2", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PhysicsConstraintComponent_eventGetCurrentSwing2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PhysicsConstraintComponent_eventGetCurrentSwing2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetCurrentSwing2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentSwing2();
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function GetCurrentSwing2

// Begin Class UPhysicsConstraintComponent Function GetCurrentTwist
struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics
{
	struct PhysicsConstraintComponent_eventGetCurrentTwist_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Gets the current Angular Twist of the constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Angular Twist of the constraint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentTwist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "GetCurrentTwist", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PhysicsConstraintComponent_eventGetCurrentTwist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PhysicsConstraintComponent_eventGetCurrentTwist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execGetCurrentTwist)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentTwist();
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function GetCurrentTwist

// Begin Class UPhysicsConstraintComponent Function IsBroken
struct Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics
{
	struct PhysicsConstraintComponent_eventIsBroken_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Retrieve the status of constraint being broken.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Retrieve the status of constraint being broken." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventIsBroken_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventIsBroken_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "IsBroken", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PhysicsConstraintComponent_eventIsBroken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PhysicsConstraintComponent_eventIsBroken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execIsBroken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBroken();
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function IsBroken

// Begin Class UPhysicsConstraintComponent Function IsProjectionEnabled
struct Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics
{
	struct PhysicsConstraintComponent_eventIsProjectionEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Is projection enabled. See SetProjectionEnabled\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Is projection enabled. See SetProjectionEnabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventIsProjectionEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventIsProjectionEnabled_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "IsProjectionEnabled", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::PhysicsConstraintComponent_eventIsProjectionEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::PhysicsConstraintComponent_eventIsProjectionEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execIsProjectionEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsProjectionEnabled();
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function IsProjectionEnabled

// Begin Class UPhysicsConstraintComponent Function SetAngularBreakable
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularBreakable_Parms
	{
		bool bAngularBreakable;
		float AngularBreakThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Breakable properties\n\x09*\x09@param bAngularBreakable\x09\x09Whether it is possible to break the joint with angular force\n\x09*\x09@param AngularBreakThreshold\x09Torque needed to break the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Breakable properties\n     @param bAngularBreakable                Whether it is possible to break the joint with angular force\n     @param AngularBreakThreshold    Torque needed to break the joint" },
	};
#endif // WITH_METADATA
	static void NewProp_bAngularBreakable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularBreakable_Parms*)Obj)->bAngularBreakable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularBreakable_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularBreakable_Parms, AngularBreakThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_AngularBreakThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularBreakable", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PhysicsConstraintComponent_eventSetAngularBreakable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PhysicsConstraintComponent_eventSetAngularBreakable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularBreakable)
{
	P_GET_UBOOL(Z_Param_bAngularBreakable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngularBreakThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularBreakable(Z_Param_bAngularBreakable,Z_Param_AngularBreakThreshold);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularBreakable

// Begin Class UPhysicsConstraintComponent Function SetAngularDriveMode
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularDriveMode_Parms
	{
		TEnumAsByte<EAngularDriveMode::Type> DriveMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Switches the angular drive mode between SLERP and Twist And Swing\n\x09*\n\x09*\x09@param DriveMode\x09The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Switches the angular drive mode between SLERP and Twist And Swing\n\n     @param DriveMode        The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DriveMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::NewProp_DriveMode = { "DriveMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveMode_Parms, DriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(0, nullptr) }; // 3334632269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::NewProp_DriveMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularDriveMode", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PhysicsConstraintComponent_eventSetAngularDriveMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PhysicsConstraintComponent_eventSetAngularDriveMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularDriveMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_DriveMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularDriveMode(EAngularDriveMode::Type(Z_Param_DriveMode));
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularDriveMode

// Begin Class UPhysicsConstraintComponent Function SetAngularDriveParams
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularDriveParams_Parms
	{
		float PositionStrength;
		float VelocityStrength;
		float InForceLimit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the drive params for the angular drive. \n\x09 *\x09@param PositionStrength\x09\x09Positional strength for the drive (stiffness)\n\x09 *\x09@param VelocityStrength \x09Velocity strength of the drive (damping)\n\x09 *\x09@param InForceLimit\x09Max force applied by the drive\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the drive params for the angular drive.\n    @param PositionStrength         Positional strength for the drive (stiffness)\n    @param VelocityStrength         Velocity strength of the drive (damping)\n    @param InForceLimit     Max force applied by the drive" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_PositionStrength = { "PositionStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, PositionStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_VelocityStrength = { "VelocityStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, VelocityStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, InForceLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_PositionStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_VelocityStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_InForceLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularDriveParams", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PhysicsConstraintComponent_eventSetAngularDriveParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PhysicsConstraintComponent_eventSetAngularDriveParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularDriveParams)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PositionStrength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityStrength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularDriveParams(Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularDriveParams

// Begin Class UPhysicsConstraintComponent Function SetAngularOrientationDrive
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms
	{
		bool bEnableSwingDrive;
		bool bEnableTwistDrive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing \n\x09 *\x09\n\x09 *\x09@param bEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09 *\x09@param bEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetOrientationDriveTwistAndSwing instead." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n    @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n    @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
	static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms*)Obj)->bEnableSwingDrive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms*)Obj)->bEnableTwistDrive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularOrientationDrive", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularOrientationDrive)
{
	P_GET_UBOOL(Z_Param_bEnableSwingDrive);
	P_GET_UBOOL(Z_Param_bEnableTwistDrive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularOrientationDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularOrientationDrive

// Begin Class UPhysicsConstraintComponent Function SetAngularOrientationTarget
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms
	{
		FRotator InPosTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the target orientation for the angular drive. \n\x09 *\x09@param InPosTarget\x09\x09Target orientation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target orientation for the angular drive.\n    @param InPosTarget              Target orientation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget = { "InPosTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosTarget_MetaData), NewProp_InPosTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularOrientationTarget", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularOrientationTarget)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_InPosTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularOrientationTarget(Z_Param_Out_InPosTarget);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularOrientationTarget

// Begin Class UPhysicsConstraintComponent Function SetAngularPlasticity
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularPlasticity_Parms
	{
		bool bAngularPlasticity;
		float AngularPlasticityThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Plasticity properties\n\x09*\x09@param bAngularPlasticity\x09\x09Whether it is possible to reset the target angle from the angular displacement\n\x09*\x09@param AngularPlasticityThreshold\x09""Degrees needed to reset the rest state of the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Plasticity properties\n     @param bAngularPlasticity               Whether it is possible to reset the target angle from the angular displacement\n     @param AngularPlasticityThreshold       Degrees needed to reset the rest state of the joint" },
	};
#endif // WITH_METADATA
	static void NewProp_bAngularPlasticity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularPlasticity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularPlasticityThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::NewProp_bAngularPlasticity_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularPlasticity_Parms*)Obj)->bAngularPlasticity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::NewProp_bAngularPlasticity = { "bAngularPlasticity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularPlasticity_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::NewProp_bAngularPlasticity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::NewProp_AngularPlasticityThreshold = { "AngularPlasticityThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularPlasticity_Parms, AngularPlasticityThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::NewProp_bAngularPlasticity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::NewProp_AngularPlasticityThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularPlasticity", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::PhysicsConstraintComponent_eventSetAngularPlasticity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::PhysicsConstraintComponent_eventSetAngularPlasticity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularPlasticity)
{
	P_GET_UBOOL(Z_Param_bAngularPlasticity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngularPlasticityThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularPlasticity(Z_Param_bAngularPlasticity,Z_Param_AngularPlasticityThreshold);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularPlasticity

// Begin Class UPhysicsConstraintComponent Function SetAngularSwing1Limit
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms
	{
		TEnumAsByte<EAngularConstraintMotion> MotionType;
		float Swing1LimitAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Swing1 Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param Swing1LimitAngle\x09Size of limit in degrees\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Swing1 Motion Type\n     @param ConstraintType   New Constraint Type\n     @param Swing1LimitAngle Size of limit in degrees" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MotionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_MotionType = { "MotionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms, MotionType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(0, nullptr) }; // 2222529340
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms, Swing1LimitAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_MotionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_Swing1LimitAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularSwing1Limit", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularSwing1Limit)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_MotionType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Swing1LimitAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularSwing1Limit(EAngularConstraintMotion(Z_Param_MotionType),Z_Param_Swing1LimitAngle);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularSwing1Limit

// Begin Class UPhysicsConstraintComponent Function SetAngularSwing2Limit
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms
	{
		TEnumAsByte<EAngularConstraintMotion> MotionType;
		float Swing2LimitAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Swing2 Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param Swing2LimitAngle\x09Size of limit in degrees\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Swing2 Motion Type\n     @param ConstraintType   New Constraint Type\n     @param Swing2LimitAngle Size of limit in degrees" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MotionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_MotionType = { "MotionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms, MotionType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(0, nullptr) }; // 2222529340
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms, Swing2LimitAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_MotionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_Swing2LimitAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularSwing2Limit", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularSwing2Limit)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_MotionType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Swing2LimitAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularSwing2Limit(EAngularConstraintMotion(Z_Param_MotionType),Z_Param_Swing2LimitAngle);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularSwing2Limit

// Begin Class UPhysicsConstraintComponent Function SetAngularTwistLimit
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms
	{
		TEnumAsByte<EAngularConstraintMotion> ConstraintType;
		float TwistLimitAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Angular Twist Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param TwistLimitAngle\x09Size of limit in degrees\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Twist Motion Type\n     @param ConstraintType   New Constraint Type\n     @param TwistLimitAngle  Size of limit in degrees" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms, ConstraintType), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(0, nullptr) }; // 2222529340
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms, TwistLimitAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_ConstraintType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_TwistLimitAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularTwistLimit", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularTwistLimit)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TwistLimitAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularTwistLimit(EAngularConstraintMotion(Z_Param_ConstraintType),Z_Param_TwistLimitAngle);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularTwistLimit

// Begin Class UPhysicsConstraintComponent Function SetAngularVelocityDrive
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms
	{
		bool bEnableSwingDrive;
		bool bEnableTwistDrive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetAngularVelocityDriveTwistAndSwing instead." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
	static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms*)Obj)->bEnableSwingDrive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms*)Obj)->bEnableTwistDrive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularVelocityDrive", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularVelocityDrive)
{
	P_GET_UBOOL(Z_Param_bEnableSwingDrive);
	P_GET_UBOOL(Z_Param_bEnableTwistDrive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularVelocityDrive

// Begin Class UPhysicsConstraintComponent Function SetAngularVelocityDriveSLERP
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms
	{
		bool bEnableSLERP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\x09*\n\x09*\x09@param bEnableSLERP     \x09Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\n     @param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSLERP_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms*)Obj)->bEnableSLERP = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP = { "bEnableSLERP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularVelocityDriveSLERP", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularVelocityDriveSLERP)
{
	P_GET_UBOOL(Z_Param_bEnableSLERP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularVelocityDriveSLERP(Z_Param_bEnableSLERP);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularVelocityDriveSLERP

// Begin Class UPhysicsConstraintComponent Function SetAngularVelocityDriveTwistAndSwing
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms
	{
		bool bEnableTwistDrive;
		bool bEnableSwingDrive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\n\x09*\x09@param bEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param bEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
	static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularVelocityDriveTwistAndSwing", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularVelocityDriveTwistAndSwing)
{
	P_GET_UBOOL(Z_Param_bEnableTwistDrive);
	P_GET_UBOOL(Z_Param_bEnableSwingDrive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularVelocityDriveTwistAndSwing(Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularVelocityDriveTwistAndSwing

// Begin Class UPhysicsConstraintComponent Function SetAngularVelocityTarget
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics
{
	struct PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms
	{
		FVector InVelTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the target velocity for the angular drive. \n\x09 *\x09@param InVelTarget\x09\x09Target velocity\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target velocity for the angular drive.\n    @param InVelTarget              Target velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVelTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget = { "InVelTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVelTarget_MetaData), NewProp_InVelTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetAngularVelocityTarget", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetAngularVelocityTarget)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularVelocityTarget(Z_Param_Out_InVelTarget);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetAngularVelocityTarget

// Begin Class UPhysicsConstraintComponent Function SetConstrainedComponents
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics
{
	struct PhysicsConstraintComponent_eventSetConstrainedComponents_Parms
	{
		UPrimitiveComponent* Component1;
		FName BoneName1;
		UPrimitiveComponent* Component2;
		FName BoneName2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Directly specify component to connect. Will update frames based on current position. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Directly specify component to connect. Will update frames based on current position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component1_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component1;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component2;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1 = { "Component1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, Component1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component1_MetaData), NewProp_Component1_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName1 = { "BoneName1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, BoneName1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2 = { "Component2", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, Component2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component2_MetaData), NewProp_Component2_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName2 = { "BoneName2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, BoneName2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetConstrainedComponents", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PhysicsConstraintComponent_eventSetConstrainedComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PhysicsConstraintComponent_eventSetConstrainedComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetConstrainedComponents)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component1);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName1);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component2);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConstrainedComponents(Z_Param_Component1,Z_Param_BoneName1,Z_Param_Component2,Z_Param_BoneName2);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetConstrainedComponents

// Begin Class UPhysicsConstraintComponent Function SetConstraintReferenceFrame
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics
{
	struct PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms
	{
		TEnumAsByte<EConstraintFrame::Type> Frame;
		FTransform RefFrame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Pass in reference frame in. If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint. \n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference frame in. If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Frame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms, Frame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(0, nullptr) }; // 943043407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame = { "RefFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms, RefFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefFrame_MetaData), NewProp_RefFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetConstraintReferenceFrame", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetConstraintReferenceFrame)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Frame);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_RefFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConstraintReferenceFrame(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefFrame);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetConstraintReferenceFrame

// Begin Class UPhysicsConstraintComponent Function SetConstraintReferenceOrientation
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics
{
	struct PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms
	{
		TEnumAsByte<EConstraintFrame::Type> Frame;
		FVector PriAxis;
		FVector SecAxis;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Pass in reference orientation in (maintains reference position). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference orientation in (maintains reference position). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Frame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PriAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, Frame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(0, nullptr) }; // 943043407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis = { "PriAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, PriAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriAxis_MetaData), NewProp_PriAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis = { "SecAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, SecAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecAxis_MetaData), NewProp_SecAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetConstraintReferenceOrientation", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetConstraintReferenceOrientation)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Frame);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PriAxis);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SecAxis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConstraintReferenceOrientation(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_PriAxis,Z_Param_Out_SecAxis);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetConstraintReferenceOrientation

// Begin Class UPhysicsConstraintComponent Function SetConstraintReferencePosition
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics
{
	struct PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms
	{
		TEnumAsByte<EConstraintFrame::Type> Frame;
		FVector RefPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// Pass in reference position in (maintains reference orientation). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference position in (maintains reference orientation). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Frame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RefPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms, Frame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(0, nullptr) }; // 943043407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition = { "RefPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms, RefPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefPosition_MetaData), NewProp_RefPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetConstraintReferencePosition", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetConstraintReferencePosition)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Frame);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RefPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConstraintReferencePosition(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefPosition);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetConstraintReferencePosition

// Begin Class UPhysicsConstraintComponent Function SetContactTransferScale
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics
{
	struct PhysicsConstraintComponent_eventSetContactTransferScale_Parms
	{
		float ContactTransferScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the contact transfer scale properties\n\x09*\x09@param ContactTransferScale\x09\x09   Set the contact transfer scale for the parent of the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the contact transfer scale properties\n     @param ContactTransferScale                Set the contact transfer scale for the parent of the joint" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactTransferScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::NewProp_ContactTransferScale = { "ContactTransferScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetContactTransferScale_Parms, ContactTransferScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::NewProp_ContactTransferScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetContactTransferScale", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::PhysicsConstraintComponent_eventSetContactTransferScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::PhysicsConstraintComponent_eventSetContactTransferScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetContactTransferScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ContactTransferScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContactTransferScale(Z_Param_ContactTransferScale);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetContactTransferScale

// Begin Class UPhysicsConstraintComponent Function SetDisableCollision
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics
{
	struct PhysicsConstraintComponent_eventSetDisableCollision_Parms
	{
		bool bDisableCollision;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// If true, the collision between the two rigid bodies of the constraint will be disabled.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "If true, the collision between the two rigid bodies of the constraint will be disabled." },
	};
#endif // WITH_METADATA
	static void NewProp_bDisableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetDisableCollision_Parms*)Obj)->bDisableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetDisableCollision_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetDisableCollision", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PhysicsConstraintComponent_eventSetDisableCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PhysicsConstraintComponent_eventSetDisableCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetDisableCollision)
{
	P_GET_UBOOL(Z_Param_bDisableCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisableCollision(Z_Param_bDisableCollision);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetDisableCollision

// Begin Class UPhysicsConstraintComponent Function SetLinearBreakable
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearBreakable_Parms
	{
		bool bLinearBreakable;
		float LinearBreakThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Linear Breakable properties\n\x09*\x09@param bLinearBreakable\x09\x09Whether it is possible to break the joint with linear force\n\x09*\x09@param LinearBreakThreshold\x09""Force needed to break the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Linear Breakable properties\n     @param bLinearBreakable         Whether it is possible to break the joint with linear force\n     @param LinearBreakThreshold     Force needed to break the joint" },
	};
#endif // WITH_METADATA
	static void NewProp_bLinearBreakable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetLinearBreakable_Parms*)Obj)->bLinearBreakable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearBreakable_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearBreakable_Parms, LinearBreakThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_LinearBreakThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearBreakable", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PhysicsConstraintComponent_eventSetLinearBreakable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PhysicsConstraintComponent_eventSetLinearBreakable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearBreakable)
{
	P_GET_UBOOL(Z_Param_bLinearBreakable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LinearBreakThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearBreakable(Z_Param_bLinearBreakable,Z_Param_LinearBreakThreshold);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearBreakable

// Begin Class UPhysicsConstraintComponent Function SetLinearDriveParams
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearDriveParams_Parms
	{
		float PositionStrength;
		float VelocityStrength;
		float InForceLimit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the drive params for the linear drive. \n\x09 *\x09@param PositionStrength\x09\x09Positional strength for the drive (stiffness)\n\x09 *\x09@param VelocityStrength \x09Velocity strength of the drive (damping)\n\x09 *\x09@param InForceLimit\x09Max force applied by the drive\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the drive params for the linear drive.\n    @param PositionStrength         Positional strength for the drive (stiffness)\n    @param VelocityStrength         Velocity strength of the drive (damping)\n    @param InForceLimit     Max force applied by the drive" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_PositionStrength = { "PositionStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, PositionStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_VelocityStrength = { "VelocityStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, VelocityStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, InForceLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_PositionStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_VelocityStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_InForceLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearDriveParams", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PhysicsConstraintComponent_eventSetLinearDriveParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PhysicsConstraintComponent_eventSetLinearDriveParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearDriveParams)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PositionStrength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityStrength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearDriveParams(Z_Param_PositionStrength,Z_Param_VelocityStrength,Z_Param_InForceLimit);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearDriveParams

// Begin Class UPhysicsConstraintComponent Function SetLinearPlasticity
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearPlasticity_Parms
	{
		bool bLinearPlasticity;
		float LinearPlasticityThreshold;
		TEnumAsByte<EConstraintPlasticityType> PlasticityType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the Linear Plasticity properties\n\x09*\x09@param bLinearPlasticity\x09\x09    Whether it is possible to reset the target angle from the Linear displacement\n\x09*\x09@param LinearPlasticityThreshold\x09Percent deformation needed to reset the rest length of the joint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Linear Plasticity properties\n     @param bLinearPlasticity                    Whether it is possible to reset the target angle from the Linear displacement\n     @param LinearPlasticityThreshold        Percent deformation needed to reset the rest length of the joint" },
	};
#endif // WITH_METADATA
	static void NewProp_bLinearPlasticity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPlasticity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearPlasticityThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlasticityType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::NewProp_bLinearPlasticity_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetLinearPlasticity_Parms*)Obj)->bLinearPlasticity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::NewProp_bLinearPlasticity = { "bLinearPlasticity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearPlasticity_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::NewProp_bLinearPlasticity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::NewProp_LinearPlasticityThreshold = { "LinearPlasticityThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearPlasticity_Parms, LinearPlasticityThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::NewProp_PlasticityType = { "PlasticityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearPlasticity_Parms, PlasticityType), Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType, METADATA_PARAMS(0, nullptr) }; // 3475654961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::NewProp_bLinearPlasticity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::NewProp_LinearPlasticityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::NewProp_PlasticityType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearPlasticity", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::PhysicsConstraintComponent_eventSetLinearPlasticity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::PhysicsConstraintComponent_eventSetLinearPlasticity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearPlasticity)
{
	P_GET_UBOOL(Z_Param_bLinearPlasticity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LinearPlasticityThreshold);
	P_GET_PROPERTY(FByteProperty,Z_Param_PlasticityType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearPlasticity(Z_Param_bLinearPlasticity,Z_Param_LinearPlasticityThreshold,EConstraintPlasticityType(Z_Param_PlasticityType));
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearPlasticity

// Begin Class UPhysicsConstraintComponent Function SetLinearPositionDrive
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms
	{
		bool bEnableDriveX;
		bool bEnableDriveY;
		bool bEnableDriveZ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables linear position drive \n\x09 *\x09\n\x09 *\x09@param bEnableDriveX\x09Indicates whether the drive for the X-Axis should be enabled\n\x09 *\x09@param bEnableDriveY\x09Indicates whether the drive for the Y-Axis should be enabled\n\x09 *\x09@param bEnableDriveZ\x09Indicates whether the drive for the Z-Axis should be enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables linear position drive\n\n    @param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled\n    @param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled\n    @param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDriveX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX;
	static void NewProp_bEnableDriveY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY;
	static void NewProp_bEnableDriveZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX = { "bEnableDriveX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY = { "bEnableDriveY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ = { "bEnableDriveZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearPositionDrive", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearPositionDrive)
{
	P_GET_UBOOL(Z_Param_bEnableDriveX);
	P_GET_UBOOL(Z_Param_bEnableDriveY);
	P_GET_UBOOL(Z_Param_bEnableDriveZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearPositionDrive(Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearPositionDrive

// Begin Class UPhysicsConstraintComponent Function SetLinearPositionTarget
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms
	{
		FVector InPosTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the target position for the linear drive. \n\x09 *\x09@param InPosTarget\x09\x09Target position\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target position for the linear drive.\n    @param InPosTarget              Target position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget = { "InPosTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPosTarget_MetaData), NewProp_InPosTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearPositionTarget", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearPositionTarget)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearPositionTarget(Z_Param_Out_InPosTarget);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearPositionTarget

// Begin Class UPhysicsConstraintComponent Function SetLinearVelocityDrive
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms
	{
		bool bEnableDriveX;
		bool bEnableDriveY;
		bool bEnableDriveZ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables linear position drive \n\x09 *\x09\n\x09 *\x09@param bEnableDriveX\x09Indicates whether the drive for the X-Axis should be enabled\n\x09 *\x09@param bEnableDriveY\x09Indicates whether the drive for the Y-Axis should be enabled\n\x09 *\x09@param bEnableDriveZ\x09Indicates whether the drive for the Z-Axis should be enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables linear position drive\n\n    @param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled\n    @param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled\n    @param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDriveX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX;
	static void NewProp_bEnableDriveY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY;
	static void NewProp_bEnableDriveZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX = { "bEnableDriveX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY = { "bEnableDriveY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ = { "bEnableDriveZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearVelocityDrive", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearVelocityDrive)
{
	P_GET_UBOOL(Z_Param_bEnableDriveX);
	P_GET_UBOOL(Z_Param_bEnableDriveY);
	P_GET_UBOOL(Z_Param_bEnableDriveZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearVelocityDrive(Z_Param_bEnableDriveX,Z_Param_bEnableDriveY,Z_Param_bEnableDriveZ);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearVelocityDrive

// Begin Class UPhysicsConstraintComponent Function SetLinearVelocityTarget
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms
	{
		FVector InVelTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the target velocity for the linear drive. \n\x09 *\x09@param InVelTarget\x09\x09Target velocity\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target velocity for the linear drive.\n    @param InVelTarget              Target velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InVelTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget = { "InVelTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVelTarget_MetaData), NewProp_InVelTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearVelocityTarget", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearVelocityTarget)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearVelocityTarget(Z_Param_Out_InVelTarget);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearVelocityTarget

// Begin Class UPhysicsConstraintComponent Function SetLinearXLimit
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearXLimit_Parms
	{
		TEnumAsByte<ELinearConstraintMotion> ConstraintType;
		float LimitSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the LinearX Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param LimitSize\x09\x09Size of limit\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearX Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearXLimit_Parms, ConstraintType), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(0, nullptr) }; // 2172304196
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_LimitSize = { "LimitSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearXLimit_Parms, LimitSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_ConstraintType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_LimitSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearXLimit", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PhysicsConstraintComponent_eventSetLinearXLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PhysicsConstraintComponent_eventSetLinearXLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearXLimit)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LimitSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearXLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearXLimit

// Begin Class UPhysicsConstraintComponent Function SetLinearYLimit
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearYLimit_Parms
	{
		TEnumAsByte<ELinearConstraintMotion> ConstraintType;
		float LimitSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the LinearY Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param LimitSize\x09\x09Size of limit\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearY Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearYLimit_Parms, ConstraintType), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(0, nullptr) }; // 2172304196
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_LimitSize = { "LimitSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearYLimit_Parms, LimitSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_ConstraintType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_LimitSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearYLimit", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PhysicsConstraintComponent_eventSetLinearYLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PhysicsConstraintComponent_eventSetLinearYLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearYLimit)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LimitSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearYLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearYLimit

// Begin Class UPhysicsConstraintComponent Function SetLinearZLimit
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics
{
	struct PhysicsConstraintComponent_eventSetLinearZLimit_Parms
	{
		TEnumAsByte<ELinearConstraintMotion> ConstraintType;
		float LimitSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Sets the LinearZ Motion Type\n\x09*\x09@param ConstraintType\x09New Constraint Type\n\x09*\x09@param LimitSize\x09\x09Size of limit\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearZ Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_ConstraintType = { "ConstraintType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearZLimit_Parms, ConstraintType), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(0, nullptr) }; // 2172304196
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_LimitSize = { "LimitSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearZLimit_Parms, LimitSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_ConstraintType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_LimitSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetLinearZLimit", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PhysicsConstraintComponent_eventSetLinearZLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PhysicsConstraintComponent_eventSetLinearZLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetLinearZLimit)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LimitSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearZLimit(ELinearConstraintMotion(Z_Param_ConstraintType),Z_Param_LimitSize);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetLinearZLimit

// Begin Class UPhysicsConstraintComponent Function SetOrientationDriveSLERP
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics
{
	struct PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms
	{
		bool bEnableSLERP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\x09*\n\x09*\x09@param bEnableSLERP     \x09Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\n     @param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSLERP_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms*)Obj)->bEnableSLERP = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP = { "bEnableSLERP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetOrientationDriveSLERP", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetOrientationDriveSLERP)
{
	P_GET_UBOOL(Z_Param_bEnableSLERP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrientationDriveSLERP(Z_Param_bEnableSLERP);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetOrientationDriveSLERP

// Begin Class UPhysicsConstraintComponent Function SetOrientationDriveTwistAndSwing
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics
{
	struct PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms
	{
		bool bEnableTwistDrive;
		bool bEnableSwingDrive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/** Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\n\x09*\x09@param bEnableSwingDrive\x09Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*\x09@param bEnableTwistDrive\x09Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
	static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetOrientationDriveTwistAndSwing", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetOrientationDriveTwistAndSwing)
{
	P_GET_UBOOL(Z_Param_bEnableTwistDrive);
	P_GET_UBOOL(Z_Param_bEnableSwingDrive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrientationDriveTwistAndSwing(Z_Param_bEnableTwistDrive,Z_Param_bEnableSwingDrive);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetOrientationDriveTwistAndSwing

// Begin Class UPhysicsConstraintComponent Function SetProjectionEnabled
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics
{
	struct PhysicsConstraintComponent_eventSetProjectionEnabled_Parms
	{
		bool bProjectionEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "// If true, joint projection is enabled. Projection is a semi-physics post-solve correction for fixing small errors, and a teleport for fixing larger errors. See SetProjectionParams\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "If true, joint projection is enabled. Projection is a semi-physics post-solve correction for fixing small errors, and a teleport for fixing larger errors. See SetProjectionParams" },
	};
#endif // WITH_METADATA
	static void NewProp_bProjectionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectionEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::NewProp_bProjectionEnabled_SetBit(void* Obj)
{
	((PhysicsConstraintComponent_eventSetProjectionEnabled_Parms*)Obj)->bProjectionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::NewProp_bProjectionEnabled = { "bProjectionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsConstraintComponent_eventSetProjectionEnabled_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::NewProp_bProjectionEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::NewProp_bProjectionEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetProjectionEnabled", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::PhysicsConstraintComponent_eventSetProjectionEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::PhysicsConstraintComponent_eventSetProjectionEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetProjectionEnabled)
{
	P_GET_UBOOL(Z_Param_bProjectionEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProjectionEnabled(Z_Param_bProjectionEnabled);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetProjectionEnabled

// Begin Class UPhysicsConstraintComponent Function SetProjectionParams
struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics
{
	struct PhysicsConstraintComponent_eventSetProjectionParams_Parms
	{
		float ProjectionLinearAlpha;
		float ProjectionAngularAlpha;
		float ProjectionLinearTolerance;
		float ProjectionAngularTolerance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "Comment", "/**\n\x09* Set the projection settings for use when projection is enabled. See SetProjectionEnabled.\n\x09* For ragdolls you usually require that ProjectionLinearAlpha and ProjectionAngularAlpha be zero. They are most useful for cosmetic chains etc. ProjectionLinearTolerance and ProjectionAngularTolerance\n\x09* are emergency error recovery settings and should only rarely affect the simulation. If the simulation is significantly affected by the Tolerance settings, it likely indicates a setup stability issue.\n\x09* \n\x09* @param ProjectionLinearAlpha Controls the semi-physical correction of linear error remaining after the joint solve. Will add energy into the system. Best for joint chains connected to a kinematic.\n\x09* @param ProjectionAngularAlpha Controls the semi-physical correction of angular error remaining after the joint solve. Will add energy into the system. Best for joint chains connected to a kinematic.\n\x09* @param ProjectionLinearTolerance Linear errors above this will be corrected with a non-physical teleport.\n\x09* @param ProjectionAngularTolerance Angular errors above this will be corrected with a non-physical teleport.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Set the projection settings for use when projection is enabled. See SetProjectionEnabled.\nFor ragdolls you usually require that ProjectionLinearAlpha and ProjectionAngularAlpha be zero. They are most useful for cosmetic chains etc. ProjectionLinearTolerance and ProjectionAngularTolerance\nare emergency error recovery settings and should only rarely affect the simulation. If the simulation is significantly affected by the Tolerance settings, it likely indicates a setup stability issue.\n\n@param ProjectionLinearAlpha Controls the semi-physical correction of linear error remaining after the joint solve. Will add energy into the system. Best for joint chains connected to a kinematic.\n@param ProjectionAngularAlpha Controls the semi-physical correction of angular error remaining after the joint solve. Will add energy into the system. Best for joint chains connected to a kinematic.\n@param ProjectionLinearTolerance Linear errors above this will be corrected with a non-physical teleport.\n@param ProjectionAngularTolerance Angular errors above this will be corrected with a non-physical teleport." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::NewProp_ProjectionLinearAlpha = { "ProjectionLinearAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetProjectionParams_Parms, ProjectionLinearAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::NewProp_ProjectionAngularAlpha = { "ProjectionAngularAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetProjectionParams_Parms, ProjectionAngularAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::NewProp_ProjectionLinearTolerance = { "ProjectionLinearTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetProjectionParams_Parms, ProjectionLinearTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::NewProp_ProjectionAngularTolerance = { "ProjectionAngularTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetProjectionParams_Parms, ProjectionAngularTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::NewProp_ProjectionLinearAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::NewProp_ProjectionAngularAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::NewProp_ProjectionLinearTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::NewProp_ProjectionAngularTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, nullptr, "SetProjectionParams", nullptr, nullptr, Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::PhysicsConstraintComponent_eventSetProjectionParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::PhysicsConstraintComponent_eventSetProjectionParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsConstraintComponent::execSetProjectionParams)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectionLinearAlpha);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectionAngularAlpha);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectionLinearTolerance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ProjectionAngularTolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProjectionParams(Z_Param_ProjectionLinearAlpha,Z_Param_ProjectionAngularAlpha,Z_Param_ProjectionLinearTolerance,Z_Param_ProjectionAngularTolerance);
	P_NATIVE_END;
}
// End Class UPhysicsConstraintComponent Function SetProjectionParams

// Begin Class UPhysicsConstraintComponent
void UPhysicsConstraintComponent::StaticRegisterNativesUPhysicsConstraintComponent()
{
	UClass* Class = UPhysicsConstraintComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakConstraint", &UPhysicsConstraintComponent::execBreakConstraint },
		{ "GetConstrainedComponents", &UPhysicsConstraintComponent::execGetConstrainedComponents },
		{ "GetConstraint", &UPhysicsConstraintComponent::execGetConstraint },
		{ "GetConstraintForce", &UPhysicsConstraintComponent::execGetConstraintForce },
		{ "GetCurrentSwing1", &UPhysicsConstraintComponent::execGetCurrentSwing1 },
		{ "GetCurrentSwing2", &UPhysicsConstraintComponent::execGetCurrentSwing2 },
		{ "GetCurrentTwist", &UPhysicsConstraintComponent::execGetCurrentTwist },
		{ "IsBroken", &UPhysicsConstraintComponent::execIsBroken },
		{ "IsProjectionEnabled", &UPhysicsConstraintComponent::execIsProjectionEnabled },
		{ "SetAngularBreakable", &UPhysicsConstraintComponent::execSetAngularBreakable },
		{ "SetAngularDriveMode", &UPhysicsConstraintComponent::execSetAngularDriveMode },
		{ "SetAngularDriveParams", &UPhysicsConstraintComponent::execSetAngularDriveParams },
		{ "SetAngularOrientationDrive", &UPhysicsConstraintComponent::execSetAngularOrientationDrive },
		{ "SetAngularOrientationTarget", &UPhysicsConstraintComponent::execSetAngularOrientationTarget },
		{ "SetAngularPlasticity", &UPhysicsConstraintComponent::execSetAngularPlasticity },
		{ "SetAngularSwing1Limit", &UPhysicsConstraintComponent::execSetAngularSwing1Limit },
		{ "SetAngularSwing2Limit", &UPhysicsConstraintComponent::execSetAngularSwing2Limit },
		{ "SetAngularTwistLimit", &UPhysicsConstraintComponent::execSetAngularTwistLimit },
		{ "SetAngularVelocityDrive", &UPhysicsConstraintComponent::execSetAngularVelocityDrive },
		{ "SetAngularVelocityDriveSLERP", &UPhysicsConstraintComponent::execSetAngularVelocityDriveSLERP },
		{ "SetAngularVelocityDriveTwistAndSwing", &UPhysicsConstraintComponent::execSetAngularVelocityDriveTwistAndSwing },
		{ "SetAngularVelocityTarget", &UPhysicsConstraintComponent::execSetAngularVelocityTarget },
		{ "SetConstrainedComponents", &UPhysicsConstraintComponent::execSetConstrainedComponents },
		{ "SetConstraintReferenceFrame", &UPhysicsConstraintComponent::execSetConstraintReferenceFrame },
		{ "SetConstraintReferenceOrientation", &UPhysicsConstraintComponent::execSetConstraintReferenceOrientation },
		{ "SetConstraintReferencePosition", &UPhysicsConstraintComponent::execSetConstraintReferencePosition },
		{ "SetContactTransferScale", &UPhysicsConstraintComponent::execSetContactTransferScale },
		{ "SetDisableCollision", &UPhysicsConstraintComponent::execSetDisableCollision },
		{ "SetLinearBreakable", &UPhysicsConstraintComponent::execSetLinearBreakable },
		{ "SetLinearDriveParams", &UPhysicsConstraintComponent::execSetLinearDriveParams },
		{ "SetLinearPlasticity", &UPhysicsConstraintComponent::execSetLinearPlasticity },
		{ "SetLinearPositionDrive", &UPhysicsConstraintComponent::execSetLinearPositionDrive },
		{ "SetLinearPositionTarget", &UPhysicsConstraintComponent::execSetLinearPositionTarget },
		{ "SetLinearVelocityDrive", &UPhysicsConstraintComponent::execSetLinearVelocityDrive },
		{ "SetLinearVelocityTarget", &UPhysicsConstraintComponent::execSetLinearVelocityTarget },
		{ "SetLinearXLimit", &UPhysicsConstraintComponent::execSetLinearXLimit },
		{ "SetLinearYLimit", &UPhysicsConstraintComponent::execSetLinearYLimit },
		{ "SetLinearZLimit", &UPhysicsConstraintComponent::execSetLinearZLimit },
		{ "SetOrientationDriveSLERP", &UPhysicsConstraintComponent::execSetOrientationDriveSLERP },
		{ "SetOrientationDriveTwistAndSwing", &UPhysicsConstraintComponent::execSetOrientationDriveTwistAndSwing },
		{ "SetProjectionEnabled", &UPhysicsConstraintComponent::execSetProjectionEnabled },
		{ "SetProjectionParams", &UPhysicsConstraintComponent::execSetProjectionParams },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsConstraintComponent);
UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister()
{
	return UPhysicsConstraintComponent::StaticClass();
}
struct Z_Construct_UClass_UPhysicsConstraintComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n *\x09This is effectively a joint that allows you to connect 2 rigid bodies together. You can create different types of joints using the various parameters of this component.\n */" },
		{ "HideCategories", "Activation Components|Activation Physics Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ShowCategories", "Physics|Components|PhysicsConstraint" },
		{ "ToolTip", "This is effectively a joint that allows you to connect 2 rigid bodies together. You can create different types of joints using the various parameters of this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Pointer to first Actor to constrain.  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pointer to first Actor to constrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** \n\x09 *\x09Name of first component property to constrain. If Actor1 is NULL, will look within Owner.\n\x09 *\x09If this is NULL, will use RootComponent of Actor1\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Name of first component property to constrain. If Actor1 is NULL, will look within Owner.\nIf this is NULL, will use RootComponent of Actor1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Pointer to second Actor to constrain. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pointer to second Actor to constrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** \n\x09 *\x09Name of second component property to constrain. If Actor2 is NULL, will look within Owner. \n\x09 *\x09If this is NULL, will use RootComponent of Actor2\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Name of second component property to constrain. If Actor2 is NULL, will look within Owner.\nIf this is NULL, will use RootComponent of Actor2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConstraintBroken_MetaData[] = {
		{ "Comment", "/** Notification when constraint is broken. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Notification when constraint is broken." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlasticDeformation_MetaData[] = {
		{ "Comment", "/** Notification when constraint plasticity drive target changes. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Notification when constraint plasticity drive target changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintInstance_MetaData[] = {
		{ "Category", "ConstraintComponent" },
		{ "Comment", "/** All constraint settings */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "All constraint settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentName1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentName2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstraintSetup;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintBroken;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlasticDeformation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint, "BreakConstraint" }, // 3507277278
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstrainedComponents, "GetConstrainedComponents" }, // 2421921856
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraint, "GetConstraint" }, // 280683735
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce, "GetConstraintForce" }, // 1396842402
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1, "GetCurrentSwing1" }, // 3349422663
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2, "GetCurrentSwing2" }, // 1296771549
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist, "GetCurrentTwist" }, // 2665820769
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken, "IsBroken" }, // 2252463299
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_IsProjectionEnabled, "IsProjectionEnabled" }, // 4250121794
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable, "SetAngularBreakable" }, // 3403777388
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode, "SetAngularDriveMode" }, // 481459394
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams, "SetAngularDriveParams" }, // 711717264
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive, "SetAngularOrientationDrive" }, // 3066394027
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget, "SetAngularOrientationTarget" }, // 1032239202
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularPlasticity, "SetAngularPlasticity" }, // 2426503095
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit, "SetAngularSwing1Limit" }, // 2624798936
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit, "SetAngularSwing2Limit" }, // 520209620
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit, "SetAngularTwistLimit" }, // 3986478266
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive, "SetAngularVelocityDrive" }, // 3037214364
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP, "SetAngularVelocityDriveSLERP" }, // 369684138
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing, "SetAngularVelocityDriveTwistAndSwing" }, // 2088031905
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget, "SetAngularVelocityTarget" }, // 2996855446
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents, "SetConstrainedComponents" }, // 2655292920
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame, "SetConstraintReferenceFrame" }, // 3284248358
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation, "SetConstraintReferenceOrientation" }, // 3059577753
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition, "SetConstraintReferencePosition" }, // 1374058643
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetContactTransferScale, "SetContactTransferScale" }, // 2694292224
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision, "SetDisableCollision" }, // 19264162
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable, "SetLinearBreakable" }, // 1029766871
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams, "SetLinearDriveParams" }, // 3442781740
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPlasticity, "SetLinearPlasticity" }, // 4232580959
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive, "SetLinearPositionDrive" }, // 3702657518
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget, "SetLinearPositionTarget" }, // 2158719049
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive, "SetLinearVelocityDrive" }, // 925794720
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget, "SetLinearVelocityTarget" }, // 400899708
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit, "SetLinearXLimit" }, // 352377027
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit, "SetLinearYLimit" }, // 2190271320
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit, "SetLinearZLimit" }, // 3836651279
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP, "SetOrientationDriveSLERP" }, // 4038924146
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing, "SetOrientationDriveTwistAndSwing" }, // 1706430293
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionEnabled, "SetProjectionEnabled" }, // 964091345
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetProjectionParams, "SetProjectionParams" }, // 3322255478
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsConstraintComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1 = { "ConstraintActor1", nullptr, (EPropertyFlags)0x0114000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintActor1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintActor1_MetaData), NewProp_ConstraintActor1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1 = { "ComponentName1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ComponentName1), Z_Construct_UScriptStruct_FConstrainComponentPropName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName1_MetaData), NewProp_ComponentName1_MetaData) }; // 2390254272
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2 = { "ConstraintActor2", nullptr, (EPropertyFlags)0x0114000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintActor2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintActor2_MetaData), NewProp_ConstraintActor2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2 = { "ComponentName2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ComponentName2), Z_Construct_UScriptStruct_FConstrainComponentPropName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName2_MetaData), NewProp_ComponentName2_MetaData) }; // 2390254272
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0116000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintSetup_DEPRECATED), Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintSetup_MetaData), NewProp_ConstraintSetup_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken = { "OnConstraintBroken", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, OnConstraintBroken), Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConstraintBroken_MetaData), NewProp_OnConstraintBroken_MetaData) }; // 3235042497
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnPlasticDeformation = { "OnPlasticDeformation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, OnPlasticDeformation), Z_Construct_UDelegateFunction_Engine_PlasticDeformationEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlasticDeformation_MetaData), NewProp_OnPlasticDeformation_MetaData) }; // 2351818259
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance = { "ConstraintInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintInstance), Z_Construct_UScriptStruct_FConstraintInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstraintInstance_MetaData), NewProp_ConstraintInstance_MetaData) }; // 2267981824
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnPlasticDeformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsConstraintComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::ClassParams = {
	&UPhysicsConstraintComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsConstraintComponent()
{
	if (!Z_Registration_Info_UClass_UPhysicsConstraintComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsConstraintComponent.OuterSingleton, Z_Construct_UClass_UPhysicsConstraintComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsConstraintComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsConstraintComponent>()
{
	return UPhysicsConstraintComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsConstraintComponent);
UPhysicsConstraintComponent::~UPhysicsConstraintComponent() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsConstraintComponent)
#endif // WITH_EDITORONLY_DATA
// End Class UPhysicsConstraintComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsConstraintComponent, UPhysicsConstraintComponent::StaticClass, TEXT("UPhysicsConstraintComponent"), &Z_Registration_Info_UClass_UPhysicsConstraintComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsConstraintComponent), 1315590867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_3611051308(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
