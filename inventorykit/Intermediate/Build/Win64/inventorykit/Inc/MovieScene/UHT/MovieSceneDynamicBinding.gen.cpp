// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneDynamicBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDynamicBinding() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVIESCENE_API UClass* Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary();
MOVIESCENE_API UClass* Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBinding();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneDynamicBindingPayloadVariable
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingPayloadVariable;
class UScriptStruct* FMovieSceneDynamicBindingPayloadVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingPayloadVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingPayloadVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDynamicBindingPayloadVariable"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingPayloadVariable.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDynamicBindingPayloadVariable>()
{
	return FMovieSceneDynamicBindingPayloadVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Value definition for any type-agnostic variable (exported as text) */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Value definition for any type-agnostic variable (exported as text)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Sequencer|Dynamic Binding" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDynamicBindingPayloadVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::NewProp_ObjectValue = { "ObjectValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBindingPayloadVariable, ObjectValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectValue_MetaData), NewProp_ObjectValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBindingPayloadVariable, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::NewProp_ObjectValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneDynamicBindingPayloadVariable",
	Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::PropPointers),
	sizeof(FMovieSceneDynamicBindingPayloadVariable),
	alignof(FMovieSceneDynamicBindingPayloadVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingPayloadVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingPayloadVariable.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingPayloadVariable.InnerSingleton;
}
// End ScriptStruct FMovieSceneDynamicBindingPayloadVariable

// Begin ScriptStruct FMovieSceneDynamicBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDynamicBinding;
class UScriptStruct* FMovieSceneDynamicBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDynamicBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDynamicBinding, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDynamicBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBinding.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDynamicBinding>()
{
	return FMovieSceneDynamicBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data for a dynamic binding endpoint call.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Data for a dynamic binding endpoint call." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
		{ "Comment", "/** The function to call (normally a generated blueprint function on the sequence director) */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "The function to call (normally a generated blueprint function on the sequence director)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolveParamsProperty_MetaData[] = {
		{ "Comment", "/** Property pointer for the function parameter that should receive the resolve params */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Property pointer for the function parameter that should receive the resolve params" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadVariables_MetaData[] = {
		{ "Category", "Sequencer|Dynamic Binding" },
		{ "Comment", "/** Array of payload variables to be added to the generated function */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Array of payload variables to be added to the generated function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledFunctionName_MetaData[] = {
		{ "Comment", "/** Name of the generated blueprint function */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Name of the generated blueprint function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolveParamsPinName_MetaData[] = {
		{ "Category", "Sequencer|Dynamic Binding" },
		{ "Comment", "/** Pin name for passing the resolve params */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Pin name for passing the resolve params" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakEndpoint_MetaData[] = {
		{ "Category", "Sequencer|Dynamic Binding" },
		{ "Comment", "/** Endpoint node in the sequence director */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Endpoint node in the sequence director" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Function;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_ResolveParamsProperty;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PayloadVariables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PayloadVariables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PayloadVariables;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompiledFunctionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResolveParamsPinName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakEndpoint;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDynamicBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBinding, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Function_MetaData), NewProp_Function_MetaData) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_ResolveParamsProperty = { "ResolveParamsProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBinding, ResolveParamsProperty), &FProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolveParamsProperty_MetaData), NewProp_ResolveParamsProperty_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_PayloadVariables_ValueProp = { "PayloadVariables", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable, METADATA_PARAMS(0, nullptr) }; // 3461220649
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_PayloadVariables_Key_KeyProp = { "PayloadVariables_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_PayloadVariables = { "PayloadVariables", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBinding, PayloadVariables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadVariables_MetaData), NewProp_PayloadVariables_MetaData) }; // 3461220649
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_CompiledFunctionName = { "CompiledFunctionName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBinding, CompiledFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledFunctionName_MetaData), NewProp_CompiledFunctionName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_ResolveParamsPinName = { "ResolveParamsPinName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBinding, ResolveParamsPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolveParamsPinName_MetaData), NewProp_ResolveParamsPinName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_WeakEndpoint = { "WeakEndpoint", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBinding, WeakEndpoint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakEndpoint_MetaData), NewProp_WeakEndpoint_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_Function,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_ResolveParamsProperty,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_PayloadVariables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_PayloadVariables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_PayloadVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_CompiledFunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_ResolveParamsPinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewProp_WeakEndpoint,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneDynamicBinding",
	Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::PropPointers),
	sizeof(FMovieSceneDynamicBinding),
	alignof(FMovieSceneDynamicBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBinding()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDynamicBinding.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBinding.InnerSingleton;
}
// End ScriptStruct FMovieSceneDynamicBinding

// Begin ScriptStruct FMovieSceneDynamicBindingResolveParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveParams;
class UScriptStruct* FMovieSceneDynamicBindingResolveParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDynamicBindingResolveParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveParams.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDynamicBindingResolveParams>()
{
	return FMovieSceneDynamicBindingResolveParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Optional parameter struct for dynamic binding resolver functions.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Optional parameter struct for dynamic binding resolver functions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The sequence that contains the object binding being resolved */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "The sequence that contains the object binding being resolved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The ID of the object binding being resolved */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "The ID of the object binding being resolved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSequence_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The root sequence */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "The root sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDynamicBindingResolveParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBindingResolveParams, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBindingResolveParams, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindingID_MetaData), NewProp_ObjectBindingID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::NewProp_RootSequence = { "RootSequence", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBindingResolveParams, RootSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSequence_MetaData), NewProp_RootSequence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::NewProp_ObjectBindingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::NewProp_RootSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneDynamicBindingResolveParams",
	Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::PropPointers),
	sizeof(FMovieSceneDynamicBindingResolveParams),
	alignof(FMovieSceneDynamicBindingResolveParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneDynamicBindingResolveParams

// Begin ScriptStruct FMovieSceneDynamicBindingResolveResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveResult;
class UScriptStruct* FMovieSceneDynamicBindingResolveResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDynamicBindingResolveResult"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveResult.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDynamicBindingResolveResult>()
{
	return FMovieSceneDynamicBindingResolveResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The resolved object */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "The resolved object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPossessedObject_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * Whether the resolved object is external to the sequence\n\x09 *\n\x09 * This property is ignored for possessables, who are always treated as external.\n\x09 * When resolving a spawnable, setting this to true will not destroy the object\n\x09 * when the spawnable track ends, or the sequence finishes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Whether the resolved object is external to the sequence\n\nThis property is ignored for possessables, who are always treated as external.\nWhen resolving a spawnable, setting this to true will not destroy the object\nwhen the spawnable track ends, or the sequence finishes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_bIsPossessedObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPossessedObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDynamicBindingResolveResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBindingResolveResult, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::NewProp_bIsPossessedObject_SetBit(void* Obj)
{
	((FMovieSceneDynamicBindingResolveResult*)Obj)->bIsPossessedObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::NewProp_bIsPossessedObject = { "bIsPossessedObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneDynamicBindingResolveResult), &Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::NewProp_bIsPossessedObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPossessedObject_MetaData), NewProp_bIsPossessedObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::NewProp_bIsPossessedObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneDynamicBindingResolveResult",
	Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::PropPointers),
	sizeof(FMovieSceneDynamicBindingResolveResult),
	alignof(FMovieSceneDynamicBindingResolveResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveResult.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveResult.InnerSingleton;
}
// End ScriptStruct FMovieSceneDynamicBindingResolveResult

// Begin ScriptStruct FMovieSceneDynamicBindingContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingContainer;
class UScriptStruct* FMovieSceneDynamicBindingContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneDynamicBindingContainer"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingContainer.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneDynamicBindingContainer>()
{
	return FMovieSceneDynamicBindingContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Dummy structure for showing an FMovieSceneDynamicBinding inside a details view,\n * and having a function signature that we can get a valid UFunction from to prepare\n * blueprint function graphs.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Dummy structure for showing an FMovieSceneDynamicBinding inside a details view,\nand having a function signature that we can get a valid UFunction from to prepare\nblueprint function graphs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBinding_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDynamicBindingContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::NewProp_DynamicBinding = { "DynamicBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDynamicBindingContainer, DynamicBinding), Z_Construct_UScriptStruct_FMovieSceneDynamicBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBinding_MetaData), NewProp_DynamicBinding_MetaData) }; // 1420086444
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::NewProp_DynamicBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneDynamicBindingContainer",
	Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::PropPointers),
	sizeof(FMovieSceneDynamicBindingContainer),
	alignof(FMovieSceneDynamicBindingContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingContainer.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingContainer.InnerSingleton;
}
// End ScriptStruct FMovieSceneDynamicBindingContainer

// Begin Class UBuiltInDynamicBindingResolverLibrary Function ResolveToPlayerPawn
struct Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics
{
	struct BuiltInDynamicBindingResolverLibrary_eventResolveToPlayerPawn_Parms
	{
		UObject* WorldContextObject;
		int32 PlayerControllerIndex;
		FMovieSceneDynamicBindingResolveResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Dynamic Binding" },
		{ "Comment", "/** Resolve the bound object to the player's pawn */" },
		{ "CPP_Default_PlayerControllerIndex", "0" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "ToolTip", "Resolve the bound object to the player's pawn" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerControllerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuiltInDynamicBindingResolverLibrary_eventResolveToPlayerPawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::NewProp_PlayerControllerIndex = { "PlayerControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuiltInDynamicBindingResolverLibrary_eventResolveToPlayerPawn_Parms, PlayerControllerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuiltInDynamicBindingResolverLibrary_eventResolveToPlayerPawn_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult, METADATA_PARAMS(0, nullptr) }; // 2705016437
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::NewProp_PlayerControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary, nullptr, "ResolveToPlayerPawn", nullptr, nullptr, Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::BuiltInDynamicBindingResolverLibrary_eventResolveToPlayerPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::BuiltInDynamicBindingResolverLibrary_eventResolveToPlayerPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuiltInDynamicBindingResolverLibrary::execResolveToPlayerPawn)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerControllerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneDynamicBindingResolveResult*)Z_Param__Result=UBuiltInDynamicBindingResolverLibrary::ResolveToPlayerPawn(Z_Param_WorldContextObject,Z_Param_PlayerControllerIndex);
	P_NATIVE_END;
}
// End Class UBuiltInDynamicBindingResolverLibrary Function ResolveToPlayerPawn

// Begin Class UBuiltInDynamicBindingResolverLibrary
void UBuiltInDynamicBindingResolverLibrary::StaticRegisterNativesUBuiltInDynamicBindingResolverLibrary()
{
	UClass* Class = UBuiltInDynamicBindingResolverLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResolveToPlayerPawn", &UBuiltInDynamicBindingResolverLibrary::execResolveToPlayerPawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuiltInDynamicBindingResolverLibrary);
UClass* Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_NoRegister()
{
	return UBuiltInDynamicBindingResolverLibrary::StaticClass();
}
struct Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default dynamic binding resolver library, with several basic resolver functions.\n */" },
		{ "IncludePath", "MovieSceneDynamicBinding.h" },
		{ "ModuleRelativePath", "Public/MovieSceneDynamicBinding.h" },
		{ "SequencerBindingResolverLibrary", "" },
		{ "ToolTip", "Default dynamic binding resolver library, with several basic resolver functions." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuiltInDynamicBindingResolverLibrary_ResolveToPlayerPawn, "ResolveToPlayerPawn" }, // 2347470537
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuiltInDynamicBindingResolverLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics::ClassParams = {
	&UBuiltInDynamicBindingResolverLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary()
{
	if (!Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.OuterSingleton, Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UBuiltInDynamicBindingResolverLibrary>()
{
	return UBuiltInDynamicBindingResolverLibrary::StaticClass();
}
UBuiltInDynamicBindingResolverLibrary::UBuiltInDynamicBindingResolverLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuiltInDynamicBindingResolverLibrary);
UBuiltInDynamicBindingResolverLibrary::~UBuiltInDynamicBindingResolverLibrary() {}
// End Class UBuiltInDynamicBindingResolverLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneDynamicBindingPayloadVariable::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics::NewStructOps, TEXT("MovieSceneDynamicBindingPayloadVariable"), &Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingPayloadVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDynamicBindingPayloadVariable), 3461220649U) },
		{ FMovieSceneDynamicBinding::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics::NewStructOps, TEXT("MovieSceneDynamicBinding"), &Z_Registration_Info_UScriptStruct_MovieSceneDynamicBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDynamicBinding), 1420086444U) },
		{ FMovieSceneDynamicBindingResolveParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics::NewStructOps, TEXT("MovieSceneDynamicBindingResolveParams"), &Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDynamicBindingResolveParams), 2571736088U) },
		{ FMovieSceneDynamicBindingResolveResult::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics::NewStructOps, TEXT("MovieSceneDynamicBindingResolveResult"), &Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingResolveResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDynamicBindingResolveResult), 2705016437U) },
		{ FMovieSceneDynamicBindingContainer::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics::NewStructOps, TEXT("MovieSceneDynamicBindingContainer"), &Z_Registration_Info_UScriptStruct_MovieSceneDynamicBindingContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDynamicBindingContainer), 1766437775U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary, UBuiltInDynamicBindingResolverLibrary::StaticClass, TEXT("UBuiltInDynamicBindingResolverLibrary"), &Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuiltInDynamicBindingResolverLibrary), 2935252217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_3031596706(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
