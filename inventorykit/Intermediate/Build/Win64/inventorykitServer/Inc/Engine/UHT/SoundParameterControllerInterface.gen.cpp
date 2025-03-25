// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Audio/SoundParameterControllerInterface.h"
#include "Runtime/AudioExtensions/Public/AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundParameterControllerInterface() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioParameterControllerInterface();
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioParameterConversionStatics();
ENGINE_API UClass* Z_Construct_UClass_UAudioParameterConversionStatics_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundParameterControllerInterface();
ENGINE_API UClass* Z_Construct_UClass_USoundParameterControllerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface USoundParameterControllerInterface
void USoundParameterControllerInterface::StaticRegisterNativesUSoundParameterControllerInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundParameterControllerInterface);
UClass* Z_Construct_UClass_USoundParameterControllerInterface_NoRegister()
{
	return USoundParameterControllerInterface::StaticClass();
}
struct Z_Construct_UClass_USoundParameterControllerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISoundParameterControllerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoundParameterControllerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioParameterControllerInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundParameterControllerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundParameterControllerInterface_Statics::ClassParams = {
	&USoundParameterControllerInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundParameterControllerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundParameterControllerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundParameterControllerInterface()
{
	if (!Z_Registration_Info_UClass_USoundParameterControllerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundParameterControllerInterface.OuterSingleton, Z_Construct_UClass_USoundParameterControllerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundParameterControllerInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundParameterControllerInterface>()
{
	return USoundParameterControllerInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundParameterControllerInterface);
USoundParameterControllerInterface::~USoundParameterControllerInterface() {}
// End Interface USoundParameterControllerInterface

// Begin Class UAudioParameterConversionStatics Function BooleanArrayToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventBooleanArrayToAudioParameter_Parms
	{
		FName Name;
		TArray<bool> Bools;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bools;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventBooleanArrayToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::NewProp_Bools_Inner = { "Bools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::NewProp_Bools = { "Bools", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventBooleanArrayToAudioParameter_Parms, Bools), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventBooleanArrayToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::NewProp_Bools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::NewProp_Bools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "BooleanArrayToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventBooleanArrayToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventBooleanArrayToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execBooleanArrayToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_TARRAY(bool,Z_Param_Bools);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::BooleanArrayToAudioParameter(Z_Param_Name,Z_Param_Bools);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function BooleanArrayToAudioParameter

// Begin Class UAudioParameterConversionStatics Function BooleanToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventBooleanToAudioParameter_Parms
	{
		FName Name;
		bool Bool;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventBooleanToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((AudioParameterConversionStatics_eventBooleanToAudioParameter_Parms*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioParameterConversionStatics_eventBooleanToAudioParameter_Parms), &Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventBooleanToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::NewProp_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "BooleanToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::AudioParameterConversionStatics_eventBooleanToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::AudioParameterConversionStatics_eventBooleanToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execBooleanToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_Bool);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::BooleanToAudioParameter(Z_Param_Name,Z_Param_Bool);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function BooleanToAudioParameter

// Begin Class UAudioParameterConversionStatics Function FloatArrayToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventFloatArrayToAudioParameter_Parms
	{
		FName Name;
		TArray<float> Floats;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Floats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Floats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventFloatArrayToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::NewProp_Floats_Inner = { "Floats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::NewProp_Floats = { "Floats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventFloatArrayToAudioParameter_Parms, Floats), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventFloatArrayToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::NewProp_Floats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::NewProp_Floats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "FloatArrayToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventFloatArrayToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventFloatArrayToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execFloatArrayToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_TARRAY(float,Z_Param_Floats);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::FloatArrayToAudioParameter(Z_Param_Name,Z_Param_Floats);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function FloatArrayToAudioParameter

// Begin Class UAudioParameterConversionStatics Function FloatToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventFloatToAudioParameter_Parms
	{
		FName Name;
		float Float;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventFloatToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventFloatToAudioParameter_Parms, Float), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventFloatToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "FloatToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::AudioParameterConversionStatics_eventFloatToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::AudioParameterConversionStatics_eventFloatToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execFloatToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Float);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::FloatToAudioParameter(Z_Param_Name,Z_Param_Float);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function FloatToAudioParameter

// Begin Class UAudioParameterConversionStatics Function IntegerArrayToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventIntegerArrayToAudioParameter_Parms
	{
		FName Name;
		TArray<int32> Integers;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Integers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Integers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventIntegerArrayToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::NewProp_Integers_Inner = { "Integers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::NewProp_Integers = { "Integers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventIntegerArrayToAudioParameter_Parms, Integers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventIntegerArrayToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::NewProp_Integers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::NewProp_Integers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "IntegerArrayToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventIntegerArrayToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventIntegerArrayToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execIntegerArrayToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_TARRAY(int32,Z_Param_Integers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::IntegerArrayToAudioParameter(Z_Param_Name,Z_Param_Integers);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function IntegerArrayToAudioParameter

// Begin Class UAudioParameterConversionStatics Function IntegerToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventIntegerToAudioParameter_Parms
	{
		FName Name;
		int32 Integer;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventIntegerToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventIntegerToAudioParameter_Parms, Integer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventIntegerToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::NewProp_Integer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "IntegerToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::AudioParameterConversionStatics_eventIntegerToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::AudioParameterConversionStatics_eventIntegerToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execIntegerToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Integer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::IntegerToAudioParameter(Z_Param_Name,Z_Param_Integer);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function IntegerToAudioParameter

// Begin Class UAudioParameterConversionStatics Function ObjectArrayToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventObjectArrayToAudioParameter_Parms
	{
		FName Name;
		TArray<UObject*> Objects;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventObjectArrayToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventObjectArrayToAudioParameter_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventObjectArrayToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "ObjectArrayToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventObjectArrayToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventObjectArrayToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execObjectArrayToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_TARRAY(UObject*,Z_Param_Objects);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::ObjectArrayToAudioParameter(Z_Param_Name,Z_Param_Objects);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function ObjectArrayToAudioParameter

// Begin Class UAudioParameterConversionStatics Function ObjectToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventObjectToAudioParameter_Parms
	{
		FName Name;
		UObject* Object;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventObjectToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventObjectToAudioParameter_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventObjectToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "ObjectToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::AudioParameterConversionStatics_eventObjectToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::AudioParameterConversionStatics_eventObjectToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execObjectToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::ObjectToAudioParameter(Z_Param_Name,Z_Param_Object);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function ObjectToAudioParameter

// Begin Class UAudioParameterConversionStatics Function StringArrayToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventStringArrayToAudioParameter_Parms
	{
		FName Name;
		TArray<FString> Strings;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Strings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventStringArrayToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::NewProp_Strings_Inner = { "Strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventStringArrayToAudioParameter_Parms, Strings), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventStringArrayToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::NewProp_Strings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::NewProp_Strings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "StringArrayToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventStringArrayToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::AudioParameterConversionStatics_eventStringArrayToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execStringArrayToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_TARRAY(FString,Z_Param_Strings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::StringArrayToAudioParameter(Z_Param_Name,Z_Param_Strings);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function StringArrayToAudioParameter

// Begin Class UAudioParameterConversionStatics Function StringToAudioParameter
struct Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics
{
	struct AudioParameterConversionStatics_eventStringToAudioParameter_Parms
	{
		FName Name;
		FString String;
		FAudioParameter ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Keywords", "make construct convert create" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventStringToAudioParameter_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventStringToAudioParameter_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterConversionStatics_eventStringToAudioParameter_Parms, ReturnValue), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2092353974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterConversionStatics, nullptr, "StringToAudioParameter", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::AudioParameterConversionStatics_eventStringToAudioParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::AudioParameterConversionStatics_eventStringToAudioParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioParameterConversionStatics::execStringToAudioParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAudioParameter*)Z_Param__Result=UAudioParameterConversionStatics::StringToAudioParameter(Z_Param_Name,Z_Param_String);
	P_NATIVE_END;
}
// End Class UAudioParameterConversionStatics Function StringToAudioParameter

// Begin Class UAudioParameterConversionStatics
void UAudioParameterConversionStatics::StaticRegisterNativesUAudioParameterConversionStatics()
{
	UClass* Class = UAudioParameterConversionStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BooleanArrayToAudioParameter", &UAudioParameterConversionStatics::execBooleanArrayToAudioParameter },
		{ "BooleanToAudioParameter", &UAudioParameterConversionStatics::execBooleanToAudioParameter },
		{ "FloatArrayToAudioParameter", &UAudioParameterConversionStatics::execFloatArrayToAudioParameter },
		{ "FloatToAudioParameter", &UAudioParameterConversionStatics::execFloatToAudioParameter },
		{ "IntegerArrayToAudioParameter", &UAudioParameterConversionStatics::execIntegerArrayToAudioParameter },
		{ "IntegerToAudioParameter", &UAudioParameterConversionStatics::execIntegerToAudioParameter },
		{ "ObjectArrayToAudioParameter", &UAudioParameterConversionStatics::execObjectArrayToAudioParameter },
		{ "ObjectToAudioParameter", &UAudioParameterConversionStatics::execObjectToAudioParameter },
		{ "StringArrayToAudioParameter", &UAudioParameterConversionStatics::execStringArrayToAudioParameter },
		{ "StringToAudioParameter", &UAudioParameterConversionStatics::execStringToAudioParameter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioParameterConversionStatics);
UClass* Z_Construct_UClass_UAudioParameterConversionStatics_NoRegister()
{
	return UAudioParameterConversionStatics::StaticClass();
}
struct Z_Construct_UClass_UAudioParameterConversionStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Audio/SoundParameterControllerInterface.h" },
		{ "ModuleRelativePath", "Public/Audio/SoundParameterControllerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanArrayToAudioParameter, "BooleanArrayToAudioParameter" }, // 2939350483
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_BooleanToAudioParameter, "BooleanToAudioParameter" }, // 4282734710
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_FloatArrayToAudioParameter, "FloatArrayToAudioParameter" }, // 1927325347
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_FloatToAudioParameter, "FloatToAudioParameter" }, // 2006039199
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerArrayToAudioParameter, "IntegerArrayToAudioParameter" }, // 3463649870
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_IntegerToAudioParameter, "IntegerToAudioParameter" }, // 3217059364
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectArrayToAudioParameter, "ObjectArrayToAudioParameter" }, // 2110162297
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_ObjectToAudioParameter, "ObjectToAudioParameter" }, // 1006184728
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_StringArrayToAudioParameter, "StringArrayToAudioParameter" }, // 619233222
		{ &Z_Construct_UFunction_UAudioParameterConversionStatics_StringToAudioParameter, "StringToAudioParameter" }, // 3144834107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioParameterConversionStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioParameterConversionStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterConversionStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioParameterConversionStatics_Statics::ClassParams = {
	&UAudioParameterConversionStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterConversionStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioParameterConversionStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioParameterConversionStatics()
{
	if (!Z_Registration_Info_UClass_UAudioParameterConversionStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioParameterConversionStatics.OuterSingleton, Z_Construct_UClass_UAudioParameterConversionStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioParameterConversionStatics.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAudioParameterConversionStatics>()
{
	return UAudioParameterConversionStatics::StaticClass();
}
UAudioParameterConversionStatics::UAudioParameterConversionStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioParameterConversionStatics);
UAudioParameterConversionStatics::~UAudioParameterConversionStatics() {}
// End Class UAudioParameterConversionStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundParameterControllerInterface, USoundParameterControllerInterface::StaticClass, TEXT("USoundParameterControllerInterface"), &Z_Registration_Info_UClass_USoundParameterControllerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundParameterControllerInterface), 489669447U) },
		{ Z_Construct_UClass_UAudioParameterConversionStatics, UAudioParameterConversionStatics::StaticClass, TEXT("UAudioParameterConversionStatics"), &Z_Registration_Info_UClass_UAudioParameterConversionStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioParameterConversionStatics), 1530659387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_1700175627(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
