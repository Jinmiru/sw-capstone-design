// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringArmComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USpringArmComponent Function GetTargetRotation
struct Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics
{
	struct SpringArmComponent_eventGetTargetRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SpringArm" },
		{ "Comment", "/**\n\x09 * Get the target rotation we inherit, used as the base target for the boom rotation.\n\x09 * This is derived from attachment to our parent and considering the UsePawnControlRotation and absolute rotation flags.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Get the target rotation we inherit, used as the base target for the boom rotation.\nThis is derived from attachment to our parent and considering the UsePawnControlRotation and absolute rotation flags." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpringArmComponent_eventGetTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpringArmComponent, nullptr, "GetTargetRotation", nullptr, nullptr, Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::SpringArmComponent_eventGetTargetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::SpringArmComponent_eventGetTargetRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpringArmComponent_GetTargetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpringArmComponent_GetTargetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpringArmComponent::execGetTargetRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetTargetRotation();
	P_NATIVE_END;
}
// End Class USpringArmComponent Function GetTargetRotation

// Begin Class USpringArmComponent Function GetUnfixedCameraPosition
struct Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics
{
	struct SpringArmComponent_eventGetUnfixedCameraPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraCollision" },
		{ "Comment", "/** Get the position where the camera should be without applying the Collision Test displacement */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Get the position where the camera should be without applying the Collision Test displacement" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpringArmComponent_eventGetUnfixedCameraPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpringArmComponent, nullptr, "GetUnfixedCameraPosition", nullptr, nullptr, Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::SpringArmComponent_eventGetUnfixedCameraPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::SpringArmComponent_eventGetUnfixedCameraPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpringArmComponent::execGetUnfixedCameraPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetUnfixedCameraPosition();
	P_NATIVE_END;
}
// End Class USpringArmComponent Function GetUnfixedCameraPosition

// Begin Class USpringArmComponent Function IsCollisionFixApplied
struct Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics
{
	struct SpringArmComponent_eventIsCollisionFixApplied_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraCollision" },
		{ "Comment", "/** Is the Collision Test displacement being applied? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Is the Collision Test displacement being applied?" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpringArmComponent_eventIsCollisionFixApplied_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpringArmComponent_eventIsCollisionFixApplied_Parms), &Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpringArmComponent, nullptr, "IsCollisionFixApplied", nullptr, nullptr, Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::SpringArmComponent_eventIsCollisionFixApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::SpringArmComponent_eventIsCollisionFixApplied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpringArmComponent::execIsCollisionFixApplied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCollisionFixApplied();
	P_NATIVE_END;
}
// End Class USpringArmComponent Function IsCollisionFixApplied

// Begin Class USpringArmComponent
void USpringArmComponent::StaticRegisterNativesUSpringArmComponent()
{
	UClass* Class = USpringArmComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTargetRotation", &USpringArmComponent::execGetTargetRotation },
		{ "GetUnfixedCameraPosition", &USpringArmComponent::execGetUnfixedCameraPosition },
		{ "IsCollisionFixApplied", &USpringArmComponent::execIsCollisionFixApplied },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpringArmComponent);
UClass* Z_Construct_UClass_USpringArmComponent_NoRegister()
{
	return USpringArmComponent::StaticClass();
}
struct Z_Construct_UClass_USpringArmComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * This component tries to maintain its children at a fixed distance from the parent,\n * but will retract the children if there is a collision, and spring back when there is no collision.\n *\n * Example: Use as a 'camera boom' or 'selfie stick' to keep the follow camera for a player from colliding into the world.\n */" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "GameFramework/SpringArmComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "This component tries to maintain its children at a fixed distance from the parent,\nbut will retract the children if there is a collision, and spring back when there is no collision.\n\nExample: Use as a 'camera boom' or 'selfie stick' to keep the follow camera for a player from colliding into the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Natural length of the spring arm when there are no collisions */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Natural length of the spring arm when there are no collisions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** offset at end of spring arm; use this instead of the relative offset of the attached component to ensure the line trace works as desired */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "offset at end of spring arm; use this instead of the relative offset of the attached component to ensure the line trace works as desired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Offset at start of spring, applied in world space. Use this if you want a world-space offset from the parent component instead of the usual relative-space offset. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Offset at start of spring, applied in world space. Use this if you want a world-space offset from the parent component instead of the usual relative-space offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeSize_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "Comment", "/** How big should the query probe sphere be (in unreal units) */" },
		{ "editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "How big should the query probe sphere be (in unreal units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeChannel_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "Comment", "/** Collision channel of the query probe (defaults to ECC_Camera) */" },
		{ "editcondition", "bDoCollisionTest" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Collision channel of the query probe (defaults to ECC_Camera)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[] = {
		{ "Category", "CameraCollision" },
		{ "Comment", "/** If true, do a collision test using ProbeChannel and ProbeSize to prevent camera clipping into level.  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true, do a collision test using ProbeChannel and ProbeSize to prevent camera clipping into level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/**\n\x09 * If this component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\n\x09 * When disabled, the component will revert to using the stored RelativeRotation of the component.\n\x09 * Note that this component itself does not rotate, but instead maintains its relative rotation to its parent as normal,\n\x09 * and just repositions and rotates its children as desired by the inherited rotation settings. Use GetTargetRotation()\n\x09 * if you want the rotation target based on all the settings (UsePawnControlRotation, InheritPitch, etc).\n\x09 *\n\x09 * @see GetTargetRotation(), APawn::GetViewRotation()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If this component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\nWhen disabled, the component will revert to using the stored RelativeRotation of the component.\nNote that this component itself does not rotate, but instead maintains its relative rotation to its parent as normal,\nand just repositions and rotates its children as desired by the inherited rotation settings. Use GetTargetRotation()\nif you want the rotation target based on all the settings (UsePawnControlRotation, InheritPitch, etc).\n\n@see GetTargetRotation(), APawn::GetViewRotation()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritPitch_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** Should we inherit pitch from parent component. Does nothing if using Absolute Rotation. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Should we inherit pitch from parent component. Does nothing if using Absolute Rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritYaw_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** Should we inherit yaw from parent component. Does nothing if using Absolute Rotation. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Should we inherit yaw from parent component. Does nothing if using Absolute Rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRoll_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** Should we inherit roll from parent component. Does nothing if using Absolute Rotation. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Should we inherit roll from parent component. Does nothing if using Absolute Rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLag_MetaData[] = {
		{ "Category", "Lag" },
		{ "Comment", "/**\n\x09 * If true, camera lags behind target position to smooth its movement.\n\x09 * @see CameraLagSpeed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true, camera lags behind target position to smooth its movement.\n@see CameraLagSpeed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraRotationLag_MetaData[] = {
		{ "Category", "Lag" },
		{ "Comment", "/**\n\x09 * If true, camera lags behind target rotation to smooth its movement.\n\x09 * @see CameraRotationLagSpeed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true, camera lags behind target rotation to smooth its movement.\n@see CameraRotationLagSpeed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraLagSubstepping_MetaData[] = {
		{ "Category", "Lag" },
		{ "Comment", "/**\n\x09 * If bUseCameraLagSubstepping is true, sub-step camera damping so that it handles fluctuating frame rates well (though this comes at a cost).\n\x09 * @see CameraLagMaxTimeStep\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If bUseCameraLagSubstepping is true, sub-step camera damping so that it handles fluctuating frame rates well (though this comes at a cost).\n@see CameraLagMaxTimeStep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLagMarkers_MetaData[] = {
		{ "Category", "Lag" },
		{ "Comment", "/**\n\x09 * If true and camera location lag is enabled, draws markers at the camera target (in green) and the lagged position (in yellow).\n\x09 * A line is drawn between the two locations, in green normally but in red if the distance to the lag target has been clamped (by CameraLagMaxDistance).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true and camera location lag is enabled, draws markers at the camera target (in green) and the lagged position (in yellow).\nA line is drawn between the two locations, in green normally but in red if the distance to the lag target has been clamped (by CameraLagMaxDistance)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If bEnableCameraLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag). */" },
		{ "editcondition", "bEnableCameraLag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If bEnableCameraLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationLagSpeed_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If bEnableCameraRotationLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag). */" },
		{ "editcondition", "bEnableCameraRotationLag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If bEnableCameraRotationLag is true, controls how quickly camera reaches target position. Low values are slower (more lag), high values are faster (less lag), while zero is instant (no lag)." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxTimeStep_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.005" },
		{ "Comment", "/** Max time step used when sub-stepping camera lag. */" },
		{ "editcondition", "bUseCameraLagSubstepping" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Max time step used when sub-stepping camera lag." },
		{ "UIMax", "0.5" },
		{ "UIMin", "0.005" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagMaxDistance_MetaData[] = {
		{ "Category", "Lag" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Max distance the camera target may lag behind the current location. If set to zero, no max distance is enforced. */" },
		{ "editcondition", "bEnableCameraLag" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "Max distance the camera target may lag behind the current location. If set to zero, no max distance is enforced." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampToMaxPhysicsDeltaTime_MetaData[] = {
		{ "Category", "Lag" },
		{ "Comment", "/** If true AND the view target is simulating using physics then use the same max timestep cap as the physics system. Prevents camera jitter when delta time is clamped within Chaos Physics. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpringArmComponent.h" },
		{ "ToolTip", "If true AND the view target is simulating using physics then use the same max timestep cap as the physics system. Prevents camera jitter when delta time is clamped within Chaos Physics." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbeSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProbeChannel;
	static void NewProp_bDoCollisionTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest;
	static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
	static void NewProp_bInheritPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritPitch;
	static void NewProp_bInheritYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritYaw;
	static void NewProp_bInheritRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRoll;
	static void NewProp_bEnableCameraLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLag;
	static void NewProp_bEnableCameraRotationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraRotationLag;
	static void NewProp_bUseCameraLagSubstepping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraLagSubstepping;
	static void NewProp_bDrawDebugLagMarkers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLagMarkers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxTimeStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagMaxDistance;
	static void NewProp_bClampToMaxPhysicsDeltaTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToMaxPhysicsDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpringArmComponent_GetTargetRotation, "GetTargetRotation" }, // 2991066971
		{ &Z_Construct_UFunction_USpringArmComponent_GetUnfixedCameraPosition, "GetUnfixedCameraPosition" }, // 4166866336
		{ &Z_Construct_UFunction_USpringArmComponent_IsCollisionFixApplied, "IsCollisionFixApplied" }, // 569986752
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpringArmComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, TargetArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetArmLength_MetaData), NewProp_TargetArmLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffset_MetaData), NewProp_SocketOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffset_MetaData), NewProp_TargetOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeSize = { "ProbeSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, ProbeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeSize_MetaData), NewProp_ProbeSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeChannel = { "ProbeChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, ProbeChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeChannel_MetaData), NewProp_ProbeChannel_MetaData) }; // 756624936
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bDoCollisionTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest = { "bDoCollisionTest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoCollisionTest_MetaData), NewProp_bDoCollisionTest_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bUsePawnControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePawnControlRotation_MetaData), NewProp_bUsePawnControlRotation_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bInheritPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch = { "bInheritPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritPitch_MetaData), NewProp_bInheritPitch_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bInheritYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw = { "bInheritYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritYaw_MetaData), NewProp_bInheritYaw_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bInheritRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll = { "bInheritRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritRoll_MetaData), NewProp_bInheritRoll_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bEnableCameraLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag = { "bEnableCameraLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraLag_MetaData), NewProp_bEnableCameraLag_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bEnableCameraRotationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag = { "bEnableCameraRotationLag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraRotationLag_MetaData), NewProp_bEnableCameraRotationLag_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bUseCameraLagSubstepping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping = { "bUseCameraLagSubstepping", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCameraLagSubstepping_MetaData), NewProp_bUseCameraLagSubstepping_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bDrawDebugLagMarkers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers = { "bDrawDebugLagMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugLagMarkers_MetaData), NewProp_bDrawDebugLagMarkers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, CameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagSpeed_MetaData), NewProp_CameraLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraRotationLagSpeed = { "CameraRotationLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, CameraRotationLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationLagSpeed_MetaData), NewProp_CameraRotationLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxTimeStep = { "CameraLagMaxTimeStep", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, CameraLagMaxTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagMaxTimeStep_MetaData), NewProp_CameraLagMaxTimeStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxDistance = { "CameraLagMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponent, CameraLagMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagMaxDistance_MetaData), NewProp_CameraLagMaxDistance_MetaData) };
void Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bClampToMaxPhysicsDeltaTime_SetBit(void* Obj)
{
	((USpringArmComponent*)Obj)->bClampToMaxPhysicsDeltaTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bClampToMaxPhysicsDeltaTime = { "bClampToMaxPhysicsDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpringArmComponent), &Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bClampToMaxPhysicsDeltaTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampToMaxPhysicsDeltaTime_MetaData), NewProp_bClampToMaxPhysicsDeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpringArmComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_SocketOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_TargetOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_ProbeChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDoCollisionTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUsePawnControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bInheritRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bEnableCameraRotationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bUseCameraLagSubstepping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bDrawDebugLagMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraRotationLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_CameraLagMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponent_Statics::NewProp_bClampToMaxPhysicsDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpringArmComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpringArmComponent_Statics::ClassParams = {
	&USpringArmComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpringArmComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpringArmComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpringArmComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpringArmComponent()
{
	if (!Z_Registration_Info_UClass_USpringArmComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpringArmComponent.OuterSingleton, Z_Construct_UClass_USpringArmComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpringArmComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USpringArmComponent>()
{
	return USpringArmComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpringArmComponent);
USpringArmComponent::~USpringArmComponent() {}
// End Class USpringArmComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpringArmComponent, USpringArmComponent::StaticClass, TEXT("USpringArmComponent"), &Z_Registration_Info_UClass_USpringArmComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpringArmComponent), 1263020229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_2457047290(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpringArmComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
