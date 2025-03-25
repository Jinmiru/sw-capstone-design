// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyQueue() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyArray();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyContext();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNotifyEventReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyEventReference;
class UScriptStruct* FAnimNotifyEventReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyEventReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyEventReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyEventReference>()
{
	return FAnimNotifyEventReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorTable_MetaData[] = {
		{ "Comment", "// If set, the Notify has been mirrored.  The mirrored name can be found in MirrorTable->AnimNotifyToMirrorAnimNotifyMap\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "If set, the Notify has been mirrored.  The mirrored name can be found in MirrorTable->AnimNotifyToMirrorAnimNotifyMap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifySource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MirrorTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotifySource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyEventReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_MirrorTable = { "MirrorTable", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNotifyEventReference, MirrorTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorTable_MetaData), NewProp_MirrorTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource = { "NotifySource", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNotifyEventReference, NotifySource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifySource_MetaData), NewProp_NotifySource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_MirrorTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNotifyEventReference",
	Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers),
	sizeof(FAnimNotifyEventReference),
	alignof(FAnimNotifyEventReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyEventReference.InnerSingleton;
}
// End ScriptStruct FAnimNotifyEventReference

// Begin ScriptStruct FAnimNotifyArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyArray;
class UScriptStruct* FAnimNotifyArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyArray, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyArray"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyArray.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyArray>()
{
	return FAnimNotifyArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNotifyArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Notifies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Notifies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Notifies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_Inner = { "Notifies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(0, nullptr) }; // 3961895738
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies = { "Notifies", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNotifyArray, Notifies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Notifies_MetaData), NewProp_Notifies_MetaData) }; // 3961895738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNotifyArray",
	Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers),
	sizeof(FAnimNotifyArray),
	alignof(FAnimNotifyArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyArray()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyArray.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyArray.InnerSingleton;
}
// End ScriptStruct FAnimNotifyArray

// Begin ScriptStruct FAnimNotifyContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyContext;
class UScriptStruct* FAnimNotifyContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyContext>()
{
	return FAnimNotifyContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNotifyContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNotifyContext",
	nullptr,
	0,
	sizeof(FAnimNotifyContext),
	alignof(FAnimNotifyContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyContext()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyContext.InnerSingleton;
}
// End ScriptStruct FAnimNotifyContext

// Begin ScriptStruct FAnimNotifyQueue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyQueue;
class UScriptStruct* FAnimNotifyQueue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyQueue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyQueue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyQueue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyQueue"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyQueue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyQueue>()
{
	return FAnimNotifyQueue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[] = {
		{ "Comment", "/** Animation Notifies that has been triggered in the latest tick **/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "ToolTip", "Animation Notifies that has been triggered in the latest tick *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnfilteredMontageAnimNotifies_MetaData[] = {
		{ "Comment", "/** Animation Notifies from montages that still need to be filtered by slot weight*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "ToolTip", "Animation Notifies from montages that still need to be filtered by slot weight" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNotifies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnfilteredMontageAnimNotifies_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UnfilteredMontageAnimNotifies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyQueue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_Inner = { "AnimNotifies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(0, nullptr) }; // 3961895738
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies = { "AnimNotifies", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNotifyQueue, AnimNotifies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimNotifies_MetaData), NewProp_AnimNotifies_MetaData) }; // 3961895738
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_ValueProp = { "UnfilteredMontageAnimNotifies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnimNotifyArray, METADATA_PARAMS(0, nullptr) }; // 3287912878
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp = { "UnfilteredMontageAnimNotifies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies = { "UnfilteredMontageAnimNotifies", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNotifyQueue, UnfilteredMontageAnimNotifies), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnfilteredMontageAnimNotifies_MetaData), NewProp_UnfilteredMontageAnimNotifies_MetaData) }; // 3287912878
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimNotifyQueue",
	Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers),
	sizeof(FAnimNotifyQueue),
	alignof(FAnimNotifyQueue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyQueue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyQueue.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyQueue.InnerSingleton;
}
// End ScriptStruct FAnimNotifyQueue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNotifyEventReference::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewStructOps, TEXT("AnimNotifyEventReference"), &Z_Registration_Info_UScriptStruct_AnimNotifyEventReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyEventReference), 3961895738U) },
		{ FAnimNotifyArray::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewStructOps, TEXT("AnimNotifyArray"), &Z_Registration_Info_UScriptStruct_AnimNotifyArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyArray), 3287912878U) },
		{ FAnimNotifyContext::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyContext_Statics::NewStructOps, TEXT("AnimNotifyContext"), &Z_Registration_Info_UScriptStruct_AnimNotifyContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyContext), 2109164615U) },
		{ FAnimNotifyQueue::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewStructOps, TEXT("AnimNotifyQueue"), &Z_Registration_Info_UScriptStruct_AnimNotifyQueue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyQueue), 3511423783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_4174947259(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyQueue_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
