// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/ApplicationLifecycleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicationLifecycleComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent();
ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETemperatureSeverityType();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETemperatureSeverityType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETemperatureSeverityType;
static UEnum* ETemperatureSeverityType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETemperatureSeverityType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETemperatureSeverityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETemperatureSeverityType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETemperatureSeverityType"));
	}
	return Z_Registration_Info_UEnum_ETemperatureSeverityType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETemperatureSeverityType>()
{
	return ETemperatureSeverityType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bad.Name", "ETemperatureSeverityType::Bad" },
		{ "BlueprintType", "true" },
		{ "Comment", "// A parallel enum to the temperature change severity enum in CoreDelegates\n// Note if you change this, then you must change the one in CoreDelegates\n" },
		{ "Critical.Name", "ETemperatureSeverityType::Critical" },
		{ "Good.Name", "ETemperatureSeverityType::Good" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "NumSeverities.Name", "ETemperatureSeverityType::NumSeverities" },
		{ "Serious.Name", "ETemperatureSeverityType::Serious" },
		{ "ToolTip", "A parallel enum to the temperature change severity enum in CoreDelegates\nNote if you change this, then you must change the one in CoreDelegates" },
		{ "Unknown.Name", "ETemperatureSeverityType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETemperatureSeverityType::Unknown", (int64)ETemperatureSeverityType::Unknown },
		{ "ETemperatureSeverityType::Good", (int64)ETemperatureSeverityType::Good },
		{ "ETemperatureSeverityType::Bad", (int64)ETemperatureSeverityType::Bad },
		{ "ETemperatureSeverityType::Serious", (int64)ETemperatureSeverityType::Serious },
		{ "ETemperatureSeverityType::Critical", (int64)ETemperatureSeverityType::Critical },
		{ "ETemperatureSeverityType::NumSeverities", (int64)ETemperatureSeverityType::NumSeverities },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETemperatureSeverityType",
	"ETemperatureSeverityType",
	Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETemperatureSeverityType()
{
	if (!Z_Registration_Info_UEnum_ETemperatureSeverityType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETemperatureSeverityType.InnerSingleton, Z_Construct_UEnum_Engine_ETemperatureSeverityType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETemperatureSeverityType.InnerSingleton;
}
// End Enum ETemperatureSeverityType

// Begin Delegate FApplicationLifetimeDelegate
struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, nullptr, "ApplicationLifetimeDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UApplicationLifecycleComponent::FApplicationLifetimeDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationLifetimeDelegate)
{
	ApplicationLifetimeDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FApplicationLifetimeDelegate

// Begin Delegate FOnTemperatureChangeDelegate
struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics
{
	struct ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms
	{
		ETemperatureSeverityType Severity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms, Severity), Z_Construct_UEnum_Engine_ETemperatureSeverityType, METADATA_PARAMS(0, nullptr) }; // 586813435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::NewProp_Severity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, nullptr, "OnTemperatureChangeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UApplicationLifecycleComponent::FOnTemperatureChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTemperatureChangeDelegate, ETemperatureSeverityType Severity)
{
	struct ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms
	{
		ETemperatureSeverityType Severity;
	};
	ApplicationLifecycleComponent_eventOnTemperatureChangeDelegate_Parms Parms;
	Parms.Severity=Severity;
	OnTemperatureChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTemperatureChangeDelegate

// Begin Delegate FOnLowPowerModeDelegate
struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics
{
	struct ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms
	{
		bool bInLowPowerMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInLowPowerMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLowPowerMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode_SetBit(void* Obj)
{
	((ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms*)Obj)->bInLowPowerMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode = { "bInLowPowerMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms), &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::NewProp_bInLowPowerMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, nullptr, "OnLowPowerModeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UApplicationLifecycleComponent::FOnLowPowerModeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLowPowerModeDelegate, bool bInLowPowerMode)
{
	struct ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms
	{
		bool bInLowPowerMode;
	};
	ApplicationLifecycleComponent_eventOnLowPowerModeDelegate_Parms Parms;
	Parms.bInLowPowerMode=bInLowPowerMode ? true : false;
	OnLowPowerModeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLowPowerModeDelegate

// Begin Delegate FApplicationStartupArgumentsDelegate
struct Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics
{
	struct ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms
	{
		TArray<FString> StartupArguments;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartupArguments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupArguments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner = { "StartupArguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments = { "StartupArguments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms, StartupArguments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupArguments_MetaData), NewProp_StartupArguments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::NewProp_StartupArguments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, nullptr, "ApplicationStartupArgumentsDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UApplicationLifecycleComponent::FApplicationStartupArgumentsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationStartupArgumentsDelegate, TArray<FString> const& StartupArguments)
{
	struct ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms
	{
		TArray<FString> StartupArguments;
	};
	ApplicationLifecycleComponent_eventApplicationStartupArgumentsDelegate_Parms Parms;
	Parms.StartupArguments=StartupArguments;
	ApplicationStartupArgumentsDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FApplicationStartupArgumentsDelegate

// Begin Class UApplicationLifecycleComponent
void UApplicationLifecycleComponent::StaticRegisterNativesUApplicationLifecycleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApplicationLifecycleComponent);
UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister()
{
	return UApplicationLifecycleComponent::StaticClass();
}
struct Z_Construct_UClass_UApplicationLifecycleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/** Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc). */" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "Components/ApplicationLifecycleComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillDeactivateDelegate_MetaData[] = {
		{ "Comment", "// This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button). \n// The game should be paused if possible, etc... \n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button).\nThe game should be paused if possible, etc..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasReactivatedDelegate_MetaData[] = {
		{ "Comment", "// Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[] = {
		{ "Comment", "// This is called when the application is being backgrounded (e.g., due to switching  \n// to another app or closing it via the home button)  \n// The game should release shared resources, save state, etc..., since it can be  \n// terminated from the background state without any further warning.  \n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This is called when the application is being backgrounded (e.g., due to switching\nto another app or closing it via the home button)\nThe game should release shared resources, save state, etc..., since it can be\nterminated from the background state without any further warning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[] = {
		{ "Comment", "// Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillTerminateDelegate_MetaData[] = {
		{ "Comment", "// This *may* be called when the application is getting terminated by the OS.  \n// There is no guarantee that this will ever be called on a mobile device,  \n// save state when ApplicationWillEnterBackgroundDelegate is called instead.  \n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "This *may* be called when the application is getting terminated by the OS.\nThere is no guarantee that this will ever be called on a mobile device,\nsave state when ApplicationWillEnterBackgroundDelegate is called instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData[] = {
		{ "Comment", "// Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc.\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when the OS is running low on resources and asks the application to free up any cached resources, drop graphics quality etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData[] = {
		{ "Comment", "// Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one.\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called with arguments passed to the application on statup, perhaps meta data passed on by another application which launched this one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTemperatureChangeDelegate_MetaData[] = {
		{ "Comment", "// Called when temperature level has changed, and receives the severity \n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when temperature level has changed, and receives the severity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLowPowerModeDelegate_MetaData[] = {
		{ "Comment", "// Called when we are in low power mode\n" },
		{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
		{ "ToolTip", "Called when we are in low power mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillDeactivateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasReactivatedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillEnterBackgroundDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasEnteredForegroundDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillTerminateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationShouldUnloadResourcesDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationReceivedStartupArgumentsDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTemperatureChangeDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLowPowerModeDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, "ApplicationLifetimeDelegate__DelegateSignature" }, // 2142130311
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature, "ApplicationStartupArgumentsDelegate__DelegateSignature" }, // 3101408454
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature, "OnLowPowerModeDelegate__DelegateSignature" }, // 2861855307
		{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature, "OnTemperatureChangeDelegate__DelegateSignature" }, // 4207671756
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApplicationLifecycleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate = { "ApplicationWillDeactivateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillDeactivateDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationWillDeactivateDelegate_MetaData), NewProp_ApplicationWillDeactivateDelegate_MetaData) }; // 2142130311
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate = { "ApplicationHasReactivatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationHasReactivatedDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationHasReactivatedDelegate_MetaData), NewProp_ApplicationHasReactivatedDelegate_MetaData) }; // 2142130311
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate = { "ApplicationWillEnterBackgroundDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillEnterBackgroundDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationWillEnterBackgroundDelegate_MetaData), NewProp_ApplicationWillEnterBackgroundDelegate_MetaData) }; // 2142130311
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate = { "ApplicationHasEnteredForegroundDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationHasEnteredForegroundDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationHasEnteredForegroundDelegate_MetaData), NewProp_ApplicationHasEnteredForegroundDelegate_MetaData) }; // 2142130311
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate = { "ApplicationWillTerminateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillTerminateDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationWillTerminateDelegate_MetaData), NewProp_ApplicationWillTerminateDelegate_MetaData) }; // 2142130311
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate = { "ApplicationShouldUnloadResourcesDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationShouldUnloadResourcesDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData), NewProp_ApplicationShouldUnloadResourcesDelegate_MetaData) }; // 2142130311
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate = { "ApplicationReceivedStartupArgumentsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationReceivedStartupArgumentsDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationStartupArgumentsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData), NewProp_ApplicationReceivedStartupArgumentsDelegate_MetaData) }; // 3101408454
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate = { "OnTemperatureChangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, OnTemperatureChangeDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnTemperatureChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTemperatureChangeDelegate_MetaData), NewProp_OnTemperatureChangeDelegate_MetaData) }; // 4207671756
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate = { "OnLowPowerModeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UApplicationLifecycleComponent, OnLowPowerModeDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_OnLowPowerModeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLowPowerModeDelegate_MetaData), NewProp_OnLowPowerModeDelegate_MetaData) }; // 2861855307
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillDeactivateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasReactivatedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillEnterBackgroundDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationHasEnteredForegroundDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationWillTerminateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationShouldUnloadResourcesDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_ApplicationReceivedStartupArgumentsDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnTemperatureChangeDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApplicationLifecycleComponent_Statics::NewProp_OnLowPowerModeDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UApplicationLifecycleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UApplicationLifecycleComponent_Statics::ClassParams = {
	&UApplicationLifecycleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UApplicationLifecycleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UApplicationLifecycleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UApplicationLifecycleComponent()
{
	if (!Z_Registration_Info_UClass_UApplicationLifecycleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApplicationLifecycleComponent.OuterSingleton, Z_Construct_UClass_UApplicationLifecycleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UApplicationLifecycleComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UApplicationLifecycleComponent>()
{
	return UApplicationLifecycleComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicationLifecycleComponent);
UApplicationLifecycleComponent::~UApplicationLifecycleComponent() {}
// End Class UApplicationLifecycleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETemperatureSeverityType_StaticEnum, TEXT("ETemperatureSeverityType"), &Z_Registration_Info_UEnum_ETemperatureSeverityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 586813435U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UApplicationLifecycleComponent, UApplicationLifecycleComponent::StaticClass, TEXT("UApplicationLifecycleComponent"), &Z_Registration_Info_UClass_UApplicationLifecycleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApplicationLifecycleComponent), 525084376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_652510811(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
