// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/InteractiveFoliageActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveFoliageActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FOLIAGE_API UClass* Z_Construct_UClass_AInteractiveFoliageActor();
FOLIAGE_API UClass* Z_Construct_UClass_AInteractiveFoliageActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class AInteractiveFoliageActor Function CapsuleTouched
struct Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics
{
	struct InteractiveFoliageActor_eventCapsuleTouched_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult OverlapInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called when capsule is touched */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Called when capsule is touched" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractiveFoliageActor_eventCapsuleTouched_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractiveFoliageActor_eventCapsuleTouched_Parms), &Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo = { "OverlapInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OverlapInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapInfo_MetaData), NewProp_OverlapInfo_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveFoliageActor, nullptr, "CapsuleTouched", nullptr, nullptr, Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::InteractiveFoliageActor_eventCapsuleTouched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::InteractiveFoliageActor_eventCapsuleTouched_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractiveFoliageActor::execCapsuleTouched)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OverlapInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_OverlapInfo);
	P_NATIVE_END;
}
// End Class AInteractiveFoliageActor Function CapsuleTouched

// Begin Class AInteractiveFoliageActor
void AInteractiveFoliageActor::StaticRegisterNativesAInteractiveFoliageActor()
{
	UClass* Class = AInteractiveFoliageActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CapsuleTouched", &AInteractiveFoliageActor::execCapsuleTouched },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractiveFoliageActor);
UClass* Z_Construct_UClass_AInteractiveFoliageActor_NoRegister()
{
	return AInteractiveFoliageActor::StaticClass();
}
struct Z_Construct_UClass_AInteractiveFoliageActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "InteractiveFoliageActor.h" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[] = {
		{ "Comment", "/** Collision cylinder */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Collision cylinder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchingActorEntryPosition_MetaData[] = {
		{ "Comment", "/**\n\x09 * Position of the last actor to enter the collision cylinder.\n\x09 * This currently does not handle multiple actors affecting the foliage simultaneously.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Position of the last actor to enter the collision cylinder.\nThis currently does not handle multiple actors affecting the foliage simultaneously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageVelocity_MetaData[] = {
		{ "Comment", "/** Simulated physics state */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Simulated physics state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageForce_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliagePosition_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageDamageImpulseScale_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Scales forces applied from damage events. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Scales forces applied from damage events." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageTouchImpulseScale_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Scales forces applied from touch events. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Scales forces applied from touch events." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageStiffness_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Determines how strong the force that pushes toward the spring's center will be. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Determines how strong the force that pushes toward the spring's center will be." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageStiffnessQuadratic_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/**\n\x09 * Same as FoliageStiffness, but the strength of this force increases with the square of the distance to the spring's center.\n\x09 * This force is used to prevent the spring from extending past a certain point due to touch and damage forces.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Same as FoliageStiffness, but the strength of this force increases with the square of the distance to the spring's center.\nThis force is used to prevent the spring from extending past a certain point due to touch and damage forces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageDamping_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/**\n\x09 * Determines the amount of energy lost by the spring as it oscillates.\n\x09 * This force is similar to air friction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Determines the amount of energy lost by the spring as it oscillates.\nThis force is similar to air friction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamageImpulse_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Clamps the magnitude of each damage force applied. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of each damage force applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTouchImpulse_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Clamps the magnitude of each touch force applied. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of each touch force applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "Comment", "/** Clamps the magnitude of combined forces applied each update. */" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of combined forces applied each update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Comment", "//@todo - hook this up\x09/** @todo document */\n" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo - hook this up     @todo document" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TouchingActorEntryPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoliagePosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageDamageImpulseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageTouchImpulseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageStiffnessQuadratic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FoliageDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamageImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTouchImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched, "CapsuleTouched" }, // 3195769245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractiveFoliageActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComponent_MetaData), NewProp_CapsuleComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition = { "TouchingActorEntryPosition", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, TouchingActorEntryPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchingActorEntryPosition_MetaData), NewProp_TouchingActorEntryPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity = { "FoliageVelocity", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageVelocity_MetaData), NewProp_FoliageVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce = { "FoliageForce", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageForce_MetaData), NewProp_FoliageForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition = { "FoliagePosition", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliagePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliagePosition_MetaData), NewProp_FoliagePosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale = { "FoliageDamageImpulseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageDamageImpulseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageDamageImpulseScale_MetaData), NewProp_FoliageDamageImpulseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale = { "FoliageTouchImpulseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageTouchImpulseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageTouchImpulseScale_MetaData), NewProp_FoliageTouchImpulseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness = { "FoliageStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageStiffness_MetaData), NewProp_FoliageStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic = { "FoliageStiffnessQuadratic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageStiffnessQuadratic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageStiffnessQuadratic_MetaData), NewProp_FoliageStiffnessQuadratic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping = { "FoliageDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageDamping_MetaData), NewProp_FoliageDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse = { "MaxDamageImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, MaxDamageImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDamageImpulse_MetaData), NewProp_MaxDamageImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse = { "MaxTouchImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, MaxTouchImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTouchImpulse_MetaData), NewProp_MaxTouchImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, MaxForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxForce_MetaData), NewProp_MaxForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractiveFoliageActor, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractiveFoliageActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::ClassParams = {
	&AInteractiveFoliageActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractiveFoliageActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractiveFoliageActor()
{
	if (!Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton, Z_Construct_UClass_AInteractiveFoliageActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractiveFoliageActor.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<AInteractiveFoliageActor>()
{
	return AInteractiveFoliageActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractiveFoliageActor);
AInteractiveFoliageActor::~AInteractiveFoliageActor() {}
// End Class AInteractiveFoliageActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractiveFoliageActor, AInteractiveFoliageActor::StaticClass, TEXT("AInteractiveFoliageActor"), &Z_Registration_Info_UClass_AInteractiveFoliageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractiveFoliageActor), 2022419115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_2028639174(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_InteractiveFoliageActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
