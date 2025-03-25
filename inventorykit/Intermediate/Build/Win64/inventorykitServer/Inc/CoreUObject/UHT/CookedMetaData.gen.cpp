// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/UObject/CookedMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookedMetaData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClassCookedMetaData();
COREUOBJECT_API UClass* Z_Construct_UClass_UClassCookedMetaData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnumCookedMetaData();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnumCookedMetaData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UStructCookedMetaData();
COREUOBJECT_API UClass* Z_Construct_UClass_UStructCookedMetaData_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFieldCookedMetaDataStore();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FObjectCookedMetaDataStore();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStructCookedMetaDataStore();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin ScriptStruct FObjectCookedMetaDataStore
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore;
class UScriptStruct* FObjectCookedMetaDataStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("ObjectCookedMetaDataStore"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FObjectCookedMetaDataStore>()
{
	return FObjectCookedMetaDataStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UObject.\n */" },
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UObject." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectCookedMetaDataStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_ValueProp = { "ObjectMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_Key_KeyProp = { "ObjectMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData = { "ObjectMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectCookedMetaDataStore, ObjectMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectMetaData_MetaData), NewProp_ObjectMetaData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewProp_ObjectMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"ObjectCookedMetaDataStore",
	Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::PropPointers),
	sizeof(FObjectCookedMetaDataStore),
	alignof(FObjectCookedMetaDataStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectCookedMetaDataStore()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.InnerSingleton, Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore.InnerSingleton;
}
// End ScriptStruct FObjectCookedMetaDataStore

// Begin ScriptStruct FFieldCookedMetaDataStore
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore;
class UScriptStruct* FFieldCookedMetaDataStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("FieldCookedMetaDataStore"));
	}
	return Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FFieldCookedMetaDataStore>()
{
	return FFieldCookedMetaDataStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a FField.\n */" },
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a FField." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FieldMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FieldMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFieldCookedMetaDataStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_ValueProp = { "FieldMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_Key_KeyProp = { "FieldMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData = { "FieldMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFieldCookedMetaDataStore, FieldMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldMetaData_MetaData), NewProp_FieldMetaData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewProp_FieldMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"FieldCookedMetaDataStore",
	Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::PropPointers),
	sizeof(FFieldCookedMetaDataStore),
	alignof(FFieldCookedMetaDataStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFieldCookedMetaDataStore()
{
	if (!Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.InnerSingleton, Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore.InnerSingleton;
}
// End ScriptStruct FFieldCookedMetaDataStore

// Begin ScriptStruct FStructCookedMetaDataStore
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore;
class UScriptStruct* FStructCookedMetaDataStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructCookedMetaDataStore, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("StructCookedMetaDataStore"));
	}
	return Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FStructCookedMetaDataStore>()
{
	return FStructCookedMetaDataStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UStruct, including its nested FProperty data.\n */" },
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UStruct, including its nested FProperty data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectMetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertiesMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertiesMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PropertiesMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructCookedMetaDataStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_ObjectMetaData = { "ObjectMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructCookedMetaDataStore, ObjectMetaData), Z_Construct_UScriptStruct_FObjectCookedMetaDataStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectMetaData_MetaData), NewProp_ObjectMetaData_MetaData) }; // 201617579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_ValueProp = { "PropertiesMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFieldCookedMetaDataStore, METADATA_PARAMS(0, nullptr) }; // 1225742853
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_Key_KeyProp = { "PropertiesMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData = { "PropertiesMetaData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructCookedMetaDataStore, PropertiesMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertiesMetaData_MetaData), NewProp_PropertiesMetaData_MetaData) }; // 1225742853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_ObjectMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewProp_PropertiesMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"StructCookedMetaDataStore",
	Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::PropPointers),
	sizeof(FStructCookedMetaDataStore),
	alignof(FStructCookedMetaDataStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructCookedMetaDataStore()
{
	if (!Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.InnerSingleton, Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore.InnerSingleton;
}
// End ScriptStruct FStructCookedMetaDataStore

// Begin Class UEnumCookedMetaData
void UEnumCookedMetaData::StaticRegisterNativesUEnumCookedMetaData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnumCookedMetaData);
UClass* Z_Construct_UClass_UEnumCookedMetaData_NoRegister()
{
	return UEnumCookedMetaData::StaticClass();
}
struct Z_Construct_UClass_UEnumCookedMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UEnum.\n */" },
		{ "IncludePath", "UObject/CookedMetaData.h" },
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UEnum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnumMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnumCookedMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnumCookedMetaData_Statics::NewProp_EnumMetaData = { "EnumMetaData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnumCookedMetaData, EnumMetaData), Z_Construct_UScriptStruct_FObjectCookedMetaDataStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumMetaData_MetaData), NewProp_EnumMetaData_MetaData) }; // 201617579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnumCookedMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnumCookedMetaData_Statics::NewProp_EnumMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnumCookedMetaData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnumCookedMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnumCookedMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnumCookedMetaData_Statics::ClassParams = {
	&UEnumCookedMetaData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnumCookedMetaData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnumCookedMetaData_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnumCookedMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnumCookedMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnumCookedMetaData()
{
	if (!Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton, Z_Construct_UClass_UEnumCookedMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UEnumCookedMetaData>()
{
	return UEnumCookedMetaData::StaticClass();
}
UEnumCookedMetaData::UEnumCookedMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnumCookedMetaData);
UEnumCookedMetaData::~UEnumCookedMetaData() {}
// End Class UEnumCookedMetaData

// Begin Class UStructCookedMetaData
void UStructCookedMetaData::StaticRegisterNativesUStructCookedMetaData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStructCookedMetaData);
UClass* Z_Construct_UClass_UStructCookedMetaData_NoRegister()
{
	return UStructCookedMetaData::StaticClass();
}
struct Z_Construct_UClass_UStructCookedMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UScriptStruct, including its nested FProperty data.\n */" },
		{ "IncludePath", "UObject/CookedMetaData.h" },
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UScriptStruct, including its nested FProperty data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructCookedMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStructCookedMetaData_Statics::NewProp_StructMetaData = { "StructMetaData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStructCookedMetaData, StructMetaData), Z_Construct_UScriptStruct_FStructCookedMetaDataStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructMetaData_MetaData), NewProp_StructMetaData_MetaData) }; // 3999610560
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStructCookedMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructCookedMetaData_Statics::NewProp_StructMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructCookedMetaData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStructCookedMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructCookedMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructCookedMetaData_Statics::ClassParams = {
	&UStructCookedMetaData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStructCookedMetaData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStructCookedMetaData_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStructCookedMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UStructCookedMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStructCookedMetaData()
{
	if (!Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton, Z_Construct_UClass_UStructCookedMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UStructCookedMetaData>()
{
	return UStructCookedMetaData::StaticClass();
}
UStructCookedMetaData::UStructCookedMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStructCookedMetaData);
UStructCookedMetaData::~UStructCookedMetaData() {}
// End Class UStructCookedMetaData

// Begin Class UClassCookedMetaData
void UClassCookedMetaData::StaticRegisterNativesUClassCookedMetaData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassCookedMetaData);
UClass* Z_Construct_UClass_UClassCookedMetaData_NoRegister()
{
	return UClassCookedMetaData::StaticClass();
}
struct Z_Construct_UClass_UClassCookedMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooked meta-data for a UClass, including its nested FProperty and UFunction data.\n */" },
		{ "IncludePath", "UObject/CookedMetaData.h" },
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
		{ "ToolTip", "Cooked meta-data for a UClass, including its nested FProperty and UFunction data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionsMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CookedMetaData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassMetaData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionsMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionsMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionsMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassCookedMetaData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_ClassMetaData = { "ClassMetaData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassCookedMetaData, ClassMetaData), Z_Construct_UScriptStruct_FStructCookedMetaDataStore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassMetaData_MetaData), NewProp_ClassMetaData_MetaData) }; // 3999610560
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_ValueProp = { "FunctionsMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStructCookedMetaDataStore, METADATA_PARAMS(0, nullptr) }; // 3999610560
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_Key_KeyProp = { "FunctionsMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData = { "FunctionsMetaData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClassCookedMetaData, FunctionsMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionsMetaData_MetaData), NewProp_FunctionsMetaData_MetaData) }; // 3999610560
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassCookedMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_ClassMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassCookedMetaData_Statics::NewProp_FunctionsMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassCookedMetaData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClassCookedMetaData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClassCookedMetaData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassCookedMetaData_Statics::ClassParams = {
	&UClassCookedMetaData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClassCookedMetaData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClassCookedMetaData_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClassCookedMetaData_Statics::Class_MetaDataParams), Z_Construct_UClass_UClassCookedMetaData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClassCookedMetaData()
{
	if (!Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton, Z_Construct_UClass_UClassCookedMetaData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UClassCookedMetaData>()
{
	return UClassCookedMetaData::StaticClass();
}
UClassCookedMetaData::UClassCookedMetaData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClassCookedMetaData);
UClassCookedMetaData::~UClassCookedMetaData() {}
// End Class UClassCookedMetaData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObjectCookedMetaDataStore::StaticStruct, Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewStructOps, TEXT("ObjectCookedMetaDataStore"), &Z_Registration_Info_UScriptStruct_ObjectCookedMetaDataStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectCookedMetaDataStore), 201617579U) },
		{ FFieldCookedMetaDataStore::StaticStruct, Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewStructOps, TEXT("FieldCookedMetaDataStore"), &Z_Registration_Info_UScriptStruct_FieldCookedMetaDataStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFieldCookedMetaDataStore), 1225742853U) },
		{ FStructCookedMetaDataStore::StaticStruct, Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewStructOps, TEXT("StructCookedMetaDataStore"), &Z_Registration_Info_UScriptStruct_StructCookedMetaDataStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructCookedMetaDataStore), 3999610560U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnumCookedMetaData, UEnumCookedMetaData::StaticClass, TEXT("UEnumCookedMetaData"), &Z_Registration_Info_UClass_UEnumCookedMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnumCookedMetaData), 828207467U) },
		{ Z_Construct_UClass_UStructCookedMetaData, UStructCookedMetaData::StaticClass, TEXT("UStructCookedMetaData"), &Z_Registration_Info_UClass_UStructCookedMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructCookedMetaData), 2798202529U) },
		{ Z_Construct_UClass_UClassCookedMetaData, UClassCookedMetaData::StaticClass, TEXT("UClassCookedMetaData"), &Z_Registration_Info_UClass_UClassCookedMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassCookedMetaData), 381390386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_4030172121(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
