// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/AchievementBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementBlueprintLibrary();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementBlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class UAchievementBlueprintLibrary Function GetCachedAchievementDescription
struct Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics
{
	struct AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FName AchievementID;
		bool bFoundID;
		FText Title;
		FText LockedDescription;
		FText UnlockedDescription;
		bool bHidden;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Classes/AchievementBlueprintLibrary.h" },
		{ "ToolTip", "out" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AchievementID;
	static void NewProp_bFoundID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LockedDescription;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UnlockedDescription;
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_AchievementID = { "AchievementID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms, AchievementID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_bFoundID_SetBit(void* Obj)
{
	((AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms*)Obj)->bFoundID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_bFoundID = { "bFoundID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms), &Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_bFoundID_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_LockedDescription = { "LockedDescription", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms, LockedDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_UnlockedDescription = { "UnlockedDescription", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms, UnlockedDescription), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms), &Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_AchievementID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_bFoundID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_LockedDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_UnlockedDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::NewProp_bHidden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementBlueprintLibrary, nullptr, "GetCachedAchievementDescription", nullptr, nullptr, Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::AchievementBlueprintLibrary_eventGetCachedAchievementDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementBlueprintLibrary::execGetCachedAchievementDescription)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FNameProperty,Z_Param_AchievementID);
	P_GET_UBOOL_REF(Z_Param_Out_bFoundID);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_LockedDescription);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_UnlockedDescription);
	P_GET_UBOOL_REF(Z_Param_Out_bHidden);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAchievementBlueprintLibrary::GetCachedAchievementDescription(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_AchievementID,Z_Param_Out_bFoundID,Z_Param_Out_Title,Z_Param_Out_LockedDescription,Z_Param_Out_UnlockedDescription,Z_Param_Out_bHidden);
	P_NATIVE_END;
}
// End Class UAchievementBlueprintLibrary Function GetCachedAchievementDescription

// Begin Class UAchievementBlueprintLibrary Function GetCachedAchievementProgress
struct Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics
{
	struct AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		FName AchievementID;
		bool bFoundID;
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|Achievements" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Classes/AchievementBlueprintLibrary.h" },
		{ "ToolTip", "out" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AchievementID;
	static void NewProp_bFoundID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_AchievementID = { "AchievementID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms, AchievementID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_bFoundID_SetBit(void* Obj)
{
	((AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms*)Obj)->bFoundID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_bFoundID = { "bFoundID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms), &Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_bFoundID_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_AchievementID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_bFoundID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementBlueprintLibrary, nullptr, "GetCachedAchievementProgress", nullptr, nullptr, Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::AchievementBlueprintLibrary_eventGetCachedAchievementProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAchievementBlueprintLibrary::execGetCachedAchievementProgress)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FNameProperty,Z_Param_AchievementID);
	P_GET_UBOOL_REF(Z_Param_Out_bFoundID);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAchievementBlueprintLibrary::GetCachedAchievementProgress(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_AchievementID,Z_Param_Out_bFoundID,Z_Param_Out_Progress);
	P_NATIVE_END;
}
// End Class UAchievementBlueprintLibrary Function GetCachedAchievementProgress

// Begin Class UAchievementBlueprintLibrary
void UAchievementBlueprintLibrary::StaticRegisterNativesUAchievementBlueprintLibrary()
{
	UClass* Class = UAchievementBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCachedAchievementDescription", &UAchievementBlueprintLibrary::execGetCachedAchievementDescription },
		{ "GetCachedAchievementProgress", &UAchievementBlueprintLibrary::execGetCachedAchievementProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAchievementBlueprintLibrary);
UClass* Z_Construct_UClass_UAchievementBlueprintLibrary_NoRegister()
{
	return UAchievementBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UAchievementBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Library of synchronous achievement calls\n" },
		{ "IncludePath", "AchievementBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/AchievementBlueprintLibrary.h" },
		{ "ScriptName", "AchievementLibrary" },
		{ "ToolTip", "Library of synchronous achievement calls" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementDescription, "GetCachedAchievementDescription" }, // 1911311431
		{ &Z_Construct_UFunction_UAchievementBlueprintLibrary_GetCachedAchievementProgress, "GetCachedAchievementProgress" }, // 1117398490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAchievementBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAchievementBlueprintLibrary_Statics::ClassParams = {
	&UAchievementBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAchievementBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAchievementBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UAchievementBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAchievementBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAchievementBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAchievementBlueprintLibrary.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UAchievementBlueprintLibrary>()
{
	return UAchievementBlueprintLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementBlueprintLibrary);
UAchievementBlueprintLibrary::~UAchievementBlueprintLibrary() {}
// End Class UAchievementBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAchievementBlueprintLibrary, UAchievementBlueprintLibrary::StaticClass, TEXT("UAchievementBlueprintLibrary"), &Z_Registration_Info_UClass_UAchievementBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAchievementBlueprintLibrary), 2169732851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_1016727998(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
