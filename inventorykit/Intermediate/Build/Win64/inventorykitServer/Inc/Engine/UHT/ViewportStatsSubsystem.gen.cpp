// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/ViewportStatsSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportStatsSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UViewportStatsSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UViewportStatsSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FViewportDisplayCallback
struct Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics
{
	struct _Script_Engine_eventViewportDisplayCallback_Parms
	{
		FText OutText;
		FLinearColor OutColor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutColor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_OutText = { "OutText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventViewportDisplayCallback_Parms, OutText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventViewportDisplayCallback_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((_Script_Engine_eventViewportDisplayCallback_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Engine_eventViewportDisplayCallback_Parms), &Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_OutText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_OutColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ViewportDisplayCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::_Script_Engine_eventViewportDisplayCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::_Script_Engine_eventViewportDisplayCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
bool FViewportDisplayCallback_DelegateWrapper(const FScriptDelegate& ViewportDisplayCallback, FText& OutText, FLinearColor& OutColor)
{
	struct _Script_Engine_eventViewportDisplayCallback_Parms
	{
		FText OutText;
		FLinearColor OutColor;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_Engine_eventViewportDisplayCallback_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_Engine_eventViewportDisplayCallback_Parms Parms;
	Parms.OutText=OutText;
	Parms.OutColor=OutColor;
	ViewportDisplayCallback.ProcessDelegate<UObject>(&Parms);
	OutText=Parms.OutText;
	OutColor=Parms.OutColor;
	return !!Parms.ReturnValue;
}
// End Delegate FViewportDisplayCallback

// Begin Class UViewportStatsSubsystem Function AddDisplayDelegate
struct Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics
{
	struct ViewportStatsSubsystem_eventAddDisplayDelegate_Parms
	{
		FScriptDelegate Delegate;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport Stats Subsystem" },
		{ "Comment", "/**\n\x09* Add a dynamic delegate to the display subsystem.\n\x09*\n\x09* @param Callback\x09The callback the subsystem will use to determine if a message should be displayed or not\n\x09*\x09\x09\x09\x09\x09Signature of callbacks should be: bool(FText& OutTest, FLinearColor& OutColor)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
		{ "ToolTip", "Add a dynamic delegate to the display subsystem.\n\n@param Callback       The callback the subsystem will use to determine if a message should be displayed or not\n                                      Signature of callbacks should be: bool(FText& OutTest, FLinearColor& OutColor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddDisplayDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_ViewportDisplayCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delegate_MetaData), NewProp_Delegate_MetaData) }; // 285009734
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddDisplayDelegate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportStatsSubsystem, nullptr, "AddDisplayDelegate", nullptr, nullptr, Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::ViewportStatsSubsystem_eventAddDisplayDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::ViewportStatsSubsystem_eventAddDisplayDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewportStatsSubsystem::execAddDisplayDelegate)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddDisplayDelegate(FViewportDisplayCallback(Z_Param_Out_Delegate));
	P_NATIVE_END;
}
// End Class UViewportStatsSubsystem Function AddDisplayDelegate

// Begin Class UViewportStatsSubsystem Function AddTimedDisplay
struct Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics
{
	struct ViewportStatsSubsystem_eventAddTimedDisplay_Parms
	{
		FText Text;
		FLinearColor Color;
		float Duration;
		FVector2D DisplayOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DisplayOffset" },
		{ "Category", "Viewport Stats Subsystem" },
		{ "Comment", "/**\n\x09* Add a message to be displayed on the viewport of this world\n\x09* \n\x09* @param Text\x09\x09The text to be displayed\n\x09* @param Color\x09\x09""Color of the text to be displayed\n\x09* @param Duration\x09How long the text will be on screen, if 0 then it will stay indefinitely\n\x09* @param DisplayOffset\x09""A position offset that the message should use when displayed. \n\x09*/" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DisplayOffset", "" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
		{ "ToolTip", "Add a message to be displayed on the viewport of this world\n\n@param Text           The text to be displayed\n@param Color          Color of the text to be displayed\n@param Duration       How long the text will be on screen, if 0 then it will stay indefinitely\n@param DisplayOffset  A position offset that the message should use when displayed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddTimedDisplay_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddTimedDisplay_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddTimedDisplay_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_DisplayOffset = { "DisplayOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventAddTimedDisplay_Parms, DisplayOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayOffset_MetaData), NewProp_DisplayOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::NewProp_DisplayOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportStatsSubsystem, nullptr, "AddTimedDisplay", nullptr, nullptr, Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::ViewportStatsSubsystem_eventAddTimedDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::ViewportStatsSubsystem_eventAddTimedDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewportStatsSubsystem::execAddTimedDisplay)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_DisplayOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTimedDisplay(Z_Param_Text,Z_Param_Color,Z_Param_Duration,Z_Param_Out_DisplayOffset);
	P_NATIVE_END;
}
// End Class UViewportStatsSubsystem Function AddTimedDisplay

// Begin Class UViewportStatsSubsystem Function RemoveDisplayDelegate
struct Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics
{
	struct ViewportStatsSubsystem_eventRemoveDisplayDelegate_Parms
	{
		int32 IndexToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport Stats Subsystem" },
		{ "Comment", "/**\n\x09* Remove a callback function from the display subsystem\n\x09*\n\x09* @param IndexToRemove\x09The index in the DisplayDelegates array to remove. \n\x09*\x09\x09\x09\x09\x09\x09This is the value returned from AddDisplayDelegate.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
		{ "ToolTip", "Remove a callback function from the display subsystem\n\n@param IndexToRemove  The index in the DisplayDelegates array to remove.\n                                              This is the value returned from AddDisplayDelegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::NewProp_IndexToRemove = { "IndexToRemove", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewportStatsSubsystem_eventRemoveDisplayDelegate_Parms, IndexToRemove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexToRemove_MetaData), NewProp_IndexToRemove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::NewProp_IndexToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportStatsSubsystem, nullptr, "RemoveDisplayDelegate", nullptr, nullptr, Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::ViewportStatsSubsystem_eventRemoveDisplayDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::ViewportStatsSubsystem_eventRemoveDisplayDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewportStatsSubsystem::execRemoveDisplayDelegate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDisplayDelegate(Z_Param_IndexToRemove);
	P_NATIVE_END;
}
// End Class UViewportStatsSubsystem Function RemoveDisplayDelegate

// Begin Class UViewportStatsSubsystem
void UViewportStatsSubsystem::StaticRegisterNativesUViewportStatsSubsystem()
{
	UClass* Class = UViewportStatsSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDisplayDelegate", &UViewportStatsSubsystem::execAddDisplayDelegate },
		{ "AddTimedDisplay", &UViewportStatsSubsystem::execAddTimedDisplay },
		{ "RemoveDisplayDelegate", &UViewportStatsSubsystem::execRemoveDisplayDelegate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportStatsSubsystem);
UClass* Z_Construct_UClass_UViewportStatsSubsystem_NoRegister()
{
	return UViewportStatsSubsystem::StaticClass();
}
struct Z_Construct_UClass_UViewportStatsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Viewport Stats Subsystem" },
		{ "Comment", "/**\n* The Viewport Stats Subsystem offers the ability to add messages to the current \n* viewport such as \"LIGHTING NEEDS TO BE REBUILT\" and \"BLUEPRINT COMPILE ERROR\".\n* \n* Example usage:\n*\n*\x09if (UViewportStatsSubsystem* ViewportSubsystem = GetWorld()->GetSubsystem<UViewportStatsSubsystem>())\n*\x09{\n*\x09\x09// Bind a member function delegate to the subsystem...\n*\x09\x09""FViewportDisplayCallback Callback;\n*\x09\x09""Callback.BindDynamic(this, &UCustomClass::DisplayViewportMessage);\n*\x09\x09ViewportSubsystem->AddDisplayDelegate(Callback);\n*\x09\x09\n*\x09\x09// ... or use inline lambda functions\n*\x09\x09ViewportSubsystem->AddDisplayDelegate([](FText& OutText, FLinearColor& OutColor)\n*\x09\x09{\n*\x09\x09\x09// Some kind of state management\n*\x09\x09\x09OutText = NSLOCTEXT(\"FooNamespace\", \"Blarg\", \"Display message here\");\n*\x09\x09\x09OutColor = FLinearColor::Red;\n*\x09\x09\x09return bShouldDisplay;\n*\x09\x09});\n*\x09}\n*/" },
		{ "IncludePath", "Engine/ViewportStatsSubsystem.h" },
		{ "ModuleRelativePath", "Classes/Engine/ViewportStatsSubsystem.h" },
		{ "ToolTip", "The Viewport Stats Subsystem offers the ability to add messages to the current\nviewport such as \"LIGHTING NEEDS TO BE REBUILT\" and \"BLUEPRINT COMPILE ERROR\".\n\nExample usage:\n\n     if (UViewportStatsSubsystem* ViewportSubsystem = GetWorld()->GetSubsystem<UViewportStatsSubsystem>())\n     {\n             // Bind a member function delegate to the subsystem...\n             FViewportDisplayCallback Callback;\n             Callback.BindDynamic(this, &UCustomClass::DisplayViewportMessage);\n             ViewportSubsystem->AddDisplayDelegate(Callback);\n\n             // ... or use inline lambda functions\n             ViewportSubsystem->AddDisplayDelegate([](FText& OutText, FLinearColor& OutColor)\n             {\n                     // Some kind of state management\n                     OutText = NSLOCTEXT(\"FooNamespace\", \"Blarg\", \"Display message here\");\n                     OutColor = FLinearColor::Red;\n                     return bShouldDisplay;\n             });\n     }" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportStatsSubsystem_AddDisplayDelegate, "AddDisplayDelegate" }, // 2297805751
		{ &Z_Construct_UFunction_UViewportStatsSubsystem_AddTimedDisplay, "AddTimedDisplay" }, // 491395893
		{ &Z_Construct_UFunction_UViewportStatsSubsystem_RemoveDisplayDelegate, "RemoveDisplayDelegate" }, // 113031477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportStatsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UViewportStatsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportStatsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportStatsSubsystem_Statics::ClassParams = {
	&UViewportStatsSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewportStatsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewportStatsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewportStatsSubsystem()
{
	if (!Z_Registration_Info_UClass_UViewportStatsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportStatsSubsystem.OuterSingleton, Z_Construct_UClass_UViewportStatsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewportStatsSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UViewportStatsSubsystem>()
{
	return UViewportStatsSubsystem::StaticClass();
}
UViewportStatsSubsystem::UViewportStatsSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportStatsSubsystem);
UViewportStatsSubsystem::~UViewportStatsSubsystem() {}
// End Class UViewportStatsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewportStatsSubsystem, UViewportStatsSubsystem::StaticClass, TEXT("UViewportStatsSubsystem"), &Z_Registration_Info_UClass_UViewportStatsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportStatsSubsystem), 818499053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_2105663933(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ViewportStatsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
