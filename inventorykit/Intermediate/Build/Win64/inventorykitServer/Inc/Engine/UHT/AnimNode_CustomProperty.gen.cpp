// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_CustomProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CustomProperty() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_CustomProperty
static_assert(std::is_polymorphic<FAnimNode_CustomProperty>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_CustomProperty cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CustomProperty;
class UScriptStruct* FAnimNode_CustomProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CustomProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CustomProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CustomProperty, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_CustomProperty"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CustomProperty.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_CustomProperty>()
{
	return FAnimNode_CustomProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Custom property node that you'd like to expand pin by reflecting internal instance (we call TargetInstance here)\n * \n *  Used by sub anim instance or control rig node \n *\x09where you have internal instance and would like to reflect to AnimNode as a pin\n * \n *  To make pin working, you need storage inside of AnimInstance (SourceProperties/SourcePropertyNames)\n *  So this creates storage inside of AnimInstance with the unique custom property name\n *\x09""and it copies to the actually TargetInstance here to allow the information be transferred in runtime (DestProperties/DestPropertyNames)\n * \n *  TargetInstance - UObject derived instance that has certain dest properties\n *  Source - AnimInstance's copy properties that is used to store the data \n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "Custom property node that you'd like to expand pin by reflecting internal instance (we call TargetInstance here)\n\n Used by sub anim instance or control rig node\n    where you have internal instance and would like to reflect to AnimNode as a pin\n\n To make pin working, you need storage inside of AnimInstance (SourceProperties/SourcePropertyNames)\n So this creates storage inside of AnimInstance with the unique custom property name\n    and it copies to the actually TargetInstance here to allow the information be transferred in runtime (DestProperties/DestPropertyNames)\n\n TargetInstance - UObject derived instance that has certain dest properties\n Source - AnimInstance's copy properties that is used to store the data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyNames_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** List of source properties to use, 1-1 with Dest names below, built by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "List of source properties to use, 1-1 with Dest names below, built by the compiler" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestPropertyNames_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** List of destination properties to use, 1-1 with Source names above, built by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "List of destination properties to use, 1-1 with Source names above, built by the compiler" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInstance_MetaData[] = {
		{ "Comment", "/** This is the actual instance allocated at runtime that will run. Set by child class. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "This is the actual instance allocated at runtime that will run. Set by child class." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceInstance_MetaData[] = {
		{ "Comment", "/** This is the source instance, cached to help with re-instancing */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_CustomProperty.h" },
		{ "ToolTip", "This is the source instance, cached to help with re-instancing" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourcePropertyNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourcePropertyNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DestPropertyNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestPropertyNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetInstance;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceInstance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CustomProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames_Inner = { "SourcePropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames = { "SourcePropertyNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CustomProperty, SourcePropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePropertyNames_MetaData), NewProp_SourcePropertyNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames_Inner = { "DestPropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames = { "DestPropertyNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CustomProperty, DestPropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPropertyNames_MetaData), NewProp_DestPropertyNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_TargetInstance = { "TargetInstance", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CustomProperty, TargetInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInstance_MetaData), NewProp_TargetInstance_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourceInstance = { "SourceInstance", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CustomProperty, SourceInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceInstance_MetaData), NewProp_SourceInstance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourcePropertyNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_DestPropertyNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_TargetInstance,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewProp_SourceInstance,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_CustomProperty",
	Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::PropPointers),
	sizeof(FAnimNode_CustomProperty),
	alignof(FAnimNode_CustomProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CustomProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CustomProperty.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CustomProperty.InnerSingleton;
}
// End ScriptStruct FAnimNode_CustomProperty

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_CustomProperty_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_CustomProperty::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CustomProperty_Statics::NewStructOps, TEXT("AnimNode_CustomProperty"), &Z_Registration_Info_UScriptStruct_AnimNode_CustomProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CustomProperty), 197873967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_CustomProperty_h_441255395(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_CustomProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_CustomProperty_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
