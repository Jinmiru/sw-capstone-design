// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionProfile() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UCollisionProfile();
ENGINE_API UClass* Z_Construct_UClass_UCollisionProfile_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionResponse();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseTemplate();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomChannelSetup();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomProfile();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRedirector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FResponseChannel();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCollisionProfileName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionProfileName;
class UScriptStruct* FCollisionProfileName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionProfileName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionProfileName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionProfileName, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollisionProfileName"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionProfileName.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollisionProfileName>()
{
	return FCollisionProfileName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionProfileName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure representing a collision profile name, this gets a special UI in the editor */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Structure representing a collision profile name, this gets a special UI in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionProfileName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionProfileName, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionProfileName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionProfileName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionProfileName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CollisionProfileName",
	Z_Construct_UScriptStruct_FCollisionProfileName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionProfileName_Statics::PropPointers),
	sizeof(FCollisionProfileName),
	alignof(FCollisionProfileName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionProfileName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionProfileName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionProfileName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionProfileName.InnerSingleton, Z_Construct_UScriptStruct_FCollisionProfileName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionProfileName.InnerSingleton;
}
// End ScriptStruct FCollisionProfileName

// Begin ScriptStruct FCollisionResponseTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionResponseTemplate;
class UScriptStruct* FCollisionResponseTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionResponseTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionResponseTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponseTemplate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CollisionResponseTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionResponseTemplate.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollisionResponseTemplate>()
{
	return FCollisionResponseTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for collision response templates.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Structure for collision response templates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of collision profile */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Name of collision profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
		{ "Comment", "/** Type of collision used for things with this profile */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Type of collision used for things with this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanModify_MetaData[] = {
		{ "Comment", "/** If this profile can be modified by games */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "If this profile can be modified by games" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypeName_MetaData[] = {
		{ "Comment", "/** Collision object type to use for things with this profile */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Collision object type to use for things with this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomResponses_MetaData[] = {
		{ "Comment", "/** Types of objects that this physics objects will collide with. */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpMessage_MetaData[] = {
		{ "Comment", "/** Help message for collision profile **/" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Help message for collision profile *" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static void NewProp_bCanModify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanModify;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectTypeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomResponses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomResponses;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HelpMessage;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionResponseTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionResponseTemplate, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionResponseTemplate, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEnabled_MetaData), NewProp_CollisionEnabled_MetaData) }; // 2362857466
void Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify_SetBit(void* Obj)
{
	((FCollisionResponseTemplate*)Obj)->bCanModify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify = { "bCanModify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCollisionResponseTemplate), &Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanModify_MetaData), NewProp_bCanModify_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_ObjectTypeName = { "ObjectTypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionResponseTemplate, ObjectTypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypeName_MetaData), NewProp_ObjectTypeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses_Inner = { "CustomResponses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(0, nullptr) }; // 1194566750
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses = { "CustomResponses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionResponseTemplate, CustomResponses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomResponses_MetaData), NewProp_CustomResponses_MetaData) }; // 1194566750
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_HelpMessage = { "HelpMessage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionResponseTemplate, HelpMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpMessage_MetaData), NewProp_HelpMessage_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CollisionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_bCanModify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_ObjectTypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_CustomResponses,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewProp_HelpMessage,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CollisionResponseTemplate",
	Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::PropPointers),
	sizeof(FCollisionResponseTemplate),
	alignof(FCollisionResponseTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionResponseTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionResponseTemplate.InnerSingleton, Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CollisionResponseTemplate.InnerSingleton;
}
// End ScriptStruct FCollisionResponseTemplate

// Begin ScriptStruct FCustomChannelSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomChannelSetup;
class UScriptStruct* FCustomChannelSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomChannelSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomChannelSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomChannelSetup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomChannelSetup"));
	}
	return Z_Registration_Info_UScriptStruct_CustomChannelSetup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomChannelSetup>()
{
	return FCustomChannelSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomChannelSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for custom channel setup information.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Structure for custom channel setup information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Comment", "/** Which channel you'd like to customize **/" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Which channel you'd like to customize *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultResponse_MetaData[] = {
		{ "Comment", "/** Default Response for the channel */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Default Response for the channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceType_MetaData[] = {
		{ "Comment", "/** Sets meta data TraceType=\"1\" for the enum entry if true. Otherwise, this channel will be treated as object query channel, so you can query object types**/" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Sets meta data TraceType=\"1\" for the enum entry if true. Otherwise, this channel will be treated as object query channel, so you can query object types*" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticObject_MetaData[] = {
		{ "Comment", "/** Specifies if this is static object. Otherwise it will be dynamic object. This is used for query all objects vs all static objects vs all dynamic objects **/" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Specifies if this is static object. Otherwise it will be dynamic object. This is used for query all objects vs all static objects vs all dynamic objects *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name used in editor and metadata to refer to this channel */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Name used in editor and metadata to refer to this channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultResponse;
	static void NewProp_bTraceType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceType;
	static void NewProp_bStaticObject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomChannelSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomChannelSetup, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_DefaultResponse = { "DefaultResponse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomChannelSetup, DefaultResponse), Z_Construct_UEnum_Engine_ECollisionResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultResponse_MetaData), NewProp_DefaultResponse_MetaData) }; // 1009580041
void Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType_SetBit(void* Obj)
{
	((FCustomChannelSetup*)Obj)->bTraceType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType = { "bTraceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCustomChannelSetup), &Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceType_MetaData), NewProp_bTraceType_MetaData) };
void Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject_SetBit(void* Obj)
{
	((FCustomChannelSetup*)Obj)->bStaticObject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject = { "bStaticObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCustomChannelSetup), &Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticObject_MetaData), NewProp_bStaticObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomChannelSetup, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_DefaultResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bTraceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_bStaticObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CustomChannelSetup",
	Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::PropPointers),
	sizeof(FCustomChannelSetup),
	alignof(FCustomChannelSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomChannelSetup()
{
	if (!Z_Registration_Info_UScriptStruct_CustomChannelSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomChannelSetup.InnerSingleton, Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomChannelSetup.InnerSingleton;
}
// End ScriptStruct FCustomChannelSetup

// Begin ScriptStruct FCustomProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomProfile;
class UScriptStruct* FCustomProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomProfile, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomProfile"));
	}
	return Z_Registration_Info_UScriptStruct_CustomProfile.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomProfile>()
{
	return FCustomProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for custom profiles.\n *\n * if you'd like to just add custom channels, not changing anything else engine defined\n * if you'd like to override all about profile, please use \n * +Profiles=(Name=NameOfProfileYouLikeToOverwrite,....)\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Structure for custom profiles.\n\nif you'd like to just add custom channels, not changing anything else engine defined\nif you'd like to override all about profile, please use\n+Profiles=(Name=NameOfProfileYouLikeToOverwrite,....)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of new profile to add */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Name of new profile to add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomResponses_MetaData[] = {
		{ "Comment", "/** Types of objects that this physics objects will collide with. */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomResponses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomResponses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomProfile, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses_Inner = { "CustomResponses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(0, nullptr) }; // 1194566750
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses = { "CustomResponses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomProfile, CustomResponses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomResponses_MetaData), NewProp_CustomResponses_MetaData) }; // 1194566750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomProfile_Statics::NewProp_CustomResponses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CustomProfile",
	Z_Construct_UScriptStruct_FCustomProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomProfile_Statics::PropPointers),
	sizeof(FCustomProfile),
	alignof(FCustomProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomProfile()
{
	if (!Z_Registration_Info_UScriptStruct_CustomProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomProfile.InnerSingleton, Z_Construct_UScriptStruct_FCustomProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomProfile.InnerSingleton;
}
// End ScriptStruct FCustomProfile

// Begin Class UCollisionProfile
void UCollisionProfile::StaticRegisterNativesUCollisionProfile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionProfile);
UClass* Z_Construct_UClass_UCollisionProfile_NoRegister()
{
	return UCollisionProfile::StaticClass();
}
struct Z_Construct_UClass_UCollisionProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Set up and modify collision settings.\n */" },
		{ "DisplayName", "Collision" },
		{ "IncludePath", "Engine/CollisionProfile.h" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Set up and modify collision settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[] = {
		{ "Comment", "/** List of all profiles, engine and game-specific */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "List of all profiles, engine and game-specific" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChannelResponses_MetaData[] = {
		{ "Comment", "/** Game-specific overrides to default responses to collision channels */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Game-specific overrides to default responses to collision channels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditProfiles_MetaData[] = {
		{ "Comment", "/** Game-specific overrides to engine profiles */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Game-specific overrides to engine profiles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileRedirects_MetaData[] = {
		{ "Comment", "/** Used to handle renaming profiles */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Used to handle renaming profiles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelRedirects_MetaData[] = {
		{ "Comment", "/** Used to handle renaming collision channels */" },
		{ "ModuleRelativePath", "Classes/Engine/CollisionProfile.h" },
		{ "ToolTip", "Used to handle renaming collision channels" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultChannelResponses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultChannelResponses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditProfiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProfileRedirects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionChannelRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelRedirects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollisionResponseTemplate, METADATA_PARAMS(0, nullptr) }; // 1938073857
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0040000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionProfile, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Profiles_MetaData), NewProp_Profiles_MetaData) }; // 1938073857
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses_Inner = { "DefaultChannelResponses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomChannelSetup, METADATA_PARAMS(0, nullptr) }; // 1656608046
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses = { "DefaultChannelResponses", nullptr, (EPropertyFlags)0x0040000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionProfile, DefaultChannelResponses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChannelResponses_MetaData), NewProp_DefaultChannelResponses_MetaData) }; // 1656608046
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles_Inner = { "EditProfiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomProfile, METADATA_PARAMS(0, nullptr) }; // 3017723887
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles = { "EditProfiles", nullptr, (EPropertyFlags)0x0040000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionProfile, EditProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditProfiles_MetaData), NewProp_EditProfiles_MetaData) }; // 3017723887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects_Inner = { "ProfileRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRedirector, METADATA_PARAMS(0, nullptr) }; // 2938803604
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects = { "ProfileRedirects", nullptr, (EPropertyFlags)0x0040000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionProfile, ProfileRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileRedirects_MetaData), NewProp_ProfileRedirects_MetaData) }; // 2938803604
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects_Inner = { "CollisionChannelRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRedirector, METADATA_PARAMS(0, nullptr) }; // 2938803604
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects = { "CollisionChannelRedirects", nullptr, (EPropertyFlags)0x0040000000044000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionProfile, CollisionChannelRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannelRedirects_MetaData), NewProp_CollisionChannelRedirects_MetaData) }; // 2938803604
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_Profiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_DefaultChannelResponses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_EditProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_ProfileRedirects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionProfile_Statics::NewProp_CollisionChannelRedirects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCollisionProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionProfile_Statics::ClassParams = {
	&UCollisionProfile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCollisionProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollisionProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollisionProfile()
{
	if (!Z_Registration_Info_UClass_UCollisionProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionProfile.OuterSingleton, Z_Construct_UClass_UCollisionProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollisionProfile.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCollisionProfile>()
{
	return UCollisionProfile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionProfile);
UCollisionProfile::~UCollisionProfile() {}
// End Class UCollisionProfile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCollisionProfileName::StaticStruct, Z_Construct_UScriptStruct_FCollisionProfileName_Statics::NewStructOps, TEXT("CollisionProfileName"), &Z_Registration_Info_UScriptStruct_CollisionProfileName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionProfileName), 3816324900U) },
		{ FCollisionResponseTemplate::StaticStruct, Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics::NewStructOps, TEXT("CollisionResponseTemplate"), &Z_Registration_Info_UScriptStruct_CollisionResponseTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionResponseTemplate), 1938073857U) },
		{ FCustomChannelSetup::StaticStruct, Z_Construct_UScriptStruct_FCustomChannelSetup_Statics::NewStructOps, TEXT("CustomChannelSetup"), &Z_Registration_Info_UScriptStruct_CustomChannelSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomChannelSetup), 1656608046U) },
		{ FCustomProfile::StaticStruct, Z_Construct_UScriptStruct_FCustomProfile_Statics::NewStructOps, TEXT("CustomProfile"), &Z_Registration_Info_UScriptStruct_CustomProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomProfile), 3017723887U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollisionProfile, UCollisionProfile::StaticClass, TEXT("UCollisionProfile"), &Z_Registration_Info_UClass_UCollisionProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionProfile), 1677323003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_3084156212(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
