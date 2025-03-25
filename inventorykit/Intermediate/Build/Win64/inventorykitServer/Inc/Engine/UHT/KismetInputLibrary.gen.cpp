// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Kismet/KismetInputLibrary.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInputLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary();
ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESlateGesture();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateModifierKeysState();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationAction();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESlateGesture
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateGesture;
static UEnum* ESlateGesture_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlateGesture.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlateGesture.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESlateGesture, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESlateGesture"));
	}
	return Z_Registration_Info_UEnum_ESlateGesture.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESlateGesture>()
{
	return ESlateGesture_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESlateGesture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LongPress.Name", "ESlateGesture::LongPress" },
		{ "Magnify.Name", "ESlateGesture::Magnify" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "None.Name", "ESlateGesture::None" },
		{ "Rotate.Name", "ESlateGesture::Rotate" },
		{ "Scroll.Name", "ESlateGesture::Scroll" },
		{ "Swipe.Name", "ESlateGesture::Swipe" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlateGesture::None", (int64)ESlateGesture::None },
		{ "ESlateGesture::Scroll", (int64)ESlateGesture::Scroll },
		{ "ESlateGesture::Magnify", (int64)ESlateGesture::Magnify },
		{ "ESlateGesture::Swipe", (int64)ESlateGesture::Swipe },
		{ "ESlateGesture::Rotate", (int64)ESlateGesture::Rotate },
		{ "ESlateGesture::LongPress", (int64)ESlateGesture::LongPress },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESlateGesture_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESlateGesture",
	"ESlateGesture",
	Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESlateGesture()
{
	if (!Z_Registration_Info_UEnum_ESlateGesture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateGesture.InnerSingleton, Z_Construct_UEnum_Engine_ESlateGesture_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlateGesture.InnerSingleton;
}
// End Enum ESlateGesture

// Begin ScriptStruct FSlateModifierKeysState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateModifierKeysState;
class UScriptStruct* FSlateModifierKeysState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateModifierKeysState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateModifierKeysState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateModifierKeysState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SlateModifierKeysState"));
	}
	return Z_Registration_Info_UScriptStruct_SlateModifierKeysState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSlateModifierKeysState>()
{
	return FSlateModifierKeysState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A structure which captures the application's modifier key states (shift, alt, ctrl, etc.) */" },
		{ "DisplayName", "Modifier Keys State" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "A structure which captures the application's modifier key states (shift, alt, ctrl, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierKeysStateMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierKeysStateMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateModifierKeysState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewProp_ModifierKeysStateMask = { "ModifierKeysStateMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateModifierKeysState, ModifierKeysStateMask), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierKeysStateMask_MetaData), NewProp_ModifierKeysStateMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewProp_ModifierKeysStateMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SlateModifierKeysState",
	Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::PropPointers),
	sizeof(FSlateModifierKeysState),
	alignof(FSlateModifierKeysState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateModifierKeysState()
{
	if (!Z_Registration_Info_UScriptStruct_SlateModifierKeysState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateModifierKeysState.InnerSingleton, Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlateModifierKeysState.InnerSingleton;
}
// End ScriptStruct FSlateModifierKeysState

// Begin Class UKismetInputLibrary Function CalibrateTilt
struct Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/** Calibrate the tilt for the input device */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Calibrate the tilt for the input device" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "CalibrateTilt", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execCalibrateTilt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UKismetInputLibrary::CalibrateTilt();
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function CalibrateTilt

// Begin Class UKismetInputLibrary Function EqualEqual_InputChordInputChord
struct Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics
{
	struct KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms
	{
		FInputChord A;
		FInputChord B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09* Test if the input chords are equal (A == B)\n\x09* @param A - The chord to compare against\n\x09* @param B - The chord to compare\n\x09* Returns true if the chords are equal, false otherwise\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (InputChord)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Test if the input chords are equal (A == B)\n@param A - The chord to compare against\n@param B - The chord to compare\nReturns true if the chords are equal, false otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms, A), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(0, nullptr) }; // 4109060215
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms, B), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(0, nullptr) }; // 4109060215
void Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms), &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "EqualEqual_InputChordInputChord", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execEqualEqual_InputChordInputChord)
{
	P_GET_STRUCT(FInputChord,Z_Param_A);
	P_GET_STRUCT(FInputChord,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::EqualEqual_InputChordInputChord(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function EqualEqual_InputChordInputChord

// Begin Class UKismetInputLibrary Function EqualEqual_KeyKey
struct Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics
{
	struct KismetInputLibrary_eventEqualEqual_KeyKey_Parms
	{
		FKey A;
		FKey B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Test if the input key are equal (A == B)\n\x09 * @param A - The key to compare against\n\x09 * @param B - The key to compare\n\x09 * Returns true if the key are equal, false otherwise\n\x09 */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Key)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Test if the input key are equal (A == B)\n@param A - The key to compare against\n@param B - The key to compare\nReturns true if the key are equal, false otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_KeyKey_Parms, A), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_KeyKey_Parms, B), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventEqualEqual_KeyKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventEqualEqual_KeyKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "EqualEqual_KeyKey", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::KismetInputLibrary_eventEqualEqual_KeyKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::KismetInputLibrary_eventEqualEqual_KeyKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execEqualEqual_KeyKey)
{
	P_GET_STRUCT(FKey,Z_Param_A);
	P_GET_STRUCT(FKey,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::EqualEqual_KeyKey(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function EqualEqual_KeyKey

// Begin Class UKismetInputLibrary Function GetAnalogValue
struct Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics
{
	struct KismetInputLibrary_eventGetAnalogValue_Parms
	{
		FAnalogInputEvent Input;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetAnalogValue_Parms, Input), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 485268202
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetAnalogValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetAnalogValue", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::KismetInputLibrary_eventGetAnalogValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::KismetInputLibrary_eventGetAnalogValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execGetAnalogValue)
{
	P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UKismetInputLibrary::GetAnalogValue(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function GetAnalogValue

// Begin Class UKismetInputLibrary Function GetKey
struct Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics
{
	struct KismetInputLibrary_eventGetKey_Parms
	{
		FKeyEvent Input;
		FKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|KeyEvent" },
		{ "Comment", "/**\n\x09 * Returns the key for this event.\n\x09 *\n\x09 * @return  Key name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the key for this event.\n\n@return  Key name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetKey_Parms, Input), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3930076448
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetKey", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::KismetInputLibrary_eventGetKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::KismetInputLibrary_eventGetKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execGetKey)
{
	P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKey*)Z_Param__Result=UKismetInputLibrary::GetKey(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function GetKey

// Begin Class UKismetInputLibrary Function GetModifierKeysState
struct Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics
{
	struct KismetInputLibrary_eventGetModifierKeysState_Parms
	{
		FSlateModifierKeysState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/** Returns a snapshot of the cached modifier-keys state for the application. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns a snapshot of the cached modifier-keys state for the application." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetModifierKeysState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(0, nullptr) }; // 2457372999
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetModifierKeysState", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::KismetInputLibrary_eventGetModifierKeysState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::KismetInputLibrary_eventGetModifierKeysState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execGetModifierKeysState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateModifierKeysState*)Z_Param__Result=UKismetInputLibrary::GetModifierKeysState();
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function GetModifierKeysState

// Begin Class UKismetInputLibrary Function GetUserIndex
struct Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics
{
	struct KismetInputLibrary_eventGetUserIndex_Parms
	{
		FKeyEvent Input;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|KeyEvent" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetUserIndex_Parms, Input), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 3930076448
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetUserIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetUserIndex", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::KismetInputLibrary_eventGetUserIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::KismetInputLibrary_eventGetUserIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execGetUserIndex)
{
	P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKismetInputLibrary::GetUserIndex(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function GetUserIndex

// Begin Class UKismetInputLibrary Function InputChord_GetDisplayName
struct Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics
{
	struct KismetInputLibrary_eventInputChord_GetDisplayName_Parms
	{
		FInputChord Key;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/** @return The display name of the input chord */" },
		{ "DisplayName", "Get Input Chord Display Name" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "@return The display name of the input chord" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputChord_GetDisplayName_Parms, Key), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 4109060215
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputChord_GetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputChord_GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::KismetInputLibrary_eventInputChord_GetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::KismetInputLibrary_eventInputChord_GetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputChord_GetDisplayName)
{
	P_GET_STRUCT_REF(FInputChord,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UKismetInputLibrary::InputChord_GetDisplayName(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputChord_GetDisplayName

// Begin Class UKismetInputLibrary Function InputEvent_IsAltDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsAltDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either alt key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsAltDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsAltDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::KismetInputLibrary_eventInputEvent_IsAltDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::KismetInputLibrary_eventInputEvent_IsAltDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsAltDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsAltDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsAltDown

// Begin Class UKismetInputLibrary Function InputEvent_IsCommandDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsCommandDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either command key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsCommandDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsCommandDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsCommandDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsCommandDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsCommandDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsCommandDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsCommandDown

// Begin Class UKismetInputLibrary Function InputEvent_IsControlDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsControlDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either control key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsControlDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsControlDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::KismetInputLibrary_eventInputEvent_IsControlDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::KismetInputLibrary_eventInputEvent_IsControlDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsControlDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsControlDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsControlDown

// Begin Class UKismetInputLibrary Function InputEvent_IsLeftAltDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left alt key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftAltDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsLeftAltDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftAltDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsLeftAltDown

// Begin Class UKismetInputLibrary Function InputEvent_IsLeftCommandDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left command key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftCommandDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsLeftCommandDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftCommandDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsLeftCommandDown

// Begin Class UKismetInputLibrary Function InputEvent_IsLeftControlDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left control key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftControlDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsLeftControlDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftControlDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsLeftControlDown

// Begin Class UKismetInputLibrary Function InputEvent_IsLeftShiftDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left shift key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftShiftDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsLeftShiftDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftShiftDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsLeftShiftDown

// Begin Class UKismetInputLibrary Function InputEvent_IsRepeat
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsRepeat_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns whether or not this character is an auto-repeated keystroke\n\x09 */" },
		{ "DisplayName", "Is Repeat" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns whether or not this character is an auto-repeated keystroke" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRepeat_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsRepeat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRepeat_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRepeat", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::KismetInputLibrary_eventInputEvent_IsRepeat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::KismetInputLibrary_eventInputEvent_IsRepeat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRepeat)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRepeat(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsRepeat

// Begin Class UKismetInputLibrary Function InputEvent_IsRightAltDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right alt key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightAltDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRightAltDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightAltDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsRightAltDown

// Begin Class UKismetInputLibrary Function InputEvent_IsRightCommandDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right command key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightCommandDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRightCommandDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightCommandDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsRightCommandDown

// Begin Class UKismetInputLibrary Function InputEvent_IsRightControlDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left control key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightControlDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRightControlDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightControlDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsRightControlDown

// Begin Class UKismetInputLibrary Function InputEvent_IsRightShiftDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right shift key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightShiftDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRightShiftDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightShiftDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsRightShiftDown

// Begin Class UKismetInputLibrary Function InputEvent_IsShiftDown
struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics
{
	struct KismetInputLibrary_eventInputEvent_IsShiftDown_Parms
	{
		FInputEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either shift key was down when this event occurred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 586465545
void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventInputEvent_IsShiftDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsShiftDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsShiftDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsShiftDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsShiftDown)
{
	P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsShiftDown(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function InputEvent_IsShiftDown

// Begin Class UKismetInputLibrary Function Key_GetDisplayName
struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics
{
	struct KismetInputLibrary_eventKey_GetDisplayName_Parms
	{
		FKey Key;
		bool bLongDisplayName;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns the display name of the key.\n\x09 */" },
		{ "CPP_Default_bLongDisplayName", "true" },
		{ "DisplayName", "Get Key Display Name" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the display name of the key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_bLongDisplayName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLongDisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetDisplayName_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_bLongDisplayName_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_GetDisplayName_Parms*)Obj)->bLongDisplayName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_bLongDisplayName = { "bLongDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_GetDisplayName_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_bLongDisplayName_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_bLongDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::KismetInputLibrary_eventKey_GetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::KismetInputLibrary_eventKey_GetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetDisplayName)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_GET_UBOOL(Z_Param_bLongDisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UKismetInputLibrary::Key_GetDisplayName(Z_Param_Out_Key,Z_Param_bLongDisplayName);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_GetDisplayName

// Begin Class UKismetInputLibrary Function Key_GetNavigationAction
struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics
{
	struct KismetInputLibrary_eventKey_GetNavigationAction_Parms
	{
		FKey InKey;
		EUINavigationAction ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Get Key Event Navigation Action instead" },
		{ "DisplayName", "Get Key Navigation Action" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationAction_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) }; // 658672854
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationAction_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigationAction, METADATA_PARAMS(0, nullptr) }; // 3797654294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationAction", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::KismetInputLibrary_eventKey_GetNavigationAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::KismetInputLibrary_eventKey_GetNavigationAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetNavigationAction)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUINavigationAction*)Z_Param__Result=UKismetInputLibrary::Key_GetNavigationAction(Z_Param_Out_InKey);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_GetNavigationAction

// Begin Class UKismetInputLibrary Function Key_GetNavigationActionFromKey
struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics
{
	struct KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms
	{
		FKeyEvent InKeyEvent;
		EUINavigationAction ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|KeyEvent" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Key Event Navigation Action" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKeyEvent_MetaData), NewProp_InKeyEvent_MetaData) }; // 3930076448
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigationAction, METADATA_PARAMS(0, nullptr) }; // 3797654294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_InKeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationActionFromKey", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetNavigationActionFromKey)
{
	P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_InKeyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUINavigationAction*)Z_Param__Result=UKismetInputLibrary::Key_GetNavigationActionFromKey(Z_Param_Out_InKeyEvent);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_GetNavigationActionFromKey

// Begin Class UKismetInputLibrary Function Key_GetNavigationDirectionFromAnalog
struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics
{
	struct KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms
	{
		FAnalogInputEvent InAnalogEvent;
		EUINavigation ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|AnalogEvent" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Analog Event Navigation Direction" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAnalogEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAnalogEvent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent = { "InAnalogEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms, InAnalogEvent), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAnalogEvent_MetaData), NewProp_InAnalogEvent_MetaData) }; // 485268202
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 2993106650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationDirectionFromAnalog", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetNavigationDirectionFromAnalog)
{
	P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_InAnalogEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUINavigation*)Z_Param__Result=UKismetInputLibrary::Key_GetNavigationDirectionFromAnalog(Z_Param_Out_InAnalogEvent);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_GetNavigationDirectionFromAnalog

// Begin Class UKismetInputLibrary Function Key_GetNavigationDirectionFromKey
struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics
{
	struct KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms
	{
		FKeyEvent InKeyEvent;
		EUINavigation ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|KeyEvent" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Key Event Navigation Direction" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKeyEvent_MetaData), NewProp_InKeyEvent_MetaData) }; // 3930076448
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(0, nullptr) }; // 2993106650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationDirectionFromKey", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetNavigationDirectionFromKey)
{
	P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_InKeyEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUINavigation*)Z_Param__Result=UKismetInputLibrary::Key_GetNavigationDirectionFromKey(Z_Param_Out_InKeyEvent);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_GetNavigationDirectionFromKey

// Begin Class UKismetInputLibrary Function Key_IsAnalog
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics
{
	struct KismetInputLibrary_eventKey_IsAnalog_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is an analog axis\n\x09 */" },
		{ "DisplayName", "Is Analog" },
		{ "Keywords", "IsFloatAxis, IsVectorAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is an analog axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsAnalog_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsAnalog_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsAnalog_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsAnalog", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::KismetInputLibrary_eventKey_IsAnalog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::KismetInputLibrary_eventKey_IsAnalog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsAnalog)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsAnalog(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsAnalog

// Begin Class UKismetInputLibrary Function Key_IsAxis1D
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics
{
	struct KismetInputLibrary_eventKey_IsAxis1D_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a 1D (float) axis\n\x09 */" },
		{ "DisplayName", "Is Axis 1D" },
		{ "Keywords", "IsFloatAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a 1D (float) axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsAxis1D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsAxis1D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsAxis1D_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsAxis1D", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::KismetInputLibrary_eventKey_IsAxis1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::KismetInputLibrary_eventKey_IsAxis1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsAxis1D)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsAxis1D(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsAxis1D

// Begin Class UKismetInputLibrary Function Key_IsAxis2D
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics
{
	struct KismetInputLibrary_eventKey_IsAxis2D_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a 2D (vector) axis\n\x09 */" },
		{ "DisplayName", "Is Axis 2D" },
		{ "Keywords", "IsVectorAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a 2D (vector) axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsAxis2D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsAxis2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsAxis2D_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsAxis2D", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::KismetInputLibrary_eventKey_IsAxis2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::KismetInputLibrary_eventKey_IsAxis2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsAxis2D)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsAxis2D(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsAxis2D

// Begin Class UKismetInputLibrary Function Key_IsAxis3D
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics
{
	struct KismetInputLibrary_eventKey_IsAxis3D_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a 3D (vector) axis\n\x09 */" },
		{ "DisplayName", "Is Axis 3D" },
		{ "Keywords", "IsVectorAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a 3D (vector) axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsAxis3D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsAxis3D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsAxis3D_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsAxis3D", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::KismetInputLibrary_eventKey_IsAxis3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::KismetInputLibrary_eventKey_IsAxis3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsAxis3D)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsAxis3D(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsAxis3D

// Begin Class UKismetInputLibrary Function Key_IsButtonAxis
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics
{
	struct KismetInputLibrary_eventKey_IsButtonAxis_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a 1D axis emulating a digital button press.\n\x09 */" },
		{ "DisplayName", "Is Button Axis" },
		{ "Keywords", "IsFloatAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a 1D axis emulating a digital button press." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsButtonAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsButtonAxis_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsButtonAxis_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsButtonAxis", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::KismetInputLibrary_eventKey_IsButtonAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::KismetInputLibrary_eventKey_IsButtonAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsButtonAxis)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsButtonAxis(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsButtonAxis

// Begin Class UKismetInputLibrary Function Key_IsDigital
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics
{
	struct KismetInputLibrary_eventKey_IsDigital_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a digital button press\n\x09 */" },
		{ "DisplayName", "Is Digital" },
		{ "Keywords", "IsFloatAxis, IsVectorAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a digital button press" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsDigital_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsDigital_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsDigital_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsDigital", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::KismetInputLibrary_eventKey_IsDigital_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::KismetInputLibrary_eventKey_IsDigital_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsDigital)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsDigital(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsDigital

// Begin Class UKismetInputLibrary Function Key_IsGamepadKey
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics
{
	struct KismetInputLibrary_eventKey_IsGamepadKey_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a gamepad button\n\x09 */" },
		{ "DisplayName", "Is Gamepad Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a gamepad button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsGamepadKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsGamepadKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsGamepadKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsGamepadKey", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::KismetInputLibrary_eventKey_IsGamepadKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::KismetInputLibrary_eventKey_IsGamepadKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsGamepadKey)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsGamepadKey(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsGamepadKey

// Begin Class UKismetInputLibrary Function Key_IsKeyboardKey
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics
{
	struct KismetInputLibrary_eventKey_IsKeyboardKey_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a keyboard button\n\x09 */" },
		{ "DisplayName", "Is Keyboard Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a keyboard button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsKeyboardKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsKeyboardKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsKeyboardKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsKeyboardKey", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::KismetInputLibrary_eventKey_IsKeyboardKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::KismetInputLibrary_eventKey_IsKeyboardKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsKeyboardKey)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsKeyboardKey(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsKeyboardKey

// Begin Class UKismetInputLibrary Function Key_IsModifierKey
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics
{
	struct KismetInputLibrary_eventKey_IsModifierKey_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a modifier key: Ctrl, Command, Alt, Shift\n\x09 */" },
		{ "DisplayName", "Is Modifier Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a modifier key: Ctrl, Command, Alt, Shift" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsModifierKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsModifierKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsModifierKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsModifierKey", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::KismetInputLibrary_eventKey_IsModifierKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::KismetInputLibrary_eventKey_IsModifierKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsModifierKey)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsModifierKey(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsModifierKey

// Begin Class UKismetInputLibrary Function Key_IsMouseButton
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics
{
	struct KismetInputLibrary_eventKey_IsMouseButton_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a mouse button\n\x09 */" },
		{ "DisplayName", "Is Mouse Button" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a mouse button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsMouseButton_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsMouseButton_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsMouseButton_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsMouseButton", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::KismetInputLibrary_eventKey_IsMouseButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::KismetInputLibrary_eventKey_IsMouseButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsMouseButton)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsMouseButton(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsMouseButton

// Begin Class UKismetInputLibrary Function Key_IsValid
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics
{
	struct KismetInputLibrary_eventKey_IsValid_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if this is a valid key.\n\x09 */" },
		{ "DisplayName", "Is Valid Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if this is a valid key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsValid_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsValid_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsValid", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::KismetInputLibrary_eventKey_IsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::KismetInputLibrary_eventKey_IsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsValid)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsValid(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsValid

// Begin Class UKismetInputLibrary Function Key_IsVectorAxis
struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics
{
	struct KismetInputLibrary_eventKey_IsVectorAxis_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a vector axis\n\x09 * @note Deprecated. Use Is Axis 2D/3D instead.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Is Axis 2D/3D instead." },
		{ "DisplayName", "Is Vector Axis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a vector axis\n@note Deprecated. Use Is Axis 2D/3D instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsVectorAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventKey_IsVectorAxis_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsVectorAxis_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsVectorAxis", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::KismetInputLibrary_eventKey_IsVectorAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::KismetInputLibrary_eventKey_IsVectorAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsVectorAxis)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsVectorAxis(Z_Param_Out_Key);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function Key_IsVectorAxis

// Begin Class UKismetInputLibrary Function ModifierKeysState_IsAltDown
struct Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics
{
	struct KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms
	{
		FSlateModifierKeysState KeysState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/**\n\x09 * Returns true if either alt key was down when the key state was captured \n\x09 */" },
		{ "DisplayName", "Is Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either alt key was down when the key state was captured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeysState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeysState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_KeysState = { "KeysState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms, KeysState), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeysState_MetaData), NewProp_KeysState_MetaData) }; // 2457372999
void Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_KeysState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "ModifierKeysState_IsAltDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execModifierKeysState_IsAltDown)
{
	P_GET_STRUCT_REF(FSlateModifierKeysState,Z_Param_Out_KeysState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::ModifierKeysState_IsAltDown(Z_Param_Out_KeysState);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function ModifierKeysState_IsAltDown

// Begin Class UKismetInputLibrary Function ModifierKeysState_IsCommandDown
struct Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics
{
	struct KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms
	{
		FSlateModifierKeysState KeysState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/**\n\x09 * Returns true if either command key was down when the key state was captured \n\x09 */" },
		{ "DisplayName", "Is Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either command key was down when the key state was captured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeysState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeysState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_KeysState = { "KeysState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms, KeysState), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeysState_MetaData), NewProp_KeysState_MetaData) }; // 2457372999
void Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_KeysState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "ModifierKeysState_IsCommandDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execModifierKeysState_IsCommandDown)
{
	P_GET_STRUCT_REF(FSlateModifierKeysState,Z_Param_Out_KeysState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::ModifierKeysState_IsCommandDown(Z_Param_Out_KeysState);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function ModifierKeysState_IsCommandDown

// Begin Class UKismetInputLibrary Function ModifierKeysState_IsControlDown
struct Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics
{
	struct KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms
	{
		FSlateModifierKeysState KeysState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/**\n\x09 * Returns true if either control key was down when the key state was captured \n\x09 */" },
		{ "DisplayName", "Is Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either control key was down when the key state was captured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeysState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeysState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_KeysState = { "KeysState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms, KeysState), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeysState_MetaData), NewProp_KeysState_MetaData) }; // 2457372999
void Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_KeysState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "ModifierKeysState_IsControlDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execModifierKeysState_IsControlDown)
{
	P_GET_STRUCT_REF(FSlateModifierKeysState,Z_Param_Out_KeysState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::ModifierKeysState_IsControlDown(Z_Param_Out_KeysState);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function ModifierKeysState_IsControlDown

// Begin Class UKismetInputLibrary Function ModifierKeysState_IsShiftDown
struct Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics
{
	struct KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms
	{
		FSlateModifierKeysState KeysState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/**\n\x09 * Returns true if either shift key was down when the key state was captured \n\x09 */" },
		{ "DisplayName", "Is Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either shift key was down when the key state was captured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeysState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeysState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_KeysState = { "KeysState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms, KeysState), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeysState_MetaData), NewProp_KeysState_MetaData) }; // 2457372999
void Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_KeysState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "ModifierKeysState_IsShiftDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execModifierKeysState_IsShiftDown)
{
	P_GET_STRUCT_REF(FSlateModifierKeysState,Z_Param_Out_KeysState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::ModifierKeysState_IsShiftDown(Z_Param_Out_KeysState);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function ModifierKeysState_IsShiftDown

// Begin Class UKismetInputLibrary Function PointerEvent_GetCursorDelta
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms
	{
		FPointerEvent Input;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the distance the mouse traveled since the last event was handled. */" },
		{ "DisplayName", "Get Cursor Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the distance the mouse traveled since the last event was handled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetCursorDelta", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetCursorDelta)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetCursorDelta(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetCursorDelta

// Begin Class UKismetInputLibrary Function PointerEvent_GetEffectingButton
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms
	{
		FPointerEvent Input;
		FKey ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Mouse button that caused this event to be raised (possibly FKey::Invalid) */" },
		{ "DisplayName", "Get Effecting Button" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Mouse button that caused this event to be raised (possibly FKey::Invalid)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetEffectingButton", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetEffectingButton)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKey*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetEffectingButton(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetEffectingButton

// Begin Class UKismetInputLibrary Function PointerEvent_GetGestureDelta
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms
	{
		FPointerEvent Input;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the change in gesture value since the last gesture event of the same type. */" },
		{ "DisplayName", "Get Gesture Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the change in gesture value since the last gesture event of the same type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetGestureDelta", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetGestureDelta)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetGestureDelta(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetGestureDelta

// Begin Class UKismetInputLibrary Function PointerEvent_GetGestureType
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetGestureType_Parms
	{
		FPointerEvent Input;
		ESlateGesture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the type of touch gesture */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the type of touch gesture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESlateGesture, METADATA_PARAMS(0, nullptr) }; // 361809672
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetGestureType", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::KismetInputLibrary_eventPointerEvent_GetGestureType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::KismetInputLibrary_eventPointerEvent_GetGestureType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetGestureType)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateGesture*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetGestureType(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetGestureType

// Begin Class UKismetInputLibrary Function PointerEvent_GetLastScreenSpacePosition
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms
	{
		FPointerEvent Input;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the position of the cursor in screen space last time we handled an input event */" },
		{ "DisplayName", "Get Last Screen Space Position" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the position of the cursor in screen space last time we handled an input event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetLastScreenSpacePosition", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetLastScreenSpacePosition)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetLastScreenSpacePosition

// Begin Class UKismetInputLibrary Function PointerEvent_GetPointerIndex
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms
	{
		FPointerEvent Input;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the unique identifier of the pointer (e.g., finger index) */" },
		{ "DisplayName", "Get Pointer Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the unique identifier of the pointer (e.g., finger index)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetPointerIndex", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetPointerIndex)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetPointerIndex(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetPointerIndex

// Begin Class UKismetInputLibrary Function PointerEvent_GetScreenSpacePosition
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms
	{
		FPointerEvent Input;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns The position of the cursor in screen space */" },
		{ "DisplayName", "Get Screen Space Position" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns The position of the cursor in screen space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetScreenSpacePosition", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetScreenSpacePosition)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetScreenSpacePosition(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetScreenSpacePosition

// Begin Class UKismetInputLibrary Function PointerEvent_GetTouchpadIndex
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms
	{
		FPointerEvent Input;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the index of the touch pad that generated this event (for platforms with multiple touch pads per user) */" },
		{ "DisplayName", "Get Touchpad Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the index of the touch pad that generated this event (for platforms with multiple touch pads per user)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetTouchpadIndex", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetTouchpadIndex)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetTouchpadIndex(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetTouchpadIndex

// Begin Class UKismetInputLibrary Function PointerEvent_GetUserIndex
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms
	{
		FPointerEvent Input;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the index of the user that caused the event */" },
		{ "DisplayName", "Get User Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the index of the user that caused the event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetUserIndex", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetUserIndex)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetUserIndex(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetUserIndex

// Begin Class UKismetInputLibrary Function PointerEvent_GetWheelDelta
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics
{
	struct KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms
	{
		FPointerEvent Input;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** How much did the mouse wheel turn since the last mouse event */" },
		{ "DisplayName", "Get Wheel Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "How much did the mouse wheel turn since the last mouse event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetWheelDelta", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetWheelDelta)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetWheelDelta(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_GetWheelDelta

// Begin Class UKismetInputLibrary Function PointerEvent_IsMouseButtonDown
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics
{
	struct KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms
	{
		FPointerEvent Input;
		FKey MouseButton;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Mouse buttons that are currently pressed */" },
		{ "DisplayName", "Is Mouse Button Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Mouse buttons that are currently pressed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseButton;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_MouseButton = { "MouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms, MouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_MouseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_IsMouseButtonDown", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_IsMouseButtonDown)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_GET_STRUCT(FKey,Z_Param_MouseButton);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::PointerEvent_IsMouseButtonDown(Z_Param_Out_Input,Z_Param_MouseButton);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_IsMouseButtonDown

// Begin Class UKismetInputLibrary Function PointerEvent_IsTouchEvent
struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics
{
	struct KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms
	{
		FPointerEvent Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns true if this event a result from a touch (as opposed to a mouse) */" },
		{ "DisplayName", "Is Touch Event" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if this event a result from a touch (as opposed to a mouse)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 2513801729
void Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms), &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_IsTouchEvent", nullptr, nullptr, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_IsTouchEvent)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKismetInputLibrary::PointerEvent_IsTouchEvent(Z_Param_Out_Input);
	P_NATIVE_END;
}
// End Class UKismetInputLibrary Function PointerEvent_IsTouchEvent

// Begin Class UKismetInputLibrary
void UKismetInputLibrary::StaticRegisterNativesUKismetInputLibrary()
{
	UClass* Class = UKismetInputLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalibrateTilt", &UKismetInputLibrary::execCalibrateTilt },
		{ "EqualEqual_InputChordInputChord", &UKismetInputLibrary::execEqualEqual_InputChordInputChord },
		{ "EqualEqual_KeyKey", &UKismetInputLibrary::execEqualEqual_KeyKey },
		{ "GetAnalogValue", &UKismetInputLibrary::execGetAnalogValue },
		{ "GetKey", &UKismetInputLibrary::execGetKey },
		{ "GetModifierKeysState", &UKismetInputLibrary::execGetModifierKeysState },
		{ "GetUserIndex", &UKismetInputLibrary::execGetUserIndex },
		{ "InputChord_GetDisplayName", &UKismetInputLibrary::execInputChord_GetDisplayName },
		{ "InputEvent_IsAltDown", &UKismetInputLibrary::execInputEvent_IsAltDown },
		{ "InputEvent_IsCommandDown", &UKismetInputLibrary::execInputEvent_IsCommandDown },
		{ "InputEvent_IsControlDown", &UKismetInputLibrary::execInputEvent_IsControlDown },
		{ "InputEvent_IsLeftAltDown", &UKismetInputLibrary::execInputEvent_IsLeftAltDown },
		{ "InputEvent_IsLeftCommandDown", &UKismetInputLibrary::execInputEvent_IsLeftCommandDown },
		{ "InputEvent_IsLeftControlDown", &UKismetInputLibrary::execInputEvent_IsLeftControlDown },
		{ "InputEvent_IsLeftShiftDown", &UKismetInputLibrary::execInputEvent_IsLeftShiftDown },
		{ "InputEvent_IsRepeat", &UKismetInputLibrary::execInputEvent_IsRepeat },
		{ "InputEvent_IsRightAltDown", &UKismetInputLibrary::execInputEvent_IsRightAltDown },
		{ "InputEvent_IsRightCommandDown", &UKismetInputLibrary::execInputEvent_IsRightCommandDown },
		{ "InputEvent_IsRightControlDown", &UKismetInputLibrary::execInputEvent_IsRightControlDown },
		{ "InputEvent_IsRightShiftDown", &UKismetInputLibrary::execInputEvent_IsRightShiftDown },
		{ "InputEvent_IsShiftDown", &UKismetInputLibrary::execInputEvent_IsShiftDown },
		{ "Key_GetDisplayName", &UKismetInputLibrary::execKey_GetDisplayName },
		{ "Key_GetNavigationAction", &UKismetInputLibrary::execKey_GetNavigationAction },
		{ "Key_GetNavigationActionFromKey", &UKismetInputLibrary::execKey_GetNavigationActionFromKey },
		{ "Key_GetNavigationDirectionFromAnalog", &UKismetInputLibrary::execKey_GetNavigationDirectionFromAnalog },
		{ "Key_GetNavigationDirectionFromKey", &UKismetInputLibrary::execKey_GetNavigationDirectionFromKey },
		{ "Key_IsAnalog", &UKismetInputLibrary::execKey_IsAnalog },
		{ "Key_IsAxis1D", &UKismetInputLibrary::execKey_IsAxis1D },
		{ "Key_IsAxis2D", &UKismetInputLibrary::execKey_IsAxis2D },
		{ "Key_IsAxis3D", &UKismetInputLibrary::execKey_IsAxis3D },
		{ "Key_IsButtonAxis", &UKismetInputLibrary::execKey_IsButtonAxis },
		{ "Key_IsDigital", &UKismetInputLibrary::execKey_IsDigital },
		{ "Key_IsGamepadKey", &UKismetInputLibrary::execKey_IsGamepadKey },
		{ "Key_IsKeyboardKey", &UKismetInputLibrary::execKey_IsKeyboardKey },
		{ "Key_IsModifierKey", &UKismetInputLibrary::execKey_IsModifierKey },
		{ "Key_IsMouseButton", &UKismetInputLibrary::execKey_IsMouseButton },
		{ "Key_IsValid", &UKismetInputLibrary::execKey_IsValid },
		{ "Key_IsVectorAxis", &UKismetInputLibrary::execKey_IsVectorAxis },
		{ "ModifierKeysState_IsAltDown", &UKismetInputLibrary::execModifierKeysState_IsAltDown },
		{ "ModifierKeysState_IsCommandDown", &UKismetInputLibrary::execModifierKeysState_IsCommandDown },
		{ "ModifierKeysState_IsControlDown", &UKismetInputLibrary::execModifierKeysState_IsControlDown },
		{ "ModifierKeysState_IsShiftDown", &UKismetInputLibrary::execModifierKeysState_IsShiftDown },
		{ "PointerEvent_GetCursorDelta", &UKismetInputLibrary::execPointerEvent_GetCursorDelta },
		{ "PointerEvent_GetEffectingButton", &UKismetInputLibrary::execPointerEvent_GetEffectingButton },
		{ "PointerEvent_GetGestureDelta", &UKismetInputLibrary::execPointerEvent_GetGestureDelta },
		{ "PointerEvent_GetGestureType", &UKismetInputLibrary::execPointerEvent_GetGestureType },
		{ "PointerEvent_GetLastScreenSpacePosition", &UKismetInputLibrary::execPointerEvent_GetLastScreenSpacePosition },
		{ "PointerEvent_GetPointerIndex", &UKismetInputLibrary::execPointerEvent_GetPointerIndex },
		{ "PointerEvent_GetScreenSpacePosition", &UKismetInputLibrary::execPointerEvent_GetScreenSpacePosition },
		{ "PointerEvent_GetTouchpadIndex", &UKismetInputLibrary::execPointerEvent_GetTouchpadIndex },
		{ "PointerEvent_GetUserIndex", &UKismetInputLibrary::execPointerEvent_GetUserIndex },
		{ "PointerEvent_GetWheelDelta", &UKismetInputLibrary::execPointerEvent_GetWheelDelta },
		{ "PointerEvent_IsMouseButtonDown", &UKismetInputLibrary::execPointerEvent_IsMouseButtonDown },
		{ "PointerEvent_IsTouchEvent", &UKismetInputLibrary::execPointerEvent_IsTouchEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetInputLibrary);
UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister()
{
	return UKismetInputLibrary::StaticClass();
}
struct Z_Construct_UClass_UKismetInputLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetInputLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ScriptName", "InputLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt, "CalibrateTilt" }, // 3925157561
		{ &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord, "EqualEqual_InputChordInputChord" }, // 2093239284
		{ &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey, "EqualEqual_KeyKey" }, // 1300106618
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue, "GetAnalogValue" }, // 1015204457
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetKey, "GetKey" }, // 2488850503
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState, "GetModifierKeysState" }, // 840241087
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex, "GetUserIndex" }, // 3360599081
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName, "InputChord_GetDisplayName" }, // 2430041344
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown, "InputEvent_IsAltDown" }, // 2710361375
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown, "InputEvent_IsCommandDown" }, // 4142217069
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown, "InputEvent_IsControlDown" }, // 420055092
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown, "InputEvent_IsLeftAltDown" }, // 2529895603
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown, "InputEvent_IsLeftCommandDown" }, // 1242186417
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown, "InputEvent_IsLeftControlDown" }, // 1252341647
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown, "InputEvent_IsLeftShiftDown" }, // 1110222726
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat, "InputEvent_IsRepeat" }, // 351335837
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown, "InputEvent_IsRightAltDown" }, // 3106600073
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown, "InputEvent_IsRightCommandDown" }, // 2255576865
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown, "InputEvent_IsRightControlDown" }, // 3072842972
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown, "InputEvent_IsRightShiftDown" }, // 268078794
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown, "InputEvent_IsShiftDown" }, // 2013916603
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName, "Key_GetDisplayName" }, // 2660865999
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction, "Key_GetNavigationAction" }, // 4127975353
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey, "Key_GetNavigationActionFromKey" }, // 2527085347
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog, "Key_GetNavigationDirectionFromAnalog" }, // 3908002780
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey, "Key_GetNavigationDirectionFromKey" }, // 1777894246
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog, "Key_IsAnalog" }, // 1759080612
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D, "Key_IsAxis1D" }, // 2078611742
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D, "Key_IsAxis2D" }, // 1646554200
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D, "Key_IsAxis3D" }, // 2282948723
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis, "Key_IsButtonAxis" }, // 2961020202
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital, "Key_IsDigital" }, // 3985406491
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey, "Key_IsGamepadKey" }, // 3400206933
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey, "Key_IsKeyboardKey" }, // 863733325
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey, "Key_IsModifierKey" }, // 3210917598
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton, "Key_IsMouseButton" }, // 4056581885
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid, "Key_IsValid" }, // 272302197
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis, "Key_IsVectorAxis" }, // 306386016
		{ &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown, "ModifierKeysState_IsAltDown" }, // 2504193952
		{ &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown, "ModifierKeysState_IsCommandDown" }, // 3881323756
		{ &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown, "ModifierKeysState_IsControlDown" }, // 2146793731
		{ &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown, "ModifierKeysState_IsShiftDown" }, // 3591379614
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta, "PointerEvent_GetCursorDelta" }, // 2841169703
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton, "PointerEvent_GetEffectingButton" }, // 868212636
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta, "PointerEvent_GetGestureDelta" }, // 3604717444
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType, "PointerEvent_GetGestureType" }, // 2989591061
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition, "PointerEvent_GetLastScreenSpacePosition" }, // 1386033796
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex, "PointerEvent_GetPointerIndex" }, // 3169656161
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition, "PointerEvent_GetScreenSpacePosition" }, // 3118982387
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex, "PointerEvent_GetTouchpadIndex" }, // 35935995
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex, "PointerEvent_GetUserIndex" }, // 1327447986
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta, "PointerEvent_GetWheelDelta" }, // 828493818
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown, "PointerEvent_IsMouseButtonDown" }, // 4098822224
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent, "PointerEvent_IsTouchEvent" }, // 910546952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetInputLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKismetInputLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetInputLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetInputLibrary_Statics::ClassParams = {
	&UKismetInputLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKismetInputLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKismetInputLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKismetInputLibrary()
{
	if (!Z_Registration_Info_UClass_UKismetInputLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetInputLibrary.OuterSingleton, Z_Construct_UClass_UKismetInputLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKismetInputLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UKismetInputLibrary>()
{
	return UKismetInputLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInputLibrary);
UKismetInputLibrary::~UKismetInputLibrary() {}
// End Class UKismetInputLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESlateGesture_StaticEnum, TEXT("ESlateGesture"), &Z_Registration_Info_UEnum_ESlateGesture, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 361809672U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlateModifierKeysState::StaticStruct, Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewStructOps, TEXT("SlateModifierKeysState"), &Z_Registration_Info_UScriptStruct_SlateModifierKeysState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateModifierKeysState), 2457372999U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKismetInputLibrary, UKismetInputLibrary::StaticClass, TEXT("UKismetInputLibrary"), &Z_Registration_Info_UClass_UKismetInputLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetInputLibrary), 3909627128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_1226902286(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
