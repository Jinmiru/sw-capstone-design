// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "EnhancedInput/Public/EnhancedPlayerInput.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputSubsystems() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputWorldSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputWorldSubsystem_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UFunction* Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInjectedInput();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Delegate FOnControlMappingsRebuilt
struct Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** A delegate that will be called when control mappings have been rebuilt this frame. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "A delegate that will be called when control mappings have been rebuilt this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem, nullptr, "OnControlMappingsRebuilt__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEnhancedInputLocalPlayerSubsystem::FOnControlMappingsRebuilt_DelegateWrapper(const FMulticastScriptDelegate& OnControlMappingsRebuilt)
{
	OnControlMappingsRebuilt.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnControlMappingsRebuilt

// Begin Class UEnhancedInputLocalPlayerSubsystem
void UEnhancedInputLocalPlayerSubsystem::StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputLocalPlayerSubsystem);
UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister()
{
	return UEnhancedInputLocalPlayerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Per local player input subsystem\n" },
		{ "IncludePath", "EnhancedInputSubsystems.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Per local player input subsystem" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlMappingsRebuiltDelegate_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Blueprint Event that is called at the end of any frame that Control Mappings have been rebuilt.\n\x09 */" },
		{ "DisplayName", "OnControlMappingsRebuilt" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Blueprint Event that is called at the end of any frame that Control Mappings have been rebuilt." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSettings_MetaData[] = {
		{ "Comment", "/** The user settings for this subsystem used to store each user's input related settings */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "The user settings for this subsystem used to store each user's input related settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuouslyInjectedInputs_MetaData[] = {
		{ "Comment", "// Map of inputs that should be injected every frame. These inputs will be injected when ForcedInput is ticked. \n" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Map of inputs that should be injected every frame. These inputs will be injected when ForcedInput is ticked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ControlMappingsRebuiltDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContinuouslyInjectedInputs_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinuouslyInjectedInputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ContinuouslyInjectedInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature, "OnControlMappingsRebuilt__DelegateSignature" }, // 4100409088
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputLocalPlayerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ControlMappingsRebuiltDelegate = { "ControlMappingsRebuiltDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputLocalPlayerSubsystem, ControlMappingsRebuiltDelegate), Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlMappingsRebuiltDelegate_MetaData), NewProp_ControlMappingsRebuiltDelegate_MetaData) }; // 4100409088
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_UserSettings = { "UserSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputLocalPlayerSubsystem, UserSettings), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSettings_MetaData), NewProp_UserSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ContinuouslyInjectedInputs_ValueProp = { "ContinuouslyInjectedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInjectedInput, METADATA_PARAMS(0, nullptr) }; // 3883729286
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ContinuouslyInjectedInputs_Key_KeyProp = { "ContinuouslyInjectedInputs_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ContinuouslyInjectedInputs = { "ContinuouslyInjectedInputs", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputLocalPlayerSubsystem, ContinuouslyInjectedInputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuouslyInjectedInputs_MetaData), NewProp_ContinuouslyInjectedInputs_MetaData) }; // 3883729286
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ControlMappingsRebuiltDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_UserSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ContinuouslyInjectedInputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ContinuouslyInjectedInputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ContinuouslyInjectedInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(UEnhancedInputLocalPlayerSubsystem, IEnhancedInputSubsystemInterface), false },  // 1027689643
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::ClassParams = {
	&UEnhancedInputLocalPlayerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton, Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputLocalPlayerSubsystem>()
{
	return UEnhancedInputLocalPlayerSubsystem::StaticClass();
}
UEnhancedInputLocalPlayerSubsystem::UEnhancedInputLocalPlayerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputLocalPlayerSubsystem);
UEnhancedInputLocalPlayerSubsystem::~UEnhancedInputLocalPlayerSubsystem() {}
// End Class UEnhancedInputLocalPlayerSubsystem

// Begin Class UEnhancedInputWorldSubsystem Function AddActorInputComponent
struct Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics
{
	struct EnhancedInputWorldSubsystem_eventAddActorInputComponent_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|World" },
		{ "Comment", "/** Adds this Actor's input component onto the stack to be processed by this subsystem's tick function */" },
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Adds this Actor's input component onto the stack to be processed by this subsystem's tick function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputWorldSubsystem_eventAddActorInputComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputWorldSubsystem, nullptr, "AddActorInputComponent", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::EnhancedInputWorldSubsystem_eventAddActorInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::EnhancedInputWorldSubsystem_eventAddActorInputComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputWorldSubsystem::execAddActorInputComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddActorInputComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UEnhancedInputWorldSubsystem Function AddActorInputComponent

// Begin Class UEnhancedInputWorldSubsystem Function RemoveActorInputComponent
struct Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics
{
	struct EnhancedInputWorldSubsystem_eventRemoveActorInputComponent_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input|World" },
		{ "Comment", "/** Removes this Actor's input component from the stack to be processed by this subsystem's tick function */" },
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Removes this Actor's input component from the stack to be processed by this subsystem's tick function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputWorldSubsystem_eventRemoveActorInputComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputWorldSubsystem_eventRemoveActorInputComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputWorldSubsystem_eventRemoveActorInputComponent_Parms), &Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputWorldSubsystem, nullptr, "RemoveActorInputComponent", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::EnhancedInputWorldSubsystem_eventRemoveActorInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::EnhancedInputWorldSubsystem_eventRemoveActorInputComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputWorldSubsystem::execRemoveActorInputComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveActorInputComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UEnhancedInputWorldSubsystem Function RemoveActorInputComponent

// Begin Class UEnhancedInputWorldSubsystem
void UEnhancedInputWorldSubsystem::StaticRegisterNativesUEnhancedInputWorldSubsystem()
{
	UClass* Class = UEnhancedInputWorldSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddActorInputComponent", &UEnhancedInputWorldSubsystem::execAddActorInputComponent },
		{ "RemoveActorInputComponent", &UEnhancedInputWorldSubsystem::execRemoveActorInputComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputWorldSubsystem);
UClass* Z_Construct_UClass_UEnhancedInputWorldSubsystem_NoRegister()
{
	return UEnhancedInputWorldSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Per world input subsystem that allows you to bind input delegates to actors without an owning Player Controller. \n * This should be used when an actor needs to receive input delegates but will never have an owning Player Controller.\n * For example, you can add input delegates to unlock a door when the user has a certain set of keys pressed.\n * Be sure to enable input on the actor, or else the input delegates won't fire!\n * \n * Note: if you do have an actor with an owning Player Controller use the local player input subsystem instead.\n */" },
		{ "DisplayName", "Enhanced Input World Subsystem (Experimental)" },
		{ "IncludePath", "EnhancedInputSubsystems.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Per world input subsystem that allows you to bind input delegates to actors without an owning Player Controller.\nThis should be used when an actor needs to receive input delegates but will never have an owning Player Controller.\nFor example, you can add input delegates to unlock a door when the user has a certain set of keys pressed.\nBe sure to enable input on the actor, or else the input delegates won't fire!\n\nNote: if you do have an actor with an owning Player Controller use the local player input subsystem instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[] = {
		{ "Comment", "/** The player input that is processing the input within this subsystem */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "The player input that is processing the input within this subsystem" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputStack_MetaData[] = {
		{ "Comment", "/** Internal. This is the current stack of InputComponents that is being processed by the PlayerInput. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Internal. This is the current stack of InputComponents that is being processed by the PlayerInput." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuouslyInjectedInputs_MetaData[] = {
		{ "Comment", "// Map of inputs that should be injected every frame. These inputs will be injected when ForcedInput is ticked. \n" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Map of inputs that should be injected every frame. These inputs will be injected when ForcedInput is ticked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentInputStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentInputStack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContinuouslyInjectedInputs_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinuouslyInjectedInputs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ContinuouslyInjectedInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputWorldSubsystem_AddActorInputComponent, "AddActorInputComponent" }, // 1492132649
		{ &Z_Construct_UFunction_UEnhancedInputWorldSubsystem_RemoveActorInputComponent, "RemoveActorInputComponent" }, // 119662046
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputWorldSubsystem, PlayerInput), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInput_MetaData), NewProp_PlayerInput_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_CurrentInputStack_Inner = { "CurrentInputStack", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_CurrentInputStack = { "CurrentInputStack", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputWorldSubsystem, CurrentInputStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInputStack_MetaData), NewProp_CurrentInputStack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_ContinuouslyInjectedInputs_ValueProp = { "ContinuouslyInjectedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInjectedInput, METADATA_PARAMS(0, nullptr) }; // 3883729286
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_ContinuouslyInjectedInputs_Key_KeyProp = { "ContinuouslyInjectedInputs_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_ContinuouslyInjectedInputs = { "ContinuouslyInjectedInputs", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputWorldSubsystem, ContinuouslyInjectedInputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuouslyInjectedInputs_MetaData), NewProp_ContinuouslyInjectedInputs_MetaData) }; // 3883729286
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_PlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_CurrentInputStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_CurrentInputStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_ContinuouslyInjectedInputs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_ContinuouslyInjectedInputs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::NewProp_ContinuouslyInjectedInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(UEnhancedInputWorldSubsystem, IEnhancedInputSubsystemInterface), false },  // 1027689643
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::ClassParams = {
	&UEnhancedInputWorldSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.OuterSingleton, Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputWorldSubsystem>()
{
	return UEnhancedInputWorldSubsystem::StaticClass();
}
UEnhancedInputWorldSubsystem::UEnhancedInputWorldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputWorldSubsystem);
UEnhancedInputWorldSubsystem::~UEnhancedInputWorldSubsystem() {}
// End Class UEnhancedInputWorldSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem, UEnhancedInputLocalPlayerSubsystem::StaticClass, TEXT("UEnhancedInputLocalPlayerSubsystem"), &Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputLocalPlayerSubsystem), 3620442406U) },
		{ Z_Construct_UClass_UEnhancedInputWorldSubsystem, UEnhancedInputWorldSubsystem::StaticClass, TEXT("UEnhancedInputWorldSubsystem"), &Z_Registration_Info_UClass_UEnhancedInputWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputWorldSubsystem), 4209309713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_299061538(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
