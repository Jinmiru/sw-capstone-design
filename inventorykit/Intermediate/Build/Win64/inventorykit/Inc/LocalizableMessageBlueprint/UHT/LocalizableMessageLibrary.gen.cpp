// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocalizableMessageBlueprint/Public/LocalizableMessageLibrary.h"
#include "LocalizableMessage/Public/LocalizableMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizableMessageLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessage();
LOCALIZABLEMESSAGEBLUEPRINT_API UClass* Z_Construct_UClass_ULocalizableMessageLibrary();
LOCALIZABLEMESSAGEBLUEPRINT_API UClass* Z_Construct_UClass_ULocalizableMessageLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_LocalizableMessageBlueprint();
// End Cross Module References

// Begin Class ULocalizableMessageLibrary Function Conv_LocalizableMessageToText
struct Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics
{
	struct LocalizableMessageLibrary_eventConv_LocalizableMessageToText_Parms
	{
		UObject* WorldContextObject;
		FLocalizableMessage Message;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Localizable Message" },
		{ "Comment", "/**\n\x09 * Conversion function from LocalizableMessage to FText.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LocalizableMessageLibrary.h" },
		{ "ToolTip", "Conversion function from LocalizableMessage to FText." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalizableMessageLibrary_eventConv_LocalizableMessageToText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalizableMessageLibrary_eventConv_LocalizableMessageToText_Parms, Message), Z_Construct_UScriptStruct_FLocalizableMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 277901026
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalizableMessageLibrary_eventConv_LocalizableMessageToText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalizableMessageLibrary, nullptr, "Conv_LocalizableMessageToText", nullptr, nullptr, Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::LocalizableMessageLibrary_eventConv_LocalizableMessageToText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::LocalizableMessageLibrary_eventConv_LocalizableMessageToText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalizableMessageLibrary::execConv_LocalizableMessageToText)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FLocalizableMessage,Z_Param_Out_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=ULocalizableMessageLibrary::Conv_LocalizableMessageToText(Z_Param_WorldContextObject,Z_Param_Out_Message);
	P_NATIVE_END;
}
// End Class ULocalizableMessageLibrary Function Conv_LocalizableMessageToText

// Begin Class ULocalizableMessageLibrary Function IsEmpty_LocalizableMessage
struct Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics
{
	struct LocalizableMessageLibrary_eventIsEmpty_LocalizableMessage_Parms
	{
		FLocalizableMessage Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Localizable Message" },
		{ "Comment", "/**\n\x09 * Returns true if the message is empty\n\x09 */" },
		{ "ModuleRelativePath", "Public/LocalizableMessageLibrary.h" },
		{ "ToolTip", "Returns true if the message is empty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalizableMessageLibrary_eventIsEmpty_LocalizableMessage_Parms, Message), Z_Construct_UScriptStruct_FLocalizableMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 277901026
void Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocalizableMessageLibrary_eventIsEmpty_LocalizableMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalizableMessageLibrary_eventIsEmpty_LocalizableMessage_Parms), &Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalizableMessageLibrary, nullptr, "IsEmpty_LocalizableMessage", nullptr, nullptr, Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::LocalizableMessageLibrary_eventIsEmpty_LocalizableMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::LocalizableMessageLibrary_eventIsEmpty_LocalizableMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalizableMessageLibrary::execIsEmpty_LocalizableMessage)
{
	P_GET_STRUCT_REF(FLocalizableMessage,Z_Param_Out_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocalizableMessageLibrary::IsEmpty_LocalizableMessage(Z_Param_Out_Message);
	P_NATIVE_END;
}
// End Class ULocalizableMessageLibrary Function IsEmpty_LocalizableMessage

// Begin Class ULocalizableMessageLibrary Function Reset_LocalizableMessage
struct Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics
{
	struct LocalizableMessageLibrary_eventReset_LocalizableMessage_Parms
	{
		FLocalizableMessage Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Localizable Message" },
		{ "Comment", "/**\n\x09 * Resets the Localizable Message\n\x09 */" },
		{ "ModuleRelativePath", "Public/LocalizableMessageLibrary.h" },
		{ "ToolTip", "Resets the Localizable Message" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalizableMessageLibrary_eventReset_LocalizableMessage_Parms, Message), Z_Construct_UScriptStruct_FLocalizableMessage, METADATA_PARAMS(0, nullptr) }; // 277901026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalizableMessageLibrary, nullptr, "Reset_LocalizableMessage", nullptr, nullptr, Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::LocalizableMessageLibrary_eventReset_LocalizableMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::LocalizableMessageLibrary_eventReset_LocalizableMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalizableMessageLibrary::execReset_LocalizableMessage)
{
	P_GET_STRUCT_REF(FLocalizableMessage,Z_Param_Out_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULocalizableMessageLibrary::Reset_LocalizableMessage(Z_Param_Out_Message);
	P_NATIVE_END;
}
// End Class ULocalizableMessageLibrary Function Reset_LocalizableMessage

// Begin Class ULocalizableMessageLibrary
void ULocalizableMessageLibrary::StaticRegisterNativesULocalizableMessageLibrary()
{
	UClass* Class = ULocalizableMessageLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_LocalizableMessageToText", &ULocalizableMessageLibrary::execConv_LocalizableMessageToText },
		{ "IsEmpty_LocalizableMessage", &ULocalizableMessageLibrary::execIsEmpty_LocalizableMessage },
		{ "Reset_LocalizableMessage", &ULocalizableMessageLibrary::execReset_LocalizableMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalizableMessageLibrary);
UClass* Z_Construct_UClass_ULocalizableMessageLibrary_NoRegister()
{
	return ULocalizableMessageLibrary::StaticClass();
}
struct Z_Construct_UClass_ULocalizableMessageLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** BlueprintFunctionLibrary for LocalizableMessage */" },
		{ "IncludePath", "LocalizableMessageLibrary.h" },
		{ "ModuleRelativePath", "Public/LocalizableMessageLibrary.h" },
		{ "ToolTip", "BlueprintFunctionLibrary for LocalizableMessage" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalizableMessageLibrary_Conv_LocalizableMessageToText, "Conv_LocalizableMessageToText" }, // 2236637236
		{ &Z_Construct_UFunction_ULocalizableMessageLibrary_IsEmpty_LocalizableMessage, "IsEmpty_LocalizableMessage" }, // 318495602
		{ &Z_Construct_UFunction_ULocalizableMessageLibrary_Reset_LocalizableMessage, "Reset_LocalizableMessage" }, // 2401968167
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizableMessageLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULocalizableMessageLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessageBlueprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizableMessageLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalizableMessageLibrary_Statics::ClassParams = {
	&ULocalizableMessageLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizableMessageLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalizableMessageLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalizableMessageLibrary()
{
	if (!Z_Registration_Info_UClass_ULocalizableMessageLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalizableMessageLibrary.OuterSingleton, Z_Construct_UClass_ULocalizableMessageLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalizableMessageLibrary.OuterSingleton;
}
template<> LOCALIZABLEMESSAGEBLUEPRINT_API UClass* StaticClass<ULocalizableMessageLibrary>()
{
	return ULocalizableMessageLibrary::StaticClass();
}
ULocalizableMessageLibrary::ULocalizableMessageLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizableMessageLibrary);
ULocalizableMessageLibrary::~ULocalizableMessageLibrary() {}
// End Class ULocalizableMessageLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocalizableMessageLibrary, ULocalizableMessageLibrary::StaticClass, TEXT("ULocalizableMessageLibrary"), &Z_Registration_Info_UClass_ULocalizableMessageLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalizableMessageLibrary), 4048907989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_2169968641(TEXT("/Script/LocalizableMessageBlueprint"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessageBlueprint_Public_LocalizableMessageLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
