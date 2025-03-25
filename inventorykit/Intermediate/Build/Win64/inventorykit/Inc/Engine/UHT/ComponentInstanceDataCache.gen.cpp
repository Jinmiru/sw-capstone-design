// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentInstanceDataCache() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstanceCacheDataBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EComponentCreationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComponentCreationMethod;
static UEnum* EComponentCreationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComponentCreationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComponentCreationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EComponentCreationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EComponentCreationMethod"));
	}
	return Z_Registration_Info_UEnum_EComponentCreationMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EComponentCreationMethod>()
{
	return EComponentCreationMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Instance.Comment", "/** A component added to a single Actor instance via the Component section of the Actor's details panel. */" },
		{ "Instance.Name", "EComponentCreationMethod::Instance" },
		{ "Instance.ToolTip", "A component added to a single Actor instance via the Component section of the Actor's details panel." },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "Native.Comment", "/** A component that is part of a native class. */" },
		{ "Native.Name", "EComponentCreationMethod::Native" },
		{ "Native.ToolTip", "A component that is part of a native class." },
		{ "SimpleConstructionScript.Comment", "/** A component that is created from a template defined in the Components section of the Blueprint. */" },
		{ "SimpleConstructionScript.Name", "EComponentCreationMethod::SimpleConstructionScript" },
		{ "SimpleConstructionScript.ToolTip", "A component that is created from a template defined in the Components section of the Blueprint." },
		{ "UserConstructionScript.Comment", "/**A dynamically created component, either from the UserConstructionScript or from a Add Component node in a Blueprint event graph. */" },
		{ "UserConstructionScript.Name", "EComponentCreationMethod::UserConstructionScript" },
		{ "UserConstructionScript.ToolTip", "A dynamically created component, either from the UserConstructionScript or from a Add Component node in a Blueprint event graph." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComponentCreationMethod::Native", (int64)EComponentCreationMethod::Native },
		{ "EComponentCreationMethod::SimpleConstructionScript", (int64)EComponentCreationMethod::SimpleConstructionScript },
		{ "EComponentCreationMethod::UserConstructionScript", (int64)EComponentCreationMethod::UserConstructionScript },
		{ "EComponentCreationMethod::Instance", (int64)EComponentCreationMethod::Instance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EComponentCreationMethod",
	"EComponentCreationMethod",
	Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod()
{
	if (!Z_Registration_Info_UEnum_EComponentCreationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComponentCreationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComponentCreationMethod.InnerSingleton;
}
// End Enum EComponentCreationMethod

// Begin ScriptStruct FDataCacheDuplicatedObjectData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataCacheDuplicatedObjectData;
class UScriptStruct* FDataCacheDuplicatedObjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataCacheDuplicatedObjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataCacheDuplicatedObjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataCacheDuplicatedObjectData"));
	}
	return Z_Registration_Info_UScriptStruct_DataCacheDuplicatedObjectData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataCacheDuplicatedObjectData>()
{
	return FDataCacheDuplicatedObjectData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataCacheDuplicatedObjectData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DataCacheDuplicatedObjectData",
	nullptr,
	0,
	sizeof(FDataCacheDuplicatedObjectData),
	alignof(FDataCacheDuplicatedObjectData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData()
{
	if (!Z_Registration_Info_UScriptStruct_DataCacheDuplicatedObjectData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataCacheDuplicatedObjectData.InnerSingleton, Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataCacheDuplicatedObjectData.InnerSingleton;
}
// End ScriptStruct FDataCacheDuplicatedObjectData

// Begin ScriptStruct FInstanceCacheDataBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstanceCacheDataBase;
class UScriptStruct* FInstanceCacheDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceCacheDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstanceCacheDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstanceCacheDataBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstanceCacheDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_InstanceCacheDataBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstanceCacheDataBase>()
{
	return FInstanceCacheDataBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for instance cached data of a particular type. */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Base class for instance cached data of a particular type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueTransientPackage_MetaData[] = {
		{ "Comment", "/** \n\x09 * A unique outer created in the transient package to act as outer for this object's duplicated objects \n\x09 * to avoid name conflicts of objects that already exist in the transient package\n\x09 */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "A unique outer created in the transient package to act as outer for this object's duplicated objects\nto avoid name conflicts of objects that already exist in the transient package" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicatedObjects_MetaData[] = {
		{ "Comment", "// Duplicated objects created when saving instance properties\n" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Duplicated objects created when saving instance properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[] = {
		{ "Comment", "// Referenced objects in instance saved properties\n" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Referenced objects in instance saved properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedNames_MetaData[] = {
		{ "Comment", "// Referenced names in instance saved properties\n" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Referenced names in instance saved properties" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SavedProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueTransientPackage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicatedObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DuplicatedObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReferencedNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstanceCacheDataBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_SavedProperties_Inner = { "SavedProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_SavedProperties = { "SavedProperties", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceCacheDataBase, SavedProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedProperties_MetaData), NewProp_SavedProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_UniqueTransientPackage = { "UniqueTransientPackage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceCacheDataBase, UniqueTransientPackage), Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueTransientPackage_MetaData), NewProp_UniqueTransientPackage_MetaData) }; // 3772255253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_DuplicatedObjects_Inner = { "DuplicatedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData, METADATA_PARAMS(0, nullptr) }; // 3772255253
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_DuplicatedObjects = { "DuplicatedObjects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceCacheDataBase, DuplicatedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicatedObjects_MetaData), NewProp_DuplicatedObjects_MetaData) }; // 3772255253
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceCacheDataBase, ReferencedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedObjects_MetaData), NewProp_ReferencedObjects_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_ReferencedNames_Inner = { "ReferencedNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_ReferencedNames = { "ReferencedNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceCacheDataBase, ReferencedNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedNames_MetaData), NewProp_ReferencedNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_SavedProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_SavedProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_UniqueTransientPackage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_DuplicatedObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_DuplicatedObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_ReferencedObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_ReferencedObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_ReferencedNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewProp_ReferencedNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InstanceCacheDataBase",
	Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::PropPointers),
	sizeof(FInstanceCacheDataBase),
	alignof(FInstanceCacheDataBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstanceCacheDataBase()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceCacheDataBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstanceCacheDataBase.InnerSingleton, Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstanceCacheDataBase.InnerSingleton;
}
// End ScriptStruct FInstanceCacheDataBase

// Begin ScriptStruct FActorComponentInstanceSourceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorComponentInstanceSourceInfo;
class UScriptStruct* FActorComponentInstanceSourceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorComponentInstanceSourceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorComponentInstanceSourceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentInstanceSourceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActorComponentInstanceSourceInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentInstanceSourceInfo>()
{
	return FActorComponentInstanceSourceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentTemplate_MetaData[] = {
		{ "Comment", "/** The template used to create the source component */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The template used to create the source component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentCreationMethod_MetaData[] = {
		{ "Comment", "/** The method that was used to create the source component */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The method that was used to create the source component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentTypeSerializedIndex_MetaData[] = {
		{ "Comment", "/** The index of the source component in its owner's serialized array\n\x09when filtered to just that component type */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The index of the source component in its owner's serialized array\n      when filtered to just that component type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponentTemplate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceComponentCreationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceComponentCreationMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceComponentTypeSerializedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentInstanceSourceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewProp_SourceComponentTemplate = { "SourceComponentTemplate", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorComponentInstanceSourceInfo, SourceComponentTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponentTemplate_MetaData), NewProp_SourceComponentTemplate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewProp_SourceComponentCreationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewProp_SourceComponentCreationMethod = { "SourceComponentCreationMethod", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorComponentInstanceSourceInfo, SourceComponentCreationMethod), Z_Construct_UEnum_Engine_EComponentCreationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponentCreationMethod_MetaData), NewProp_SourceComponentCreationMethod_MetaData) }; // 3944329611
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewProp_SourceComponentTypeSerializedIndex = { "SourceComponentTypeSerializedIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorComponentInstanceSourceInfo, SourceComponentTypeSerializedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponentTypeSerializedIndex_MetaData), NewProp_SourceComponentTypeSerializedIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewProp_SourceComponentTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewProp_SourceComponentCreationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewProp_SourceComponentCreationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewProp_SourceComponentTypeSerializedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActorComponentInstanceSourceInfo",
	Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::PropPointers),
	sizeof(FActorComponentInstanceSourceInfo),
	alignof(FActorComponentInstanceSourceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ActorComponentInstanceSourceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorComponentInstanceSourceInfo.InnerSingleton, Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorComponentInstanceSourceInfo.InnerSingleton;
}
// End ScriptStruct FActorComponentInstanceSourceInfo

// Begin ScriptStruct FActorComponentInstanceData
static_assert(std::is_polymorphic<FActorComponentInstanceData>() == std::is_polymorphic<FInstanceCacheDataBase>(), "USTRUCT FActorComponentInstanceData cannot be polymorphic unless super FInstanceCacheDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorComponentInstanceData;
class UScriptStruct* FActorComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentInstanceData>()
{
	return FActorComponentInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for component instance cached data of a particular type. */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Base class for component instance cached data of a particular type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentTemplate_MetaData[] = {
		{ "Comment", "/** The template used to create the source component */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The template used to create the source component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentCreationMethod_MetaData[] = {
		{ "Comment", "/** The method that was used to create the source component */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The method that was used to create the source component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentTypeSerializedIndex_MetaData[] = {
		{ "Comment", "/** The index of the source component in its owner's serialized array\n\x09when filtered to just that component type */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The index of the source component in its owner's serialized array\n      when filtered to just that component type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponentTemplate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceComponentCreationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceComponentCreationMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceComponentTypeSerializedIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate = { "SourceComponentTemplate", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponentTemplate_MetaData), NewProp_SourceComponentTemplate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod = { "SourceComponentCreationMethod", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentCreationMethod), Z_Construct_UEnum_Engine_EComponentCreationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponentCreationMethod_MetaData), NewProp_SourceComponentCreationMethod_MetaData) }; // 3944329611
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex = { "SourceComponentTypeSerializedIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTypeSerializedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponentTypeSerializedIndex_MetaData), NewProp_SourceComponentTypeSerializedIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FInstanceCacheDataBase,
	&NewStructOps,
	"ActorComponentInstanceData",
	Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers),
	sizeof(FActorComponentInstanceData),
	alignof(FActorComponentInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.InnerSingleton;
}
// End ScriptStruct FActorComponentInstanceData

// Begin ScriptStruct FActorInstanceData
static_assert(std::is_polymorphic<FActorInstanceData>() == std::is_polymorphic<FInstanceCacheDataBase>(), "USTRUCT FActorInstanceData cannot be polymorphic unless super FInstanceCacheDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorInstanceData;
class UScriptStruct* FActorInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorInstanceData>()
{
	return FActorInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActorInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Per instance data to be persisted for a given actor */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Per instance data to be persisted for a given actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Comment", "/** The class of the actor that the instance data is for */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The class of the actor that the instance data is for" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActorInstanceData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorInstanceData, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInstanceData_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FInstanceCacheDataBase,
	&NewStructOps,
	"ActorInstanceData",
	Z_Construct_UScriptStruct_FActorInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceData_Statics::PropPointers),
	sizeof(FActorInstanceData),
	alignof(FActorInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_ActorInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FActorInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActorInstanceData.InnerSingleton;
}
// End ScriptStruct FActorInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EComponentCreationMethod_StaticEnum, TEXT("EComponentCreationMethod"), &Z_Registration_Info_UEnum_EComponentCreationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3944329611U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataCacheDuplicatedObjectData::StaticStruct, Z_Construct_UScriptStruct_FDataCacheDuplicatedObjectData_Statics::NewStructOps, TEXT("DataCacheDuplicatedObjectData"), &Z_Registration_Info_UScriptStruct_DataCacheDuplicatedObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataCacheDuplicatedObjectData), 3772255253U) },
		{ FInstanceCacheDataBase::StaticStruct, Z_Construct_UScriptStruct_FInstanceCacheDataBase_Statics::NewStructOps, TEXT("InstanceCacheDataBase"), &Z_Registration_Info_UScriptStruct_InstanceCacheDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstanceCacheDataBase), 759118768U) },
		{ FActorComponentInstanceSourceInfo::StaticStruct, Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo_Statics::NewStructOps, TEXT("ActorComponentInstanceSourceInfo"), &Z_Registration_Info_UScriptStruct_ActorComponentInstanceSourceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorComponentInstanceSourceInfo), 2789311754U) },
		{ FActorComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewStructOps, TEXT("ActorComponentInstanceData"), &Z_Registration_Info_UScriptStruct_ActorComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorComponentInstanceData), 4024251275U) },
		{ FActorInstanceData::StaticStruct, Z_Construct_UScriptStruct_FActorInstanceData_Statics::NewStructOps, TEXT("ActorInstanceData"), &Z_Registration_Info_UScriptStruct_ActorInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorInstanceData), 3109685963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_509720362(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
