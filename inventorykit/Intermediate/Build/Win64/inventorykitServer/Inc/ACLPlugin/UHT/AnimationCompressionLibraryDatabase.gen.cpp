// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimationCompressionLibraryDatabase.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationCompressionLibraryDatabase() {}

// Begin Cross Module References
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase();
ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References

// Begin Enum ACLVisualFidelity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLVisualFidelity;
static UEnum* ACLVisualFidelity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ACLVisualFidelity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ACLVisualFidelity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLVisualFidelity"));
	}
	return Z_Registration_Info_UEnum_ACLVisualFidelity.OuterSingleton;
}
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVisualFidelity>()
{
	return ACLVisualFidelity_StaticEnum();
}
struct Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** An enum to represent the ACL visual fidelity level. */" },
		{ "Highest.DisplayName", "Highest" },
		{ "Highest.Name", "ACLVisualFidelity::Highest" },
		{ "Lowest.DisplayName", "Lowest" },
		{ "Lowest.Name", "ACLVisualFidelity::Lowest" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "ACLVisualFidelity::Medium" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "An enum to represent the ACL visual fidelity level." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ACLVisualFidelity::Highest", (int64)ACLVisualFidelity::Highest },
		{ "ACLVisualFidelity::Medium", (int64)ACLVisualFidelity::Medium },
		{ "ACLVisualFidelity::Lowest", (int64)ACLVisualFidelity::Lowest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
	nullptr,
	"ACLVisualFidelity",
	"ACLVisualFidelity",
	Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity()
{
	if (!Z_Registration_Info_UEnum_ACLVisualFidelity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLVisualFidelity.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ACLVisualFidelity.InnerSingleton;
}
// End Enum ACLVisualFidelity

// Begin Enum ACLVisualFidelityChangeResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLVisualFidelityChangeResult;
static UEnum* ACLVisualFidelityChangeResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ACLVisualFidelityChangeResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ACLVisualFidelityChangeResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLVisualFidelityChangeResult"));
	}
	return Z_Registration_Info_UEnum_ACLVisualFidelityChangeResult.OuterSingleton;
}
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVisualFidelityChangeResult>()
{
	return ACLVisualFidelityChangeResult_StaticEnum();
}
struct Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An enum to represent the result of latent visual fidelity change requests. */" },
		{ "Completed.Name", "ACLVisualFidelityChangeResult::Completed" },
		{ "Dispatched.Name", "ACLVisualFidelityChangeResult::Dispatched" },
		{ "Failed.Name", "ACLVisualFidelityChangeResult::Failed" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "An enum to represent the result of latent visual fidelity change requests." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ACLVisualFidelityChangeResult::Dispatched", (int64)ACLVisualFidelityChangeResult::Dispatched },
		{ "ACLVisualFidelityChangeResult::Completed", (int64)ACLVisualFidelityChangeResult::Completed },
		{ "ACLVisualFidelityChangeResult::Failed", (int64)ACLVisualFidelityChangeResult::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
	nullptr,
	"ACLVisualFidelityChangeResult",
	"ACLVisualFidelityChangeResult",
	Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult()
{
	if (!Z_Registration_Info_UEnum_ACLVisualFidelityChangeResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLVisualFidelityChangeResult.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ACLVisualFidelityChangeResult.InnerSingleton;
}
// End Enum ACLVisualFidelityChangeResult

// Begin Class UAnimationCompressionLibraryDatabase Function GetVisualFidelity
struct Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics
{
	struct AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms
	{
		UAnimationCompressionLibraryDatabase* DatabaseAsset;
		ACLVisualFidelity ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|ACL" },
		{ "DisplayName", "Get Database Visual Fidelity" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DatabaseAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_DatabaseAsset = { "DatabaseAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms, DatabaseAsset), Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms, ReturnValue), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity, METADATA_PARAMS(0, nullptr) }; // 581260995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_DatabaseAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCompressionLibraryDatabase, nullptr, "GetVisualFidelity", nullptr, nullptr, Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationCompressionLibraryDatabase::execGetVisualFidelity)
{
	P_GET_OBJECT(UAnimationCompressionLibraryDatabase,Z_Param_DatabaseAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACLVisualFidelity*)Z_Param__Result=UAnimationCompressionLibraryDatabase::GetVisualFidelity(Z_Param_DatabaseAsset);
	P_NATIVE_END;
}
// End Class UAnimationCompressionLibraryDatabase Function GetVisualFidelity

// Begin Class UAnimationCompressionLibraryDatabase Function SetVisualFidelity
struct Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics
{
	struct AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		UAnimationCompressionLibraryDatabase* DatabaseAsset;
		ACLVisualFidelityChangeResult Result;
		ACLVisualFidelity VisualFidelity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|ACL" },
		{ "Comment", "/** Initiate a latent database change in quality by streaming in/out as necessary. */" },
		{ "CPP_Default_VisualFidelity", "Highest" },
		{ "DisplayName", "Set Database Visual Fidelity" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "Initiate a latent database change in quality by streaming in/out as necessary." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DatabaseAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisualFidelity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VisualFidelity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_DatabaseAsset = { "DatabaseAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, DatabaseAsset), Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, Result), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult, METADATA_PARAMS(0, nullptr) }; // 4055469065
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_VisualFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_VisualFidelity = { "VisualFidelity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, VisualFidelity), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity, METADATA_PARAMS(0, nullptr) }; // 581260995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_DatabaseAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_VisualFidelity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_VisualFidelity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCompressionLibraryDatabase, nullptr, "SetVisualFidelity", nullptr, nullptr, Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationCompressionLibraryDatabase::execSetVisualFidelity)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(UAnimationCompressionLibraryDatabase,Z_Param_DatabaseAsset);
	P_GET_ENUM_REF(ACLVisualFidelityChangeResult,Z_Param_Out_Result);
	P_GET_ENUM(ACLVisualFidelity,Z_Param_VisualFidelity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnimationCompressionLibraryDatabase::SetVisualFidelity(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_DatabaseAsset,(ACLVisualFidelityChangeResult&)(Z_Param_Out_Result),ACLVisualFidelity(Z_Param_VisualFidelity));
	P_NATIVE_END;
}
// End Class UAnimationCompressionLibraryDatabase Function SetVisualFidelity

// Begin Class UAnimationCompressionLibraryDatabase
void UAnimationCompressionLibraryDatabase::StaticRegisterNativesUAnimationCompressionLibraryDatabase()
{
	UClass* Class = UAnimationCompressionLibraryDatabase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetVisualFidelity", &UAnimationCompressionLibraryDatabase::execGetVisualFidelity },
		{ "SetVisualFidelity", &UAnimationCompressionLibraryDatabase::execSetVisualFidelity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationCompressionLibraryDatabase);
UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister()
{
	return UAnimationCompressionLibraryDatabase::StaticClass();
}
struct Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** An ACL database object references several UAnimSequence instances that it contains. */" },
		{ "DisplayName", "ACL Database" },
		{ "IncludePath", "AnimationCompressionLibraryDatabase.h" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "An ACL database object references several UAnimSequence instances that it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedCompressedBytes_MetaData[] = {
		{ "Comment", "/** The raw binary data for our compressed database and anim sequences. Present only in cooked builds. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "The raw binary data for our compressed database and anim sequences. Present only in cooked builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedAnimSequenceMappings_MetaData[] = {
		{ "Comment", "/** Stores a mapping for each anim sequence, where its compressed data lives in our compressed buffer. Each 64 bit value is split into 32 bits: (Hash << 32) | Offset. Present only in cooked builds. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "Stores a mapping for each anim sequence, where its compressed data lives in our compressed buffer. Each 64 bit value is split into 32 bits: (Hash << 32) | Offset. Present only in cooked builds." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighestImportanceProportion_MetaData[] = {
		{ "Category", "Database" },
		{ "Comment", "/** What percentage of the key frames should remain in the anim sequences. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "What percentage of the key frames should remain in the anim sequences." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumImportanceProportion_MetaData[] = {
		{ "Category", "Database" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What percentage of the key frames should be moved to the database. Medium importance key frames are moved second. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "What percentage of the key frames should be moved to the database. Medium importance key frames are moved second." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowestImportanceProportion_MetaData[] = {
		{ "Category", "Database" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What percentage of the key frames should be moved to the database. Least important key frames are moved first. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "What percentage of the key frames should be moved to the database. Least important key frames are moved first." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StripLowestImportanceTier_MetaData[] = {
		{ "Category", "Database" },
		{ "Comment", "/** Whether or not to strip the lowest importance tier entirely from disk. Stripping the lowest tier means that the visual fidelity of Highest and Medium are equivalent. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "Whether or not to strip the lowest importance tier entirely from disk. Stripping the lowest tier means that the visual fidelity of Highest and Medium are equivalent." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStreamRequestSizeKB_MetaData[] = {
		{ "Category", "Database" },
		{ "ClampMax", "1048576" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The maximum size in KiloBytes of streaming requests. Setting this to 0 will force tiers to load in a single request regardless of their size. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "The maximum size in KiloBytes of streaming requests. Setting this to 0 will force tiers to load in a single request regardless of their size." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewVisualFidelity_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** The level of quality to preview with the database when decompressing in the editor. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "The level of quality to preview with the database when decompressing in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequences_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "/** The anim sequences contained within the database. Built manually from the asset UI, content browser, or with a commandlet. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "The anim sequences contained within the database. Built manually from the asset UI, content browser, or with a commandlet." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CookedCompressedBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CookedCompressedBytes;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_CookedAnimSequenceMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CookedAnimSequenceMappings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighestImportanceProportion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumImportanceProportion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowestImportanceProportion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StripLowestImportanceTier;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxStreamRequestSizeKB;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewVisualFidelity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewVisualFidelity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSequences;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity, "GetVisualFidelity" }, // 3065788615
		{ &Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity, "SetVisualFidelity" }, // 1919619797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationCompressionLibraryDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes_Inner = { "CookedCompressedBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes = { "CookedCompressedBytes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, CookedCompressedBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedCompressedBytes_MetaData), NewProp_CookedCompressedBytes_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings_Inner = { "CookedAnimSequenceMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings = { "CookedAnimSequenceMappings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, CookedAnimSequenceMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedAnimSequenceMappings_MetaData), NewProp_CookedAnimSequenceMappings_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_HighestImportanceProportion = { "HighestImportanceProportion", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, HighestImportanceProportion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighestImportanceProportion_MetaData), NewProp_HighestImportanceProportion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MediumImportanceProportion = { "MediumImportanceProportion", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, MediumImportanceProportion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumImportanceProportion_MetaData), NewProp_MediumImportanceProportion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_LowestImportanceProportion = { "LowestImportanceProportion", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, LowestImportanceProportion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowestImportanceProportion_MetaData), NewProp_LowestImportanceProportion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_StripLowestImportanceTier = { "StripLowestImportanceTier", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, StripLowestImportanceTier), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StripLowestImportanceTier_MetaData), NewProp_StripLowestImportanceTier_MetaData) }; // 846681800
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MaxStreamRequestSizeKB = { "MaxStreamRequestSizeKB", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, MaxStreamRequestSizeKB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStreamRequestSizeKB_MetaData), NewProp_MaxStreamRequestSizeKB_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity = { "PreviewVisualFidelity", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, PreviewVisualFidelity), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewVisualFidelity_MetaData), NewProp_PreviewVisualFidelity_MetaData) }; // 581260995
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences_Inner = { "AnimSequences", nullptr, (EPropertyFlags)0x0104000800020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences = { "AnimSequences", nullptr, (EPropertyFlags)0x0144000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, AnimSequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequences_MetaData), NewProp_AnimSequences_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_HighestImportanceProportion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MediumImportanceProportion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_LowestImportanceProportion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_StripLowestImportanceTier,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MaxStreamRequestSizeKB,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::ClassParams = {
	&UAnimationCompressionLibraryDatabase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase()
{
	if (!Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.OuterSingleton, Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase.OuterSingleton;
}
template<> ACLPLUGIN_API UClass* StaticClass<UAnimationCompressionLibraryDatabase>()
{
	return UAnimationCompressionLibraryDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationCompressionLibraryDatabase);
UAnimationCompressionLibraryDatabase::~UAnimationCompressionLibraryDatabase() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationCompressionLibraryDatabase)
// End Class UAnimationCompressionLibraryDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ACLVisualFidelity_StaticEnum, TEXT("ACLVisualFidelity"), &Z_Registration_Info_UEnum_ACLVisualFidelity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 581260995U) },
		{ ACLVisualFidelityChangeResult_StaticEnum, TEXT("ACLVisualFidelityChangeResult"), &Z_Registration_Info_UEnum_ACLVisualFidelityChangeResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4055469065U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationCompressionLibraryDatabase, UAnimationCompressionLibraryDatabase::StaticClass, TEXT("UAnimationCompressionLibraryDatabase"), &Z_Registration_Info_UClass_UAnimationCompressionLibraryDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationCompressionLibraryDatabase), 188902070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_2156247507(TEXT("/Script/ACLPlugin"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
