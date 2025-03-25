// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/MemberReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemberReference() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FMemberReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MemberReference;
class UScriptStruct* FMemberReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MemberReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MemberReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemberReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MemberReference"));
	}
	return Z_Registration_Info_UScriptStruct_MemberReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMemberReference>()
{
	return FMemberReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMemberReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// @TODO: this can encapsulate globally defined fields as well (like with native \n//        delegate signatures); consider renaming to FFieldReference\n" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "@TODO: this can encapsulate globally defined fields as well (like with native\n       delegate signatures); consider renaming to FFieldReference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberParent_MetaData[] = {
		{ "Comment", "/** \n\x09 * Most often the Class that this member is defined in. Could be a UPackage \n\x09 * if it is a native delegate signature function (declared globally). Should \n\x09 * be NULL if bSelfContext is true.  \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Most often the Class that this member is defined in. Could be a UPackage\nif it is a native delegate signature function (declared globally). Should\nbe NULL if bSelfContext is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberScope_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[] = {
		{ "Comment", "/** Name of variable */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Name of variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[] = {
		{ "Comment", "/** The Guid of the variable */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "The Guid of the variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelfContext_MetaData[] = {
		{ "Comment", "/** Whether or not this should be a \"self\" context */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Whether or not this should be a \"self\" context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasDeprecated_MetaData[] = {
		{ "Comment", "/** Whether or not this property has been deprecated */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Whether or not this property has been deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemberParent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemberScope;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MemberName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
	static void NewProp_bSelfContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfContext;
	static void NewProp_bWasDeprecated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasDeprecated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemberReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent = { "MemberParent", nullptr, (EPropertyFlags)0x0124080001000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemberReference, MemberParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberParent_MetaData), NewProp_MemberParent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope = { "MemberScope", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemberReference, MemberScope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberScope_MetaData), NewProp_MemberScope_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemberReference, MemberName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberName_MetaData), NewProp_MemberName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemberReference, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberGuid_MetaData), NewProp_MemberGuid_MetaData) };
void Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_SetBit(void* Obj)
{
	((FMemberReference*)Obj)->bSelfContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext = { "bSelfContext", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMemberReference), &Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelfContext_MetaData), NewProp_bSelfContext_MetaData) };
void Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_SetBit(void* Obj)
{
	((FMemberReference*)Obj)->bWasDeprecated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated = { "bWasDeprecated", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMemberReference), &Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasDeprecated_MetaData), NewProp_bWasDeprecated_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemberReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MemberReference",
	Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers),
	sizeof(FMemberReference),
	alignof(FMemberReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMemberReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMemberReference()
{
	if (!Z_Registration_Info_UScriptStruct_MemberReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MemberReference.InnerSingleton, Z_Construct_UScriptStruct_FMemberReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MemberReference.InnerSingleton;
}
// End ScriptStruct FMemberReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMemberReference::StaticStruct, Z_Construct_UScriptStruct_FMemberReference_Statics::NewStructOps, TEXT("MemberReference"), &Z_Registration_Info_UScriptStruct_MemberReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMemberReference), 276427156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_725910908(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
