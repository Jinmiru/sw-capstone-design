// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidFileServer/Classes/AndroidFileServerBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidFileServerBPLibrary() {}

// Begin Cross Module References
ANDROIDFILESERVER_API UClass* Z_Construct_UClass_UAndroidFileServerBPLibrary();
ANDROIDFILESERVER_API UClass* Z_Construct_UClass_UAndroidFileServerBPLibrary_NoRegister();
ANDROIDFILESERVER_API UEnum* Z_Construct_UEnum_AndroidFileServer_EAFSActiveType();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidFileServer();
// End Cross Module References

// Begin Enum EAFSActiveType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAFSActiveType;
static UEnum* EAFSActiveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType, (UObject*)Z_Construct_UPackage__Script_AndroidFileServer(), TEXT("EAFSActiveType"));
	}
	return Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton;
}
template<> ANDROIDFILESERVER_API UEnum* StaticEnum<EAFSActiveType::Type>()
{
	return EAFSActiveType_StaticEnum();
}
struct Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Combined.DisplayName", "USB and Network combined" },
		{ "Combined.Name", "EAFSActiveType::Combined" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
		{ "NetworkOnly.DisplayName", "Network only" },
		{ "NetworkOnly.Name", "EAFSActiveType::NetworkOnly" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAFSActiveType::None" },
		{ "USBOnly.DisplayName", "USB only" },
		{ "USBOnly.Name", "EAFSActiveType::USBOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAFSActiveType::None", (int64)EAFSActiveType::None },
		{ "EAFSActiveType::USBOnly", (int64)EAFSActiveType::USBOnly },
		{ "EAFSActiveType::NetworkOnly", (int64)EAFSActiveType::NetworkOnly },
		{ "EAFSActiveType::Combined", (int64)EAFSActiveType::Combined },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AndroidFileServer,
	nullptr,
	"EAFSActiveType",
	"EAFSActiveType::Type",
	Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AndroidFileServer_EAFSActiveType()
{
	if (!Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton, Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton;
}
// End Enum EAFSActiveType

// Begin Class UAndroidFileServerBPLibrary Function IsFileServerRunning
struct Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics
{
	struct AndroidFileServerBPLibrary_eventIsFileServerRunning_Parms
	{
		TEnumAsByte<EAFSActiveType::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidFileServer" },
		{ "Comment", "/** Check if Android FileServer is running */" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
		{ "ToolTip", "Check if Android FileServer is running" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidFileServerBPLibrary_eventIsFileServerRunning_Parms, ReturnValue), Z_Construct_UEnum_AndroidFileServer_EAFSActiveType, METADATA_PARAMS(0, nullptr) }; // 972367677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidFileServerBPLibrary, nullptr, "IsFileServerRunning", nullptr, nullptr, Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::AndroidFileServerBPLibrary_eventIsFileServerRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::AndroidFileServerBPLibrary_eventIsFileServerRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidFileServerBPLibrary::execIsFileServerRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EAFSActiveType::Type>*)Z_Param__Result=UAndroidFileServerBPLibrary::IsFileServerRunning();
	P_NATIVE_END;
}
// End Class UAndroidFileServerBPLibrary Function IsFileServerRunning

// Begin Class UAndroidFileServerBPLibrary Function StartFileServer
struct Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics
{
	struct AndroidFileServerBPLibrary_eventStartFileServer_Parms
	{
		bool bUSB;
		bool bNetwork;
		int32 Port;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidFileServer" },
		{ "Comment", "/** Request startup of Android FileServer */" },
		{ "CPP_Default_bNetwork", "false" },
		{ "CPP_Default_bUSB", "true" },
		{ "CPP_Default_Port", "57099" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
		{ "ToolTip", "Request startup of Android FileServer" },
	};
#endif // WITH_METADATA
	static void NewProp_bUSB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUSB;
	static void NewProp_bNetwork_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetwork;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB_SetBit(void* Obj)
{
	((AndroidFileServerBPLibrary_eventStartFileServer_Parms*)Obj)->bUSB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB = { "bUSB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStartFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork_SetBit(void* Obj)
{
	((AndroidFileServerBPLibrary_eventStartFileServer_Parms*)Obj)->bNetwork = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork = { "bNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStartFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidFileServerBPLibrary_eventStartFileServer_Parms, Port), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidFileServerBPLibrary_eventStartFileServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStartFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidFileServerBPLibrary, nullptr, "StartFileServer", nullptr, nullptr, Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::AndroidFileServerBPLibrary_eventStartFileServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::AndroidFileServerBPLibrary_eventStartFileServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidFileServerBPLibrary::execStartFileServer)
{
	P_GET_UBOOL(Z_Param_bUSB);
	P_GET_UBOOL(Z_Param_bNetwork);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidFileServerBPLibrary::StartFileServer(Z_Param_bUSB,Z_Param_bNetwork,Z_Param_Port);
	P_NATIVE_END;
}
// End Class UAndroidFileServerBPLibrary Function StartFileServer

// Begin Class UAndroidFileServerBPLibrary Function StopFileServer
struct Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics
{
	struct AndroidFileServerBPLibrary_eventStopFileServer_Parms
	{
		bool bUSB;
		bool bNetwork;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidFileServer" },
		{ "Comment", "/** Request termination of Android FileServer */" },
		{ "CPP_Default_bNetwork", "true" },
		{ "CPP_Default_bUSB", "true" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
		{ "ToolTip", "Request termination of Android FileServer" },
	};
#endif // WITH_METADATA
	static void NewProp_bUSB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUSB;
	static void NewProp_bNetwork_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetwork;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB_SetBit(void* Obj)
{
	((AndroidFileServerBPLibrary_eventStopFileServer_Parms*)Obj)->bUSB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB = { "bUSB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStopFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork_SetBit(void* Obj)
{
	((AndroidFileServerBPLibrary_eventStopFileServer_Parms*)Obj)->bNetwork = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork = { "bNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStopFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AndroidFileServerBPLibrary_eventStopFileServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStopFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidFileServerBPLibrary, nullptr, "StopFileServer", nullptr, nullptr, Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::AndroidFileServerBPLibrary_eventStopFileServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::AndroidFileServerBPLibrary_eventStopFileServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidFileServerBPLibrary::execStopFileServer)
{
	P_GET_UBOOL(Z_Param_bUSB);
	P_GET_UBOOL(Z_Param_bNetwork);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAndroidFileServerBPLibrary::StopFileServer(Z_Param_bUSB,Z_Param_bNetwork);
	P_NATIVE_END;
}
// End Class UAndroidFileServerBPLibrary Function StopFileServer

// Begin Class UAndroidFileServerBPLibrary
void UAndroidFileServerBPLibrary::StaticRegisterNativesUAndroidFileServerBPLibrary()
{
	UClass* Class = UAndroidFileServerBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsFileServerRunning", &UAndroidFileServerBPLibrary::execIsFileServerRunning },
		{ "StartFileServer", &UAndroidFileServerBPLibrary::execStartFileServer },
		{ "StopFileServer", &UAndroidFileServerBPLibrary::execStopFileServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidFileServerBPLibrary);
UClass* Z_Construct_UClass_UAndroidFileServerBPLibrary_NoRegister()
{
	return UAndroidFileServerBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidFileServerBPLibrary.h" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning, "IsFileServerRunning" }, // 2556721935
		{ &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer, "StartFileServer" }, // 4237619244
		{ &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer, "StopFileServer" }, // 3719875578
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidFileServerBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidFileServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::ClassParams = {
	&UAndroidFileServerBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidFileServerBPLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton, Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton;
}
template<> ANDROIDFILESERVER_API UClass* StaticClass<UAndroidFileServerBPLibrary>()
{
	return UAndroidFileServerBPLibrary::StaticClass();
}
UAndroidFileServerBPLibrary::UAndroidFileServerBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidFileServerBPLibrary);
UAndroidFileServerBPLibrary::~UAndroidFileServerBPLibrary() {}
// End Class UAndroidFileServerBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAFSActiveType_StaticEnum, TEXT("EAFSActiveType"), &Z_Registration_Info_UEnum_EAFSActiveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 972367677U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidFileServerBPLibrary, UAndroidFileServerBPLibrary::StaticClass, TEXT("UAndroidFileServerBPLibrary"), &Z_Registration_Info_UClass_UAndroidFileServerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidFileServerBPLibrary), 2280083835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_3068035026(TEXT("/Script/AndroidFileServer"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
