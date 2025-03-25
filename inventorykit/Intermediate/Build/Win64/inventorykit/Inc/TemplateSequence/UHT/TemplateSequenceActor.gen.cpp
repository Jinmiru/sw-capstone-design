// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/TemplateSequenceActor.h"
#include "Runtime/MovieScene/Public/MovieSceneSequencePlaybackSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_ATemplateSequenceActor();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_ATemplateSequenceActor_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence_NoRegister();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePlayer_NoRegister();
TEMPLATESEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData();
UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References

// Begin ScriptStruct FTemplateSequenceBindingOverrideData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TemplateSequenceBindingOverrideData;
class UScriptStruct* FTemplateSequenceBindingOverrideData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateSequenceBindingOverrideData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TemplateSequenceBindingOverrideData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData, (UObject*)Z_Construct_UPackage__Script_TemplateSequence(), TEXT("TemplateSequenceBindingOverrideData"));
	}
	return Z_Registration_Info_UScriptStruct_TemplateSequenceBindingOverrideData.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UScriptStruct* StaticStruct<FTemplateSequenceBindingOverrideData>()
{
	return FTemplateSequenceBindingOverrideData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Template sequence binding override data\n *\n * This is similar to FMovieSceneBindingOverrideData, but works only for a template sequence's root object,\n * so we don't need it to store the object binding ID.\n */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Template sequence binding override data\n\nThis is similar to FMovieSceneBindingOverrideData, but works only for a template sequence's root object,\nso we don't need it to store the object binding ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies the object binding to override. */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Specifies the object binding to override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesDefault_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true). */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Object;
	static void NewProp_bOverridesDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateSequenceBindingOverrideData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateSequenceBindingOverrideData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
void Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit(void* Obj)
{
	((FTemplateSequenceBindingOverrideData*)Obj)->bOverridesDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault = { "bOverridesDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTemplateSequenceBindingOverrideData), &Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesDefault_MetaData), NewProp_bOverridesDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewProp_bOverridesDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	nullptr,
	&NewStructOps,
	"TemplateSequenceBindingOverrideData",
	Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::PropPointers),
	sizeof(FTemplateSequenceBindingOverrideData),
	alignof(FTemplateSequenceBindingOverrideData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateSequenceBindingOverrideData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TemplateSequenceBindingOverrideData.InnerSingleton, Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TemplateSequenceBindingOverrideData.InnerSingleton;
}
// End ScriptStruct FTemplateSequenceBindingOverrideData

// Begin Class ATemplateSequenceActor Function GetSequence
struct Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics
{
	struct TemplateSequenceActor_eventGetSequence_Parms
	{
		UTemplateSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the template sequence being played by this actor.\n\x09 *\n\x09 * @return the template sequence, or nullptr if it is not assigned or cannot be loaded\n\x09 */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Get the template sequence being played by this actor.\n\n@return the template sequence, or nullptr if it is not assigned or cannot be loaded" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateSequenceActor_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UTemplateSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "GetSequence", nullptr, nullptr, Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::TemplateSequenceActor_eventGetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::TemplateSequenceActor_eventGetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateSequenceActor_GetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_GetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateSequenceActor::execGetSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTemplateSequence**)Z_Param__Result=P_THIS->GetSequence();
	P_NATIVE_END;
}
// End Class ATemplateSequenceActor Function GetSequence

// Begin Class ATemplateSequenceActor Function GetSequencePlayer
struct Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics
{
	struct TemplateSequenceActor_eventGetSequencePlayer_Parms
	{
		UTemplateSequencePlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Get the actor's sequence player, or nullptr if it not yet initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Get the actor's sequence player, or nullptr if it not yet initialized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateSequenceActor_eventGetSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_UTemplateSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "GetSequencePlayer", nullptr, nullptr, Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::TemplateSequenceActor_eventGetSequencePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::TemplateSequenceActor_eventGetSequencePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateSequenceActor::execGetSequencePlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTemplateSequencePlayer**)Z_Param__Result=P_THIS->GetSequencePlayer();
	P_NATIVE_END;
}
// End Class ATemplateSequenceActor Function GetSequencePlayer

// Begin Class ATemplateSequenceActor Function LoadSequence
struct Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics
{
	struct TemplateSequenceActor_eventLoadSequence_Parms
	{
		UTemplateSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the template sequence being played by this actor.\n\x09 *\n\x09 * @return the template sequence, or nullptr if it is not assigned or cannot be loaded\n\x09 */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Get the template sequence being played by this actor.\n\n@return the template sequence, or nullptr if it is not assigned or cannot be loaded" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateSequenceActor_eventLoadSequence_Parms, ReturnValue), Z_Construct_UClass_UTemplateSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "LoadSequence", nullptr, nullptr, Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::TemplateSequenceActor_eventLoadSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::TemplateSequenceActor_eventLoadSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateSequenceActor::execLoadSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTemplateSequence**)Z_Param__Result=P_THIS->LoadSequence();
	P_NATIVE_END;
}
// End Class ATemplateSequenceActor Function LoadSequence

// Begin Class ATemplateSequenceActor Function SetBinding
struct Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics
{
	struct TemplateSequenceActor_eventSetBinding_Parms
	{
		AActor* Actor;
		bool bOverridesDefault;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Set the actor to play the template sequence onto, by setting up an override for the template\n\x09 * sequence's root object binding.\n\x09 */" },
		{ "CPP_Default_bOverridesDefault", "true" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Set the actor to play the template sequence onto, by setting up an override for the template\nsequence's root object binding." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bOverridesDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateSequenceActor_eventSetBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault_SetBit(void* Obj)
{
	((TemplateSequenceActor_eventSetBinding_Parms*)Obj)->bOverridesDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault = { "bOverridesDefault", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TemplateSequenceActor_eventSetBinding_Parms), &Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::NewProp_bOverridesDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "SetBinding", nullptr, nullptr, Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::TemplateSequenceActor_eventSetBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::TemplateSequenceActor_eventSetBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateSequenceActor_SetBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_SetBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateSequenceActor::execSetBinding)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bOverridesDefault);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBinding(Z_Param_Actor,Z_Param_bOverridesDefault);
	P_NATIVE_END;
}
// End Class ATemplateSequenceActor Function SetBinding

// Begin Class ATemplateSequenceActor Function SetSequence
struct Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics
{
	struct TemplateSequenceActor_eventSetSequence_Parms
	{
		UTemplateSequence* InSequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the template sequence being played by this actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "Set the template sequence being played by this actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TemplateSequenceActor_eventSetSequence_Parms, InSequence), Z_Construct_UClass_UTemplateSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::NewProp_InSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemplateSequenceActor, nullptr, "SetSequence", nullptr, nullptr, Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::TemplateSequenceActor_eventSetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::TemplateSequenceActor_eventSetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemplateSequenceActor_SetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemplateSequenceActor_SetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemplateSequenceActor::execSetSequence)
{
	P_GET_OBJECT(UTemplateSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSequence(Z_Param_InSequence);
	P_NATIVE_END;
}
// End Class ATemplateSequenceActor Function SetSequence

// Begin Class ATemplateSequenceActor
void ATemplateSequenceActor::StaticRegisterNativesATemplateSequenceActor()
{
	UClass* Class = ATemplateSequenceActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSequence", &ATemplateSequenceActor::execGetSequence },
		{ "GetSequencePlayer", &ATemplateSequenceActor::execGetSequencePlayer },
		{ "LoadSequence", &ATemplateSequenceActor::execLoadSequence },
		{ "SetBinding", &ATemplateSequenceActor::execSetBinding },
		{ "SetSequence", &ATemplateSequenceActor::execSetSequence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemplateSequenceActor);
UClass* Z_Construct_UClass_ATemplateSequenceActor_NoRegister()
{
	return ATemplateSequenceActor::StaticClass();
}
struct Z_Construct_UClass_ATemplateSequenceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor responsible for controlling a specific template sequence in the world.\n */" },
		{ "HideCategories", "Rendering Physics LOD Activation Input" },
		{ "IncludePath", "TemplateSequenceActor.h" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor responsible for controlling a specific template sequence in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "BlueprintGetter", "GetSequencePlayer" },
		{ "Category", "Playback" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sequencer|Player" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateSequence_MetaData[] = {
		{ "AllowedClasses", "/Script/TemplateSequence.TemplateSequence" },
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingOverride_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The override for the template sequence's root object binding. See SetBinding. */" },
		{ "ModuleRelativePath", "Public/TemplateSequenceActor.h" },
		{ "ToolTip", "The override for the template sequence's root object binding. See SetBinding." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateSequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATemplateSequenceActor_GetSequence, "GetSequence" }, // 2558366498
		{ &Z_Construct_UFunction_ATemplateSequenceActor_GetSequencePlayer, "GetSequencePlayer" }, // 556057105
		{ &Z_Construct_UFunction_ATemplateSequenceActor_LoadSequence, "LoadSequence" }, // 2265578649
		{ &Z_Construct_UFunction_ATemplateSequenceActor_SetBinding, "SetBinding" }, // 3613712968
		{ &Z_Construct_UFunction_ATemplateSequenceActor_SetSequence, "SetSequence" }, // 4212869492
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemplateSequenceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateSequenceActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSettings_MetaData), NewProp_PlaybackSettings_MetaData) }; // 1561414897
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x011600000008203c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateSequenceActor, SequencePlayer), Z_Construct_UClass_UTemplateSequencePlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_TemplateSequence = { "TemplateSequence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateSequenceActor, TemplateSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateSequence_MetaData), NewProp_TemplateSequence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_BindingOverride = { "BindingOverride", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemplateSequenceActor, BindingOverride), Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingOverride_MetaData), NewProp_BindingOverride_MetaData) }; // 3471121693
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemplateSequenceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_PlaybackSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_TemplateSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemplateSequenceActor_Statics::NewProp_BindingOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATemplateSequenceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATemplateSequenceActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, (int32)VTABLE_OFFSET(ATemplateSequenceActor, IMovieScenePlaybackClient), false },  // 401751226
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemplateSequenceActor_Statics::ClassParams = {
	&ATemplateSequenceActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATemplateSequenceActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemplateSequenceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemplateSequenceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATemplateSequenceActor()
{
	if (!Z_Registration_Info_UClass_ATemplateSequenceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemplateSequenceActor.OuterSingleton, Z_Construct_UClass_ATemplateSequenceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATemplateSequenceActor.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<ATemplateSequenceActor>()
{
	return ATemplateSequenceActor::StaticClass();
}
void ATemplateSequenceActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SequencePlayer(TEXT("SequencePlayer"));
	const bool bIsValid = true
		&& Name_SequencePlayer == ClassReps[(int32)ENetFields_Private::SequencePlayer].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATemplateSequenceActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATemplateSequenceActor);
ATemplateSequenceActor::~ATemplateSequenceActor() {}
// End Class ATemplateSequenceActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTemplateSequenceBindingOverrideData::StaticStruct, Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics::NewStructOps, TEXT("TemplateSequenceBindingOverrideData"), &Z_Registration_Info_UScriptStruct_TemplateSequenceBindingOverrideData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateSequenceBindingOverrideData), 3471121693U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATemplateSequenceActor, ATemplateSequenceActor::StaticClass, TEXT("ATemplateSequenceActor"), &Z_Registration_Info_UClass_ATemplateSequenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemplateSequenceActor), 524133509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_3536717275(TEXT("/Script/TemplateSequence"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
