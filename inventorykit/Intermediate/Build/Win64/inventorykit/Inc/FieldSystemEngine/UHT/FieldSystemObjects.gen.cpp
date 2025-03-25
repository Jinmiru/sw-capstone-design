// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemObjects() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldCullingOperationType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldFalloffType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldFilterType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldObjectType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldOperationType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldPositionType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldResolutionType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ESetMaskConditionType();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EWaveFunctionType();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UBoxFalloff();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UBoxFalloff_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UCullingField();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UCullingField_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeBase();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeBase_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeFloat();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeFloat_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeInt();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeInt_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeVector();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeVector_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaData();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaData_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaDataFilter();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaDataFilter_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaDataIteration();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaDataIteration_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UNoiseField();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UNoiseField_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UOperatorField();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UOperatorField_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UPlaneFalloff();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UPlaneFalloff_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialFalloff();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialFalloff_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialIntMask();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialIntMask_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialVector();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialVector_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URandomVector();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URandomVector_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UReturnResultsTerminal();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UReturnResultsTerminal_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UToFloatField();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UToFloatField_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UToIntegerField();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UToIntegerField_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UUniformInteger();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UUniformInteger_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UUniformScalar();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UUniformScalar_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UUniformVector();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UUniformVector_NoRegister();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UWaveScalar();
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UWaveScalar_NoRegister();
FIELDSYSTEMENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFieldObjectCommands();
UPackage* Z_Construct_UPackage__Script_FieldSystemEngine();
// End Cross Module References

// Begin Class UFieldSystemMetaData
void UFieldSystemMetaData::StaticRegisterNativesUFieldSystemMetaData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldSystemMetaData);
UClass* Z_Construct_UClass_UFieldSystemMetaData_NoRegister()
{
	return UFieldSystemMetaData::StaticClass();
}
struct Z_Construct_UClass_UFieldSystemMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Context :\n*   Contexts are used to pass extra data into the field evaluation.\n*/" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Context :\n  Contexts are used to pass extra data into the field evaluation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSystemMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFieldSystemMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldSystemMetaData_Statics::ClassParams = {
	&UFieldSystemMetaData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldSystemMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldSystemMetaData()
{
	if (!Z_Registration_Info_UClass_UFieldSystemMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldSystemMetaData.OuterSingleton, Z_Construct_UClass_UFieldSystemMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldSystemMetaData.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldSystemMetaData>()
{
	return UFieldSystemMetaData::StaticClass();
}
UFieldSystemMetaData::UFieldSystemMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSystemMetaData);
// End Class UFieldSystemMetaData

// Begin Class UFieldSystemMetaDataIteration Function SetMetaDataIteration
struct Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics
{
	struct FieldSystemMetaDataIteration_eventSetMetaDataIteration_Parms
	{
		int32 Iterations;
		UFieldSystemMetaDataIteration* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set the number of iteration type\n\x09 * @param    Iterations Number of iterations (WIP)\n\x09 */" },
		{ "Iterations", "1" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set the number of iteration type\n@param    Iterations Number of iterations (WIP)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "DisplayName", "Iteration Count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemMetaDataIteration_eventSetMetaDataIteration_Parms, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemMetaDataIteration_eventSetMetaDataIteration_Parms, ReturnValue), Z_Construct_UClass_UFieldSystemMetaDataIteration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::NewProp_Iterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemMetaDataIteration, nullptr, "SetMetaDataIteration", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::FieldSystemMetaDataIteration_eventSetMetaDataIteration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::FieldSystemMetaDataIteration_eventSetMetaDataIteration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemMetaDataIteration::execSetMetaDataIteration)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Iterations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFieldSystemMetaDataIteration**)Z_Param__Result=P_THIS->SetMetaDataIteration(Z_Param_Iterations);
	P_NATIVE_END;
}
// End Class UFieldSystemMetaDataIteration Function SetMetaDataIteration

// Begin Class UFieldSystemMetaDataIteration
void UFieldSystemMetaDataIteration::StaticRegisterNativesUFieldSystemMetaDataIteration()
{
	UClass* Class = UFieldSystemMetaDataIteration::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMetaDataIteration", &UFieldSystemMetaDataIteration::execSetMetaDataIteration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldSystemMetaDataIteration);
UClass* Z_Construct_UClass_UFieldSystemMetaDataIteration_NoRegister()
{
	return UFieldSystemMetaDataIteration::StaticClass();
}
struct Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n* UFieldSystemMetaDataIteration : Not used anymore, just hiding it right now but will probably be deprecated if not used in the future\n*/" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "* UFieldSystemMetaDataIteration : Not used anymore, just hiding it right now but will probably be deprecated if not used in the future" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Number of iterations (WIP) */" },
		{ "DisplayName", "Iteration Count" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Number of iterations (WIP)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldSystemMetaDataIteration_SetMetaDataIteration, "SetMetaDataIteration" }, // 777459633
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSystemMetaDataIteration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemMetaDataIteration, Iterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Iterations_MetaData), NewProp_Iterations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::NewProp_Iterations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldSystemMetaData,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::ClassParams = {
	&UFieldSystemMetaDataIteration::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldSystemMetaDataIteration()
{
	if (!Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.OuterSingleton, Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldSystemMetaDataIteration.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldSystemMetaDataIteration>()
{
	return UFieldSystemMetaDataIteration::StaticClass();
}
UFieldSystemMetaDataIteration::UFieldSystemMetaDataIteration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSystemMetaDataIteration);
// End Class UFieldSystemMetaDataIteration

// Begin Class UFieldSystemMetaDataProcessingResolution Function SetMetaDataaProcessingResolutionType
struct Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics
{
	struct FieldSystemMetaDataProcessingResolution_eventSetMetaDataaProcessingResolutionType_Parms
	{
		TEnumAsByte<EFieldResolutionType> ResolutionType;
		UFieldSystemMetaDataProcessingResolution* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set the processing resolution type\n\x09 * @param    ResolutionType Type of processing resolution used to select the particles on which the field will be applied\n\x09 */" },
		{ "DisplayName", "Set Meta Data Resolution" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set the processing resolution type\n@param    ResolutionType Type of processing resolution used to select the particles on which the field will be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResolutionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::NewProp_ResolutionType = { "ResolutionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemMetaDataProcessingResolution_eventSetMetaDataaProcessingResolutionType_Parms, ResolutionType), Z_Construct_UEnum_Chaos_EFieldResolutionType, METADATA_PARAMS(0, nullptr) }; // 3750430846
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemMetaDataProcessingResolution_eventSetMetaDataaProcessingResolutionType_Parms, ReturnValue), Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::NewProp_ResolutionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution, nullptr, "SetMetaDataaProcessingResolutionType", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::FieldSystemMetaDataProcessingResolution_eventSetMetaDataaProcessingResolutionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::FieldSystemMetaDataProcessingResolution_eventSetMetaDataaProcessingResolutionType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemMetaDataProcessingResolution::execSetMetaDataaProcessingResolutionType)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ResolutionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFieldSystemMetaDataProcessingResolution**)Z_Param__Result=P_THIS->SetMetaDataaProcessingResolutionType(EFieldResolutionType(Z_Param_ResolutionType));
	P_NATIVE_END;
}
// End Class UFieldSystemMetaDataProcessingResolution Function SetMetaDataaProcessingResolutionType

// Begin Class UFieldSystemMetaDataProcessingResolution
void UFieldSystemMetaDataProcessingResolution::StaticRegisterNativesUFieldSystemMetaDataProcessingResolution()
{
	UClass* Class = UFieldSystemMetaDataProcessingResolution::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMetaDataaProcessingResolutionType", &UFieldSystemMetaDataProcessingResolution::execSetMetaDataaProcessingResolutionType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldSystemMetaDataProcessingResolution);
UClass* Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_NoRegister()
{
	return UFieldSystemMetaDataProcessingResolution::StaticClass();
}
struct Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "DisplayName", "MetaDataResolution" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Control the set of particles on which the field will be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Precessing resolution type used to select the particles on which the field will be applied */" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Precessing resolution type used to select the particles on which the field will be applied" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResolutionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType, "SetMetaDataaProcessingResolutionType" }, // 2408120536
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSystemMetaDataProcessingResolution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::NewProp_ResolutionType = { "ResolutionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemMetaDataProcessingResolution, ResolutionType), Z_Construct_UEnum_Chaos_EFieldResolutionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionType_MetaData), NewProp_ResolutionType_MetaData) }; // 3750430846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::NewProp_ResolutionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldSystemMetaData,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::ClassParams = {
	&UFieldSystemMetaDataProcessingResolution::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution()
{
	if (!Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.OuterSingleton, Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldSystemMetaDataProcessingResolution>()
{
	return UFieldSystemMetaDataProcessingResolution::StaticClass();
}
UFieldSystemMetaDataProcessingResolution::UFieldSystemMetaDataProcessingResolution(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSystemMetaDataProcessingResolution);
// End Class UFieldSystemMetaDataProcessingResolution

// Begin Class UFieldSystemMetaDataFilter Function SetMetaDataFilterType
struct Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics
{
	struct FieldSystemMetaDataFilter_eventSetMetaDataFilterType_Parms
	{
		TEnumAsByte<EFieldFilterType> FilterType;
		TEnumAsByte<EFieldObjectType> ObjectType;
		TEnumAsByte<EFieldPositionType> PositionType;
		UFieldSystemMetaDataFilter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set the particles filter type\n\x09 * @param    FilterType State type used to select the state particles on which the field will be applied\n\x09 * @param    ObjectType Object type used to select the type of objects(rigid, cloth...) on which the field will be applied\n\x09 * @param    PositionType Position type used to compute the samples positions\n\x09 */" },
		{ "DisplayName", "Set Meta Data Filter" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set the particles filter type\n@param    FilterType State type used to select the state particles on which the field will be applied\n@param    ObjectType Object type used to select the type of objects(rigid, cloth...) on which the field will be applied\n@param    PositionType Position type used to compute the samples positions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "DisplayName", "State Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[] = {
		{ "DisplayName", "Object Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionType_MetaData[] = {
		{ "DisplayName", "Position Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemMetaDataFilter_eventSetMetaDataFilterType_Parms, FilterType), Z_Construct_UEnum_Chaos_EFieldFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 1921589400
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemMetaDataFilter_eventSetMetaDataFilterType_Parms, ObjectType), Z_Construct_UEnum_Chaos_EFieldObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectType_MetaData), NewProp_ObjectType_MetaData) }; // 522769748
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::NewProp_PositionType = { "PositionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemMetaDataFilter_eventSetMetaDataFilterType_Parms, PositionType), Z_Construct_UEnum_Chaos_EFieldPositionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionType_MetaData), NewProp_PositionType_MetaData) }; // 29621096
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldSystemMetaDataFilter_eventSetMetaDataFilterType_Parms, ReturnValue), Z_Construct_UClass_UFieldSystemMetaDataFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::NewProp_ObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::NewProp_PositionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldSystemMetaDataFilter, nullptr, "SetMetaDataFilterType", nullptr, nullptr, Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::FieldSystemMetaDataFilter_eventSetMetaDataFilterType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::FieldSystemMetaDataFilter_eventSetMetaDataFilterType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldSystemMetaDataFilter::execSetMetaDataFilterType)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FilterType);
	P_GET_PROPERTY(FByteProperty,Z_Param_ObjectType);
	P_GET_PROPERTY(FByteProperty,Z_Param_PositionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFieldSystemMetaDataFilter**)Z_Param__Result=P_THIS->SetMetaDataFilterType(EFieldFilterType(Z_Param_FilterType),EFieldObjectType(Z_Param_ObjectType),EFieldPositionType(Z_Param_PositionType));
	P_NATIVE_END;
}
// End Class UFieldSystemMetaDataFilter Function SetMetaDataFilterType

// Begin Class UFieldSystemMetaDataFilter
void UFieldSystemMetaDataFilter::StaticRegisterNativesUFieldSystemMetaDataFilter()
{
	UClass* Class = UFieldSystemMetaDataFilter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMetaDataFilterType", &UFieldSystemMetaDataFilter::execSetMetaDataFilterType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldSystemMetaDataFilter);
UClass* Z_Construct_UClass_UFieldSystemMetaDataFilter_NoRegister()
{
	return UFieldSystemMetaDataFilter::StaticClass();
}
struct Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "DisplayName", "MetaDataFilter" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Filter the particles on which the field will be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Filter state type used to select the particles on which the field will be applied */" },
		{ "DisplayName", "State Type" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Filter state type used to select the particles on which the field will be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Filter object type used to select the particles on which the field will be applied */" },
		{ "DisplayName", "Object Type" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Filter object type used to select the particles on which the field will be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionType_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Specify which position type will be used for the field evaluation*/" },
		{ "DisplayName", "Position Type" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Specify which position type will be used for the field evaluation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldSystemMetaDataFilter_SetMetaDataFilterType, "SetMetaDataFilterType" }, // 2201852374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldSystemMetaDataFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemMetaDataFilter, FilterType), Z_Construct_UEnum_Chaos_EFieldFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 1921589400
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemMetaDataFilter, ObjectType), Z_Construct_UEnum_Chaos_EFieldObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectType_MetaData), NewProp_ObjectType_MetaData) }; // 522769748
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::NewProp_PositionType = { "PositionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFieldSystemMetaDataFilter, PositionType), Z_Construct_UEnum_Chaos_EFieldPositionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionType_MetaData), NewProp_PositionType_MetaData) }; // 29621096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::NewProp_ObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::NewProp_PositionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldSystemMetaData,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::ClassParams = {
	&UFieldSystemMetaDataFilter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldSystemMetaDataFilter()
{
	if (!Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.OuterSingleton, Z_Construct_UClass_UFieldSystemMetaDataFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldSystemMetaDataFilter.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldSystemMetaDataFilter>()
{
	return UFieldSystemMetaDataFilter::StaticClass();
}
UFieldSystemMetaDataFilter::UFieldSystemMetaDataFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldSystemMetaDataFilter);
// End Class UFieldSystemMetaDataFilter

// Begin Class UFieldNodeBase
void UFieldNodeBase::StaticRegisterNativesUFieldNodeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldNodeBase);
UClass* Z_Construct_UClass_UFieldNodeBase_NoRegister()
{
	return UFieldNodeBase::StaticClass();
}
struct Z_Construct_UClass_UFieldNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Field Evaluation\n*/" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Field Evaluation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldNodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFieldNodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldNodeBase_Statics::ClassParams = {
	&UFieldNodeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldNodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldNodeBase()
{
	if (!Z_Registration_Info_UClass_UFieldNodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldNodeBase.OuterSingleton, Z_Construct_UClass_UFieldNodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldNodeBase.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldNodeBase>()
{
	return UFieldNodeBase::StaticClass();
}
UFieldNodeBase::UFieldNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldNodeBase);
// End Class UFieldNodeBase

// Begin Class UFieldNodeInt
void UFieldNodeInt::StaticRegisterNativesUFieldNodeInt()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldNodeInt);
UClass* Z_Construct_UClass_UFieldNodeInt_NoRegister()
{
	return UFieldNodeInt::StaticClass();
}
struct Z_Construct_UClass_UFieldNodeInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* FieldNodeInt\n*/" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "FieldNodeInt" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldNodeInt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFieldNodeInt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNodeInt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldNodeInt_Statics::ClassParams = {
	&UFieldNodeInt::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNodeInt_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldNodeInt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldNodeInt()
{
	if (!Z_Registration_Info_UClass_UFieldNodeInt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldNodeInt.OuterSingleton, Z_Construct_UClass_UFieldNodeInt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldNodeInt.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldNodeInt>()
{
	return UFieldNodeInt::StaticClass();
}
UFieldNodeInt::UFieldNodeInt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldNodeInt);
// End Class UFieldNodeInt

// Begin Class UFieldNodeFloat
void UFieldNodeFloat::StaticRegisterNativesUFieldNodeFloat()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldNodeFloat);
UClass* Z_Construct_UClass_UFieldNodeFloat_NoRegister()
{
	return UFieldNodeFloat::StaticClass();
}
struct Z_Construct_UClass_UFieldNodeFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* FieldNodeFloat\n*/" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "FieldNodeFloat" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldNodeFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFieldNodeFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNodeFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldNodeFloat_Statics::ClassParams = {
	&UFieldNodeFloat::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNodeFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldNodeFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldNodeFloat()
{
	if (!Z_Registration_Info_UClass_UFieldNodeFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldNodeFloat.OuterSingleton, Z_Construct_UClass_UFieldNodeFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldNodeFloat.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldNodeFloat>()
{
	return UFieldNodeFloat::StaticClass();
}
UFieldNodeFloat::UFieldNodeFloat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldNodeFloat);
// End Class UFieldNodeFloat

// Begin Class UFieldNodeVector
void UFieldNodeVector::StaticRegisterNativesUFieldNodeVector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldNodeVector);
UClass* Z_Construct_UClass_UFieldNodeVector_NoRegister()
{
	return UFieldNodeVector::StaticClass();
}
struct Z_Construct_UClass_UFieldNodeVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* FieldNodeVector\n*/" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "FieldNodeVector" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldNodeVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFieldNodeVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNodeVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldNodeVector_Statics::ClassParams = {
	&UFieldNodeVector::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNodeVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldNodeVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldNodeVector()
{
	if (!Z_Registration_Info_UClass_UFieldNodeVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldNodeVector.OuterSingleton, Z_Construct_UClass_UFieldNodeVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldNodeVector.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UFieldNodeVector>()
{
	return UFieldNodeVector::StaticClass();
}
UFieldNodeVector::UFieldNodeVector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldNodeVector);
// End Class UFieldNodeVector

// Begin Class UUniformInteger Function SetUniformInteger
struct Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics
{
	struct UniformInteger_eventSetUniformInteger_Parms
	{
		int32 Magnitude;
		UUniformInteger* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set a uniform integer value independently of the sample position. The output is equal to magnitude\n\x09 * @param    Magnitude The field output will be equal the magnitude\n\x09 */" },
		{ "Magnitude", "0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a uniform integer value independently of the sample position. The output is equal to magnitude\n@param    Magnitude The field output will be equal the magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformInteger_eventSetUniformInteger_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformInteger_eventSetUniformInteger_Parms, ReturnValue), Z_Construct_UClass_UUniformInteger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformInteger, nullptr, "SetUniformInteger", nullptr, nullptr, Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::UniformInteger_eventSetUniformInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::UniformInteger_eventSetUniformInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniformInteger_SetUniformInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformInteger_SetUniformInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniformInteger::execSetUniformInteger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Magnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUniformInteger**)Z_Param__Result=P_THIS->SetUniformInteger(Z_Param_Magnitude);
	P_NATIVE_END;
}
// End Class UUniformInteger Function SetUniformInteger

// Begin Class UUniformInteger
void UUniformInteger::StaticRegisterNativesUUniformInteger()
{
	UClass* Class = UUniformInteger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUniformInteger", &UUniformInteger::execSetUniformInteger },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniformInteger);
UClass* Z_Construct_UClass_UUniformInteger_NoRegister()
{
	return UUniformInteger::StaticClass();
}
struct Z_Construct_UClass_UUniformInteger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a uniform integer value independently of the sample position. The output is equal to magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The field output will be equal the magnitude */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The field output will be equal the magnitude" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniformInteger_SetUniformInteger, "SetUniformInteger" }, // 3374193865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformInteger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUniformInteger_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUniformInteger, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniformInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformInteger_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformInteger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUniformInteger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeInt,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformInteger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniformInteger_Statics::ClassParams = {
	&UUniformInteger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUniformInteger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUniformInteger_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformInteger_Statics::Class_MetaDataParams), Z_Construct_UClass_UUniformInteger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUniformInteger()
{
	if (!Z_Registration_Info_UClass_UUniformInteger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniformInteger.OuterSingleton, Z_Construct_UClass_UUniformInteger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUniformInteger.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UUniformInteger>()
{
	return UUniformInteger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformInteger);
// End Class UUniformInteger

// Begin Class URadialIntMask Function SetRadialIntMask
struct Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics
{
	struct RadialIntMask_eventSetRadialIntMask_Parms
	{
		float Radius;
		FVector Position;
		int32 InteriorValue;
		int32 ExteriorValue;
		TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn;
		URadialIntMask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09* This function first defines a radial integer field equal to Interior-value inside a sphere / Exterior-value outside. This field will be used alongside the particle input value and the mask condition to compute the particle output value.\n\x09 * - If Mask-condition = set-always : the particle output value will be equal to Interior-value if the particle position is inside a sphere / Exterior-value otherwise. \n\x09 * - If Mask-condition = merge-interior : the particle output value will be equal to Interior-value if the particle position is inside the sphere or if the particle input value is already Interior-Value / Exterior-value otherwise.\n\x09 * - If Mask-condition = merge-exterior : the particle output value will be equal to Exterior-value if the particle position is outside the sphere or if the particle input value is already Exterior-Value / Interior-value otherwise.\n\x09 * @param    Radius Radius of the radial field\n\x09 * @param    Position Center position of the radial field\"\n\x09 * @param    InteriorValue If the sample distance from the center is less than radius, the intermediate value will be set the interior value\n\x09 * @param    ExteriorValue If the sample distance from the center is greater than radius, the intermediate value will be set the exterior value\n\x09 * @param    SetMaskConditionIn If the mask condition is set to always the output value will be the intermediate one. If set to not interior/exterior the output value will be the intermediate one if the input is different from the interior/exterior value\n\x09 */" },
		{ "DisplayName", "Set Radial Mask" },
		{ "InteriorValue", "1" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "This function first defines a radial integer field equal to Interior-value inside a sphere / Exterior-value outside. This field will be used alongside the particle input value and the mask condition to compute the particle output value.\n- If Mask-condition = set-always : the particle output value will be equal to Interior-value if the particle position is inside a sphere / Exterior-value otherwise.\n- If Mask-condition = merge-interior : the particle output value will be equal to Interior-value if the particle position is inside the sphere or if the particle input value is already Interior-Value / Exterior-value otherwise.\n- If Mask-condition = merge-exterior : the particle output value will be equal to Exterior-value if the particle position is outside the sphere or if the particle input value is already Exterior-Value / Interior-value otherwise.\n@param    Radius Radius of the radial field\n@param    Position Center position of the radial field\"\n@param    InteriorValue If the sample distance from the center is less than radius, the intermediate value will be set the interior value\n@param    ExteriorValue If the sample distance from the center is greater than radius, the intermediate value will be set the exterior value\n@param    SetMaskConditionIn If the mask condition is set to always the output value will be the intermediate one. If set to not interior/exterior the output value will be the intermediate one if the input is different from the interior/exterior value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Mask Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorValue_MetaData[] = {
		{ "DisplayName", "Interior Value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorValue_MetaData[] = {
		{ "DisplayName", "Exterior Value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetMaskConditionIn_MetaData[] = {
		{ "DisplayName", "Mask Condition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteriorValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExteriorValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SetMaskConditionIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialIntMask_eventSetRadialIntMask_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialIntMask_eventSetRadialIntMask_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_InteriorValue = { "InteriorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialIntMask_eventSetRadialIntMask_Parms, InteriorValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorValue_MetaData), NewProp_InteriorValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_ExteriorValue = { "ExteriorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialIntMask_eventSetRadialIntMask_Parms, ExteriorValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExteriorValue_MetaData), NewProp_ExteriorValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_SetMaskConditionIn = { "SetMaskConditionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialIntMask_eventSetRadialIntMask_Parms, SetMaskConditionIn), Z_Construct_UEnum_Chaos_ESetMaskConditionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetMaskConditionIn_MetaData), NewProp_SetMaskConditionIn_MetaData) }; // 256413731
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialIntMask_eventSetRadialIntMask_Parms, ReturnValue), Z_Construct_UClass_URadialIntMask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_InteriorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_ExteriorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_SetMaskConditionIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialIntMask, nullptr, "SetRadialIntMask", nullptr, nullptr, Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::RadialIntMask_eventSetRadialIntMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::RadialIntMask_eventSetRadialIntMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadialIntMask_SetRadialIntMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialIntMask_SetRadialIntMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadialIntMask::execSetRadialIntMask)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FIntProperty,Z_Param_InteriorValue);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExteriorValue);
	P_GET_PROPERTY(FByteProperty,Z_Param_SetMaskConditionIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URadialIntMask**)Z_Param__Result=P_THIS->SetRadialIntMask(Z_Param_Radius,Z_Param_Position,Z_Param_InteriorValue,Z_Param_ExteriorValue,ESetMaskConditionType(Z_Param_SetMaskConditionIn));
	P_NATIVE_END;
}
// End Class URadialIntMask Function SetRadialIntMask

// Begin Class URadialIntMask
void URadialIntMask::StaticRegisterNativesURadialIntMask()
{
	UClass* Class = URadialIntMask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetRadialIntMask", &URadialIntMask::execSetRadialIntMask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadialIntMask);
UClass* Z_Construct_UClass_URadialIntMask_NoRegister()
{
	return URadialIntMask::StaticClass();
}
struct Z_Construct_UClass_URadialIntMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "This function first defines a radial integer field equal to Interior-value inside a sphere / Exterior-value outside. This field will be used alongside the particle input value and the mask condition to compute the particle output value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Radius of the radial mask field */" },
		{ "DisplayName", "Mask Radius" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Radius of the radial mask field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Center position of the radial mask field */" },
		{ "DisplayName", "Center Position" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Center position of the radial mask field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorValue_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** If the sample distance from the center is less than radius, the intermediate value will be set the interior value */" },
		{ "DisplayName", "Interior Value" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "If the sample distance from the center is less than radius, the intermediate value will be set the interior value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExteriorValue_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** If the sample distance from the center is greater than radius, the intermediate value will be set the exterior value */" },
		{ "DisplayName", "Exterior Value" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "If the sample distance from the center is greater than radius, the intermediate value will be set the exterior value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetMaskCondition_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** If the mask condition is set to always the output value will be the intermediate one. If set to not interior/exterior the output value will be the intermediate one if the input is different from the interior/exterior value */" },
		{ "DisplayName", "Mask Condition" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "If the mask condition is set to always the output value will be the intermediate one. If set to not interior/exterior the output value will be the intermediate one if the input is different from the interior/exterior value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteriorValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExteriorValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SetMaskCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URadialIntMask_SetRadialIntMask, "SetRadialIntMask" }, // 4091220965
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadialIntMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialIntMask_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialIntMask, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialIntMask_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialIntMask, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URadialIntMask_Statics::NewProp_InteriorValue = { "InteriorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialIntMask, InteriorValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorValue_MetaData), NewProp_InteriorValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URadialIntMask_Statics::NewProp_ExteriorValue = { "ExteriorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialIntMask, ExteriorValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExteriorValue_MetaData), NewProp_ExteriorValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URadialIntMask_Statics::NewProp_SetMaskCondition = { "SetMaskCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialIntMask, SetMaskCondition), Z_Construct_UEnum_Chaos_ESetMaskConditionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetMaskCondition_MetaData), NewProp_SetMaskCondition_MetaData) }; // 256413731
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadialIntMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialIntMask_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialIntMask_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialIntMask_Statics::NewProp_InteriorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialIntMask_Statics::NewProp_ExteriorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialIntMask_Statics::NewProp_SetMaskCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialIntMask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URadialIntMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeInt,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialIntMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URadialIntMask_Statics::ClassParams = {
	&URadialIntMask::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URadialIntMask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URadialIntMask_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URadialIntMask_Statics::Class_MetaDataParams), Z_Construct_UClass_URadialIntMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URadialIntMask()
{
	if (!Z_Registration_Info_UClass_URadialIntMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadialIntMask.OuterSingleton, Z_Construct_UClass_URadialIntMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URadialIntMask.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<URadialIntMask>()
{
	return URadialIntMask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URadialIntMask);
// End Class URadialIntMask

// Begin Class UUniformScalar Function SetUniformScalar
struct Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics
{
	struct UniformScalar_eventSetUniformScalar_Parms
	{
		float Magnitude;
		UUniformScalar* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set a uniform scalar value independently of the sample position. The output is equal to magnitude\n\x09 * @param    Magnitude The field output will be equal the magnitude\n\x09 */" },
		{ "Magnitude", "1.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a uniform scalar value independently of the sample position. The output is equal to magnitude\n@param    Magnitude The field output will be equal the magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformScalar_eventSetUniformScalar_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformScalar_eventSetUniformScalar_Parms, ReturnValue), Z_Construct_UClass_UUniformScalar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformScalar, nullptr, "SetUniformScalar", nullptr, nullptr, Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::UniformScalar_eventSetUniformScalar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::UniformScalar_eventSetUniformScalar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniformScalar_SetUniformScalar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformScalar_SetUniformScalar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniformScalar::execSetUniformScalar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUniformScalar**)Z_Param__Result=P_THIS->SetUniformScalar(Z_Param_Magnitude);
	P_NATIVE_END;
}
// End Class UUniformScalar Function SetUniformScalar

// Begin Class UUniformScalar
void UUniformScalar::StaticRegisterNativesUUniformScalar()
{
	UClass* Class = UUniformScalar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUniformScalar", &UUniformScalar::execSetUniformScalar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniformScalar);
UClass* Z_Construct_UClass_UUniformScalar_NoRegister()
{
	return UUniformScalar::StaticClass();
}
struct Z_Construct_UClass_UUniformScalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a uniform scalar value independently of the sample position. The output is equal to magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The field output will be equal the magnitude */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The field output will be equal the magnitude" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniformScalar_SetUniformScalar, "SetUniformScalar" }, // 2032705545
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformScalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUniformScalar_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUniformScalar, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniformScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformScalar_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformScalar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUniformScalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformScalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniformScalar_Statics::ClassParams = {
	&UUniformScalar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUniformScalar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUniformScalar_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformScalar_Statics::Class_MetaDataParams), Z_Construct_UClass_UUniformScalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUniformScalar()
{
	if (!Z_Registration_Info_UClass_UUniformScalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniformScalar.OuterSingleton, Z_Construct_UClass_UUniformScalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUniformScalar.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UUniformScalar>()
{
	return UUniformScalar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformScalar);
// End Class UUniformScalar

// Begin Class UWaveScalar Function SetWaveScalar
struct Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics
{
	struct WaveScalar_eventSetWaveScalar_Parms
	{
		float Magnitude;
		FVector Position;
		float Wavelength;
		float Period;
		float Time;
		TEnumAsByte<EWaveFunctionType> Function;
		TEnumAsByte<EFieldFalloffType> Falloff;
		UWaveScalar* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set a temporal wave scalar value according to the sample distance from the field position.\n\x09 * @param    Magnitude Magnitude of the wave function\n\x09 * @param    Position Center position of the wave field\n\x09 * @param    Wavelength Distance between 2 wave peaks\n\x09 * @param    Period Time over which the wave will travel from one peak to another one. The wave velocity is proportional to wavelength/period\n\x09 * @param    Function Wave function used for the field\n\x09 * @param    Falloff Type of falloff function used if the falloff function is picked\n\x09 */" },
		{ "DisplayName", "Set Wave Scalar" },
		{ "HidePin", "Time" },
		{ "Magnitude", "1.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "Period", "1" },
		{ "ToolTip", "Set a temporal wave scalar value according to the sample distance from the field position.\n@param    Magnitude Magnitude of the wave function\n@param    Position Center position of the wave field\n@param    Wavelength Distance between 2 wave peaks\n@param    Period Time over which the wave will travel from one peak to another one. The wave velocity is proportional to wavelength/period\n@param    Function Wave function used for the field\n@param    Falloff Type of falloff function used if the falloff function is picked" },
		{ "Wavelength", "1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wavelength_MetaData[] = {
		{ "DisplayName", "Wave Length" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "DisplayName", "Wave Period" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "DisplayName", "Time Offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "DisplayName", "Wave Function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "DisplayName", "Falloff Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wavelength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Function;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveScalar_eventSetWaveScalar_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveScalar_eventSetWaveScalar_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Wavelength = { "Wavelength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveScalar_eventSetWaveScalar_Parms, Wavelength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wavelength_MetaData), NewProp_Wavelength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveScalar_eventSetWaveScalar_Parms, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveScalar_eventSetWaveScalar_Parms, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveScalar_eventSetWaveScalar_Parms, Function), Z_Construct_UEnum_Chaos_EWaveFunctionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) }; // 1803665052
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveScalar_eventSetWaveScalar_Parms, Falloff), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 2338715676
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaveScalar_eventSetWaveScalar_Parms, ReturnValue), Z_Construct_UClass_UWaveScalar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Wavelength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveScalar, nullptr, "SetWaveScalar", nullptr, nullptr, Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::WaveScalar_eventSetWaveScalar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::WaveScalar_eventSetWaveScalar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaveScalar_SetWaveScalar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveScalar_SetWaveScalar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaveScalar::execSetWaveScalar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Wavelength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Period);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_PROPERTY(FByteProperty,Z_Param_Function);
	P_GET_PROPERTY(FByteProperty,Z_Param_Falloff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWaveScalar**)Z_Param__Result=P_THIS->SetWaveScalar(Z_Param_Magnitude,Z_Param_Position,Z_Param_Wavelength,Z_Param_Period,Z_Param_Time,EWaveFunctionType(Z_Param_Function),EFieldFalloffType(Z_Param_Falloff));
	P_NATIVE_END;
}
// End Class UWaveScalar Function SetWaveScalar

// Begin Class UWaveScalar
void UWaveScalar::StaticRegisterNativesUWaveScalar()
{
	UClass* Class = UWaveScalar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetWaveScalar", &UWaveScalar::execSetWaveScalar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveScalar);
UClass* Z_Construct_UClass_UWaveScalar_NoRegister()
{
	return UWaveScalar::StaticClass();
}
struct Z_Construct_UClass_UWaveScalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a temporal wave scalar value according to the sample distance from the field position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Magnitude of the wave function */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Magnitude of the wave function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Center position of the wave field */" },
		{ "DisplayName", "Center Position" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Center position of the wave field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wavelength_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Distance between 2 wave peaks */" },
		{ "DisplayName", "Wave Length" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Distance between 2 wave peaks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Time over which the wave will travel from one peak to another one. The wave velocity is proportional to wavelength/period */" },
		{ "DisplayName", "Wave Period" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Time over which the wave will travel from one peak to another one. The wave velocity is proportional to wavelength/period" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Wave function used for the field */" },
		{ "DisplayName", "Wave Function" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Wave function used for the field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Type of falloff function used if the falloff function is picked */" },
		{ "DisplayName", "Falloff Type" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Type of falloff function used if the falloff function is picked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wavelength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Function;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveScalar_SetWaveScalar, "SetWaveScalar" }, // 4232070184
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveScalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveScalar_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveScalar, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveScalar_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveScalar, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveScalar_Statics::NewProp_Wavelength = { "Wavelength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveScalar, Wavelength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wavelength_MetaData), NewProp_Wavelength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveScalar_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveScalar, Period), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Period_MetaData), NewProp_Period_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveScalar_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveScalar, Function), Z_Construct_UEnum_Chaos_EWaveFunctionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) }; // 1803665052
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveScalar_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveScalar, Falloff), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 2338715676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveScalar_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveScalar_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveScalar_Statics::NewProp_Wavelength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveScalar_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveScalar_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveScalar_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveScalar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveScalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveScalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveScalar_Statics::ClassParams = {
	&UWaveScalar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWaveScalar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveScalar_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveScalar_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveScalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveScalar()
{
	if (!Z_Registration_Info_UClass_UWaveScalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveScalar.OuterSingleton, Z_Construct_UClass_UWaveScalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveScalar.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UWaveScalar>()
{
	return UWaveScalar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveScalar);
// End Class UWaveScalar

// Begin Class URadialFalloff Function SetRadialFalloff
struct Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics
{
	struct RadialFalloff_eventSetRadialFalloff_Parms
	{
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		float Radius;
		FVector Position;
		TEnumAsByte<EFieldFalloffType> Falloff;
		URadialFalloff* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Sphere scalar field that will be defined only within a sphere\n\x09 * @param    Magnitude Magnitude of the sphere falloff field\n\x09 * @param    MinRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n\x09 * @param    MaxRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n\x09 * @param    Default The field value will be set to Default if the sample distance from the center is higher than the radius\n\x09 * @param    Radius Radius of the sphere falloff field\n\x09 * @param    Position Center position of the sphere falloff field\n\x09 * @param    Falloff Type of falloff function used if the falloff function is picked\n\x09 */" },
		{ "DisplayName", "Set Radial Falloff" },
		{ "Magnitude", "1.0" },
		{ "MaxRange", "1.0" },
		{ "MinRange", "0.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Sphere scalar field that will be defined only within a sphere\n@param    Magnitude Magnitude of the sphere falloff field\n@param    MinRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n@param    MaxRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n@param    Default The field value will be set to Default if the sample distance from the center is higher than the radius\n@param    Radius Radius of the sphere falloff field\n@param    Position Center position of the sphere falloff field\n@param    Falloff Type of falloff function used if the falloff function is picked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "DisplayName", "Min Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "DisplayName", "Max Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "DisplayName", "Default Value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Sphere Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "DisplayName", "Falloff Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialFalloff_eventSetRadialFalloff_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialFalloff_eventSetRadialFalloff_Parms, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialFalloff_eventSetRadialFalloff_Parms, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialFalloff_eventSetRadialFalloff_Parms, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialFalloff_eventSetRadialFalloff_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialFalloff_eventSetRadialFalloff_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialFalloff_eventSetRadialFalloff_Parms, Falloff), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 2338715676
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialFalloff_eventSetRadialFalloff_Parms, ReturnValue), Z_Construct_UClass_URadialFalloff_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialFalloff, nullptr, "SetRadialFalloff", nullptr, nullptr, Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::RadialFalloff_eventSetRadialFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::RadialFalloff_eventSetRadialFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadialFalloff_SetRadialFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialFalloff_SetRadialFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadialFalloff::execSetRadialFalloff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Default);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FByteProperty,Z_Param_Falloff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URadialFalloff**)Z_Param__Result=P_THIS->SetRadialFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Radius,Z_Param_Position,EFieldFalloffType(Z_Param_Falloff));
	P_NATIVE_END;
}
// End Class URadialFalloff Function SetRadialFalloff

// Begin Class URadialFalloff
void URadialFalloff::StaticRegisterNativesURadialFalloff()
{
	UClass* Class = URadialFalloff::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetRadialFalloff", &URadialFalloff::execSetRadialFalloff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadialFalloff);
UClass* Z_Construct_UClass_URadialFalloff_NoRegister()
{
	return URadialFalloff::StaticClass();
}
struct Z_Construct_UClass_URadialFalloff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Sphere scalar field that will be defined only within a sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Magnitude of the sphere falloff field */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Magnitude of the sphere falloff field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude */" },
		{ "DisplayName", "Min Range" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude */" },
		{ "DisplayName", "Max Range" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The field value will be set to Default if the sample distance from the center is higher than the radius */" },
		{ "DisplayName", "Default Value" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The field value will be set to Default if the sample distance from the center is higher than the radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Radius of the sphere falloff field */" },
		{ "DisplayName", "Sphere Radius" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Radius of the sphere falloff field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Center position of the sphere falloff field */" },
		{ "DisplayName", "Center Position" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Center position of the sphere falloff field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Type of falloff function used to model the evolution of the field from the sphere center to the sample position */" },
		{ "DisplayName", "Falloff Type" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Type of falloff function used to model the evolution of the field from the sphere center to the sample position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URadialFalloff_SetRadialFalloff, "SetRadialFalloff" }, // 3505884987
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadialFalloff>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialFalloff_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialFalloff, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialFalloff_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialFalloff, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialFalloff_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialFalloff, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialFalloff_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialFalloff, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialFalloff_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialFalloff, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialFalloff_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialFalloff, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URadialFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialFalloff, Falloff), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 2338715676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadialFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialFalloff_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialFalloff_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialFalloff_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialFalloff_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialFalloff_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialFalloff_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialFalloff_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialFalloff_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URadialFalloff_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialFalloff_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URadialFalloff_Statics::ClassParams = {
	&URadialFalloff::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URadialFalloff_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URadialFalloff_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URadialFalloff_Statics::Class_MetaDataParams), Z_Construct_UClass_URadialFalloff_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URadialFalloff()
{
	if (!Z_Registration_Info_UClass_URadialFalloff.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadialFalloff.OuterSingleton, Z_Construct_UClass_URadialFalloff_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URadialFalloff.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<URadialFalloff>()
{
	return URadialFalloff::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URadialFalloff);
// End Class URadialFalloff

// Begin Class UPlaneFalloff Function SetPlaneFalloff
struct Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics
{
	struct PlaneFalloff_eventSetPlaneFalloff_Parms
	{
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		float Distance;
		FVector Position;
		FVector Normal;
		TEnumAsByte<EFieldFalloffType> Falloff;
		UPlaneFalloff* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Plane scalar field that will be defined only within a distance from a plane\n\x09 * @param    Magnitude Magnitude of the plane falloff field\n\x09 * @param    MinRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n\x09 * @param    MaxRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n\x09 * @param    Default The field value will be set to default if the sample projected distance ((Sample Position - Center Position).dot(Plane Normal)) is higher than the Plane Distance \n\x09 * @param    Distance Distance limit for the plane falloff field starting from the center position and extending in the direction of the plane normal\n\x09 * @param    Position Plane center position of the plane falloff field\n\x09 * @param    Normal Plane normal of the plane falloff field\n\x09 * @param    Falloff Type of falloff function used to model the evolution of the field from the plane surface to the distance isosurface\n\x09 */" },
		{ "Magnitude", "1.0" },
		{ "MaxRange", "1.0" },
		{ "MinRange", "0.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Plane scalar field that will be defined only within a distance from a plane\n@param    Magnitude Magnitude of the plane falloff field\n@param    MinRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n@param    MaxRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n@param    Default The field value will be set to default if the sample projected distance ((Sample Position - Center Position).dot(Plane Normal)) is higher than the Plane Distance\n@param    Distance Distance limit for the plane falloff field starting from the center position and extending in the direction of the plane normal\n@param    Position Plane center position of the plane falloff field\n@param    Normal Plane normal of the plane falloff field\n@param    Falloff Type of falloff function used to model the evolution of the field from the plane surface to the distance isosurface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "DisplayName", "Min Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "DisplayName", "Max Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "DisplayName", "Default Value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "DisplayName", "Plane Distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "DisplayName", "Plane Normal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "DisplayName", "Falloff Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, Falloff), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 2338715676
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlaneFalloff_eventSetPlaneFalloff_Parms, ReturnValue), Z_Construct_UClass_UPlaneFalloff_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaneFalloff, nullptr, "SetPlaneFalloff", nullptr, nullptr, Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::PlaneFalloff_eventSetPlaneFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::PlaneFalloff_eventSetPlaneFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlaneFalloff::execSetPlaneFalloff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Default);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_PROPERTY(FByteProperty,Z_Param_Falloff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlaneFalloff**)Z_Param__Result=P_THIS->SetPlaneFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Distance,Z_Param_Position,Z_Param_Normal,EFieldFalloffType(Z_Param_Falloff));
	P_NATIVE_END;
}
// End Class UPlaneFalloff Function SetPlaneFalloff

// Begin Class UPlaneFalloff
void UPlaneFalloff::StaticRegisterNativesUPlaneFalloff()
{
	UClass* Class = UPlaneFalloff::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPlaneFalloff", &UPlaneFalloff::execSetPlaneFalloff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneFalloff);
UClass* Z_Construct_UClass_UPlaneFalloff_NoRegister()
{
	return UPlaneFalloff::StaticClass();
}
struct Z_Construct_UClass_UPlaneFalloff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Plane scalar field that will be defined only within a distance from a plane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Magnitude of the plane falloff field */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Magnitude of the plane falloff field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude */" },
		{ "DisplayName", "Min Range" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude */" },
		{ "DisplayName", "Max Range" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The field value will be set to Default if the sample distance from the plane is higher than the distance*/" },
		{ "DisplayName", "Default Value" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The field value will be set to Default if the sample distance from the plane is higher than the distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Distance limit for the plane falloff field*/" },
		{ "DisplayName", "Plane Distance" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Distance limit for the plane falloff field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Plane position of the plane falloff field */" },
		{ "DisplayName", "Center Position" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Plane position of the plane falloff field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Plane normal of the plane falloff field */" },
		{ "DisplayName", "Plane Normal" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Plane normal of the plane falloff field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Type of falloff function used to model the evolution of the field from the plane surface to the distance isosurface */" },
		{ "DisplayName", "Falloff Type" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Type of falloff function used to model the evolution of the field from the plane surface to the distance isosurface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlaneFalloff_SetPlaneFalloff, "SetPlaneFalloff" }, // 3130129415
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneFalloff>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneFalloff, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneFalloff, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneFalloff, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneFalloff, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneFalloff, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneFalloff, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneFalloff, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneFalloff, Falloff), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 2338715676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneFalloff_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneFalloff_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlaneFalloff_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneFalloff_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneFalloff_Statics::ClassParams = {
	&UPlaneFalloff::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlaneFalloff_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneFalloff_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneFalloff_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaneFalloff_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaneFalloff()
{
	if (!Z_Registration_Info_UClass_UPlaneFalloff.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneFalloff.OuterSingleton, Z_Construct_UClass_UPlaneFalloff_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaneFalloff.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UPlaneFalloff>()
{
	return UPlaneFalloff::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneFalloff);
// End Class UPlaneFalloff

// Begin Class UBoxFalloff Function SetBoxFalloff
struct Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics
{
	struct BoxFalloff_eventSetBoxFalloff_Parms
	{
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		FTransform Transform;
		TEnumAsByte<EFieldFalloffType> Falloff;
		UBoxFalloff* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Box scalar field that will be defined only within a box\n\x09 * @param    Magnitude Magnitude of the box falloff field\n\x09 * @param    MinRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n\x09 * @param    MaxRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n\x09 * @param    Default The field value will be set to Default if the sample distance from the box is higher than the scale of the transform\n\x09 * @param    Transform Translation, Rotation and Scale of the unit box\n\x09 * @param    Falloff Type of falloff function used to model the evolution of the field from the box surface to the sample position\n\x09 */" },
		{ "Magnitude", "1.0" },
		{ "MaxRange", "1.0" },
		{ "MinRange", "0.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Box scalar field that will be defined only within a box\n@param    Magnitude Magnitude of the box falloff field\n@param    MinRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n@param    MaxRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n@param    Default The field value will be set to Default if the sample distance from the box is higher than the scale of the transform\n@param    Transform Translation, Rotation and Scale of the unit box\n@param    Falloff Type of falloff function used to model the evolution of the field from the box surface to the sample position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "DisplayName", "Min Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "DisplayName", "Max Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "DisplayName", "Default Value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "DisplayName", "Box Transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "DisplayName", "Falloff Type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxFalloff_eventSetBoxFalloff_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxFalloff_eventSetBoxFalloff_Parms, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxFalloff_eventSetBoxFalloff_Parms, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxFalloff_eventSetBoxFalloff_Parms, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxFalloff_eventSetBoxFalloff_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxFalloff_eventSetBoxFalloff_Parms, Falloff), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 2338715676
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoxFalloff_eventSetBoxFalloff_Parms, ReturnValue), Z_Construct_UClass_UBoxFalloff_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxFalloff, nullptr, "SetBoxFalloff", nullptr, nullptr, Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::BoxFalloff_eventSetBoxFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::BoxFalloff_eventSetBoxFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBoxFalloff::execSetBoxFalloff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Default);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_PROPERTY(FByteProperty,Z_Param_Falloff);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBoxFalloff**)Z_Param__Result=P_THIS->SetBoxFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Transform,EFieldFalloffType(Z_Param_Falloff));
	P_NATIVE_END;
}
// End Class UBoxFalloff Function SetBoxFalloff

// Begin Class UBoxFalloff
void UBoxFalloff::StaticRegisterNativesUBoxFalloff()
{
	UClass* Class = UBoxFalloff::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetBoxFalloff", &UBoxFalloff::execSetBoxFalloff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoxFalloff);
UClass* Z_Construct_UClass_UBoxFalloff_NoRegister()
{
	return UBoxFalloff::StaticClass();
}
struct Z_Construct_UClass_UBoxFalloff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Box scalar field that will be defined only within a box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Magnitude of the box falloff field */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Magnitude of the box falloff field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude*/" },
		{ "DisplayName", "Min Range" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude */" },
		{ "DisplayName", "Max Range" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The field value will be set to Default if the sample distance from the box is higher than the scale of the transform */" },
		{ "DisplayName", "Default Value" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The field value will be set to Default if the sample distance from the box is higher than the scale of the transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Translation, Rotation and Scale of the unit box */" },
		{ "DisplayName", "Box Transform" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Translation, Rotation and Scale of the unit box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Type of falloff function used to model the evolution of the field from the box surface to the sample position */" },
		{ "DisplayName", "Falloff Type" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Type of falloff function used to model the evolution of the field from the box surface to the sample position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoxFalloff_SetBoxFalloff, "SetBoxFalloff" }, // 2742443909
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxFalloff>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxFalloff_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxFalloff, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxFalloff_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxFalloff, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxFalloff_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxFalloff, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxFalloff_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxFalloff, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoxFalloff_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxFalloff, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBoxFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoxFalloff, Falloff), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) }; // 2338715676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxFalloff_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxFalloff_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxFalloff_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxFalloff_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxFalloff_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxFalloff_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxFalloff_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBoxFalloff_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxFalloff_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoxFalloff_Statics::ClassParams = {
	&UBoxFalloff::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBoxFalloff_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoxFalloff_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoxFalloff_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoxFalloff_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoxFalloff()
{
	if (!Z_Registration_Info_UClass_UBoxFalloff.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoxFalloff.OuterSingleton, Z_Construct_UClass_UBoxFalloff_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoxFalloff.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UBoxFalloff>()
{
	return UBoxFalloff::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxFalloff);
// End Class UBoxFalloff

// Begin Class UNoiseField Function SetNoiseField
struct Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics
{
	struct NoiseField_eventSetNoiseField_Parms
	{
		float MinRange;
		float MaxRange;
		FTransform Transform;
		UNoiseField* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Defines a perlin noise scalar value if the sample is within a box\n\x09 * @param    MinRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n\x09 * @param    MaxRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n\x09 * @param    Transform Transform of the box in which the perlin noise will be defined\n\x09 */" },
		{ "DisplayName", "Set Noise Field" },
		{ "MaxRange", "1.0" },
		{ "MinRange", "0.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Defines a perlin noise scalar value if the sample is within a box\n@param    MinRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n@param    MaxRange The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude\n@param    Transform Transform of the box in which the perlin noise will be defined" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "DisplayName", "Min Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "DisplayName", "Max Range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "DisplayName", "Noise Transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NoiseField_eventSetNoiseField_Parms, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NoiseField_eventSetNoiseField_Parms, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NoiseField_eventSetNoiseField_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NoiseField_eventSetNoiseField_Parms, ReturnValue), Z_Construct_UClass_UNoiseField_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoiseField, nullptr, "SetNoiseField", nullptr, nullptr, Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NoiseField_eventSetNoiseField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::NoiseField_eventSetNoiseField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNoiseField_SetNoiseField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNoiseField_SetNoiseField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNoiseField::execSetNoiseField)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNoiseField**)Z_Param__Result=P_THIS->SetNoiseField(Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Transform);
	P_NATIVE_END;
}
// End Class UNoiseField Function SetNoiseField

// Begin Class UNoiseField
void UNoiseField::StaticRegisterNativesUNoiseField()
{
	UClass* Class = UNoiseField::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetNoiseField", &UNoiseField::execSetNoiseField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNoiseField);
UClass* Z_Construct_UClass_UNoiseField_NoRegister()
{
	return UNoiseField::StaticClass();
}
struct Z_Construct_UClass_UNoiseField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Defines a perlin noise scalar value if the sample is within a box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The initial function value between 0 and 1 will be scaled between MinRange and MaxRange */" },
		{ "DisplayName", "Min Range" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The initial function value between 0 and 1 will be scaled between MinRange and MaxRange" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** The initial function value between 0 and 1 will be scaled between MinRange and MaxRange */" },
		{ "DisplayName", "Max Range" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "The initial function value between 0 and 1 will be scaled between MinRange and MaxRange" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Transform of the box in which the perlin noise will be defined */" },
		{ "DisplayName", "Noise Transform" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Transform of the box in which the perlin noise will be defined" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNoiseField_SetNoiseField, "SetNoiseField" }, // 4168120299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoiseField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNoiseField_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNoiseField, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRange_MetaData), NewProp_MinRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNoiseField_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNoiseField, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNoiseField_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNoiseField, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoiseField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoiseField_Statics::NewProp_MinRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoiseField_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoiseField_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNoiseField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNoiseField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNoiseField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoiseField_Statics::ClassParams = {
	&UNoiseField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNoiseField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNoiseField_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNoiseField_Statics::Class_MetaDataParams), Z_Construct_UClass_UNoiseField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNoiseField()
{
	if (!Z_Registration_Info_UClass_UNoiseField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoiseField.OuterSingleton, Z_Construct_UClass_UNoiseField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNoiseField.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UNoiseField>()
{
	return UNoiseField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNoiseField);
// End Class UNoiseField

// Begin Class UUniformVector Function SetUniformVector
struct Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics
{
	struct UniformVector_eventSetUniformVector_Parms
	{
		float Magnitude;
		FVector Direction;
		UUniformVector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set a uniform vector value independently of the sample position.The output is equal to magnitude * direction\n\x09 * @param    Magnitude Magnitude of the uniform vector field\n\x09 * @param    Direction Normalized direction of the uniform vector field\n\x09 */" },
		{ "Magnitude", "1.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a uniform vector value independently of the sample position.The output is equal to magnitude * direction\n@param    Magnitude Magnitude of the uniform vector field\n@param    Direction Normalized direction of the uniform vector field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "DisplayName", "Uniform Direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformVector_eventSetUniformVector_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformVector_eventSetUniformVector_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformVector_eventSetUniformVector_Parms, ReturnValue), Z_Construct_UClass_UUniformVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformVector, nullptr, "SetUniformVector", nullptr, nullptr, Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::UniformVector_eventSetUniformVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::UniformVector_eventSetUniformVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniformVector_SetUniformVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformVector_SetUniformVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniformVector::execSetUniformVector)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUniformVector**)Z_Param__Result=P_THIS->SetUniformVector(Z_Param_Magnitude,Z_Param_Direction);
	P_NATIVE_END;
}
// End Class UUniformVector Function SetUniformVector

// Begin Class UUniformVector
void UUniformVector::StaticRegisterNativesUUniformVector()
{
	UClass* Class = UUniformVector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUniformVector", &UUniformVector::execSetUniformVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniformVector);
UClass* Z_Construct_UClass_UUniformVector_NoRegister()
{
	return UUniformVector::StaticClass();
}
struct Z_Construct_UClass_UUniformVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a uniform vector value independently of the sample position.The output is equal to magnitude * direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Magnitude of the uniform vector field */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Magnitude of the uniform vector field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Normalized direction of the uniform vector field */" },
		{ "DisplayName", "Uniform Direction" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Normalized direction of the uniform vector field" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniformVector_SetUniformVector, "SetUniformVector" }, // 1946693931
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUniformVector_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUniformVector, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUniformVector_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUniformVector, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniformVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformVector_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformVector_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformVector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUniformVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeVector,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniformVector_Statics::ClassParams = {
	&UUniformVector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUniformVector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUniformVector_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UUniformVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUniformVector()
{
	if (!Z_Registration_Info_UClass_UUniformVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniformVector.OuterSingleton, Z_Construct_UClass_UUniformVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUniformVector.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UUniformVector>()
{
	return UUniformVector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformVector);
// End Class UUniformVector

// Begin Class URadialVector Function SetRadialVector
struct Z_Construct_UFunction_URadialVector_SetRadialVector_Statics
{
	struct RadialVector_eventSetRadialVector_Parms
	{
		float Magnitude;
		FVector Position;
		URadialVector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set a radial vector value. The direction is the normalized vector from the field position to the sample one. The output is equal to this direction * magnitude.\n\x09 * @param    Magnitude Magnitude of the radial vector field\n\x09 * @param    Position Center position of the radial vector field\n\x09 */" },
		{ "Magnitude", "1.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a radial vector value. The direction is the normalized vector from the field position to the sample one. The output is equal to this direction * magnitude.\n@param    Magnitude Magnitude of the radial vector field\n@param    Position Center position of the radial vector field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialVector_eventSetRadialVector_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialVector_eventSetRadialVector_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RadialVector_eventSetRadialVector_Parms, ReturnValue), Z_Construct_UClass_URadialVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialVector, nullptr, "SetRadialVector", nullptr, nullptr, Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::RadialVector_eventSetRadialVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::RadialVector_eventSetRadialVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URadialVector_SetRadialVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialVector_SetRadialVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URadialVector::execSetRadialVector)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URadialVector**)Z_Param__Result=P_THIS->SetRadialVector(Z_Param_Magnitude,Z_Param_Position);
	P_NATIVE_END;
}
// End Class URadialVector Function SetRadialVector

// Begin Class URadialVector
void URadialVector::StaticRegisterNativesURadialVector()
{
	UClass* Class = URadialVector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetRadialVector", &URadialVector::execSetRadialVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadialVector);
UClass* Z_Construct_UClass_URadialVector_NoRegister()
{
	return URadialVector::StaticClass();
}
struct Z_Construct_UClass_URadialVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a radial vector value, the direction being the vector from the sample position to the field one. The output is equal to magnitude * direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Magnitude of the radial vector field */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Magnitude of the radial vector field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Center position of the radial vector field */" },
		{ "DisplayName", "Center Position" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Center position of the radial vector field" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URadialVector_SetRadialVector, "SetRadialVector" }, // 4063299856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadialVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialVector_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialVector, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URadialVector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadialVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialVector_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialVector_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialVector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URadialVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeVector,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URadialVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URadialVector_Statics::ClassParams = {
	&URadialVector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URadialVector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URadialVector_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URadialVector_Statics::Class_MetaDataParams), Z_Construct_UClass_URadialVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URadialVector()
{
	if (!Z_Registration_Info_UClass_URadialVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadialVector.OuterSingleton, Z_Construct_UClass_URadialVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URadialVector.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<URadialVector>()
{
	return URadialVector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URadialVector);
// End Class URadialVector

// Begin Class URandomVector Function SetRandomVector
struct Z_Construct_UFunction_URandomVector_SetRandomVector_Statics
{
	struct RandomVector_eventSetRandomVector_Parms
	{
		float Magnitude;
		URandomVector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Set a random vector value independently of the sample position. The output is equal to magnitude * random direction\n\x09 * @param    Magnitude Magnitude of the random vector field\n\x09 */" },
		{ "Magnitude", "1.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a random vector value independently of the sample position. The output is equal to magnitude * random direction\n@param    Magnitude Magnitude of the random vector field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RandomVector_eventSetRandomVector_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RandomVector_eventSetRandomVector_Parms, ReturnValue), Z_Construct_UClass_URandomVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URandomVector, nullptr, "SetRandomVector", nullptr, nullptr, Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::RandomVector_eventSetRandomVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::RandomVector_eventSetRandomVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URandomVector_SetRandomVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URandomVector_SetRandomVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URandomVector::execSetRandomVector)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URandomVector**)Z_Param__Result=P_THIS->SetRandomVector(Z_Param_Magnitude);
	P_NATIVE_END;
}
// End Class URandomVector Function SetRandomVector

// Begin Class URandomVector
void URandomVector::StaticRegisterNativesURandomVector()
{
	UClass* Class = URandomVector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetRandomVector", &URandomVector::execSetRandomVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URandomVector);
UClass* Z_Construct_UClass_URandomVector_NoRegister()
{
	return URandomVector::StaticClass();
}
struct Z_Construct_UClass_URandomVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Set a random vector value independently of the sample position. The output is equal to magnitude * random direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Magnitude of the random vector field*/" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Magnitude of the random vector field" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URandomVector_SetRandomVector, "SetRandomVector" }, // 1154445911
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URandomVector_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URandomVector, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URandomVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomVector_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URandomVector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URandomVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeVector,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URandomVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URandomVector_Statics::ClassParams = {
	&URandomVector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URandomVector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URandomVector_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URandomVector_Statics::Class_MetaDataParams), Z_Construct_UClass_URandomVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URandomVector()
{
	if (!Z_Registration_Info_UClass_URandomVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URandomVector.OuterSingleton, Z_Construct_UClass_URandomVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URandomVector.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<URandomVector>()
{
	return URandomVector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URandomVector);
// End Class URandomVector

// Begin Class UOperatorField Function SetOperatorField
struct Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics
{
	struct OperatorField_eventSetOperatorField_Parms
	{
		float Magnitude;
		const UFieldNodeBase* LeftField;
		const UFieldNodeBase* RightField;
		TEnumAsByte<EFieldOperationType> Operation;
		UOperatorField* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Compute an operation between 2 incoming fields\n\x09 * @param    Magnitude Magnitude of the operator field\n\x09 * @param    LeftField Input field A to be processed\n\x09 * @param    RightField Input field B to be processed\n\x09 * @param    Operation Type of math operation you want to perform between the 2 fields\n\x09 */" },
		{ "Magnitude", "1.0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Compute an operation between 2 incoming fields\n@param    Magnitude Magnitude of the operator field\n@param    LeftField Input field A to be processed\n@param    RightField Input field B to be processed\n@param    Operation Type of math operation you want to perform between the 2 fields" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "DisplayName", "Field Magnitude" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftField_MetaData[] = {
		{ "DisplayName", "Left Field" },
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightField_MetaData[] = {
		{ "DisplayName", "Right Field" },
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "DisplayName", "Field Operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftField;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightField;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatorField_eventSetOperatorField_Parms, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_LeftField = { "LeftField", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatorField_eventSetOperatorField_Parms, LeftField), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftField_MetaData), NewProp_LeftField_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_RightField = { "RightField", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatorField_eventSetOperatorField_Parms, RightField), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightField_MetaData), NewProp_RightField_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatorField_eventSetOperatorField_Parms, Operation), Z_Construct_UEnum_Chaos_EFieldOperationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 3966773771
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OperatorField_eventSetOperatorField_Parms, ReturnValue), Z_Construct_UClass_UOperatorField_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_LeftField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_RightField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperatorField, nullptr, "SetOperatorField", nullptr, nullptr, Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::OperatorField_eventSetOperatorField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::OperatorField_eventSetOperatorField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOperatorField_SetOperatorField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOperatorField_SetOperatorField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOperatorField::execSetOperatorField)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
	P_GET_OBJECT(UFieldNodeBase,Z_Param_LeftField);
	P_GET_OBJECT(UFieldNodeBase,Z_Param_RightField);
	P_GET_PROPERTY(FByteProperty,Z_Param_Operation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOperatorField**)Z_Param__Result=P_THIS->SetOperatorField(Z_Param_Magnitude,Z_Param_LeftField,Z_Param_RightField,EFieldOperationType(Z_Param_Operation));
	P_NATIVE_END;
}
// End Class UOperatorField Function SetOperatorField

// Begin Class UOperatorField
void UOperatorField::StaticRegisterNativesUOperatorField()
{
	UClass* Class = UOperatorField::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetOperatorField", &UOperatorField::execSetOperatorField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperatorField);
UClass* Z_Construct_UClass_UOperatorField_NoRegister()
{
	return UOperatorField::StaticClass();
}
struct Z_Construct_UClass_UOperatorField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Compute an operation between 2 incoming fields" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Magnitude of the operator field */" },
		{ "DisplayName", "Field Magnitude" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Magnitude of the operator field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightField_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Right field to be processed */" },
		{ "DisplayName", "Right Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Right field to be processed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftField_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Left field to be processed */" },
		{ "DisplayName", "Left Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Left field to be processed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Type of operation you want to perform between the 2 fields */" },
		{ "DisplayName", "Field Operation" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Type of operation you want to perform between the 2 fields" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightField;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftField;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperatorField_SetOperatorField, "SetOperatorField" }, // 651051243
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperatorField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOperatorField_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatorField, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOperatorField_Statics::NewProp_RightField = { "RightField", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatorField, RightField), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightField_MetaData), NewProp_RightField_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOperatorField_Statics::NewProp_LeftField = { "LeftField", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatorField, LeftField), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftField_MetaData), NewProp_LeftField_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOperatorField_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOperatorField, Operation), Z_Construct_UEnum_Chaos_EFieldOperationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 3966773771
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperatorField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatorField_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatorField_Statics::NewProp_RightField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatorField_Statics::NewProp_LeftField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperatorField_Statics::NewProp_Operation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatorField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOperatorField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatorField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperatorField_Statics::ClassParams = {
	&UOperatorField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOperatorField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOperatorField_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperatorField_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperatorField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOperatorField()
{
	if (!Z_Registration_Info_UClass_UOperatorField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperatorField.OuterSingleton, Z_Construct_UClass_UOperatorField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOperatorField.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UOperatorField>()
{
	return UOperatorField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOperatorField);
// End Class UOperatorField

// Begin Class UToIntegerField Function SetToIntegerField
struct Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics
{
	struct ToIntegerField_eventSetToIntegerField_Parms
	{
		const UFieldNodeFloat* FloatField;
		UToIntegerField* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Convert a float field to a integer one\n\x09 * @param    FloatField Float field to be converted to an an integer one\n\x09 */" },
		{ "DisplayName", "Set To Integer Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Convert a float field to a integer one\n@param    FloatField Float field to be converted to an an integer one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatField_MetaData[] = {
		{ "DisplayName", "Float Field" },
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatField;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::NewProp_FloatField = { "FloatField", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToIntegerField_eventSetToIntegerField_Parms, FloatField), Z_Construct_UClass_UFieldNodeFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatField_MetaData), NewProp_FloatField_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToIntegerField_eventSetToIntegerField_Parms, ReturnValue), Z_Construct_UClass_UToIntegerField_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::NewProp_FloatField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToIntegerField, nullptr, "SetToIntegerField", nullptr, nullptr, Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::ToIntegerField_eventSetToIntegerField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::ToIntegerField_eventSetToIntegerField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToIntegerField_SetToIntegerField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToIntegerField_SetToIntegerField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToIntegerField::execSetToIntegerField)
{
	P_GET_OBJECT(UFieldNodeFloat,Z_Param_FloatField);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UToIntegerField**)Z_Param__Result=P_THIS->SetToIntegerField(Z_Param_FloatField);
	P_NATIVE_END;
}
// End Class UToIntegerField Function SetToIntegerField

// Begin Class UToIntegerField
void UToIntegerField::StaticRegisterNativesUToIntegerField()
{
	UClass* Class = UToIntegerField::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetToIntegerField", &UToIntegerField::execSetToIntegerField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToIntegerField);
UClass* Z_Construct_UClass_UToIntegerField_NoRegister()
{
	return UToIntegerField::StaticClass();
}
struct Z_Construct_UClass_UToIntegerField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Convert a scalar field to a integer one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatField_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Scalar field to be converted to an an integer one */" },
		{ "DisplayName", "Float Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Scalar field to be converted to an an integer one" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToIntegerField_SetToIntegerField, "SetToIntegerField" }, // 2211059994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToIntegerField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToIntegerField_Statics::NewProp_FloatField = { "FloatField", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToIntegerField, FloatField), Z_Construct_UClass_UFieldNodeFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatField_MetaData), NewProp_FloatField_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToIntegerField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToIntegerField_Statics::NewProp_FloatField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToIntegerField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToIntegerField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeInt,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToIntegerField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToIntegerField_Statics::ClassParams = {
	&UToIntegerField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UToIntegerField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UToIntegerField_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToIntegerField_Statics::Class_MetaDataParams), Z_Construct_UClass_UToIntegerField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToIntegerField()
{
	if (!Z_Registration_Info_UClass_UToIntegerField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToIntegerField.OuterSingleton, Z_Construct_UClass_UToIntegerField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToIntegerField.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UToIntegerField>()
{
	return UToIntegerField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToIntegerField);
// End Class UToIntegerField

// Begin Class UToFloatField Function SetToFloatField
struct Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics
{
	struct ToFloatField_eventSetToFloatField_Parms
	{
		const UFieldNodeInt* IntegerField;
		UToFloatField* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Convert an integer field to a float one\n\x09 * @param    IntegerField Integer field to be converted to an a float one\n\x09 */" },
		{ "DisplayName", "Set To Float Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Convert an integer field to a float one\n@param    IntegerField Integer field to be converted to an a float one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerField_MetaData[] = {
		{ "DisplayName", "Integer Field" },
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntegerField;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::NewProp_IntegerField = { "IntegerField", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToFloatField_eventSetToFloatField_Parms, IntegerField), Z_Construct_UClass_UFieldNodeInt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerField_MetaData), NewProp_IntegerField_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToFloatField_eventSetToFloatField_Parms, ReturnValue), Z_Construct_UClass_UToFloatField_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::NewProp_IntegerField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToFloatField, nullptr, "SetToFloatField", nullptr, nullptr, Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::ToFloatField_eventSetToFloatField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::ToFloatField_eventSetToFloatField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToFloatField_SetToFloatField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToFloatField_SetToFloatField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToFloatField::execSetToFloatField)
{
	P_GET_OBJECT(UFieldNodeInt,Z_Param_IntegerField);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UToFloatField**)Z_Param__Result=P_THIS->SetToFloatField(Z_Param_IntegerField);
	P_NATIVE_END;
}
// End Class UToFloatField Function SetToFloatField

// Begin Class UToFloatField
void UToFloatField::StaticRegisterNativesUToFloatField()
{
	UClass* Class = UToFloatField::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetToFloatField", &UToFloatField::execSetToFloatField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToFloatField);
UClass* Z_Construct_UClass_UToFloatField_NoRegister()
{
	return UToFloatField::StaticClass();
}
struct Z_Construct_UClass_UToFloatField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Convert an integer field to a scalar one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntField_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Integer field to be converted to an a scalar one */" },
		{ "DisplayName", "Integer Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Integer field to be converted to an a scalar one" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToFloatField_SetToFloatField, "SetToFloatField" }, // 1834282425
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToFloatField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToFloatField_Statics::NewProp_IntField = { "IntField", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToFloatField, IntField), Z_Construct_UClass_UFieldNodeInt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntField_MetaData), NewProp_IntField_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToFloatField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToFloatField_Statics::NewProp_IntField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToFloatField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToFloatField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeFloat,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToFloatField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToFloatField_Statics::ClassParams = {
	&UToFloatField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UToFloatField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UToFloatField_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToFloatField_Statics::Class_MetaDataParams), Z_Construct_UClass_UToFloatField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToFloatField()
{
	if (!Z_Registration_Info_UClass_UToFloatField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToFloatField.OuterSingleton, Z_Construct_UClass_UToFloatField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToFloatField.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UToFloatField>()
{
	return UToFloatField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToFloatField);
// End Class UToFloatField

// Begin Class UCullingField Function SetCullingField
struct Z_Construct_UFunction_UCullingField_SetCullingField_Statics
{
	struct CullingField_eventSetCullingField_Parms
	{
		const UFieldNodeBase* Culling;
		const UFieldNodeBase* Field;
		TEnumAsByte<EFieldCullingOperationType> Operation;
		UCullingField* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09 * Evaluate the input field according to the result of the culling field.\n\x09 * \n\x09 * @param    Culling Culling field to be used.\n\x09 * @param    Field Input field that will be evaluated according to the culling field result.\n\x09 * @param    Operation Evaluate the input field if the result of the culling field is equal to 0 (Inside) or different from 0 (Outside).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Evaluate the input field according to the result of the culling field.\n\n@param    Culling Culling field to be used.\n@param    Field Input field that will be evaluated according to the culling field result.\n@param    Operation Evaluate the input field if the result of the culling field is equal to 0 (Inside) or different from 0 (Outside)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culling_MetaData[] = {
		{ "DisplayName", "Culling Field" },
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
		{ "DisplayName", "Input Field" },
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "DisplayName", "Culling Operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Culling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCullingField_SetCullingField_Statics::NewProp_Culling = { "Culling", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CullingField_eventSetCullingField_Parms, Culling), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culling_MetaData), NewProp_Culling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCullingField_SetCullingField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CullingField_eventSetCullingField_Parms, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Field_MetaData), NewProp_Field_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCullingField_SetCullingField_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CullingField_eventSetCullingField_Parms, Operation), Z_Construct_UEnum_Chaos_EFieldCullingOperationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 1504204039
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCullingField_SetCullingField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CullingField_eventSetCullingField_Parms, ReturnValue), Z_Construct_UClass_UCullingField_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCullingField_SetCullingField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCullingField_SetCullingField_Statics::NewProp_Culling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCullingField_SetCullingField_Statics::NewProp_Field,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCullingField_SetCullingField_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCullingField_SetCullingField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCullingField_SetCullingField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCullingField_SetCullingField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCullingField, nullptr, "SetCullingField", nullptr, nullptr, Z_Construct_UFunction_UCullingField_SetCullingField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCullingField_SetCullingField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCullingField_SetCullingField_Statics::CullingField_eventSetCullingField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCullingField_SetCullingField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCullingField_SetCullingField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCullingField_SetCullingField_Statics::CullingField_eventSetCullingField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCullingField_SetCullingField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCullingField_SetCullingField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCullingField::execSetCullingField)
{
	P_GET_OBJECT(UFieldNodeBase,Z_Param_Culling);
	P_GET_OBJECT(UFieldNodeBase,Z_Param_Field);
	P_GET_PROPERTY(FByteProperty,Z_Param_Operation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCullingField**)Z_Param__Result=P_THIS->SetCullingField(Z_Param_Culling,Z_Param_Field,EFieldCullingOperationType(Z_Param_Operation));
	P_NATIVE_END;
}
// End Class UCullingField Function SetCullingField

// Begin Class UCullingField
void UCullingField::StaticRegisterNativesUCullingField()
{
	UClass* Class = UCullingField::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCullingField", &UCullingField::execSetCullingField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCullingField);
UClass* Z_Construct_UClass_UCullingField_NoRegister()
{
	return UCullingField::StaticClass();
}
struct Z_Construct_UClass_UCullingField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Evaluate the input field according to the result of the culling field" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culling_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Culling field to be used */" },
		{ "DisplayName", "Culling Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Culling field to be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Input field that will be evaluated according to the culling field result */" },
		{ "DisplayName", "Input Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Input field that will be evaluated according to the culling field result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Evaluate the input field if the result of the culling field is equal to 0 (Inside) or different from 0 (Outside) */" },
		{ "DisplayName", "Culling Operation" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Evaluate the input field if the result of the culling field is equal to 0 (Inside) or different from 0 (Outside)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Culling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCullingField_SetCullingField, "SetCullingField" }, // 2094921610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCullingField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCullingField_Statics::NewProp_Culling = { "Culling", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCullingField, Culling), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culling_MetaData), NewProp_Culling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCullingField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCullingField, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Field_MetaData), NewProp_Field_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCullingField_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCullingField, Operation), Z_Construct_UEnum_Chaos_EFieldCullingOperationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 1504204039
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCullingField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCullingField_Statics::NewProp_Culling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCullingField_Statics::NewProp_Field,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCullingField_Statics::NewProp_Operation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCullingField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCullingField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCullingField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCullingField_Statics::ClassParams = {
	&UCullingField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCullingField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCullingField_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCullingField_Statics::Class_MetaDataParams), Z_Construct_UClass_UCullingField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCullingField()
{
	if (!Z_Registration_Info_UClass_UCullingField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCullingField.OuterSingleton, Z_Construct_UClass_UCullingField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCullingField.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UCullingField>()
{
	return UCullingField::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCullingField);
// End Class UCullingField

// Begin Class UReturnResultsTerminal Function SetReturnResultsTerminal
struct Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics
{
	struct ReturnResultsTerminal_eventSetReturnResultsTerminal_Parms
	{
		UReturnResultsTerminal* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Terminal field of a graph */" },
		{ "DisplayName", "Set Terminal Field" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Terminal field of a graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReturnResultsTerminal_eventSetReturnResultsTerminal_Parms, ReturnValue), Z_Construct_UClass_UReturnResultsTerminal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReturnResultsTerminal, nullptr, "SetReturnResultsTerminal", nullptr, nullptr, Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::ReturnResultsTerminal_eventSetReturnResultsTerminal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::ReturnResultsTerminal_eventSetReturnResultsTerminal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UReturnResultsTerminal::execSetReturnResultsTerminal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UReturnResultsTerminal**)Z_Param__Result=P_THIS->SetReturnResultsTerminal();
	P_NATIVE_END;
}
// End Class UReturnResultsTerminal Function SetReturnResultsTerminal

// Begin Class UReturnResultsTerminal
void UReturnResultsTerminal::StaticRegisterNativesUReturnResultsTerminal()
{
	UClass* Class = UReturnResultsTerminal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetReturnResultsTerminal", &UReturnResultsTerminal::execSetReturnResultsTerminal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReturnResultsTerminal);
UClass* Z_Construct_UClass_UReturnResultsTerminal_NoRegister()
{
	return UReturnResultsTerminal::StaticClass();
}
struct Z_Construct_UClass_UReturnResultsTerminal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Field" },
		{ "IncludePath", "Field/FieldSystemObjects.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Terminal field of a graph" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReturnResultsTerminal_SetReturnResultsTerminal, "SetReturnResultsTerminal" }, // 3368986232
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReturnResultsTerminal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReturnResultsTerminal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFieldNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnResultsTerminal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReturnResultsTerminal_Statics::ClassParams = {
	&UReturnResultsTerminal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnResultsTerminal_Statics::Class_MetaDataParams), Z_Construct_UClass_UReturnResultsTerminal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReturnResultsTerminal()
{
	if (!Z_Registration_Info_UClass_UReturnResultsTerminal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReturnResultsTerminal.OuterSingleton, Z_Construct_UClass_UReturnResultsTerminal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReturnResultsTerminal.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UClass* StaticClass<UReturnResultsTerminal>()
{
	return UReturnResultsTerminal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReturnResultsTerminal);
// End Class UReturnResultsTerminal

// Begin ScriptStruct FFieldObjectCommands
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldObjectCommands;
class UScriptStruct* FFieldObjectCommands::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldObjectCommands.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldObjectCommands.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldObjectCommands, (UObject*)Z_Construct_UPackage__Script_FieldSystemEngine(), TEXT("FieldObjectCommands"));
	}
	return Z_Registration_Info_UScriptStruct_FieldObjectCommands.OuterSingleton;
}
template<> FIELDSYSTEMENGINE_API UScriptStruct* StaticStruct<FFieldObjectCommands>()
{
	return FFieldObjectCommands::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFieldObjectCommands_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Field Commands container that will be stored in the construction script\n*/" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Field Commands container that will be stored in the construction script" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNames_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**Commands Target Name */" },
		{ "DisplayName", "Target Names" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Commands Target Name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Commands Root Node */" },
		{ "DisplayName", "Root Nodes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Commands Root Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDatas_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/** Commands Meta Data*/" },
		{ "DisplayName", "Meta Datas" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemObjects.h" },
		{ "ToolTip", "Commands Meta Data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaDatas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaDatas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldObjectCommands>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_TargetNames_Inner = { "TargetNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_TargetNames = { "TargetNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFieldObjectCommands, TargetNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNames_MetaData), NewProp_TargetNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFieldObjectCommands, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNodes_MetaData), NewProp_RootNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_MetaDatas_Inner = { "MetaDatas", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFieldSystemMetaData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_MetaDatas = { "MetaDatas", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFieldObjectCommands, MetaDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDatas_MetaData), NewProp_MetaDatas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_TargetNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_TargetNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_RootNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_RootNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_MetaDatas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewProp_MetaDatas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
	nullptr,
	&NewStructOps,
	"FieldObjectCommands",
	Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::PropPointers),
	sizeof(FFieldObjectCommands),
	alignof(FFieldObjectCommands),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFieldObjectCommands()
{
	if (!Z_Registration_Info_UScriptStruct_FieldObjectCommands.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldObjectCommands.InnerSingleton, Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FieldObjectCommands.InnerSingleton;
}
// End ScriptStruct FFieldObjectCommands

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFieldObjectCommands::StaticStruct, Z_Construct_UScriptStruct_FFieldObjectCommands_Statics::NewStructOps, TEXT("FieldObjectCommands"), &Z_Registration_Info_UScriptStruct_FieldObjectCommands, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldObjectCommands), 70288840U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFieldSystemMetaData, UFieldSystemMetaData::StaticClass, TEXT("UFieldSystemMetaData"), &Z_Registration_Info_UClass_UFieldSystemMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldSystemMetaData), 2624314944U) },
		{ Z_Construct_UClass_UFieldSystemMetaDataIteration, UFieldSystemMetaDataIteration::StaticClass, TEXT("UFieldSystemMetaDataIteration"), &Z_Registration_Info_UClass_UFieldSystemMetaDataIteration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldSystemMetaDataIteration), 705359110U) },
		{ Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution, UFieldSystemMetaDataProcessingResolution::StaticClass, TEXT("UFieldSystemMetaDataProcessingResolution"), &Z_Registration_Info_UClass_UFieldSystemMetaDataProcessingResolution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldSystemMetaDataProcessingResolution), 3863983765U) },
		{ Z_Construct_UClass_UFieldSystemMetaDataFilter, UFieldSystemMetaDataFilter::StaticClass, TEXT("UFieldSystemMetaDataFilter"), &Z_Registration_Info_UClass_UFieldSystemMetaDataFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldSystemMetaDataFilter), 3480430708U) },
		{ Z_Construct_UClass_UFieldNodeBase, UFieldNodeBase::StaticClass, TEXT("UFieldNodeBase"), &Z_Registration_Info_UClass_UFieldNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldNodeBase), 95188364U) },
		{ Z_Construct_UClass_UFieldNodeInt, UFieldNodeInt::StaticClass, TEXT("UFieldNodeInt"), &Z_Registration_Info_UClass_UFieldNodeInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldNodeInt), 787777412U) },
		{ Z_Construct_UClass_UFieldNodeFloat, UFieldNodeFloat::StaticClass, TEXT("UFieldNodeFloat"), &Z_Registration_Info_UClass_UFieldNodeFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldNodeFloat), 1482798379U) },
		{ Z_Construct_UClass_UFieldNodeVector, UFieldNodeVector::StaticClass, TEXT("UFieldNodeVector"), &Z_Registration_Info_UClass_UFieldNodeVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldNodeVector), 3223782440U) },
		{ Z_Construct_UClass_UUniformInteger, UUniformInteger::StaticClass, TEXT("UUniformInteger"), &Z_Registration_Info_UClass_UUniformInteger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniformInteger), 845162507U) },
		{ Z_Construct_UClass_URadialIntMask, URadialIntMask::StaticClass, TEXT("URadialIntMask"), &Z_Registration_Info_UClass_URadialIntMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadialIntMask), 3482131026U) },
		{ Z_Construct_UClass_UUniformScalar, UUniformScalar::StaticClass, TEXT("UUniformScalar"), &Z_Registration_Info_UClass_UUniformScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniformScalar), 3441510252U) },
		{ Z_Construct_UClass_UWaveScalar, UWaveScalar::StaticClass, TEXT("UWaveScalar"), &Z_Registration_Info_UClass_UWaveScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveScalar), 2604052068U) },
		{ Z_Construct_UClass_URadialFalloff, URadialFalloff::StaticClass, TEXT("URadialFalloff"), &Z_Registration_Info_UClass_URadialFalloff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadialFalloff), 813137090U) },
		{ Z_Construct_UClass_UPlaneFalloff, UPlaneFalloff::StaticClass, TEXT("UPlaneFalloff"), &Z_Registration_Info_UClass_UPlaneFalloff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneFalloff), 3800096648U) },
		{ Z_Construct_UClass_UBoxFalloff, UBoxFalloff::StaticClass, TEXT("UBoxFalloff"), &Z_Registration_Info_UClass_UBoxFalloff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoxFalloff), 2846355630U) },
		{ Z_Construct_UClass_UNoiseField, UNoiseField::StaticClass, TEXT("UNoiseField"), &Z_Registration_Info_UClass_UNoiseField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoiseField), 3976435700U) },
		{ Z_Construct_UClass_UUniformVector, UUniformVector::StaticClass, TEXT("UUniformVector"), &Z_Registration_Info_UClass_UUniformVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniformVector), 1908845486U) },
		{ Z_Construct_UClass_URadialVector, URadialVector::StaticClass, TEXT("URadialVector"), &Z_Registration_Info_UClass_URadialVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadialVector), 3062132551U) },
		{ Z_Construct_UClass_URandomVector, URandomVector::StaticClass, TEXT("URandomVector"), &Z_Registration_Info_UClass_URandomVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URandomVector), 2330798820U) },
		{ Z_Construct_UClass_UOperatorField, UOperatorField::StaticClass, TEXT("UOperatorField"), &Z_Registration_Info_UClass_UOperatorField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperatorField), 777076478U) },
		{ Z_Construct_UClass_UToIntegerField, UToIntegerField::StaticClass, TEXT("UToIntegerField"), &Z_Registration_Info_UClass_UToIntegerField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToIntegerField), 2826409288U) },
		{ Z_Construct_UClass_UToFloatField, UToFloatField::StaticClass, TEXT("UToFloatField"), &Z_Registration_Info_UClass_UToFloatField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToFloatField), 4266423871U) },
		{ Z_Construct_UClass_UCullingField, UCullingField::StaticClass, TEXT("UCullingField"), &Z_Registration_Info_UClass_UCullingField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCullingField), 3061541295U) },
		{ Z_Construct_UClass_UReturnResultsTerminal, UReturnResultsTerminal::StaticClass, TEXT("UReturnResultsTerminal"), &Z_Registration_Info_UClass_UReturnResultsTerminal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReturnResultsTerminal), 2598191901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_2354641752(TEXT("/Script/FieldSystemEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
