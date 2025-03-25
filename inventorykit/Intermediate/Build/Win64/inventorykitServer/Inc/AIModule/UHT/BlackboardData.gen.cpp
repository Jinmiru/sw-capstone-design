// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardData() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardEntry();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FBlackboardEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlackboardEntry;
class UScriptStruct* FBlackboardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlackboardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlackboardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardEntry, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BlackboardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_BlackboardEntry.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBlackboardEntry>()
{
	return FBlackboardEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlackboardEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** blackboard entry definition */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "blackboard entry definition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryDescription_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "Optional description to explain what this blackboard entry does." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryCategory_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** key type and additional properties */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "key type and additional properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceSynced_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** if set to true then this field will be synchronized across all instances of this blackboard */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "if set to true then this field will be synchronized across all instances of this blackboard" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EntryName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntryDescription;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EntryCategory;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyType;
	static void NewProp_bInstanceSynced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceSynced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName = { "EntryName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackboardEntry, EntryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryName_MetaData), NewProp_EntryName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription = { "EntryDescription", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackboardEntry, EntryDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryDescription_MetaData), NewProp_EntryDescription_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryCategory = { "EntryCategory", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackboardEntry, EntryCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryCategory_MetaData), NewProp_EntryCategory_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType = { "KeyType", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackboardEntry, KeyType), Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyType_MetaData), NewProp_KeyType_MetaData) };
void Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_SetBit(void* Obj)
{
	((FBlackboardEntry*)Obj)->bInstanceSynced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced = { "bInstanceSynced", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FBlackboardEntry), &Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInstanceSynced_MetaData), NewProp_bInstanceSynced_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_EntryCategory,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_KeyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewProp_bInstanceSynced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlackboardEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"BlackboardEntry",
	Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::PropPointers),
	sizeof(FBlackboardEntry),
	alignof(FBlackboardEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlackboardEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlackboardEntry()
{
	if (!Z_Registration_Info_UScriptStruct_BlackboardEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlackboardEntry.InnerSingleton, Z_Construct_UScriptStruct_FBlackboardEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlackboardEntry.InnerSingleton;
}
// End ScriptStruct FBlackboardEntry

// Begin Class UBlackboardData
void UBlackboardData::StaticRegisterNativesUBlackboardData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardData);
UClass* Z_Construct_UClass_UBlackboardData_NoRegister()
{
	return UBlackboardData::StaticClass();
}
struct Z_Construct_UClass_UBlackboardData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorTree/BlackboardData.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "Parent" },
		{ "Comment", "/** parent blackboard (keys can be overridden) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "parent blackboard (keys can be overridden)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentKeys_MetaData[] = {
		{ "Category", "Parent" },
		{ "Comment", "/** all keys inherited from parent chain */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "all keys inherited from parent chain" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard keys */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
		{ "ToolTip", "blackboard keys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSynchronizedKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentKeys;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static void NewProp_bHasSynchronizedKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSynchronizedKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardData, Parent), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_Inner = { "ParentKeys", nullptr, (EPropertyFlags)0x0000008800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlackboardEntry, METADATA_PARAMS(0, nullptr) }; // 542496890
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys = { "ParentKeys", nullptr, (EPropertyFlags)0x0010008800032001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardData, ParentKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentKeys_MetaData), NewProp_ParentKeys_MetaData) }; // 542496890
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlackboardEntry, METADATA_PARAMS(0, nullptr) }; // 542496890
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardData, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 542496890
void Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_SetBit(void* Obj)
{
	((UBlackboardData*)Obj)->bHasSynchronizedKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys = { "bHasSynchronizedKeys", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBlackboardData), &Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSynchronizedKeys_MetaData), NewProp_bHasSynchronizedKeys_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Parent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_ParentKeys,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardData_Statics::NewProp_bHasSynchronizedKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlackboardData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardData_Statics::ClassParams = {
	&UBlackboardData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlackboardData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlackboardData()
{
	if (!Z_Registration_Info_UClass_UBlackboardData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardData.OuterSingleton, Z_Construct_UClass_UBlackboardData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlackboardData.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBlackboardData>()
{
	return UBlackboardData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardData);
UBlackboardData::~UBlackboardData() {}
// End Class UBlackboardData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlackboardEntry::StaticStruct, Z_Construct_UScriptStruct_FBlackboardEntry_Statics::NewStructOps, TEXT("BlackboardEntry"), &Z_Registration_Info_UScriptStruct_BlackboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlackboardEntry), 542496890U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardData, UBlackboardData::StaticClass, TEXT("UBlackboardData"), &Z_Registration_Info_UClass_UBlackboardData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardData), 3020616398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_521772438(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
