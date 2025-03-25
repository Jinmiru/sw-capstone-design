// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackParameters() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FForceFeedbackParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForceFeedbackParameters;
class UScriptStruct* FForceFeedbackParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackParameters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackParameters>()
{
	return FForceFeedbackParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ClientPlayForceFeedback() client RPC function */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
		{ "ToolTip", "This structure is used to pass arguments to ClientPlayForceFeedback() client RPC function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayWhilePaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
	static void NewProp_bPlayWhilePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayWhilePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FForceFeedbackParameters, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FForceFeedbackParameters*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
{
	((FForceFeedbackParameters*)Obj)->bIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData), NewProp_bIgnoreTimeDilation_MetaData) };
void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_SetBit(void* Obj)
{
	((FForceFeedbackParameters*)Obj)->bPlayWhilePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused = { "bPlayWhilePaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayWhilePaused_MetaData), NewProp_bPlayWhilePaused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ForceFeedbackParameters",
	Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers),
	sizeof(FForceFeedbackParameters),
	alignof(FForceFeedbackParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton, Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton;
}
// End ScriptStruct FForceFeedbackParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FForceFeedbackParameters::StaticStruct, Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewStructOps, TEXT("ForceFeedbackParameters"), &Z_Registration_Info_UScriptStruct_ForceFeedbackParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForceFeedbackParameters), 2186828434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_1202438118(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackParameters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
