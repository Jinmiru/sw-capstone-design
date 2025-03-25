// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/PropertyPath/Private/Tests/PropertyPathHelpersTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyPathHelpersTest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROPERTYPATH_API UClass* Z_Construct_UClass_UPropertyPathTestObject();
PROPERTYPATH_API UClass* Z_Construct_UClass_UPropertyPathTestObject_NoRegister();
PROPERTYPATH_API UEnum* Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum();
PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct();
PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestBed();
PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct();
PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestStruct();
UPackage* Z_Construct_UPackage__Script_PropertyPath();
// End Cross Module References

// Begin Enum EPropertyPathTestEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyPathTestEnum;
static UEnum* EPropertyPathTestEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPropertyPathTestEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPropertyPathTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("EPropertyPathTestEnum"));
	}
	return Z_Registration_Info_UEnum_EPropertyPathTestEnum.OuterSingleton;
}
template<> PROPERTYPATH_API UEnum* StaticEnum<EPropertyPathTestEnum>()
{
	return EPropertyPathTestEnum_StaticEnum();
}
struct Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Four.Name", "Four" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
		{ "One.Name", "One" },
		{ "Three.Name", "Three" },
		{ "Two.Name", "Two" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "One", (int64)One },
		{ "Two", (int64)Two },
		{ "Three", (int64)Three },
		{ "Four", (int64)Four },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PropertyPath,
	nullptr,
	"EPropertyPathTestEnum",
	"EPropertyPathTestEnum",
	Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum()
{
	if (!Z_Registration_Info_UEnum_EPropertyPathTestEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyPathTestEnum.InnerSingleton, Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPropertyPathTestEnum.InnerSingleton;
}
// End Enum EPropertyPathTestEnum

// Begin ScriptStruct FPropertyPathTestBaseStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPathTestBaseStruct;
class UScriptStruct* FPropertyPathTestBaseStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestBaseStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPathTestBaseStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathTestBaseStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestBaseStruct.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathTestBaseStruct>()
{
	return FPropertyPathTestBaseStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathTestBaseStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
	nullptr,
	&NewStructOps,
	"PropertyPathTestBaseStruct",
	nullptr,
	0,
	sizeof(FPropertyPathTestBaseStruct),
	alignof(FPropertyPathTestBaseStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestBaseStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPathTestBaseStruct.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestBaseStruct.InnerSingleton;
}
// End ScriptStruct FPropertyPathTestBaseStruct

// Begin ScriptStruct FPropertyPathTestInnerStruct
static_assert(std::is_polymorphic<FPropertyPathTestInnerStruct>() == std::is_polymorphic<FPropertyPathTestBaseStruct>(), "USTRUCT FPropertyPathTestInnerStruct cannot be polymorphic unless super FPropertyPathTestBaseStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct;
class UScriptStruct* FPropertyPathTestInnerStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathTestInnerStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathTestInnerStruct>()
{
	return FPropertyPathTestInnerStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumOne_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumTwo_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumThree_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumFour_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumOne;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumTwo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumThree;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumFour;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathTestInnerStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestInnerStruct, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
void Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((FPropertyPathTestInnerStruct*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropertyPathTestInnerStruct), &Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bool_MetaData), NewProp_Bool_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumOne = { "EnumOne", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestInnerStruct, EnumOne), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumOne_MetaData), NewProp_EnumOne_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumTwo = { "EnumTwo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestInnerStruct, EnumTwo), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumTwo_MetaData), NewProp_EnumTwo_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumThree = { "EnumThree", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestInnerStruct, EnumThree), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumThree_MetaData), NewProp_EnumThree_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumFour = { "EnumFour", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestInnerStruct, EnumFour), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumFour_MetaData), NewProp_EnumFour_MetaData) }; // 1838019451
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestInnerStruct, Integer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Integer_MetaData), NewProp_Integer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestInnerStruct, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumThree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_EnumFour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_Integer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
	Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct,
	&NewStructOps,
	"PropertyPathTestInnerStruct",
	Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::PropPointers),
	sizeof(FPropertyPathTestInnerStruct),
	alignof(FPropertyPathTestInnerStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct.InnerSingleton;
}
// End ScriptStruct FPropertyPathTestInnerStruct

// Begin ScriptStruct FPropertyPathTestStruct
static_assert(std::is_polymorphic<FPropertyPathTestStruct>() == std::is_polymorphic<FPropertyPathTestBaseStruct>(), "USTRUCT FPropertyPathTestStruct cannot be polymorphic unless super FPropertyPathTestBaseStruct is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPathTestStruct;
class UScriptStruct* FPropertyPathTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestStruct, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathTestStruct>()
{
	return FPropertyPathTestStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumOne_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumTwo_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumThree_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumFour_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumOne;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumTwo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumThree;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumFour;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerStruct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathTestStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((FPropertyPathTestStruct*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropertyPathTestStruct), &Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bool_MetaData), NewProp_Bool_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, Integer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Integer_MetaData), NewProp_Integer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumOne = { "EnumOne", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, EnumOne), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumOne_MetaData), NewProp_EnumOne_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumTwo = { "EnumTwo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, EnumTwo), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumTwo_MetaData), NewProp_EnumTwo_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumThree = { "EnumThree", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, EnumThree), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumThree_MetaData), NewProp_EnumThree_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumFour = { "EnumFour", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, EnumFour), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumFour_MetaData), NewProp_EnumFour_MetaData) }; // 1838019451
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerStruct = { "InnerStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, InnerStruct), Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerStruct_MetaData), NewProp_InnerStruct_MetaData) }; // 1347564060
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerObject = { "InnerObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestStruct, InnerObject), Z_Construct_UClass_UPropertyPathTestObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerObject_MetaData), NewProp_InnerObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Integer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumThree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_EnumFour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewProp_InnerObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
	Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct,
	&NewStructOps,
	"PropertyPathTestStruct",
	Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::PropPointers),
	sizeof(FPropertyPathTestStruct),
	alignof(FPropertyPathTestStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestStruct.InnerSingleton;
}
// End ScriptStruct FPropertyPathTestStruct

// Begin Class UPropertyPathTestObject Function GetFloat
struct Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics
{
	struct PropertyPathTestObject_eventGetFloat_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PropertyPathTestObject_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropertyPathTestObject_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::PropertyPathTestObject_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPropertyPathTestObject_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPropertyPathTestObject::execGetFloat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloat();
	P_NATIVE_END;
}
// End Class UPropertyPathTestObject Function GetFloat

// Begin Class UPropertyPathTestObject Function GetStruct
struct Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics
{
	struct PropertyPathTestObject_eventGetStruct_Parms
	{
		FPropertyPathTestStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PropertyPathTestObject_eventGetStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(0, nullptr) }; // 3989678739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "GetStruct", nullptr, nullptr, Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropertyPathTestObject_eventGetStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::PropertyPathTestObject_eventGetStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPropertyPathTestObject_GetStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_GetStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPropertyPathTestObject::execGetStruct)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPropertyPathTestStruct*)Z_Param__Result=P_THIS->GetStruct();
	P_NATIVE_END;
}
// End Class UPropertyPathTestObject Function GetStruct

// Begin Class UPropertyPathTestObject Function GetStructConstRef
struct Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics
{
	struct PropertyPathTestObject_eventGetStructConstRef_Parms
	{
		FPropertyPathTestStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PropertyPathTestObject_eventGetStructConstRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3989678739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "GetStructConstRef", nullptr, nullptr, Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropertyPathTestObject_eventGetStructConstRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::PropertyPathTestObject_eventGetStructConstRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPropertyPathTestObject::execGetStructConstRef)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPropertyPathTestStruct*)Z_Param__Result=P_THIS->GetStructConstRef();
	P_NATIVE_END;
}
// End Class UPropertyPathTestObject Function GetStructConstRef

// Begin Class UPropertyPathTestObject Function GetStructRef
struct Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics
{
	struct PropertyPathTestObject_eventGetStructRef_Parms
	{
		FPropertyPathTestStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PropertyPathTestObject_eventGetStructRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(0, nullptr) }; // 3989678739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "GetStructRef", nullptr, nullptr, Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropertyPathTestObject_eventGetStructRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::PropertyPathTestObject_eventGetStructRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPropertyPathTestObject::execGetStructRef)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPropertyPathTestStruct*)Z_Param__Result=P_THIS->GetStructRef();
	P_NATIVE_END;
}
// End Class UPropertyPathTestObject Function GetStructRef

// Begin Class UPropertyPathTestObject Function SetFloat
struct Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics
{
	struct PropertyPathTestObject_eventSetFloat_Parms
	{
		float InFloat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PropertyPathTestObject_eventSetFloat_Parms, InFloat), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::NewProp_InFloat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "SetFloat", nullptr, nullptr, Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropertyPathTestObject_eventSetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::PropertyPathTestObject_eventSetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPropertyPathTestObject_SetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_SetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPropertyPathTestObject::execSetFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloat(Z_Param_InFloat);
	P_NATIVE_END;
}
// End Class UPropertyPathTestObject Function SetFloat

// Begin Class UPropertyPathTestObject Function SetStruct
struct Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics
{
	struct PropertyPathTestObject_eventSetStruct_Parms
	{
		FPropertyPathTestStruct InStruct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PropertyPathTestObject_eventSetStruct_Parms, InStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(0, nullptr) }; // 3989678739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::NewProp_InStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "SetStruct", nullptr, nullptr, Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropertyPathTestObject_eventSetStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::PropertyPathTestObject_eventSetStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPropertyPathTestObject_SetStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_SetStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPropertyPathTestObject::execSetStruct)
{
	P_GET_STRUCT(FPropertyPathTestStruct,Z_Param_InStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStruct(Z_Param_InStruct);
	P_NATIVE_END;
}
// End Class UPropertyPathTestObject Function SetStruct

// Begin Class UPropertyPathTestObject Function SetStructConstRef
struct Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics
{
	struct PropertyPathTestObject_eventSetStructConstRef_Parms
	{
		FPropertyPathTestStruct InStruct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PropertyPathTestObject_eventSetStructConstRef_Parms, InStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(0, nullptr) }; // 3989678739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::NewProp_InStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "SetStructConstRef", nullptr, nullptr, Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropertyPathTestObject_eventSetStructConstRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::PropertyPathTestObject_eventSetStructConstRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPropertyPathTestObject::execSetStructConstRef)
{
	P_GET_STRUCT(FPropertyPathTestStruct,Z_Param_InStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStructConstRef(Z_Param_InStruct);
	P_NATIVE_END;
}
// End Class UPropertyPathTestObject Function SetStructConstRef

// Begin Class UPropertyPathTestObject Function SetStructRef
struct Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics
{
	struct PropertyPathTestObject_eventSetStructRef_Parms
	{
		FPropertyPathTestStruct InStruct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PropertyPathTestObject_eventSetStructRef_Parms, InStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(0, nullptr) }; // 3989678739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::NewProp_InStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPropertyPathTestObject, nullptr, "SetStructRef", nullptr, nullptr, Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropertyPathTestObject_eventSetStructRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::PropertyPathTestObject_eventSetStructRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPropertyPathTestObject::execSetStructRef)
{
	P_GET_STRUCT(FPropertyPathTestStruct,Z_Param_InStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStructRef(Z_Param_InStruct);
	P_NATIVE_END;
}
// End Class UPropertyPathTestObject Function SetStructRef

// Begin Class UPropertyPathTestObject
void UPropertyPathTestObject::GetFloat_WrapperImpl(const void* Object, void* OutValue)
{
	const UPropertyPathTestObject* Obj = (const UPropertyPathTestObject*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetFloat();
}
void UPropertyPathTestObject::SetFloat_WrapperImpl(void* Object, const void* InValue)
{
	UPropertyPathTestObject* Obj = (UPropertyPathTestObject*)Object;
	float& Value = *(float*)InValue;
	Obj->SetFloat(Value);
}
void UPropertyPathTestObject::GetStruct_WrapperImpl(const void* Object, void* OutValue)
{
	const UPropertyPathTestObject* Obj = (const UPropertyPathTestObject*)Object;
	FPropertyPathTestStruct& Result = *(FPropertyPathTestStruct*)OutValue;
	Result = (FPropertyPathTestStruct)Obj->GetStruct();
}
void UPropertyPathTestObject::SetStruct_WrapperImpl(void* Object, const void* InValue)
{
	UPropertyPathTestObject* Obj = (UPropertyPathTestObject*)Object;
	FPropertyPathTestStruct& Value = *(FPropertyPathTestStruct*)InValue;
	Obj->SetStruct(Value);
}
void UPropertyPathTestObject::GetStructRef_WrapperImpl(const void* Object, void* OutValue)
{
	const UPropertyPathTestObject* Obj = (const UPropertyPathTestObject*)Object;
	FPropertyPathTestStruct& Result = *(FPropertyPathTestStruct*)OutValue;
	Result = (FPropertyPathTestStruct)Obj->GetStructRef();
}
void UPropertyPathTestObject::SetStructRef_WrapperImpl(void* Object, const void* InValue)
{
	UPropertyPathTestObject* Obj = (UPropertyPathTestObject*)Object;
	FPropertyPathTestStruct& Value = *(FPropertyPathTestStruct*)InValue;
	Obj->SetStructRef(Value);
}
void UPropertyPathTestObject::GetStructConstRef_WrapperImpl(const void* Object, void* OutValue)
{
	const UPropertyPathTestObject* Obj = (const UPropertyPathTestObject*)Object;
	FPropertyPathTestStruct& Result = *(FPropertyPathTestStruct*)OutValue;
	Result = (FPropertyPathTestStruct)Obj->GetStructConstRef();
}
void UPropertyPathTestObject::SetStructConstRef_WrapperImpl(void* Object, const void* InValue)
{
	UPropertyPathTestObject* Obj = (UPropertyPathTestObject*)Object;
	FPropertyPathTestStruct& Value = *(FPropertyPathTestStruct*)InValue;
	Obj->SetStructConstRef(Value);
}
void UPropertyPathTestObject::StaticRegisterNativesUPropertyPathTestObject()
{
	UClass* Class = UPropertyPathTestObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFloat", &UPropertyPathTestObject::execGetFloat },
		{ "GetStruct", &UPropertyPathTestObject::execGetStruct },
		{ "GetStructConstRef", &UPropertyPathTestObject::execGetStructConstRef },
		{ "GetStructRef", &UPropertyPathTestObject::execGetStructRef },
		{ "SetFloat", &UPropertyPathTestObject::execSetFloat },
		{ "SetStruct", &UPropertyPathTestObject::execSetStruct },
		{ "SetStructConstRef", &UPropertyPathTestObject::execSetStructConstRef },
		{ "SetStructRef", &UPropertyPathTestObject::execSetStructRef },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyPathTestObject);
UClass* Z_Construct_UClass_UPropertyPathTestObject_NoRegister()
{
	return UPropertyPathTestObject::StaticClass();
}
struct Z_Construct_UClass_UPropertyPathTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/PropertyPathHelpersTest.h" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumOne_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumTwo_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumThree_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumFour_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructRef_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructConstRef_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerObject_MetaData[] = {
		{ "Category", "PropertyPathHelpersTest" },
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumOne;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumTwo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumThree;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumFour;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StructConstRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPropertyPathTestObject_GetFloat, "GetFloat" }, // 2671325542
		{ &Z_Construct_UFunction_UPropertyPathTestObject_GetStruct, "GetStruct" }, // 310818686
		{ &Z_Construct_UFunction_UPropertyPathTestObject_GetStructConstRef, "GetStructConstRef" }, // 4096257808
		{ &Z_Construct_UFunction_UPropertyPathTestObject_GetStructRef, "GetStructRef" }, // 1206466108
		{ &Z_Construct_UFunction_UPropertyPathTestObject_SetFloat, "SetFloat" }, // 4115896631
		{ &Z_Construct_UFunction_UPropertyPathTestObject_SetStruct, "SetStruct" }, // 892747628
		{ &Z_Construct_UFunction_UPropertyPathTestObject_SetStructConstRef, "SetStructConstRef" }, // 1237590293
		{ &Z_Construct_UFunction_UPropertyPathTestObject_SetStructRef, "SetStructRef" }, // 3061651714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyPathTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool_SetBit(void* Obj)
{
	((UPropertyPathTestObject*)Obj)->Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPropertyPathTestObject), &Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bool_MetaData), NewProp_Bool_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumOne = { "EnumOne", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyPathTestObject, EnumOne), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumOne_MetaData), NewProp_EnumOne_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumTwo = { "EnumTwo", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyPathTestObject, EnumTwo), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumTwo_MetaData), NewProp_EnumTwo_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumThree = { "EnumThree", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyPathTestObject, EnumThree), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumThree_MetaData), NewProp_EnumThree_MetaData) }; // 1838019451
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumFour = { "EnumFour", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyPathTestObject, EnumFour), Z_Construct_UEnum_PropertyPath_EPropertyPathTestEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumFour_MetaData), NewProp_EnumFour_MetaData) }; // 1838019451
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyPathTestObject, Integer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Integer_MetaData), NewProp_Integer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyPathTestObject, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UPropertyPathTestObject::SetFloat_WrapperImpl, &UPropertyPathTestObject::GetFloat_WrapperImpl, 1, STRUCT_OFFSET(UPropertyPathTestObject, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UPropertyPathTestObject::SetStruct_WrapperImpl, &UPropertyPathTestObject::GetStruct_WrapperImpl, 1, STRUCT_OFFSET(UPropertyPathTestObject, Struct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) }; // 3989678739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructRef = { "StructRef", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UPropertyPathTestObject::SetStructRef_WrapperImpl, &UPropertyPathTestObject::GetStructRef_WrapperImpl, 1, STRUCT_OFFSET(UPropertyPathTestObject, StructRef), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructRef_MetaData), NewProp_StructRef_MetaData) }; // 3989678739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructConstRef = { "StructConstRef", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UPropertyPathTestObject::SetStructConstRef_WrapperImpl, &UPropertyPathTestObject::GetStructConstRef_WrapperImpl, 1, STRUCT_OFFSET(UPropertyPathTestObject, StructConstRef), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructConstRef_MetaData), NewProp_StructConstRef_MetaData) }; // 3989678739
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_InnerObject = { "InnerObject", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyPathTestObject, InnerObject), Z_Construct_UClass_UPropertyPathTestObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerObject_MetaData), NewProp_InnerObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyPathTestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumThree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_EnumFour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Integer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Float,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_StructConstRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyPathTestObject_Statics::NewProp_InnerObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPropertyPathTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyPathTestObject_Statics::ClassParams = {
	&UPropertyPathTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPropertyPathTestObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyPathTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UPropertyPathTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPropertyPathTestObject()
{
	if (!Z_Registration_Info_UClass_UPropertyPathTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyPathTestObject.OuterSingleton, Z_Construct_UClass_UPropertyPathTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPropertyPathTestObject.OuterSingleton;
}
template<> PROPERTYPATH_API UClass* StaticClass<UPropertyPathTestObject>()
{
	return UPropertyPathTestObject::StaticClass();
}
UPropertyPathTestObject::UPropertyPathTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyPathTestObject);
// End Class UPropertyPathTestObject

// Begin ScriptStruct FPropertyPathTestBed
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPathTestBed;
class UScriptStruct* FPropertyPathTestBed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestBed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPathTestBed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPathTestBed, (UObject*)Z_Construct_UPackage__Script_PropertyPath(), TEXT("PropertyPathTestBed"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestBed.OuterSingleton;
}
template<> PROPERTYPATH_API UScriptStruct* StaticStruct<FPropertyPathTestBed>()
{
	return FPropertyPathTestBed::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PropertyPathHelpersTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedStruct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPathTestBed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestBed, Object), Z_Construct_UClass_UPropertyPathTestObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedObject = { "ModifiedObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestBed, ModifiedObject), Z_Construct_UClass_UPropertyPathTestObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedObject_MetaData), NewProp_ModifiedObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedStruct = { "ModifiedStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestBed, ModifiedStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedStruct_MetaData), NewProp_ModifiedStruct_MetaData) }; // 3989678739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_DefaultStruct = { "DefaultStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropertyPathTestBed, DefaultStruct), Z_Construct_UScriptStruct_FPropertyPathTestStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStruct_MetaData), NewProp_DefaultStruct_MetaData) }; // 3989678739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_ModifiedStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewProp_DefaultStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PropertyPath,
	nullptr,
	&NewStructOps,
	"PropertyPathTestBed",
	Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::PropPointers),
	sizeof(FPropertyPathTestBed),
	alignof(FPropertyPathTestBed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropertyPathTestBed()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPathTestBed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPathTestBed.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropertyPathTestBed.InnerSingleton;
}
// End ScriptStruct FPropertyPathTestBed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPropertyPathTestEnum_StaticEnum, TEXT("EPropertyPathTestEnum"), &Z_Registration_Info_UEnum_EPropertyPathTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1838019451U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPropertyPathTestBaseStruct::StaticStruct, Z_Construct_UScriptStruct_FPropertyPathTestBaseStruct_Statics::NewStructOps, TEXT("PropertyPathTestBaseStruct"), &Z_Registration_Info_UScriptStruct_PropertyPathTestBaseStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPathTestBaseStruct), 48616209U) },
		{ FPropertyPathTestInnerStruct::StaticStruct, Z_Construct_UScriptStruct_FPropertyPathTestInnerStruct_Statics::NewStructOps, TEXT("PropertyPathTestInnerStruct"), &Z_Registration_Info_UScriptStruct_PropertyPathTestInnerStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPathTestInnerStruct), 1347564060U) },
		{ FPropertyPathTestStruct::StaticStruct, Z_Construct_UScriptStruct_FPropertyPathTestStruct_Statics::NewStructOps, TEXT("PropertyPathTestStruct"), &Z_Registration_Info_UScriptStruct_PropertyPathTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPathTestStruct), 3989678739U) },
		{ FPropertyPathTestBed::StaticStruct, Z_Construct_UScriptStruct_FPropertyPathTestBed_Statics::NewStructOps, TEXT("PropertyPathTestBed"), &Z_Registration_Info_UScriptStruct_PropertyPathTestBed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPathTestBed), 1949959409U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyPathTestObject, UPropertyPathTestObject::StaticClass, TEXT("UPropertyPathTestObject"), &Z_Registration_Info_UClass_UPropertyPathTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyPathTestObject), 3178153576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_2590049377(TEXT("/Script/PropertyPath"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PropertyPath_Private_Tests_PropertyPathHelpersTest_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
