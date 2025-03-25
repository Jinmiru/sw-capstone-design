// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSpringComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSpringComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsSpringComponent();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsSpringComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPhysicsSpringComponent Function GetNormalizedCompressionScalar
struct Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics
{
	struct PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Returns the spring compression as a normalized scalar along spring direction.\n\x09 *  0 implies spring is at rest\n\x09 *  1 implies fully compressed */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Returns the spring compression as a normalized scalar along spring direction.\n0 implies spring is at rest\n1 implies fully compressed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, nullptr, "GetNormalizedCompressionScalar", nullptr, nullptr, Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsSpringComponent::execGetNormalizedCompressionScalar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedCompressionScalar();
	P_NATIVE_END;
}
// End Class UPhysicsSpringComponent Function GetNormalizedCompressionScalar

// Begin Class UPhysicsSpringComponent Function GetSpringCurrentEndPoint
struct Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics
{
	struct PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Returns the spring current end point in world space.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Returns the spring current end point in world space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, nullptr, "GetSpringCurrentEndPoint", nullptr, nullptr, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsSpringComponent::execGetSpringCurrentEndPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSpringCurrentEndPoint();
	P_NATIVE_END;
}
// End Class UPhysicsSpringComponent Function GetSpringCurrentEndPoint

// Begin Class UPhysicsSpringComponent Function GetSpringDirection
struct Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics
{
	struct PhysicsSpringComponent_eventGetSpringDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Returns the spring direction from start to resting point */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Returns the spring direction from start to resting point" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, nullptr, "GetSpringDirection", nullptr, nullptr, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PhysicsSpringComponent_eventGetSpringDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PhysicsSpringComponent_eventGetSpringDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsSpringComponent::execGetSpringDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSpringDirection();
	P_NATIVE_END;
}
// End Class UPhysicsSpringComponent Function GetSpringDirection

// Begin Class UPhysicsSpringComponent Function GetSpringRestingPoint
struct Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics
{
	struct PhysicsSpringComponent_eventGetSpringRestingPoint_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Returns the spring resting point in world space.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Returns the spring resting point in world space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringRestingPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, nullptr, "GetSpringRestingPoint", nullptr, nullptr, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PhysicsSpringComponent_eventGetSpringRestingPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PhysicsSpringComponent_eventGetSpringRestingPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsSpringComponent::execGetSpringRestingPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSpringRestingPoint();
	P_NATIVE_END;
}
// End Class UPhysicsSpringComponent Function GetSpringRestingPoint

// Begin Class UPhysicsSpringComponent
void UPhysicsSpringComponent::StaticRegisterNativesUPhysicsSpringComponent()
{
	UClass* Class = UPhysicsSpringComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNormalizedCompressionScalar", &UPhysicsSpringComponent::execGetNormalizedCompressionScalar },
		{ "GetSpringCurrentEndPoint", &UPhysicsSpringComponent::execGetSpringCurrentEndPoint },
		{ "GetSpringDirection", &UPhysicsSpringComponent::execGetSpringDirection },
		{ "GetSpringRestingPoint", &UPhysicsSpringComponent::execGetSpringRestingPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsSpringComponent);
UClass* Z_Construct_UClass_UPhysicsSpringComponent_NoRegister()
{
	return UPhysicsSpringComponent::StaticClass();
}
struct Z_Construct_UClass_UPhysicsSpringComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/** \n *  Note: this component is still work in progress. Uses raycast springs for simple vehicle forces\n *\x09Used with objects that have physics to create a spring down the X direction\n *\x09ie. point X in the direction you want generate spring.\n */" },
		{ "HideCategories", "Object Mobility LOD PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Note: this component is still work in progress. Uses raycast springs for simple vehicle forces\n   Used with objects that have physics to create a spring down the X direction\n   ie. point X in the direction you want generate spring." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Specifies how much strength the spring has. The higher the SpringStiffness the more force the spring can push on a body with. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Specifies how much strength the spring has. The higher the SpringStiffness the more force the spring can push on a body with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Specifies how quickly the spring can absorb energy of a body. The higher the damping the less oscillation */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Specifies how quickly the spring can absorb energy of a body. The higher the damping the less oscillation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringLengthAtRest_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Determines how long the spring will be along the X-axis at rest. The spring will apply 0 force on a body when it's at rest. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Determines how long the spring will be along the X-axis at rest. The spring will apply 0 force on a body when it's at rest." },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringRadius_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Determines the radius of the spring. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Determines the radius of the spring." },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringChannel_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Strength of thrust force applied to the base object. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Strength of thrust force applied to the base object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** If true, the spring will ignore all components in its own actor */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "If true, the spring will ignore all components in its own actor" },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringCompression_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** The current compression of the spring. A spring at rest will have SpringCompression 0. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "The current compression of the spring. A spring at rest will have SpringCompression 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringLengthAtRest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpringChannel;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringCompression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar, "GetNormalizedCompressionScalar" }, // 3636752751
		{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint, "GetSpringCurrentEndPoint" }, // 27299720
		{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection, "GetSpringDirection" }, // 266422740
		{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint, "GetSpringRestingPoint" }, // 539739576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsSpringComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringStiffness_MetaData), NewProp_SpringStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringDamping_MetaData), NewProp_SpringDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringLengthAtRest = { "SpringLengthAtRest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringLengthAtRest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringLengthAtRest_MetaData), NewProp_SpringLengthAtRest_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringRadius = { "SpringRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringRadius_MetaData), NewProp_SpringRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringChannel = { "SpringChannel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringChannel_MetaData), NewProp_SpringChannel_MetaData) }; // 756624936
void Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((UPhysicsSpringComponent*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsSpringComponent), &Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringCompression = { "SpringCompression", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringCompression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringCompression_MetaData), NewProp_SpringCompression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsSpringComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringLengthAtRest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringCompression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsSpringComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::ClassParams = {
	&UPhysicsSpringComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPhysicsSpringComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsSpringComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsSpringComponent()
{
	if (!Z_Registration_Info_UClass_UPhysicsSpringComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsSpringComponent.OuterSingleton, Z_Construct_UClass_UPhysicsSpringComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsSpringComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsSpringComponent>()
{
	return UPhysicsSpringComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSpringComponent);
UPhysicsSpringComponent::~UPhysicsSpringComponent() {}
// End Class UPhysicsSpringComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsSpringComponent, UPhysicsSpringComponent::StaticClass, TEXT("UPhysicsSpringComponent"), &Z_Registration_Info_UClass_UPhysicsSpringComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsSpringComponent), 1672420728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_583085115(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
