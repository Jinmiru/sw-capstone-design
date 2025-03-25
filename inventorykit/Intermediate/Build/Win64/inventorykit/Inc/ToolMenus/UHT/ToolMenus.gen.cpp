// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenus.h"
#include "Developer/ToolMenus/Public/ToolMenuContext.h"
#include "Runtime/Slate/Public/Framework/MultiBox/ToolMenuBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenus() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultiBoxType();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenu();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuProfile();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuProfileContext();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuProfileContext_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenus();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenus_NoRegister();
TOOLMENUS_API UEnum* Z_Construct_UEnum_ToolMenus_EToolMenuInsertType();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuProfileMap();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin Class UToolMenuProfileContext
void UToolMenuProfileContext::StaticRegisterNativesUToolMenuProfileContext()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuProfileContext);
UClass* Z_Construct_UClass_UToolMenuProfileContext_NoRegister()
{
	return UToolMenuProfileContext::StaticClass();
}
struct Z_Construct_UClass_UToolMenuProfileContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * A global context that any menu can add/modify to specify which profiles are currently active\n */" },
		{ "IncludePath", "ToolMenus.h" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "* A global context that any menu can add/modify to specify which profiles are currently active" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuProfileContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolMenuProfileContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UToolMenuContextBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuProfileContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuProfileContext_Statics::ClassParams = {
	&UToolMenuProfileContext::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuProfileContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuProfileContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuProfileContext()
{
	if (!Z_Registration_Info_UClass_UToolMenuProfileContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuProfileContext.OuterSingleton, Z_Construct_UClass_UToolMenuProfileContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuProfileContext.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenuProfileContext>()
{
	return UToolMenuProfileContext::StaticClass();
}
UToolMenuProfileContext::UToolMenuProfileContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuProfileContext);
UToolMenuProfileContext::~UToolMenuProfileContext() {}
// End Class UToolMenuProfileContext

// Begin ScriptStruct FToolMenuProfileMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuProfileMap;
class UScriptStruct* FToolMenuProfileMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuProfileMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuProfileMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuProfileMap, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuProfileMap"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuProfileMap.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuProfileMap>()
{
	return FToolMenuProfileMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Struct to store all the profiles for a menu for serialization\n */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "* Struct to store all the profiles for a menu for serialization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuProfiles_MetaData[] = {
		{ "Comment", "/*profile name*/" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "profile name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuProfiles_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuProfiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MenuProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuProfileMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::NewProp_MenuProfiles_ValueProp = { "MenuProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FToolMenuProfile, METADATA_PARAMS(0, nullptr) }; // 4262890192
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::NewProp_MenuProfiles_Key_KeyProp = { "MenuProfiles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::NewProp_MenuProfiles = { "MenuProfiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuProfileMap, MenuProfiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuProfiles_MetaData), NewProp_MenuProfiles_MetaData) }; // 4262890192
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::NewProp_MenuProfiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::NewProp_MenuProfiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::NewProp_MenuProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuProfileMap",
	Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::PropPointers),
	sizeof(FToolMenuProfileMap),
	alignof(FToolMenuProfileMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuProfileMap()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuProfileMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuProfileMap.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuProfileMap.InnerSingleton;
}
// End ScriptStruct FToolMenuProfileMap

// Begin Class UToolMenus Function AddMenuEntryObject
struct Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics
{
	struct ToolMenus_eventAddMenuEntryObject_Parms
	{
		UToolMenuEntryScript* MenuEntryObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Registers menu entry object from blueprint/script */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Registers menu entry object from blueprint/script" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuEntryObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_MenuEntryObject = { "MenuEntryObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventAddMenuEntryObject_Parms, MenuEntryObject), Z_Construct_UClass_UToolMenuEntryScript_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ToolMenus_eventAddMenuEntryObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToolMenus_eventAddMenuEntryObject_Parms), &Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_MenuEntryObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "AddMenuEntryObject", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::ToolMenus_eventAddMenuEntryObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::ToolMenus_eventAddMenuEntryObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_AddMenuEntryObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_AddMenuEntryObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execAddMenuEntryObject)
{
	P_GET_OBJECT(UToolMenuEntryScript,Z_Param_MenuEntryObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UToolMenus::AddMenuEntryObject(Z_Param_MenuEntryObject);
	P_NATIVE_END;
}
// End Class UToolMenus Function AddMenuEntryObject

// Begin Class UToolMenus Function ExtendMenu
struct Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics
{
	struct ToolMenus_eventExtendMenu_Parms
	{
		FName Name;
		UToolMenu* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Extends a menu without registering the menu or claiming ownership of it. Ok to call even if menu does not exist yet.\n\x09 * @param\x09Name\x09Name of the menu to extend\n\x09 * @return\x09ToolMenu\x09Menu object\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Extends a menu without registering the menu or claiming ownership of it. Ok to call even if menu does not exist yet.\n@param       Name    Name of the menu to extend\n@return      ToolMenu        Menu object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventExtendMenu_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventExtendMenu_Parms, ReturnValue), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "ExtendMenu", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::ToolMenus_eventExtendMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::ToolMenus_eventExtendMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_ExtendMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_ExtendMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execExtendMenu)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UToolMenu**)Z_Param__Result=P_THIS->ExtendMenu(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UToolMenus Function ExtendMenu

// Begin Class UToolMenus Function FindContext
struct Z_Construct_UFunction_UToolMenus_FindContext_Statics
{
	struct ToolMenus_eventFindContext_Parms
	{
		FToolMenuContext InContext;
		UClass* InClass;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Finds a context object of a given class if it exists */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Finds a context object of a given class if it exists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventFindContext_Parms, InContext), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InContext_MetaData), NewProp_InContext_MetaData) }; // 1834469202
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventFindContext_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventFindContext_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_FindContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_InClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_FindContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "FindContext", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_FindContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_FindContext_Statics::ToolMenus_eventFindContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_FindContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_FindContext_Statics::ToolMenus_eventFindContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_FindContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_FindContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execFindContext)
{
	P_GET_STRUCT_REF(FToolMenuContext,Z_Param_Out_InContext);
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UToolMenus::FindContext(Z_Param_Out_InContext,Z_Param_InClass);
	P_NATIVE_END;
}
// End Class UToolMenus Function FindContext

// Begin Class UToolMenus Function FindMenu
struct Z_Construct_UFunction_UToolMenus_FindMenu_Statics
{
	struct ToolMenus_eventFindMenu_Parms
	{
		FName Name;
		UToolMenu* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Finds an existing menu that has been registered or extended.\n\x09 * @param\x09Name\x09Name of the menu to find.\n\x09 * @return\x09ToolMenu\x09Menu object. Returns null if not found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Finds an existing menu that has been registered or extended.\n@param       Name    Name of the menu to find.\n@return      ToolMenu        Menu object. Returns null if not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventFindMenu_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventFindMenu_Parms, ReturnValue), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_FindMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_FindMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_FindMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "FindMenu", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_FindMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::ToolMenus_eventFindMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_FindMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_FindMenu_Statics::ToolMenus_eventFindMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_FindMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_FindMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execFindMenu)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UToolMenu**)Z_Param__Result=P_THIS->FindMenu(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UToolMenus Function FindMenu

// Begin Class UToolMenus Function Get
struct Z_Construct_UFunction_UToolMenus_Get_Statics
{
	struct ToolMenus_eventGet_Parms
	{
		UToolMenus* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventGet_Parms, ReturnValue), Z_Construct_UClass_UToolMenus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_Get_Statics::ToolMenus_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_Get_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_Get_Statics::ToolMenus_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UToolMenus**)Z_Param__Result=UToolMenus::Get();
	P_NATIVE_END;
}
// End Class UToolMenus Function Get

// Begin Class UToolMenus Function IsMenuRegistered
struct Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics
{
	struct ToolMenus_eventIsMenuRegistered_Parms
	{
		FName Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Determines if a menu has already been registered.\n\x09 * @param\x09Name\x09Name of the menu to find.\n\x09 * @return\x09""bool\x09True if menu has already been registered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Determines if a menu has already been registered.\n@param       Name    Name of the menu to find.\n@return      bool    True if menu has already been registered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventIsMenuRegistered_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ToolMenus_eventIsMenuRegistered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToolMenus_eventIsMenuRegistered_Parms), &Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "IsMenuRegistered", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::ToolMenus_eventIsMenuRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::ToolMenus_eventIsMenuRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_IsMenuRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_IsMenuRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execIsMenuRegistered)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMenuRegistered(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UToolMenus Function IsMenuRegistered

// Begin Class UToolMenus Function RefreshAllWidgets
struct Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Rebuilds all currently generated widgets next tick. */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Rebuilds all currently generated widgets next tick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RefreshAllWidgets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UToolMenus_RefreshAllWidgets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RefreshAllWidgets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execRefreshAllWidgets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshAllWidgets();
	P_NATIVE_END;
}
// End Class UToolMenus Function RefreshAllWidgets

// Begin Class UToolMenus Function RefreshMenuWidget
struct Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics
{
	struct ToolMenus_eventRefreshMenuWidget_Parms
	{
		FName Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Rebuilds all widgets generated from a specific menu. */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Rebuilds all widgets generated from a specific menu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRefreshMenuWidget_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ToolMenus_eventRefreshMenuWidget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToolMenus_eventRefreshMenuWidget_Parms), &Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RefreshMenuWidget", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::ToolMenus_eventRefreshMenuWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::ToolMenus_eventRefreshMenuWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_RefreshMenuWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RefreshMenuWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execRefreshMenuWidget)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RefreshMenuWidget(Z_Param_Name);
	P_NATIVE_END;
}
// End Class UToolMenus Function RefreshMenuWidget

// Begin Class UToolMenus Function RegisterMenu
struct Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics
{
	struct ToolMenus_eventRegisterMenu_Parms
	{
		FName Name;
		FName Parent;
		EMultiBoxType Type;
		bool bWarnIfAlreadyRegistered;
		UToolMenu* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/**\n\x09 * Registers a menu by name\n\x09 * @param\x09Parent\x09Optional name of a menu to layer on top of.\n\x09 * @param\x09Type\x09Type of menu that will be generated such as: ToolBar, VerticalToolBar, etc..\n\x09 * @param\x09""bWarnIfAlreadyRegistered\x09""Display warning if already registered\n\x09 * @return\x09ToolMenu\x09Menu object\n\x09 */" },
		{ "CPP_Default_bWarnIfAlreadyRegistered", "true" },
		{ "CPP_Default_Parent", "None" },
		{ "CPP_Default_Type", "Menu" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Registers a menu by name\n@param       Parent  Optional name of a menu to layer on top of.\n@param       Type    Type of menu that will be generated such as: ToolBar, VerticalToolBar, etc..\n@param       bWarnIfAlreadyRegistered        Display warning if already registered\n@return      ToolMenu        Menu object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bWarnIfAlreadyRegistered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnIfAlreadyRegistered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRegisterMenu_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRegisterMenu_Parms, Parent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRegisterMenu_Parms, Type), Z_Construct_UEnum_Slate_EMultiBoxType, METADATA_PARAMS(0, nullptr) }; // 3653144851
void Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered_SetBit(void* Obj)
{
	((ToolMenus_eventRegisterMenu_Parms*)Obj)->bWarnIfAlreadyRegistered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered = { "bWarnIfAlreadyRegistered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToolMenus_eventRegisterMenu_Parms), &Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRegisterMenu_Parms, ReturnValue), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_bWarnIfAlreadyRegistered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RegisterMenu", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::ToolMenus_eventRegisterMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::ToolMenus_eventRegisterMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_RegisterMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RegisterMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execRegisterMenu)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FNameProperty,Z_Param_Parent);
	P_GET_ENUM(EMultiBoxType,Z_Param_Type);
	P_GET_UBOOL(Z_Param_bWarnIfAlreadyRegistered);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UToolMenu**)Z_Param__Result=P_THIS->RegisterMenu(Z_Param_Name,Z_Param_Parent,EMultiBoxType(Z_Param_Type),Z_Param_bWarnIfAlreadyRegistered);
	P_NATIVE_END;
}
// End Class UToolMenus Function RegisterMenu

// Begin Class UToolMenus Function RemoveEntry
struct Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics
{
	struct ToolMenus_eventRemoveEntry_Parms
	{
		FName MenuName;
		FName Section;
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Removes a menu entry from a given menu and section */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Removes a menu entry from a given menu and section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRemoveEntry_Parms, MenuName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuName_MetaData), NewProp_MenuName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRemoveEntry_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRemoveEntry_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_MenuName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RemoveEntry", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::ToolMenus_eventRemoveEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::ToolMenus_eventRemoveEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_RemoveEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RemoveEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execRemoveEntry)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
	P_GET_PROPERTY(FNameProperty,Z_Param_Section);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEntry(Z_Param_MenuName,Z_Param_Section,Z_Param_Name);
	P_NATIVE_END;
}
// End Class UToolMenus Function RemoveEntry

// Begin Class UToolMenus Function RemoveMenu
struct Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics
{
	struct ToolMenus_eventRemoveMenu_Parms
	{
		FName MenuName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Unregisters a menu by name */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Unregisters a menu by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRemoveMenu_Parms, MenuName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuName_MetaData), NewProp_MenuName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::NewProp_MenuName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RemoveMenu", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::ToolMenus_eventRemoveMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::ToolMenus_eventRemoveMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_RemoveMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RemoveMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execRemoveMenu)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMenu(Z_Param_MenuName);
	P_NATIVE_END;
}
// End Class UToolMenus Function RemoveMenu

// Begin Class UToolMenus Function RemoveSection
struct Z_Construct_UFunction_UToolMenus_RemoveSection_Statics
{
	struct ToolMenus_eventRemoveSection_Parms
	{
		FName MenuName;
		FName Section;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Removes a section from a given menu */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Removes a section from a given menu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Section;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRemoveSection_Parms, MenuName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuName_MetaData), NewProp_MenuName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventRemoveSection_Parms, Section), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_MenuName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::NewProp_Section,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "RemoveSection", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::ToolMenus_eventRemoveSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::ToolMenus_eventRemoveSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_RemoveSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_RemoveSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execRemoveSection)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
	P_GET_PROPERTY(FNameProperty,Z_Param_Section);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSection(Z_Param_MenuName,Z_Param_Section);
	P_NATIVE_END;
}
// End Class UToolMenus Function RemoveSection

// Begin Class UToolMenus Function SetSectionLabel
struct Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics
{
	struct ToolMenus_eventSetSectionLabel_Parms
	{
		FName MenuName;
		FName SectionName;
		FText Label;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Sets a section's displayed label text. */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Sets a section's displayed label text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventSetSectionLabel_Parms, MenuName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuName_MetaData), NewProp_MenuName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventSetSectionLabel_Parms, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventSetSectionLabel_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_MenuName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "SetSectionLabel", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::ToolMenus_eventSetSectionLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::ToolMenus_eventSetSectionLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_SetSectionLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_SetSectionLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execSetSectionLabel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_GET_PROPERTY(FTextProperty,Z_Param_Label);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSectionLabel(Z_Param_MenuName,Z_Param_SectionName,Z_Param_Label);
	P_NATIVE_END;
}
// End Class UToolMenus Function SetSectionLabel

// Begin Class UToolMenus Function SetSectionPosition
struct Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics
{
	struct ToolMenus_eventSetSectionPosition_Parms
	{
		FName MenuName;
		FName SectionName;
		FName OtherSectionName;
		EToolMenuInsertType PositionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Sets where to insert a section into a menu when generating relative to other section names. */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Sets where to insert a section into a menu when generating relative to other section names." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherSectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OtherSectionName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventSetSectionPosition_Parms, MenuName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuName_MetaData), NewProp_MenuName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventSetSectionPosition_Parms, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_OtherSectionName = { "OtherSectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventSetSectionPosition_Parms, OtherSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherSectionName_MetaData), NewProp_OtherSectionName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType = { "PositionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventSetSectionPosition_Parms, PositionType), Z_Construct_UEnum_ToolMenus_EToolMenuInsertType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionType_MetaData), NewProp_PositionType_MetaData) }; // 3222736787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_MenuName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_OtherSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::NewProp_PositionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "SetSectionPosition", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::ToolMenus_eventSetSectionPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::ToolMenus_eventSetSectionPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_SetSectionPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_SetSectionPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execSetSectionPosition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MenuName);
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_GET_PROPERTY(FNameProperty,Z_Param_OtherSectionName);
	P_GET_ENUM(EToolMenuInsertType,Z_Param_PositionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSectionPosition(Z_Param_MenuName,Z_Param_SectionName,Z_Param_OtherSectionName,EToolMenuInsertType(Z_Param_PositionType));
	P_NATIVE_END;
}
// End Class UToolMenus Function SetSectionPosition

// Begin Class UToolMenus Function UnregisterOwnerByName
struct Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics
{
	struct ToolMenus_eventUnregisterOwnerByName_Parms
	{
		FName InOwnerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "Comment", "/** Removes all entries that were registered under a specific owner name */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Removes all entries that were registered under a specific owner name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InOwnerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::NewProp_InOwnerName = { "InOwnerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenus_eventUnregisterOwnerByName_Parms, InOwnerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::NewProp_InOwnerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenus, nullptr, "UnregisterOwnerByName", nullptr, nullptr, Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::ToolMenus_eventUnregisterOwnerByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::ToolMenus_eventUnregisterOwnerByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToolMenus::execUnregisterOwnerByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InOwnerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterOwnerByName(Z_Param_InOwnerName);
	P_NATIVE_END;
}
// End Class UToolMenus Function UnregisterOwnerByName

// Begin Class UToolMenus
void UToolMenus::StaticRegisterNativesUToolMenus()
{
	UClass* Class = UToolMenus::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMenuEntryObject", &UToolMenus::execAddMenuEntryObject },
		{ "ExtendMenu", &UToolMenus::execExtendMenu },
		{ "FindContext", &UToolMenus::execFindContext },
		{ "FindMenu", &UToolMenus::execFindMenu },
		{ "Get", &UToolMenus::execGet },
		{ "IsMenuRegistered", &UToolMenus::execIsMenuRegistered },
		{ "RefreshAllWidgets", &UToolMenus::execRefreshAllWidgets },
		{ "RefreshMenuWidget", &UToolMenus::execRefreshMenuWidget },
		{ "RegisterMenu", &UToolMenus::execRegisterMenu },
		{ "RemoveEntry", &UToolMenus::execRemoveEntry },
		{ "RemoveMenu", &UToolMenus::execRemoveMenu },
		{ "RemoveSection", &UToolMenus::execRemoveSection },
		{ "SetSectionLabel", &UToolMenus::execSetSectionLabel },
		{ "SetSectionPosition", &UToolMenus::execSetSectionPosition },
		{ "UnregisterOwnerByName", &UToolMenus::execUnregisterOwnerByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenus);
UClass* Z_Construct_UClass_UToolMenus_NoRegister()
{
	return UToolMenus::StaticClass();
}
struct Z_Construct_UClass_UToolMenus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenus.h" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizedMenus_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuSubstitutionsDuringGenerate_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Allow substituting one menu for another during generate but not during find or extend */" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "Allow substituting one menu for another during generate but not during find or extend" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Menus_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuProfiles_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/*MenuName*/" },
		{ "ModuleRelativePath", "Public/ToolMenus.h" },
		{ "ToolTip", "MenuName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomizedMenus_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomizedMenus;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuSubstitutionsDuringGenerate_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuSubstitutionsDuringGenerate_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MenuSubstitutionsDuringGenerate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Menus_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Menus_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Menus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MenuProfiles_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MenuProfiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MenuProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenus_AddMenuEntryObject, "AddMenuEntryObject" }, // 3091298198
		{ &Z_Construct_UFunction_UToolMenus_ExtendMenu, "ExtendMenu" }, // 563481023
		{ &Z_Construct_UFunction_UToolMenus_FindContext, "FindContext" }, // 3957630056
		{ &Z_Construct_UFunction_UToolMenus_FindMenu, "FindMenu" }, // 4139941158
		{ &Z_Construct_UFunction_UToolMenus_Get, "Get" }, // 1937985510
		{ &Z_Construct_UFunction_UToolMenus_IsMenuRegistered, "IsMenuRegistered" }, // 1842469335
		{ &Z_Construct_UFunction_UToolMenus_RefreshAllWidgets, "RefreshAllWidgets" }, // 3099466165
		{ &Z_Construct_UFunction_UToolMenus_RefreshMenuWidget, "RefreshMenuWidget" }, // 4104259700
		{ &Z_Construct_UFunction_UToolMenus_RegisterMenu, "RegisterMenu" }, // 2330156927
		{ &Z_Construct_UFunction_UToolMenus_RemoveEntry, "RemoveEntry" }, // 1202175200
		{ &Z_Construct_UFunction_UToolMenus_RemoveMenu, "RemoveMenu" }, // 3549297582
		{ &Z_Construct_UFunction_UToolMenus_RemoveSection, "RemoveSection" }, // 3211532374
		{ &Z_Construct_UFunction_UToolMenus_SetSectionLabel, "SetSectionLabel" }, // 4078558504
		{ &Z_Construct_UFunction_UToolMenus_SetSectionPosition, "SetSectionPosition" }, // 385521914
		{ &Z_Construct_UFunction_UToolMenus_UnregisterOwnerByName, "UnregisterOwnerByName" }, // 2747261449
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus_Inner = { "CustomizedMenus", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizedToolMenu, METADATA_PARAMS(0, nullptr) }; // 3307897102
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus = { "CustomizedMenus", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenus, CustomizedMenus), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizedMenus_MetaData), NewProp_CustomizedMenus_MetaData) }; // 3307897102
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_ValueProp = { "MenuSubstitutionsDuringGenerate", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_Key_KeyProp = { "MenuSubstitutionsDuringGenerate_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate = { "MenuSubstitutionsDuringGenerate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenus, MenuSubstitutionsDuringGenerate), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuSubstitutionsDuringGenerate_MetaData), NewProp_MenuSubstitutionsDuringGenerate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_ValueProp = { "Menus", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_Key_KeyProp = { "Menus_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus = { "Menus", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenus, Menus), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Menus_MetaData), NewProp_Menus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuProfiles_ValueProp = { "MenuProfiles", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FToolMenuProfileMap, METADATA_PARAMS(0, nullptr) }; // 1979261266
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuProfiles_Key_KeyProp = { "MenuProfiles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuProfiles = { "MenuProfiles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolMenus, MenuProfiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuProfiles_MetaData), NewProp_MenuProfiles_MetaData) }; // 1979261266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolMenus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_CustomizedMenus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuSubstitutionsDuringGenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_Menus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuProfiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuProfiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenus_Statics::NewProp_MenuProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UToolMenus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenus_Statics::ClassParams = {
	&UToolMenus::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UToolMenus_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenus_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenus()
{
	if (!Z_Registration_Info_UClass_UToolMenus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenus.OuterSingleton, Z_Construct_UClass_UToolMenus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenus.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenus>()
{
	return UToolMenus::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenus);
UToolMenus::~UToolMenus() {}
// End Class UToolMenus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToolMenuProfileMap::StaticStruct, Z_Construct_UScriptStruct_FToolMenuProfileMap_Statics::NewStructOps, TEXT("ToolMenuProfileMap"), &Z_Registration_Info_UScriptStruct_ToolMenuProfileMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuProfileMap), 1979261266U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuProfileContext, UToolMenuProfileContext::StaticClass, TEXT("UToolMenuProfileContext"), &Z_Registration_Info_UClass_UToolMenuProfileContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuProfileContext), 1869742393U) },
		{ Z_Construct_UClass_UToolMenus, UToolMenus::StaticClass, TEXT("UToolMenus"), &Z_Registration_Info_UClass_UToolMenus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenus), 1226002258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_1430819385(TEXT("/Script/ToolMenus"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenus_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
