// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h"
#include "Runtime/Experimental/Chaos/Public/Chaos/PhysicsObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsObjectBlueprintLibrary() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FClosestPhysicsObjectResult();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPhysicsObjectBlueprintLibrary Function ApplyRadialImpulse
struct Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics
{
	struct PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms
	{
		UPrimitiveComponent* Component;
		FVector Origin;
		float Radius;
		float Strength;
		TEnumAsByte<ERadialImpulseFalloff> Falloff;
		bool bApplyStrain;
		float Strain;
		bool bVelChange;
		float MinValue;
		float MaxValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Object" },
		{ "Comment", "/**\n\x09* Apply a physics radial impulse with an optional strain on a specific component\n\x09* Effect is applied within a sphere. When using linear falloff the effect will be minimum at the outer edge of the sphere and maximum at its center\n\x09* @param Component\x09\x09Primitive component to apply the impulse / strain on\n\x09* @param Origin\x09\x09\x09Positition of the origin of the radial effect in world space\n\x09* @param Radius\x09\x09\x09Radius of the radial effect ( beyond the radius, impulse will not be applied )\n\x09* @param Strength\x09\x09Strength of the impulse to apply ( Unit : (Kg * m / s) or ( m /s ) if bVelChange is true\n\x09* @param FallOff\x09\x09Type of falloff to use ( constant, linear )\n\x09* @param bApplyStrain\x09Whether or not to apply strain on top of the impulse ( for destructible objects )\n\x09* @param Strain\x09\x09\x09If bApplyStrain is true, Strain to apply to the physics particles ( for destructible objects )\n\x09* @param bVelChange\x09\x09If true, impulse Strength parameter is interpretation as a change of velocity\n\x09* @param MinValue\x09\x09When using linear falloff, this define the falloff value at the outer edge of the sphere\n\x09* @param MaxValue\x09\x09When using linear falloff, this define the falloff value at the center of the sphere\n\x09*/" },
		{ "CPP_Default_bVelChange", "false" },
		{ "CPP_Default_MaxValue", "1.000000" },
		{ "CPP_Default_MinValue", "0.000000" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
		{ "ToolTip", "Apply a physics radial impulse with an optional strain on a specific component\nEffect is applied within a sphere. When using linear falloff the effect will be minimum at the outer edge of the sphere and maximum at its center\n@param Component              Primitive component to apply the impulse / strain on\n@param Origin                 Positition of the origin of the radial effect in world space\n@param Radius                 Radius of the radial effect ( beyond the radius, impulse will not be applied )\n@param Strength               Strength of the impulse to apply ( Unit : (Kg * m / s) or ( m /s ) if bVelChange is true\n@param FallOff                Type of falloff to use ( constant, linear )\n@param bApplyStrain   Whether or not to apply strain on top of the impulse ( for destructible objects )\n@param Strain                 If bApplyStrain is true, Strain to apply to the physics particles ( for destructible objects )\n@param bVelChange             If true, impulse Strength parameter is interpretation as a change of velocity\n@param MinValue               When using linear falloff, this define the falloff value at the outer edge of the sphere\n@param MaxValue               When using linear falloff, this define the falloff value at the center of the sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static void NewProp_bApplyStrain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyStrain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strain;
	static void NewProp_bVelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelChange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms, Falloff), Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff, METADATA_PARAMS(0, nullptr) }; // 679550656
void Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_bApplyStrain_SetBit(void* Obj)
{
	((PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms*)Obj)->bApplyStrain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_bApplyStrain = { "bApplyStrain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms), &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_bApplyStrain_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms, Strain), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_bVelChange_SetBit(void* Obj)
{
	((PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms*)Obj)->bVelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_bVelChange = { "bVelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms), &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_bVelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms, MinValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms, MaxValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_bApplyStrain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_Strain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_bVelChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, nullptr, "ApplyRadialImpulse", nullptr, nullptr, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::PhysicsObjectBlueprintLibrary_eventApplyRadialImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsObjectBlueprintLibrary::execApplyRadialImpulse)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_GET_PROPERTY(FByteProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bApplyStrain);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strain);
	P_GET_UBOOL(Z_Param_bVelChange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPhysicsObjectBlueprintLibrary::ApplyRadialImpulse(Z_Param_Component,Z_Param_Origin,Z_Param_Radius,Z_Param_Strength,ERadialImpulseFalloff(Z_Param_Falloff),Z_Param_bApplyStrain,Z_Param_Strain,Z_Param_bVelChange,Z_Param_MinValue,Z_Param_MaxValue);
	P_NATIVE_END;
}
// End Class UPhysicsObjectBlueprintLibrary Function ApplyRadialImpulse

// Begin Class UPhysicsObjectBlueprintLibrary Function ExtractClosestPhysicsObjectResults
struct Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics
{
	struct PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms
	{
		FClosestPhysicsObjectResult Result;
		FName OutName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Object" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms, Result), Z_Construct_UScriptStruct_FClosestPhysicsObjectResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3551252038
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_OutName = { "OutName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms, OutName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms), &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_OutName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, nullptr, "ExtractClosestPhysicsObjectResults", nullptr, nullptr, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsObjectBlueprintLibrary::execExtractClosestPhysicsObjectResults)
{
	P_GET_STRUCT_REF(FClosestPhysicsObjectResult,Z_Param_Out_Result);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPhysicsObjectBlueprintLibrary::ExtractClosestPhysicsObjectResults(Z_Param_Out_Result,Z_Param_Out_OutName);
	P_NATIVE_END;
}
// End Class UPhysicsObjectBlueprintLibrary Function ExtractClosestPhysicsObjectResults

// Begin Class UPhysicsObjectBlueprintLibrary Function GetClosestPhysicsObjectFromWorldLocation
struct Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics
{
	struct PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms
	{
		UPrimitiveComponent* Component;
		FVector WorldLocation;
		FClosestPhysicsObjectResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Object" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FClosestPhysicsObjectResult, METADATA_PARAMS(0, nullptr) }; // 3551252038
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, nullptr, "GetClosestPhysicsObjectFromWorldLocation", nullptr, nullptr, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsObjectBlueprintLibrary::execGetClosestPhysicsObjectFromWorldLocation)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FClosestPhysicsObjectResult*)Z_Param__Result=UPhysicsObjectBlueprintLibrary::GetClosestPhysicsObjectFromWorldLocation(Z_Param_Component,Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// End Class UPhysicsObjectBlueprintLibrary Function GetClosestPhysicsObjectFromWorldLocation

// Begin Class UPhysicsObjectBlueprintLibrary Function GetPhysicsObjectWorldTransform
struct Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics
{
	struct PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms
	{
		UPrimitiveComponent* Component;
		FName BoneName;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics Object" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, nullptr, "GetPhysicsObjectWorldTransform", nullptr, nullptr, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsObjectBlueprintLibrary::execGetPhysicsObjectWorldTransform)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UPhysicsObjectBlueprintLibrary::GetPhysicsObjectWorldTransform(Z_Param_Component,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UPhysicsObjectBlueprintLibrary Function GetPhysicsObjectWorldTransform

// Begin Class UPhysicsObjectBlueprintLibrary
void UPhysicsObjectBlueprintLibrary::StaticRegisterNativesUPhysicsObjectBlueprintLibrary()
{
	UClass* Class = UPhysicsObjectBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRadialImpulse", &UPhysicsObjectBlueprintLibrary::execApplyRadialImpulse },
		{ "ExtractClosestPhysicsObjectResults", &UPhysicsObjectBlueprintLibrary::execExtractClosestPhysicsObjectResults },
		{ "GetClosestPhysicsObjectFromWorldLocation", &UPhysicsObjectBlueprintLibrary::execGetClosestPhysicsObjectFromWorldLocation },
		{ "GetPhysicsObjectWorldTransform", &UPhysicsObjectBlueprintLibrary::execGetPhysicsObjectWorldTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsObjectBlueprintLibrary);
UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister()
{
	return UPhysicsObjectBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ApplyRadialImpulse, "ApplyRadialImpulse" }, // 416104578
		{ &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults, "ExtractClosestPhysicsObjectResults" }, // 1096929581
		{ &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation, "GetClosestPhysicsObjectFromWorldLocation" }, // 118984586
		{ &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform, "GetPhysicsObjectWorldTransform" }, // 2113724286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsObjectBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::ClassParams = {
	&UPhysicsObjectBlueprintLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsObjectBlueprintLibrary>()
{
	return UPhysicsObjectBlueprintLibrary::StaticClass();
}
UPhysicsObjectBlueprintLibrary::UPhysicsObjectBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsObjectBlueprintLibrary);
UPhysicsObjectBlueprintLibrary::~UPhysicsObjectBlueprintLibrary() {}
// End Class UPhysicsObjectBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, UPhysicsObjectBlueprintLibrary::StaticClass, TEXT("UPhysicsObjectBlueprintLibrary"), &Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsObjectBlueprintLibrary), 897006853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_1653508463(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
