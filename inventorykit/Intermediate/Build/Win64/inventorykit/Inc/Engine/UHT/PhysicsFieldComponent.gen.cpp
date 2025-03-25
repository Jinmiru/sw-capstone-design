// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsFieldComponent() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldIntegerType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldScalarType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldVectorType();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldComponent();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldStatics();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldStatics_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPhysicsFieldComponent
void UPhysicsFieldComponent::StaticRegisterNativesUPhysicsFieldComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsFieldComponent);
UClass* Z_Construct_UClass_UPhysicsFieldComponent_NoRegister()
{
	return UPhysicsFieldComponent::StaticClass();
}
struct Z_Construct_UClass_UPhysicsFieldComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09PhysicsFieldComponent\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PhysicsField/PhysicsFieldComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsField/PhysicsFieldComponent.h" },
		{ "ToolTip", "PhysicsFieldComponent" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsFieldComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPhysicsFieldComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsFieldComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsFieldComponent_Statics::ClassParams = {
	&UPhysicsFieldComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsFieldComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsFieldComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsFieldComponent()
{
	if (!Z_Registration_Info_UClass_UPhysicsFieldComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsFieldComponent.OuterSingleton, Z_Construct_UClass_UPhysicsFieldComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsFieldComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsFieldComponent>()
{
	return UPhysicsFieldComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsFieldComponent);
UPhysicsFieldComponent::~UPhysicsFieldComponent() {}
// End Class UPhysicsFieldComponent

// Begin Class UPhysicsFieldStatics Function EvalPhysicsIntegerField
struct Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics
{
	struct PhysicsFieldStatics_eventEvalPhysicsIntegerField_Parms
	{
		const UObject* WorldContextObject;
		FVector WorldPosition;
		TEnumAsByte<EFieldIntegerType> IntegerType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Evaluate the world physics integer field from BP */" },
		{ "ModuleRelativePath", "Classes/PhysicsField/PhysicsFieldComponent.h" },
		{ "ToolTip", "Evaluate the world physics integer field from BP" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntegerType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsIntegerField_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsIntegerField_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::NewProp_IntegerType = { "IntegerType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsIntegerField_Parms, IntegerType), Z_Construct_UEnum_Chaos_EFieldIntegerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerType_MetaData), NewProp_IntegerType_MetaData) }; // 1972836009
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsIntegerField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::NewProp_IntegerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFieldStatics, nullptr, "EvalPhysicsIntegerField", nullptr, nullptr, Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::PhysicsFieldStatics_eventEvalPhysicsIntegerField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::PhysicsFieldStatics_eventEvalPhysicsIntegerField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsFieldStatics::execEvalPhysicsIntegerField)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_PROPERTY(FByteProperty,Z_Param_IntegerType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UPhysicsFieldStatics::EvalPhysicsIntegerField(Z_Param_WorldContextObject,Z_Param_Out_WorldPosition,EFieldIntegerType(Z_Param_IntegerType));
	P_NATIVE_END;
}
// End Class UPhysicsFieldStatics Function EvalPhysicsIntegerField

// Begin Class UPhysicsFieldStatics Function EvalPhysicsScalarField
struct Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics
{
	struct PhysicsFieldStatics_eventEvalPhysicsScalarField_Parms
	{
		const UObject* WorldContextObject;
		FVector WorldPosition;
		TEnumAsByte<EFieldScalarType> ScalarType;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Evaluate the world physics scalar field from BP */" },
		{ "ModuleRelativePath", "Classes/PhysicsField/PhysicsFieldComponent.h" },
		{ "ToolTip", "Evaluate the world physics scalar field from BP" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScalarType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsScalarField_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsScalarField_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::NewProp_ScalarType = { "ScalarType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsScalarField_Parms, ScalarType), Z_Construct_UEnum_Chaos_EFieldScalarType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarType_MetaData), NewProp_ScalarType_MetaData) }; // 2527444282
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsScalarField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::NewProp_ScalarType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFieldStatics, nullptr, "EvalPhysicsScalarField", nullptr, nullptr, Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::PhysicsFieldStatics_eventEvalPhysicsScalarField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::PhysicsFieldStatics_eventEvalPhysicsScalarField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsFieldStatics::execEvalPhysicsScalarField)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_PROPERTY(FByteProperty,Z_Param_ScalarType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPhysicsFieldStatics::EvalPhysicsScalarField(Z_Param_WorldContextObject,Z_Param_Out_WorldPosition,EFieldScalarType(Z_Param_ScalarType));
	P_NATIVE_END;
}
// End Class UPhysicsFieldStatics Function EvalPhysicsScalarField

// Begin Class UPhysicsFieldStatics Function EvalPhysicsVectorField
struct Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics
{
	struct PhysicsFieldStatics_eventEvalPhysicsVectorField_Parms
	{
		const UObject* WorldContextObject;
		FVector WorldPosition;
		TEnumAsByte<EFieldVectorType> VectorType;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Evaluate the world physics vector field from BP */" },
		{ "ModuleRelativePath", "Classes/PhysicsField/PhysicsFieldComponent.h" },
		{ "ToolTip", "Evaluate the world physics vector field from BP" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VectorType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsVectorField_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsVectorField_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::NewProp_VectorType = { "VectorType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsVectorField_Parms, VectorType), Z_Construct_UEnum_Chaos_EFieldVectorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorType_MetaData), NewProp_VectorType_MetaData) }; // 665830373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsFieldStatics_eventEvalPhysicsVectorField_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::NewProp_VectorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsFieldStatics, nullptr, "EvalPhysicsVectorField", nullptr, nullptr, Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::PhysicsFieldStatics_eventEvalPhysicsVectorField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::PhysicsFieldStatics_eventEvalPhysicsVectorField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsFieldStatics::execEvalPhysicsVectorField)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_PROPERTY(FByteProperty,Z_Param_VectorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPhysicsFieldStatics::EvalPhysicsVectorField(Z_Param_WorldContextObject,Z_Param_Out_WorldPosition,EFieldVectorType(Z_Param_VectorType));
	P_NATIVE_END;
}
// End Class UPhysicsFieldStatics Function EvalPhysicsVectorField

// Begin Class UPhysicsFieldStatics
void UPhysicsFieldStatics::StaticRegisterNativesUPhysicsFieldStatics()
{
	UClass* Class = UPhysicsFieldStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EvalPhysicsIntegerField", &UPhysicsFieldStatics::execEvalPhysicsIntegerField },
		{ "EvalPhysicsScalarField", &UPhysicsFieldStatics::execEvalPhysicsScalarField },
		{ "EvalPhysicsVectorField", &UPhysicsFieldStatics::execEvalPhysicsVectorField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsFieldStatics);
UClass* Z_Construct_UClass_UPhysicsFieldStatics_NoRegister()
{
	return UPhysicsFieldStatics::StaticClass();
}
struct Z_Construct_UClass_UPhysicsFieldStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Static function with world field evaluation */" },
		{ "IncludePath", "PhysicsField/PhysicsFieldComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsField/PhysicsFieldComponent.h" },
		{ "ToolTip", "Static function with world field evaluation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsIntegerField, "EvalPhysicsIntegerField" }, // 4202212159
		{ &Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsScalarField, "EvalPhysicsScalarField" }, // 553613475
		{ &Z_Construct_UFunction_UPhysicsFieldStatics_EvalPhysicsVectorField, "EvalPhysicsVectorField" }, // 4196698965
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsFieldStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPhysicsFieldStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsFieldStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsFieldStatics_Statics::ClassParams = {
	&UPhysicsFieldStatics::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsFieldStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsFieldStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsFieldStatics()
{
	if (!Z_Registration_Info_UClass_UPhysicsFieldStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsFieldStatics.OuterSingleton, Z_Construct_UClass_UPhysicsFieldStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsFieldStatics.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPhysicsFieldStatics>()
{
	return UPhysicsFieldStatics::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsFieldStatics);
UPhysicsFieldStatics::~UPhysicsFieldStatics() {}
// End Class UPhysicsFieldStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsFieldComponent, UPhysicsFieldComponent::StaticClass, TEXT("UPhysicsFieldComponent"), &Z_Registration_Info_UClass_UPhysicsFieldComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsFieldComponent), 660843487U) },
		{ Z_Construct_UClass_UPhysicsFieldStatics, UPhysicsFieldStatics::StaticClass, TEXT("UPhysicsFieldStatics"), &Z_Registration_Info_UClass_UPhysicsFieldStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsFieldStatics), 1636058569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_2547931974(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
