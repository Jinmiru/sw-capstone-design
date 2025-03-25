// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/MultiBox/ToolMenuBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATE_API UClass* Z_Construct_UClass_UToolMenuBase();
SLATE_API UClass* Z_Construct_UClass_UToolMenuBase_NoRegister();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenu();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuEntry();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuSection();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuProfile();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Enum ECustomizedToolMenuVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility;
static UEnum* ECustomizedToolMenuVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("ECustomizedToolMenuVisibility"));
	}
	return Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton;
}
template<> SLATE_API UEnum* StaticEnum<ECustomizedToolMenuVisibility>()
{
	return ECustomizedToolMenuVisibility_StaticEnum();
}
struct Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Hidden.Name", "ECustomizedToolMenuVisibility::Hidden" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
		{ "None.Name", "ECustomizedToolMenuVisibility::None" },
		{ "Visible.Name", "ECustomizedToolMenuVisibility::Visible" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomizedToolMenuVisibility::None", (int64)ECustomizedToolMenuVisibility::None },
		{ "ECustomizedToolMenuVisibility::Visible", (int64)ECustomizedToolMenuVisibility::Visible },
		{ "ECustomizedToolMenuVisibility::Hidden", (int64)ECustomizedToolMenuVisibility::Hidden },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	"ECustomizedToolMenuVisibility",
	"ECustomizedToolMenuVisibility",
	Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility()
{
	if (!Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton, Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton;
}
// End Enum ECustomizedToolMenuVisibility

// Begin ScriptStruct FCustomizedToolMenuEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry;
class UScriptStruct* FCustomizedToolMenuEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuEntry>()
{
	return FCustomizedToolMenuEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizedToolMenuEntry, Visibility), Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 1963765887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"CustomizedToolMenuEntry",
	Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers),
	sizeof(FCustomizedToolMenuEntry),
	alignof(FCustomizedToolMenuEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuEntry()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.InnerSingleton;
}
// End ScriptStruct FCustomizedToolMenuEntry

// Begin ScriptStruct FCustomizedToolMenuSection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection;
class UScriptStruct* FCustomizedToolMenuSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuSection, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuSection"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuSection>()
{
	return FCustomizedToolMenuSection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Visibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizedToolMenuSection, Visibility), Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility_MetaData), NewProp_Visibility_MetaData) }; // 1963765887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"CustomizedToolMenuSection",
	Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers),
	sizeof(FCustomizedToolMenuSection),
	alignof(FCustomizedToolMenuSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuSection()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.InnerSingleton;
}
// End ScriptStruct FCustomizedToolMenuSection

// Begin ScriptStruct FCustomizedToolMenuNameArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray;
class UScriptStruct* FCustomizedToolMenuNameArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuNameArray"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuNameArray>()
{
	return FCustomizedToolMenuNameArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuNameArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizedToolMenuNameArray, Names), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Names_MetaData), NewProp_Names_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"CustomizedToolMenuNameArray",
	Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers),
	sizeof(FCustomizedToolMenuNameArray),
	alignof(FCustomizedToolMenuNameArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.InnerSingleton;
}
// End ScriptStruct FCustomizedToolMenuNameArray

// Begin ScriptStruct FToolMenuProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuProfile;
class UScriptStruct* FToolMenuProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuProfile, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("ToolMenuProfile"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuProfile.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FToolMenuProfile>()
{
	return FToolMenuProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * A menu profile is a way for systems to modify instances of a menu by showing/hiding specific items. You can have multiple profiles active on\n * a single menu at the same time.\n */" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
		{ "ToolTip", "* A menu profile is a way for systems to modify instances of a menu by showing/hiding specific items. You can have multiple profiles active on\n* a single menu at the same time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuppressExtenders_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Entries_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Sections_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SuppressExtenders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SuppressExtenders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuProfile, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Entries_ValueProp = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuEntry, METADATA_PARAMS(0, nullptr) }; // 2298721381
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Entries_Key_KeyProp = { "Entries_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuProfile, Entries), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2298721381
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Sections_ValueProp = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuSection, METADATA_PARAMS(0, nullptr) }; // 1091317497
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Sections_Key_KeyProp = { "Sections_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuProfile, Sections), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) }; // 1091317497
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_SuppressExtenders_Inner = { "SuppressExtenders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_SuppressExtenders = { "SuppressExtenders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuProfile, SuppressExtenders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuppressExtenders_MetaData), NewProp_SuppressExtenders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Entries_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Entries_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Sections_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Sections_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_SuppressExtenders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewProp_SuppressExtenders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"ToolMenuProfile",
	Z_Construct_UScriptStruct_FToolMenuProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuProfile_Statics::PropPointers),
	sizeof(FToolMenuProfile),
	alignof(FToolMenuProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuProfile()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuProfile.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuProfile.InnerSingleton;
}
// End ScriptStruct FToolMenuProfile

// Begin ScriptStruct FCustomizedToolMenu
static_assert(std::is_polymorphic<FCustomizedToolMenu>() == std::is_polymorphic<FToolMenuProfile>(), "USTRUCT FCustomizedToolMenu cannot be polymorphic unless super FToolMenuProfile is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedToolMenu;
class UScriptStruct* FCustomizedToolMenu::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenu.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedToolMenu.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenu, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenu"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenu.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenu>()
{
	return FCustomizedToolMenu::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * A menu customization is a specialization of menu profiles - that allows for advanced behavior such as modifying the order of sections/entries\n * A menu can only have one customization active at a time\n */" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
		{ "ToolTip", "* A menu customization is a specialization of menu profiles - that allows for advanced behavior such as modifying the order of sections/entries\n* A menu can only have one customization active at a time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryOrder_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EntryOrder_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EntryOrder;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenu>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_ValueProp = { "EntryOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray, METADATA_PARAMS(0, nullptr) }; // 1527859299
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_Key_KeyProp = { "EntryOrder_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder = { "EntryOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizedToolMenu, EntryOrder), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryOrder_MetaData), NewProp_EntryOrder_MetaData) }; // 1527859299
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_Inner = { "SectionOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder = { "SectionOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizedToolMenu, SectionOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionOrder_MetaData), NewProp_SectionOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	Z_Construct_UScriptStruct_FToolMenuProfile,
	&NewStructOps,
	"CustomizedToolMenu",
	Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers),
	sizeof(FCustomizedToolMenu),
	alignof(FCustomizedToolMenu),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenu()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenu.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedToolMenu.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenu.InnerSingleton;
}
// End ScriptStruct FCustomizedToolMenu

// Begin Class UToolMenuBase
void UToolMenuBase::StaticRegisterNativesUToolMenuBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuBase);
UClass* Z_Construct_UClass_UToolMenuBase_NoRegister()
{
	return UToolMenuBase::StaticClass();
}
struct Z_Construct_UClass_UToolMenuBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Framework/MultiBox/ToolMenuBase.h" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolMenuBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuBase_Statics::ClassParams = {
	&UToolMenuBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuBase()
{
	if (!Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton, Z_Construct_UClass_UToolMenuBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton;
}
template<> SLATE_API UClass* StaticClass<UToolMenuBase>()
{
	return UToolMenuBase::StaticClass();
}
UToolMenuBase::UToolMenuBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuBase);
UToolMenuBase::~UToolMenuBase() {}
// End Class UToolMenuBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomizedToolMenuVisibility_StaticEnum, TEXT("ECustomizedToolMenuVisibility"), &Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1963765887U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCustomizedToolMenuEntry::StaticStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewStructOps, TEXT("CustomizedToolMenuEntry"), &Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedToolMenuEntry), 2298721381U) },
		{ FCustomizedToolMenuSection::StaticStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewStructOps, TEXT("CustomizedToolMenuSection"), &Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedToolMenuSection), 1091317497U) },
		{ FCustomizedToolMenuNameArray::StaticStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewStructOps, TEXT("CustomizedToolMenuNameArray"), &Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedToolMenuNameArray), 1527859299U) },
		{ FToolMenuProfile::StaticStruct, Z_Construct_UScriptStruct_FToolMenuProfile_Statics::NewStructOps, TEXT("ToolMenuProfile"), &Z_Registration_Info_UScriptStruct_ToolMenuProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuProfile), 4262890192U) },
		{ FCustomizedToolMenu::StaticStruct, Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewStructOps, TEXT("CustomizedToolMenu"), &Z_Registration_Info_UScriptStruct_CustomizedToolMenu, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedToolMenu), 3307897102U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuBase, UToolMenuBase::StaticClass, TEXT("UToolMenuBase"), &Z_Registration_Info_UClass_UToolMenuBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuBase), 565510413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_2798275719(TEXT("/Script/Slate"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
