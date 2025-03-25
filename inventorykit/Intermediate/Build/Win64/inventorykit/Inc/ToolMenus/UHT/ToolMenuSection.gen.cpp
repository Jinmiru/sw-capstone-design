// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/ToolMenus/Public/ToolMenuSection.h"
#include "Developer/ToolMenus/Public/ToolMenuContext.h"
#include "Developer/ToolMenus/Public/ToolMenuEntry.h"
#include "Developer/ToolMenus/Public/ToolMenuMisc.h"
#include "Developer/ToolMenus/Public/ToolMenuOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuSection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionDynamic();
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuInsert();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuSection();
UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References

// Begin Class UToolMenuSectionDynamic Function ConstructSections
struct ToolMenuSectionDynamic_eventConstructSections_Parms
{
	UToolMenu* Menu;
	FToolMenuContext Context;
};
static FName NAME_UToolMenuSectionDynamic_ConstructSections = FName(TEXT("ConstructSections"));
void UToolMenuSectionDynamic::ConstructSections(UToolMenu* Menu, FToolMenuContext const& Context)
{
	ToolMenuSectionDynamic_eventConstructSections_Parms Parms;
	Parms.Menu=Menu;
	Parms.Context=Context;
	ProcessEvent(FindFunctionChecked(NAME_UToolMenuSectionDynamic_ConstructSections),&Parms);
}
struct Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionDynamic_eventConstructSections_Parms, Menu), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToolMenuSectionDynamic_eventConstructSections_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuSectionDynamic, nullptr, "ConstructSections", nullptr, nullptr, Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::PropPointers), sizeof(ToolMenuSectionDynamic_eventConstructSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::Function_MetaDataParams) };
static_assert(sizeof(ToolMenuSectionDynamic_eventConstructSections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UToolMenuSectionDynamic Function ConstructSections

// Begin Class UToolMenuSectionDynamic
void UToolMenuSectionDynamic::StaticRegisterNativesUToolMenuSectionDynamic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuSectionDynamic);
UClass* Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister()
{
	return UToolMenuSectionDynamic::StaticClass();
}
struct Z_Construct_UClass_UToolMenuSectionDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ToolMenuSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections, "ConstructSections" }, // 2347961114
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuSectionDynamic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolMenuSectionDynamic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuSectionDynamic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuSectionDynamic_Statics::ClassParams = {
	&UToolMenuSectionDynamic::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuSectionDynamic_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolMenuSectionDynamic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolMenuSectionDynamic()
{
	if (!Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton, Z_Construct_UClass_UToolMenuSectionDynamic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton;
}
template<> TOOLMENUS_API UClass* StaticClass<UToolMenuSectionDynamic>()
{
	return UToolMenuSectionDynamic::StaticClass();
}
UToolMenuSectionDynamic::UToolMenuSectionDynamic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuSectionDynamic);
UToolMenuSectionDynamic::~UToolMenuSectionDynamic() {}
// End Class UToolMenuSectionDynamic

// Begin ScriptStruct FToolMenuSection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuSection;
class UScriptStruct* FToolMenuSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuSection, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuSection"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuSection.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuSection>()
{
	return FToolMenuSection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FToolMenuSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMenuSectionDynamic_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InsertPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMenuSectionDynamic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuSection, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuSection, Owner), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) }; // 1275886166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(0, nullptr) }; // 1714537137
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuSection, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blocks_MetaData), NewProp_Blocks_MetaData) }; // 1714537137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuSection, InsertPosition), Z_Construct_UScriptStruct_FToolMenuInsert, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertPosition_MetaData), NewProp_InsertPosition_MetaData) }; // 2754096453
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuSection, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1834469202
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_ToolMenuSectionDynamic = { "ToolMenuSectionDynamic", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FToolMenuSection, ToolMenuSectionDynamic), Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMenuSectionDynamic_MetaData), NewProp_ToolMenuSectionDynamic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_InsertPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_ToolMenuSectionDynamic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	nullptr,
	&NewStructOps,
	"ToolMenuSection",
	Z_Construct_UScriptStruct_FToolMenuSection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::PropPointers),
	sizeof(FToolMenuSection),
	alignof(FToolMenuSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FToolMenuSection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FToolMenuSection()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuSection.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuSection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuSection.InnerSingleton;
}
// End ScriptStruct FToolMenuSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FToolMenuSection::StaticStruct, Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewStructOps, TEXT("ToolMenuSection"), &Z_Registration_Info_UScriptStruct_ToolMenuSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuSection), 1692276526U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuSectionDynamic, UToolMenuSectionDynamic::StaticClass, TEXT("UToolMenuSectionDynamic"), &Z_Registration_Info_UClass_UToolMenuSectionDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuSectionDynamic), 3729184089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_1205090696(TEXT("/Script/ToolMenus"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
