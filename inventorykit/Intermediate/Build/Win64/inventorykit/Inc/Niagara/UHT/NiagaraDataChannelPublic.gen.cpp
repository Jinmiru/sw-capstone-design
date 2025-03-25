// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataChannelPublic.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelPublic() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelVariable();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataChannelAsset
void UNiagaraDataChannelAsset::StaticRegisterNativesUNiagaraDataChannelAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelAsset);
UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister()
{
	return UNiagaraDataChannelAsset::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannelAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Niagara Data Channels are a system for communication between Niagara Systems and with game code/Blueprint.\n\nData channel assets define the payload as well as some transfer settings.\nNiagara Systems can read from and write to data channels via data interfaces.\nBlueprint and C++ code can also read from and write to data channels using its API functions.\n\nEXPERIMENTAL:\nData Channels are currently experimental and undergoing heavy development.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Niagara Data Channel" },
		{ "IncludePath", "NiagaraDataChannelPublic.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Niagara Data Channels are a system for communication between Niagara Systems and with game code/Blueprint.\n\nData channel assets define the payload as well as some transfer settings.\nNiagara Systems can read from and write to data channels via data interfaces.\nBlueprint and C++ code can also read from and write to data channels using its API functions.\n\nEXPERIMENTAL:\nData Channels are currently experimental and undergoing heavy development." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataChannel_MetaData[] = {
		{ "Category", "DataChannel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPreChangeDataChannel_MetaData[] = {
		{ "Comment", "/** When changing data channel types we cache the old channel and attempt to copy over any common properties from one to the other. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "When changing data channel types we cache the old channel and attempt to copy over any common properties from one to the other." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataChannel;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPreChangeDataChannel;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_DataChannel = { "DataChannel", nullptr, (EPropertyFlags)0x0146000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelAsset, DataChannel), Z_Construct_UClass_UNiagaraDataChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataChannel_MetaData), NewProp_DataChannel_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_CachedPreChangeDataChannel = { "CachedPreChangeDataChannel", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelAsset, CachedPreChangeDataChannel), Z_Construct_UClass_UNiagaraDataChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPreChangeDataChannel_MetaData), NewProp_CachedPreChangeDataChannel_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_DataChannel,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_CachedPreChangeDataChannel,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::ClassParams = {
	&UNiagaraDataChannelAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannelAsset()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannelAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelAsset.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannelAsset.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelAsset>()
{
	return UNiagaraDataChannelAsset::StaticClass();
}
UNiagaraDataChannelAsset::UNiagaraDataChannelAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelAsset);
UNiagaraDataChannelAsset::~UNiagaraDataChannelAsset() {}
// End Class UNiagaraDataChannelAsset

// Begin ScriptStruct FNiagaraDataChannelVariable
static_assert(std::is_polymorphic<FNiagaraDataChannelVariable>() == std::is_polymorphic<FNiagaraVariableBase>(), "USTRUCT FNiagaraDataChannelVariable cannot be polymorphic unless super FNiagaraVariableBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataChannelVariable;
class UScriptStruct* FNiagaraDataChannelVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataChannelVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelVariable, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataChannelVariable"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelVariable.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataChannelVariable>()
{
	return FNiagaraDataChannelVariable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Comment", "/** Can be used to track renamed data channel variables */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Can be used to track renamed data channel variables" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataChannelVariable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelVariable, Version), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraVariableBase,
	&NewStructOps,
	"NiagaraDataChannelVariable",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::PropPointers), 0),
	sizeof(FNiagaraDataChannelVariable),
	alignof(FNiagaraDataChannelVariable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelVariable()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelVariable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataChannelVariable.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelVariable.InnerSingleton;
}
// End ScriptStruct FNiagaraDataChannelVariable

// Begin ScriptStruct FNiagaraDataChannelSearchParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters;
class UScriptStruct* FNiagaraDataChannelSearchParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataChannelSearchParameters"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataChannelSearchParameters>()
{
	return FNiagaraDataChannelSearchParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nParameters used when retrieving a specific set of Data Channel Data to read or write.\nMany Data Channel types will have multiple internal sets of data and these parameters control which the Channel should return to users for access.\nAn example of this would be the Islands Data Channel type which will subdivide the world and have a different set of data for each sub division.\nIt will return to users the correct data for their location based on these parameters.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Parameters used when retrieving a specific set of Data Channel Data to read or write.\nMany Data Channel types will have multiple internal sets of data and these parameters control which the Channel should return to users for access.\nAn example of this would be the Islands Data Channel type which will subdivide the world and have a different set of data for each sub division.\nIt will return to users the correct data for their location based on these parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** In cases where there is an owning component such as an object spawning from itself etc, then we pass that component in. Some handlers may only use it's location but others may make use of more data. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "In cases where there is an owning component such as an object spawning from itself etc, then we pass that component in. Some handlers may only use it's location but others may make use of more data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** In cases where there is no owning component for data being read or written to a data channel, we simply pass in a location. We can also use this when bOverrideLocaiton is set. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "In cases where there is no owning component for data being read or written to a data channel, we simply pass in a location. We can also use this when bOverrideLocaiton is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLocation_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** If true, even if an owning component is set, the data channel should use the Location value rather than the component location. If this is false, the NDC will get any location needed from the owning component. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "If true, even if an owning component is set, the data channel should use the Location value rather than the component location. If this is false, the NDC will get any location needed from the owning component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bOverrideLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataChannelSearchParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelSearchParameters, OwningComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComponent_MetaData), NewProp_OwningComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelSearchParameters, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_bOverrideLocation_SetBit(void* Obj)
{
	((FNiagaraDataChannelSearchParameters*)Obj)->bOverrideLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_bOverrideLocation = { "bOverrideLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraDataChannelSearchParameters), &Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_bOverrideLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLocation_MetaData), NewProp_bOverrideLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_OwningComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_bOverrideLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDataChannelSearchParameters",
	Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::PropPointers),
	sizeof(FNiagaraDataChannelSearchParameters),
	alignof(FNiagaraDataChannelSearchParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.InnerSingleton;
}
// End ScriptStruct FNiagaraDataChannelSearchParameters

// Begin ScriptStruct FNiagaraDataChannelGameDataLayout
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout;
class UScriptStruct* FNiagaraDataChannelGameDataLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataChannelGameDataLayout"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataChannelGameDataLayout>()
{
	return FNiagaraDataChannelGameDataLayout::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableIndices_MetaData[] = {
		{ "Comment", "/** Map of all variables contained in this DataChannel data and the indices into data arrays for game data. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Map of all variables contained in this DataChannel data and the indices into data arrays for game data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LwcConverters_MetaData[] = {
		{ "Comment", "/** Helpers for converting LWC types into Niagara simulation SWC types. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Helpers for converting LWC types into Niagara simulation SWC types." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VariableIndices_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableIndices_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VariableIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LwcConverters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LwcConverters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataChannelGameDataLayout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_ValueProp = { "VariableIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_Key_KeyProp = { "VariableIndices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices = { "VariableIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelGameDataLayout, VariableIndices), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableIndices_MetaData), NewProp_VariableIndices_MetaData) }; // 2955719795
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_Inner = { "LwcConverters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraLwcStructConverter, METADATA_PARAMS(0, nullptr) }; // 2532603979
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters = { "LwcConverters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelGameDataLayout, LwcConverters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LwcConverters_MetaData), NewProp_LwcConverters_MetaData) }; // 2532603979
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDataChannelGameDataLayout",
	Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers),
	sizeof(FNiagaraDataChannelGameDataLayout),
	alignof(FNiagaraDataChannelGameDataLayout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton;
}
// End ScriptStruct FNiagaraDataChannelGameDataLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraDataChannelVariable::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataChannelVariable_Statics::NewStructOps, TEXT("NiagaraDataChannelVariable"), &Z_Registration_Info_UScriptStruct_NiagaraDataChannelVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataChannelVariable), 72677008U) },
		{ FNiagaraDataChannelSearchParameters::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewStructOps, TEXT("NiagaraDataChannelSearchParameters"), &Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataChannelSearchParameters), 133002555U) },
		{ FNiagaraDataChannelGameDataLayout::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewStructOps, TEXT("NiagaraDataChannelGameDataLayout"), &Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataChannelGameDataLayout), 3276065293U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelAsset, UNiagaraDataChannelAsset::StaticClass, TEXT("UNiagaraDataChannelAsset"), &Z_Registration_Info_UClass_UNiagaraDataChannelAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelAsset), 2648879538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_3719823094(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
