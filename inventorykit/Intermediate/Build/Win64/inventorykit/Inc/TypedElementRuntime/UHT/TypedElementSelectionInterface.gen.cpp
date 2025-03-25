// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementRuntime/Public/Elements/Interfaces/TypedElementSelectionInterface.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementListProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSelectionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
TYPEDELEMENTRUNTIME_API UEnum* Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod();
TYPEDELEMENTRUNTIME_API UEnum* Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod();
TYPEDELEMENTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions();
TYPEDELEMENTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionOptions();
UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References

// Begin Enum ETypedElementSelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypedElementSelectionMethod;
static UEnum* ETypedElementSelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETypedElementSelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETypedElementSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod, (UObject*)Z_Construct_UPackage__Script_TypedElementRuntime(), TEXT("ETypedElementSelectionMethod"));
	}
	return Z_Registration_Info_UEnum_ETypedElementSelectionMethod.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UEnum* StaticEnum<ETypedElementSelectionMethod>()
{
	return ETypedElementSelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "Primary.Comment", "/** Select the \"primary\" element (eg, a component would favor selecting its owner actor) */" },
		{ "Primary.Name", "ETypedElementSelectionMethod::Primary" },
		{ "Primary.ToolTip", "Select the \"primary\" element (eg, a component would favor selecting its owner actor)" },
		{ "Secondary.Comment", "/** Select the \"secondary\" element (eg, a component would favor selecting itself) */" },
		{ "Secondary.Name", "ETypedElementSelectionMethod::Secondary" },
		{ "Secondary.ToolTip", "Select the \"secondary\" element (eg, a component would favor selecting itself)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETypedElementSelectionMethod::Primary", (int64)ETypedElementSelectionMethod::Primary },
		{ "ETypedElementSelectionMethod::Secondary", (int64)ETypedElementSelectionMethod::Secondary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TypedElementRuntime,
	nullptr,
	"ETypedElementSelectionMethod",
	"ETypedElementSelectionMethod",
	Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod()
{
	if (!Z_Registration_Info_UEnum_ETypedElementSelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypedElementSelectionMethod.InnerSingleton, Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETypedElementSelectionMethod.InnerSingleton;
}
// End Enum ETypedElementSelectionMethod

// Begin Enum ETypedElementChildInclusionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypedElementChildInclusionMethod;
static UEnum* ETypedElementChildInclusionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETypedElementChildInclusionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETypedElementChildInclusionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod, (UObject*)Z_Construct_UPackage__Script_TypedElementRuntime(), TEXT("ETypedElementChildInclusionMethod"));
	}
	return Z_Registration_Info_UEnum_ETypedElementChildInclusionMethod.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UEnum* StaticEnum<ETypedElementChildInclusionMethod>()
{
	return ETypedElementChildInclusionMethod_StaticEnum();
}
struct Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Immediate.Comment", "/** Include the immediate child elements, but do not recurse */" },
		{ "Immediate.Name", "ETypedElementChildInclusionMethod::Immediate" },
		{ "Immediate.ToolTip", "Include the immediate child elements, but do not recurse" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "None.Comment", "/** Do not include child elements */" },
		{ "None.Name", "ETypedElementChildInclusionMethod::None" },
		{ "None.ToolTip", "Do not include child elements" },
		{ "Recursive.Comment", "/** Include the immediate child elements, and recurse into their children too */" },
		{ "Recursive.Name", "ETypedElementChildInclusionMethod::Recursive" },
		{ "Recursive.ToolTip", "Include the immediate child elements, and recurse into their children too" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETypedElementChildInclusionMethod::None", (int64)ETypedElementChildInclusionMethod::None },
		{ "ETypedElementChildInclusionMethod::Immediate", (int64)ETypedElementChildInclusionMethod::Immediate },
		{ "ETypedElementChildInclusionMethod::Recursive", (int64)ETypedElementChildInclusionMethod::Recursive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TypedElementRuntime,
	nullptr,
	"ETypedElementChildInclusionMethod",
	"ETypedElementChildInclusionMethod",
	Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod()
{
	if (!Z_Registration_Info_UEnum_ETypedElementChildInclusionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypedElementChildInclusionMethod.InnerSingleton, Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETypedElementChildInclusionMethod.InnerSingleton;
}
// End Enum ETypedElementChildInclusionMethod

// Begin ScriptStruct FTypedElementIsSelectedOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementIsSelectedOptions;
class UScriptStruct* FTypedElementIsSelectedOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementIsSelectedOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementIsSelectedOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions, (UObject*)Z_Construct_UPackage__Script_TypedElementRuntime(), TEXT("TypedElementIsSelectedOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementIsSelectedOptions.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<FTypedElementIsSelectedOptions>()
{
	return FTypedElementIsSelectedOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowIndirect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|IsSelectedOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowIndirect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowIndirect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementIsSelectedOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::NewProp_bAllowIndirect_SetBit(void* Obj)
{
	((FTypedElementIsSelectedOptions*)Obj)->bAllowIndirect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::NewProp_bAllowIndirect = { "bAllowIndirect", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementIsSelectedOptions), &Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::NewProp_bAllowIndirect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowIndirect_MetaData), NewProp_bAllowIndirect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::NewProp_bAllowIndirect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
	nullptr,
	&NewStructOps,
	"TypedElementIsSelectedOptions",
	Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::PropPointers),
	sizeof(FTypedElementIsSelectedOptions),
	alignof(FTypedElementIsSelectedOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementIsSelectedOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementIsSelectedOptions.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementIsSelectedOptions.InnerSingleton;
}
// End ScriptStruct FTypedElementIsSelectedOptions

// Begin ScriptStruct FTypedElementSelectionOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSelectionOptions;
class UScriptStruct* FTypedElementSelectionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSelectionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSelectionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSelectionOptions, (UObject*)Z_Construct_UPackage__Script_TypedElementRuntime(), TEXT("TypedElementSelectionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSelectionOptions.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<FTypedElementSelectionOptions>()
{
	return FTypedElementSelectionOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowHidden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|SelectionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|SelectionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLegacyNotifications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|SelectionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarnIfLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|SelectionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSubRootSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|SelectionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildElementInclusionMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|SelectionOptions" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowHidden;
	static void NewProp_bAllowGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGroups;
	static void NewProp_bAllowLegacyNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLegacyNotifications;
	static void NewProp_bWarnIfLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnIfLocked;
	static void NewProp_bAllowSubRootSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSubRootSelection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChildElementInclusionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChildElementInclusionMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSelectionOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowHidden_SetBit(void* Obj)
{
	((FTypedElementSelectionOptions*)Obj)->bAllowHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowHidden = { "bAllowHidden", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementSelectionOptions), &Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowHidden_MetaData), NewProp_bAllowHidden_MetaData) };
void Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowGroups_SetBit(void* Obj)
{
	((FTypedElementSelectionOptions*)Obj)->bAllowGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowGroups = { "bAllowGroups", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementSelectionOptions), &Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowGroups_MetaData), NewProp_bAllowGroups_MetaData) };
void Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowLegacyNotifications_SetBit(void* Obj)
{
	((FTypedElementSelectionOptions*)Obj)->bAllowLegacyNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowLegacyNotifications = { "bAllowLegacyNotifications", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementSelectionOptions), &Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowLegacyNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowLegacyNotifications_MetaData), NewProp_bAllowLegacyNotifications_MetaData) };
void Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bWarnIfLocked_SetBit(void* Obj)
{
	((FTypedElementSelectionOptions*)Obj)->bWarnIfLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bWarnIfLocked = { "bWarnIfLocked", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementSelectionOptions), &Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bWarnIfLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarnIfLocked_MetaData), NewProp_bWarnIfLocked_MetaData) };
void Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowSubRootSelection_SetBit(void* Obj)
{
	((FTypedElementSelectionOptions*)Obj)->bAllowSubRootSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowSubRootSelection = { "bAllowSubRootSelection", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTypedElementSelectionOptions), &Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowSubRootSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSubRootSelection_MetaData), NewProp_bAllowSubRootSelection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_ChildElementInclusionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_ChildElementInclusionMethod = { "ChildElementInclusionMethod", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTypedElementSelectionOptions, ChildElementInclusionMethod), Z_Construct_UEnum_TypedElementRuntime_ETypedElementChildInclusionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildElementInclusionMethod_MetaData), NewProp_ChildElementInclusionMethod_MetaData) }; // 4225563265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowLegacyNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bWarnIfLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_bAllowSubRootSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_ChildElementInclusionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewProp_ChildElementInclusionMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
	nullptr,
	&NewStructOps,
	"TypedElementSelectionOptions",
	Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::PropPointers),
	sizeof(FTypedElementSelectionOptions),
	alignof(FTypedElementSelectionOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionOptions()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSelectionOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSelectionOptions.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSelectionOptions.InnerSingleton;
}
// End ScriptStruct FTypedElementSelectionOptions

// Begin Interface UTypedElementSelectionInterface Function AllowSelectionModifiers
struct Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics
{
	struct TypedElementSelectionInterface_eventAllowSelectionModifiers_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FScriptTypedElementListProxy InSelectionSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Selection" },
		{ "Comment", "/**\n\x09 * Test to see whether selection modifiers (Ctrl or Shift) are allowed while selecting this element.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "ToolTip", "Test to see whether selection modifiers (Ctrl or Shift) are allowed while selecting this element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionSet;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventAllowSelectionModifiers_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::NewProp_InSelectionSet = { "InSelectionSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventAllowSelectionModifiers_Parms, InSelectionSet), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionSet_MetaData), NewProp_InSelectionSet_MetaData) }; // 3651675797
void Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionInterface_eventAllowSelectionModifiers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionInterface_eventAllowSelectionModifiers_Parms), &Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::NewProp_InSelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionInterface, nullptr, "AllowSelectionModifiers", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::TypedElementSelectionInterface_eventAllowSelectionModifiers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::TypedElementSelectionInterface_eventAllowSelectionModifiers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementSelectionInterface::execAllowSelectionModifiers)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_InSelectionSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AllowSelectionModifiers(Z_Param_Out_InElementHandle,Z_Param_InSelectionSet);
	P_NATIVE_END;
}
// End Interface UTypedElementSelectionInterface Function AllowSelectionModifiers

// Begin Interface UTypedElementSelectionInterface Function CanDeselectElement
struct Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics
{
	struct TypedElementSelectionInterface_eventCanDeselectElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FTypedElementSelectionOptions InSelectionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Selection" },
		{ "Comment", "/**\n\x09 * Test to see whether the given element can be deselected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "ToolTip", "Test to see whether the given element can be deselected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventCanDeselectElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventCanDeselectElement_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionOptions_MetaData), NewProp_InSelectionOptions_MetaData) }; // 76356554
void Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionInterface_eventCanDeselectElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionInterface_eventCanDeselectElement_Parms), &Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::NewProp_InSelectionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionInterface, nullptr, "CanDeselectElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::TypedElementSelectionInterface_eventCanDeselectElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::TypedElementSelectionInterface_eventCanDeselectElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementSelectionInterface::execCanDeselectElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FTypedElementSelectionOptions,Z_Param_Out_InSelectionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanDeselectElement(Z_Param_Out_InElementHandle,Z_Param_Out_InSelectionOptions);
	P_NATIVE_END;
}
// End Interface UTypedElementSelectionInterface Function CanDeselectElement

// Begin Interface UTypedElementSelectionInterface Function CanSelectElement
struct Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics
{
	struct TypedElementSelectionInterface_eventCanSelectElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FTypedElementSelectionOptions InSelectionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Selection" },
		{ "Comment", "/**\n\x09 * Test to see whether the given element can be selected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "ToolTip", "Test to see whether the given element can be selected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventCanSelectElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventCanSelectElement_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionOptions_MetaData), NewProp_InSelectionOptions_MetaData) }; // 76356554
void Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionInterface_eventCanSelectElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionInterface_eventCanSelectElement_Parms), &Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::NewProp_InSelectionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionInterface, nullptr, "CanSelectElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::TypedElementSelectionInterface_eventCanSelectElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::TypedElementSelectionInterface_eventCanSelectElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementSelectionInterface::execCanSelectElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT_REF(FTypedElementSelectionOptions,Z_Param_Out_InSelectionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSelectElement(Z_Param_Out_InElementHandle,Z_Param_Out_InSelectionOptions);
	P_NATIVE_END;
}
// End Interface UTypedElementSelectionInterface Function CanSelectElement

// Begin Interface UTypedElementSelectionInterface Function DeselectElement
struct Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics
{
	struct TypedElementSelectionInterface_eventDeselectElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FScriptTypedElementListProxy InSelectionSet;
		FTypedElementSelectionOptions InSelectionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to deselect the given element.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "ToolTip", "Attempt to deselect the given element.\n@return True if the selection was changed, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventDeselectElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_InSelectionSet = { "InSelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventDeselectElement_Parms, InSelectionSet), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(0, nullptr) }; // 3651675797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventDeselectElement_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionOptions_MetaData), NewProp_InSelectionOptions_MetaData) }; // 76356554
void Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionInterface_eventDeselectElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionInterface_eventDeselectElement_Parms), &Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_InSelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_InSelectionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionInterface, nullptr, "DeselectElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::TypedElementSelectionInterface_eventDeselectElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::TypedElementSelectionInterface_eventDeselectElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementSelectionInterface::execDeselectElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_InSelectionSet);
	P_GET_STRUCT_REF(FTypedElementSelectionOptions,Z_Param_Out_InSelectionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeselectElement(Z_Param_Out_InElementHandle,Z_Param_InSelectionSet,Z_Param_Out_InSelectionOptions);
	P_NATIVE_END;
}
// End Interface UTypedElementSelectionInterface Function DeselectElement

// Begin Interface UTypedElementSelectionInterface Function GetSelectionElement
struct Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics
{
	struct TypedElementSelectionInterface_eventGetSelectionElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FScriptTypedElementListProxy InCurrentSelection;
		ETypedElementSelectionMethod InSelectionMethod;
		FScriptTypedElementHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Selection" },
		{ "Comment", "/**\n\x09 * Given an element, return the element that should actually perform a selection operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "ToolTip", "Given an element, return the element that should actually perform a selection operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCurrentSelection_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCurrentSelection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSelectionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSelectionMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventGetSelectionElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_InCurrentSelection = { "InCurrentSelection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventGetSelectionElement_Parms, InCurrentSelection), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCurrentSelection_MetaData), NewProp_InCurrentSelection_MetaData) }; // 3651675797
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_InSelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_InSelectionMethod = { "InSelectionMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventGetSelectionElement_Parms, InSelectionMethod), Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionMethod_MetaData), NewProp_InSelectionMethod_MetaData) }; // 3111926800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventGetSelectionElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_InCurrentSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_InSelectionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_InSelectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionInterface, nullptr, "GetSelectionElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::TypedElementSelectionInterface_eventGetSelectionElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::TypedElementSelectionInterface_eventGetSelectionElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementSelectionInterface::execGetSelectionElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_InCurrentSelection);
	P_GET_ENUM(ETypedElementSelectionMethod,Z_Param_InSelectionMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementHandle*)Z_Param__Result=P_THIS->GetSelectionElement(Z_Param_Out_InElementHandle,Z_Param_InCurrentSelection,ETypedElementSelectionMethod(Z_Param_InSelectionMethod));
	P_NATIVE_END;
}
// End Interface UTypedElementSelectionInterface Function GetSelectionElement

// Begin Interface UTypedElementSelectionInterface Function IsElementSelected
struct Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics
{
	struct TypedElementSelectionInterface_eventIsElementSelected_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FScriptTypedElementListProxy InSelectionSet;
		FTypedElementIsSelectedOptions InSelectionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Selection" },
		{ "Comment", "/**\n\x09 * Test to see whether the given element is currently considered selected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "ToolTip", "Test to see whether the given element is currently considered selected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionSet_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventIsElementSelected_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_InSelectionSet = { "InSelectionSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventIsElementSelected_Parms, InSelectionSet), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionSet_MetaData), NewProp_InSelectionSet_MetaData) }; // 3651675797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventIsElementSelected_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionOptions_MetaData), NewProp_InSelectionOptions_MetaData) }; // 1553819241
void Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionInterface_eventIsElementSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionInterface_eventIsElementSelected_Parms), &Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_InSelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_InSelectionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionInterface, nullptr, "IsElementSelected", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::TypedElementSelectionInterface_eventIsElementSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::TypedElementSelectionInterface_eventIsElementSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementSelectionInterface::execIsElementSelected)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_InSelectionSet);
	P_GET_STRUCT_REF(FTypedElementIsSelectedOptions,Z_Param_Out_InSelectionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsElementSelected(Z_Param_Out_InElementHandle,Z_Param_InSelectionSet,Z_Param_Out_InSelectionOptions);
	P_NATIVE_END;
}
// End Interface UTypedElementSelectionInterface Function IsElementSelected

// Begin Interface UTypedElementSelectionInterface Function SelectElement
struct Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics
{
	struct TypedElementSelectionInterface_eventSelectElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FScriptTypedElementListProxy InSelectionSet;
		FTypedElementSelectionOptions InSelectionOptions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to select the given element.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
		{ "ToolTip", "Attempt to select the given element.\n@return True if the selection was changed, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventSelectElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_InSelectionSet = { "InSelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventSelectElement_Parms, InSelectionSet), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(0, nullptr) }; // 3651675797
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementSelectionInterface_eventSelectElement_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSelectionOptions_MetaData), NewProp_InSelectionOptions_MetaData) }; // 76356554
void Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementSelectionInterface_eventSelectElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementSelectionInterface_eventSelectElement_Parms), &Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_InSelectionSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_InSelectionOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionInterface, nullptr, "SelectElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::TypedElementSelectionInterface_eventSelectElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::TypedElementSelectionInterface_eventSelectElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementSelectionInterface::execSelectElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_InSelectionSet);
	P_GET_STRUCT_REF(FTypedElementSelectionOptions,Z_Param_Out_InSelectionOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectElement(Z_Param_Out_InElementHandle,Z_Param_InSelectionSet,Z_Param_Out_InSelectionOptions);
	P_NATIVE_END;
}
// End Interface UTypedElementSelectionInterface Function SelectElement

// Begin Interface UTypedElementSelectionInterface
void UTypedElementSelectionInterface::StaticRegisterNativesUTypedElementSelectionInterface()
{
	UClass* Class = UTypedElementSelectionInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AllowSelectionModifiers", &ITypedElementSelectionInterface::execAllowSelectionModifiers },
		{ "CanDeselectElement", &ITypedElementSelectionInterface::execCanDeselectElement },
		{ "CanSelectElement", &ITypedElementSelectionInterface::execCanSelectElement },
		{ "DeselectElement", &ITypedElementSelectionInterface::execDeselectElement },
		{ "GetSelectionElement", &ITypedElementSelectionInterface::execGetSelectionElement },
		{ "IsElementSelected", &ITypedElementSelectionInterface::execIsElementSelected },
		{ "SelectElement", &ITypedElementSelectionInterface::execSelectElement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementSelectionInterface);
UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister()
{
	return UTypedElementSelectionInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementSelectionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementSelectionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementSelectionInterface_AllowSelectionModifiers, "AllowSelectionModifiers" }, // 2050695128
		{ &Z_Construct_UFunction_UTypedElementSelectionInterface_CanDeselectElement, "CanDeselectElement" }, // 2227057287
		{ &Z_Construct_UFunction_UTypedElementSelectionInterface_CanSelectElement, "CanSelectElement" }, // 573080538
		{ &Z_Construct_UFunction_UTypedElementSelectionInterface_DeselectElement, "DeselectElement" }, // 1710472033
		{ &Z_Construct_UFunction_UTypedElementSelectionInterface_GetSelectionElement, "GetSelectionElement" }, // 1248682805
		{ &Z_Construct_UFunction_UTypedElementSelectionInterface_IsElementSelected, "IsElementSelected" }, // 677247953
		{ &Z_Construct_UFunction_UTypedElementSelectionInterface_SelectElement, "SelectElement" }, // 1943927973
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementSelectionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementSelectionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSelectionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementSelectionInterface_Statics::ClassParams = {
	&UTypedElementSelectionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSelectionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementSelectionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementSelectionInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementSelectionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementSelectionInterface.OuterSingleton, Z_Construct_UClass_UTypedElementSelectionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementSelectionInterface.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementSelectionInterface>()
{
	return UTypedElementSelectionInterface::StaticClass();
}
UTypedElementSelectionInterface::UTypedElementSelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementSelectionInterface);
UTypedElementSelectionInterface::~UTypedElementSelectionInterface() {}
// End Interface UTypedElementSelectionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETypedElementSelectionMethod_StaticEnum, TEXT("ETypedElementSelectionMethod"), &Z_Registration_Info_UEnum_ETypedElementSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3111926800U) },
		{ ETypedElementChildInclusionMethod_StaticEnum, TEXT("ETypedElementChildInclusionMethod"), &Z_Registration_Info_UEnum_ETypedElementChildInclusionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4225563265U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTypedElementIsSelectedOptions::StaticStruct, Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics::NewStructOps, TEXT("TypedElementIsSelectedOptions"), &Z_Registration_Info_UScriptStruct_TypedElementIsSelectedOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementIsSelectedOptions), 1553819241U) },
		{ FTypedElementSelectionOptions::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics::NewStructOps, TEXT("TypedElementSelectionOptions"), &Z_Registration_Info_UScriptStruct_TypedElementSelectionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSelectionOptions), 76356554U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementSelectionInterface, UTypedElementSelectionInterface::StaticClass, TEXT("UTypedElementSelectionInterface"), &Z_Registration_Info_UClass_UTypedElementSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementSelectionInterface), 708723555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_2555461852(TEXT("/Script/TypedElementRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
