// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemComponent.h"
#include "Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemComponent() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsType();
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeBase_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystem_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaData_NoRegister();
FIELDSYSTEMENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFieldObjectCommands();
UPackage* Z_Construct_UPackage__Script_FieldSystemEngine();
// End Cross Module References

// Begin Class UFieldSystemComponent Function AddFieldCommand
struct Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics
{
	struct FieldSystemComponent_eventAddFieldCommand_Parms
	{
		bool Enabled;
		TEnumAsByte<EFieldPhysicsType> Target;
		UFieldSystemMetaData* MetaData;
		UFieldNodeBase* Field;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  AddConstructionField\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a generic evaluation of a user defined field network. This command will be used in a\n\x09*    construction script to setup some particles properties (anchors...). See documentation,\n\x09*    for examples of how to recreate variations of the above generic\n\x09*    fields using field networks\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Target Type of field supported by the solver.\n\x09*    @param MetaData Meta data used to assist in evaluation\n\x09*    @param Field Base evaluation node for the field network.\n\x09*\n\x09*/" },
		{ "DisplayName", "Add Construction Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "AddConstructionField\n  This function will dispatch a command to the physics thread to apply\n  a generic evaluation of a user defined field network. This command will be used in a\n  construction script to setup some particles properties (anchors...). See documentation,\n  for examples of how to recreate variations of the above generic\n  fields using field networks\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Target Type of field supported by the solver.\n  @param MetaData Meta data used to assist in evaluation\n  @param Field Base evaluation node for the field network." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "DisplayName", "Physics Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "DisplayName", "Meta Data" },
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
		{ "DisplayName", "Field Node" },
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventAddFieldCommand_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventAddFieldCommand_Parms), &Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddFieldCommand_Parms, Target), Z_Construct_UEnum_Chaos_EFieldPhysicsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 2249520678
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddFieldCommand_Parms, MetaData), Z_Construct_UClass_UFieldSystemMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddFieldCommand_Parms, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Field_MetaData), NewProp_Field_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::NewProp_Field,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "AddFieldCommand", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::FieldSystemComponent_eventAddFieldCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::FieldSystemComponent_eventAddFieldCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execAddFieldCommand)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_PROPERTY(FByteProperty,Z_Param_Target);
	P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData);
	P_GET_OBJECT(UFieldNodeBase,Z_Param_Field);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFieldCommand(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function AddFieldCommand

// Begin Class UFieldSystemComponent Function AddPersistentField
struct Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics
{
	struct FieldSystemComponent_eventAddPersistentField_Parms
	{
		bool Enabled;
		TEnumAsByte<EFieldPhysicsType> Target;
		UFieldSystemMetaData* MetaData;
		UFieldNodeBase* Field;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  AddPersistentField\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a generic evaluation of a user defined field network. This command will be persistent in time and will live until\n\x09*    the component is destroyed or until the RemovePersistenFields function is called. See documentation,\n\x09*    for examples of how to recreate variations of the above generic\n\x09*    fields using field networks\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Target Type of field supported by the solver.\n\x09*    @param MetaData Meta data used to assist in evaluation\n\x09*    @param Field Base evaluation node for the field network.\n\x09*\n\x09*/" },
		{ "DisplayName", "Add Persistent Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "AddPersistentField\n  This function will dispatch a command to the physics thread to apply\n  a generic evaluation of a user defined field network. This command will be persistent in time and will live until\n  the component is destroyed or until the RemovePersistenFields function is called. See documentation,\n  for examples of how to recreate variations of the above generic\n  fields using field networks\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Target Type of field supported by the solver.\n  @param MetaData Meta data used to assist in evaluation\n  @param Field Base evaluation node for the field network." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "DisplayName", "Physics Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "DisplayName", "Meta Data" },
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
		{ "DisplayName", "Field Node" },
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventAddPersistentField_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventAddPersistentField_Parms), &Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddPersistentField_Parms, Target), Z_Construct_UEnum_Chaos_EFieldPhysicsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 2249520678
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddPersistentField_Parms, MetaData), Z_Construct_UClass_UFieldSystemMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventAddPersistentField_Parms, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Field_MetaData), NewProp_Field_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::NewProp_Field,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "AddPersistentField", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::FieldSystemComponent_eventAddPersistentField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::FieldSystemComponent_eventAddPersistentField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execAddPersistentField)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_PROPERTY(FByteProperty,Z_Param_Target);
	P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData);
	P_GET_OBJECT(UFieldNodeBase,Z_Param_Field);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPersistentField(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function AddPersistentField

// Begin Class UFieldSystemComponent Function ApplyLinearForce
struct Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics
{
	struct FieldSystemComponent_eventApplyLinearForce_Parms
	{
		bool Enabled;
		FVector Direction;
		float Magnitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyUniformForce\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a uniform linear force on each particle within the simulation.\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Direction The direction of the linear force\n\x09*    @param Magnitude The size of the linear force.\n\x09*\n\x09*/" },
		{ "DisplayName", "Apply Uniform Force" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyUniformForce\n  This function will dispatch a command to the physics thread to apply\n  a uniform linear force on each particle within the simulation.\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Direction The direction of the linear force\n  @param Magnitude The size of the linear force." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "DisplayName", "Uniform Direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventApplyLinearForce_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyLinearForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyLinearForce_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyLinearForce_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyLinearForce", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::FieldSystemComponent_eventApplyLinearForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::FieldSystemComponent_eventApplyLinearForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execApplyLinearForce)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyLinearForce(Z_Param_Enabled,Z_Param_Direction,Z_Param_Magnitude);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function ApplyLinearForce

// Begin Class UFieldSystemComponent Function ApplyPhysicsField
struct Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics
{
	struct FieldSystemComponent_eventApplyPhysicsField_Parms
	{
		bool Enabled;
		TEnumAsByte<EFieldPhysicsType> Target;
		UFieldSystemMetaData* MetaData;
		UFieldNodeBase* Field;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  AddTransientField\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a generic evaluation of a user defined transient field network. See documentation,\n\x09*    for examples of how to recreate variations of the above generic\n\x09*    fields using field networks\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Target Type of field supported by the solver.\n\x09*    @param MetaData Meta data used to assist in evaluation\n\x09*    @param Field Base evaluation node for the field network.\n\x09*\n\x09*/" },
		{ "DisplayName", "Add Transient Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "AddTransientField\n  This function will dispatch a command to the physics thread to apply\n  a generic evaluation of a user defined transient field network. See documentation,\n  for examples of how to recreate variations of the above generic\n  fields using field networks\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Target Type of field supported by the solver.\n  @param MetaData Meta data used to assist in evaluation\n  @param Field Base evaluation node for the field network." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "DisplayName", "Physics Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "DisplayName", "Meta Data" },
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
		{ "DisplayName", "Field Node" },
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventApplyPhysicsField_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyPhysicsField_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyPhysicsField_Parms, Target), Z_Construct_UEnum_Chaos_EFieldPhysicsType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) }; // 2249520678
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyPhysicsField_Parms, MetaData), Z_Construct_UClass_UFieldSystemMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyPhysicsField_Parms, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Field_MetaData), NewProp_Field_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::NewProp_Field,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyPhysicsField", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::FieldSystemComponent_eventApplyPhysicsField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::FieldSystemComponent_eventApplyPhysicsField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execApplyPhysicsField)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_PROPERTY(FByteProperty,Z_Param_Target);
	P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData);
	P_GET_OBJECT(UFieldNodeBase,Z_Param_Field);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPhysicsField(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function ApplyPhysicsField

// Begin Class UFieldSystemComponent Function ApplyRadialForce
struct Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics
{
	struct FieldSystemComponent_eventApplyRadialForce_Parms
	{
		bool Enabled;
		FVector Position;
		float Magnitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyRadialForce\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a linear force that points away from a position.\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Position The origin point of the force\n\x09*    @param Magnitude The size of the linear force.\n\x09*\n\x09*/" },
		{ "DisplayName", "Apply Radial Force" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyRadialForce\n  This function will dispatch a command to the physics thread to apply\n  a linear force that points away from a position.\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Position The origin point of the force\n  @param Magnitude The size of the linear force." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventApplyRadialForce_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyRadialForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialForce_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyRadialForce", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::FieldSystemComponent_eventApplyRadialForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::FieldSystemComponent_eventApplyRadialForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execApplyRadialForce)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyRadialForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Magnitude);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function ApplyRadialForce

// Begin Class UFieldSystemComponent Function ApplyRadialVectorFalloffForce
struct Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics
{
	struct FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms
	{
		bool Enabled;
		FVector Position;
		float Radius;
		float Magnitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  FalloffRadialForce\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a linear force from a position in space. The force vector is weaker as\n\x09*    it moves away from the center.\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Position The origin point of the force\n\x09*    @param Radius Radial influence from the position, positions further away are weaker.\n\x09*    @param Magnitude The size of the linear force.\n\x09*\n\x09*/" },
		{ "DisplayName", "Falloff Radial Force" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "FalloffRadialForce\n  This function will dispatch a command to the physics thread to apply\n  a linear force from a position in space. The force vector is weaker as\n  it moves away from the center.\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Position The origin point of the force\n  @param Radius Radial influence from the position, positions further away are weaker.\n  @param Magnitude The size of the linear force." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Falloff Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyRadialVectorFalloffForce", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::FieldSystemComponent_eventApplyRadialVectorFalloffForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execApplyRadialVectorFalloffForce)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyRadialVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function ApplyRadialVectorFalloffForce

// Begin Class UFieldSystemComponent Function ApplyStayDynamicField
struct Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics
{
	struct FieldSystemComponent_eventApplyStayDynamicField_Parms
	{
		bool Enabled;
		FVector Position;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  SetDynamicState\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a kinematic to dynamic state change for the particles within the field.\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Position The location of the command\n\x09*    @param Radius Radial influence from the position\n\x09*\n\x09*/" },
		{ "DisplayName", "Set Dynamic State" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "SetDynamicState\n  This function will dispatch a command to the physics thread to apply\n  a kinematic to dynamic state change for the particles within the field.\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Position The location of the command\n  @param Radius Radial influence from the position" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Field Radius" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventApplyStayDynamicField_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyStayDynamicField_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStayDynamicField_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStayDynamicField_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyStayDynamicField", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::FieldSystemComponent_eventApplyStayDynamicField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::FieldSystemComponent_eventApplyStayDynamicField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execApplyStayDynamicField)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyStayDynamicField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function ApplyStayDynamicField

// Begin Class UFieldSystemComponent Function ApplyStrainField
struct Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics
{
	struct FieldSystemComponent_eventApplyStrainField_Parms
	{
		bool Enabled;
		FVector Position;
		float Radius;
		float Magnitude;
		int32 Iterations;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  ApplyExternalStran\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a strain field on a clustered set of geometry. This is used to trigger a\n\x09*    breaking event within the solver.\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Position The origin point of the force\n\x09*    @param Radius Radial influence from the position, positions further away are weaker.\n\x09*    @param Magnitude The size of the linear force.\n\x09*    @param Iterations Levels of evaluation into the cluster hierarchy.\n\x09*\n\x09*/" },
		{ "DisplayName", "Apply External Strain" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "ApplyExternalStran\n  This function will dispatch a command to the physics thread to apply\n  a strain field on a clustered set of geometry. This is used to trigger a\n  breaking event within the solver.\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Position The origin point of the force\n  @param Radius Radial influence from the position, positions further away are weaker.\n  @param Magnitude The size of the linear force.\n  @param Iterations Levels of evaluation into the cluster hierarchy." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Falloff Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "DisplayName", "Cluster Levels" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventApplyStrainField_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyStrainField_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStrainField_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStrainField_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStrainField_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyStrainField_Parms, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::NewProp_Iterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyStrainField", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::FieldSystemComponent_eventApplyStrainField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::FieldSystemComponent_eventApplyStrainField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execApplyStrainField)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_GET_PROPERTY(FIntProperty,Z_Param_Iterations);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyStrainField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude,Z_Param_Iterations);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function ApplyStrainField

// Begin Class UFieldSystemComponent Function ApplyUniformVectorFalloffForce
struct Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics
{
	struct FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms
	{
		bool Enabled;
		FVector Position;
		FVector Direction;
		float Radius;
		float Magnitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  FalloffUniformForce\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a linear force in a uniform direction. The force vector is weaker as\n\x09*    it moves away from the center.\n\x09*\n\x09*    @param Enabled Is this force enabled for evaluation.\n\x09*    @param Position The origin point of the force\n\x09*    @param Direction The direction of the linear force\n\x09*    @param Radius Radial influence from the position, positions further away are weaker.\n\x09*    @param Magnitude The size of the linear force.\n\x09*\n\x09*/" },
		{ "DisplayName", "Falloff Uniform Force" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "FalloffUniformForce\n  This function will dispatch a command to the physics thread to apply\n  a linear force in a uniform direction. The force vector is weaker as\n  it moves away from the center.\n\n  @param Enabled Is this force enabled for evaluation.\n  @param Position The origin point of the force\n  @param Direction The direction of the linear force\n  @param Radius Radial influence from the position, positions further away are weaker.\n  @param Magnitude The size of the linear force." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "DisplayName", "Uniform Direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Falloff Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms), &Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ApplyUniformVectorFalloffForce", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::FieldSystemComponent_eventApplyUniformVectorFalloffForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execApplyUniformVectorFalloffForce)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyUniformVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,Z_Param_Magnitude);
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function ApplyUniformVectorFalloffForce

// Begin Class UFieldSystemComponent Function RemovePersistentFields
struct Z_Construct_UFunction_UFieldSystemComponent_RemovePersistentFields_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  RemovePersistentFields\n\x09*    This function will remove all the field component persistent fields from chaos and from the world\n\x09*\n\x09*/" },
		{ "DisplayName", "Remove Persistent Fields" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "RemovePersistentFields\n  This function will remove all the field component persistent fields from chaos and from the world" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_RemovePersistentFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "RemovePersistentFields", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_RemovePersistentFields_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_RemovePersistentFields_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFieldSystemComponent_RemovePersistentFields()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_RemovePersistentFields_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execRemovePersistentFields)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePersistentFields();
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function RemovePersistentFields

// Begin Class UFieldSystemComponent Function ResetFieldSystem
struct Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  RemoveConstructionFields\n\x09*    This function will remove all the field component construction fields from chaos and from the world\n\x09*\n\x09*/" },
		{ "DisplayName", "Remove Construction Fields" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "RemoveConstructionFields\n  This function will remove all the field component construction fields from chaos and from the world" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemComponent, nullptr, "ResetFieldSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemComponent::execResetFieldSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFieldSystem();
	P_NATIVE_END;
}
// End Class UFieldSystemComponent Function ResetFieldSystem

// Begin Class UFieldSystemComponent
void UFieldSystemComponent::StaticRegisterNativesUFieldSystemComponent()
{
	UClass* Class = UFieldSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFieldCommand", &UFieldSystemComponent::execAddFieldCommand },
		{ "AddPersistentField", &UFieldSystemComponent::execAddPersistentField },
		{ "ApplyLinearForce", &UFieldSystemComponent::execApplyLinearForce },
		{ "ApplyPhysicsField", &UFieldSystemComponent::execApplyPhysicsField },
		{ "ApplyRadialForce", &UFieldSystemComponent::execApplyRadialForce },
		{ "ApplyRadialVectorFalloffForce", &UFieldSystemComponent::execApplyRadialVectorFalloffForce },
		{ "ApplyStayDynamicField", &UFieldSystemComponent::execApplyStayDynamicField },
		{ "ApplyStrainField", &UFieldSystemComponent::execApplyStrainField },
		{ "ApplyUniformVectorFalloffForce", &UFieldSystemComponent::execApplyUniformVectorFalloffForce },
		{ "RemovePersistentFields", &UFieldSystemComponent::execRemovePersistentFields },
		{ "ResetFieldSystem", &UFieldSystemComponent::execResetFieldSystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldSystemComponent);
UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister()
{
	return UFieldSystemComponent::StaticClass();
}
struct Z_Construct_UClass_UFieldSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09""FieldSystemComponent\n*/" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Field/FieldSystemComponent.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "FieldSystemComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldSystem_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "Field system asset to be used to store the construction fields. This asset is not required anymore and will be deprecated soon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldField_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "If enabled the field will be pushed to the world fields and will be available to materials and niagara" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsChaosField_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "If enabled the field will be used by all the chaos solvers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedSolvers_MetaData[] = {
		{ "Category", "Field" },
		{ "EditCondition", "bIsChaosField == true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "List of chaos solvers that will use the field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionCommands_MetaData[] = {
		{ "Comment", "/** List of all the construction command */" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "List of all the construction command" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferCommands_MetaData[] = {
		{ "Comment", "/** List of all the buffer command */" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemComponent.h" },
		{ "ToolTip", "List of all the buffer command" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldSystem;
	static void NewProp_bIsWorldField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldField;
	static void NewProp_bIsChaosField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChaosField;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SupportedSolvers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedSolvers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstructionCommands;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BufferCommands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldSystemComponent_AddFieldCommand, "AddFieldCommand" }, // 640668213
		{ &Z_Construct_UFunction_UFieldSystemComponent_AddPersistentField, "AddPersistentField" }, // 4252678969
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyLinearForce, "ApplyLinearForce" }, // 3229690005
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyPhysicsField, "ApplyPhysicsField" }, // 3324085780
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialForce, "ApplyRadialForce" }, // 4229818071
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyRadialVectorFalloffForce, "ApplyRadialVectorFalloffForce" }, // 2964821398
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyStayDynamicField, "ApplyStayDynamicField" }, // 1440754435
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyStrainField, "ApplyStrainField" }, // 814768997
		{ &Z_Construct_UFunction_UFieldSystemComponent_ApplyUniformVectorFalloffForce, "ApplyUniformVectorFalloffForce" }, // 2590264392
		{ &Z_Construct_UFunction_UFieldSystemComponent_RemovePersistentFields, "RemovePersistentFields" }, // 1229044519
		{ &Z_Construct_UFunction_UFieldSystemComponent_ResetFieldSystem, "ResetFieldSystem" }, // 3430557610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem = { "FieldSystem", nullptr, (EPropertyFlags)0x0114040000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemComponent, FieldSystem), Z_Construct_UClass_UFieldSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldSystem_MetaData), NewProp_FieldSystem_MetaData) };
void Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_bIsWorldField_SetBit(void* Obj)
{
	((UFieldSystemComponent*)Obj)->bIsWorldField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_bIsWorldField = { "bIsWorldField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFieldSystemComponent), &Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_bIsWorldField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldField_MetaData), NewProp_bIsWorldField_MetaData) };
void Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_bIsChaosField_SetBit(void* Obj)
{
	((UFieldSystemComponent*)Obj)->bIsChaosField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_bIsChaosField = { "bIsChaosField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFieldSystemComponent), &Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_bIsChaosField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsChaosField_MetaData), NewProp_bIsChaosField_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers_Inner = { "SupportedSolvers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers = { "SupportedSolvers", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemComponent, SupportedSolvers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedSolvers_MetaData), NewProp_SupportedSolvers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_ConstructionCommands = { "ConstructionCommands", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemComponent, ConstructionCommands), Z_Construct_UScriptStruct_FFieldObjectCommands, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructionCommands_MetaData), NewProp_ConstructionCommands_MetaData) }; // 70288840
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_BufferCommands = { "BufferCommands", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemComponent, BufferCommands), Z_Construct_UScriptStruct_FFieldObjectCommands, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferCommands_MetaData), NewProp_BufferCommands_MetaData) }; // 70288840
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_FieldSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_bIsWorldField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_bIsChaosField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_SupportedSolvers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_ConstructionCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemComponent_Statics::NewProp_BufferCommands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFieldSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldSystemComponent_Statics::ClassParams = {
	&UFieldSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldSystemComponent()
{
	if (!Z_Registration_Info_UClass_UFieldSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldSystemComponent.OuterSingleton, Z_Construct_UClass_UFieldSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldSystemComponent.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldSystemComponent>()
{
	return UFieldSystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSystemComponent);
UFieldSystemComponent::~UFieldSystemComponent() {}
// End Class UFieldSystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFieldSystemComponent, UFieldSystemComponent::StaticClass, TEXT("UFieldSystemComponent"), &Z_Registration_Info_UClass_UFieldSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldSystemComponent), 4277158010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_2172145191(TEXT("/Script/FieldSystemEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
