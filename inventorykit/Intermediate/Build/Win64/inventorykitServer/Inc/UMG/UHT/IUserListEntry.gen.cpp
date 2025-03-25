// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/IUserListEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUserListEntry() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMG_API UClass* Z_Construct_UClass_UListViewBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserListEntry();
UMG_API UClass* Z_Construct_UClass_UUserListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserListEntryLibrary();
UMG_API UClass* Z_Construct_UClass_UUserListEntryLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Interface UUserListEntry Function BP_OnEntryReleased
void IUserListEntry::BP_OnEntryReleased()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnEntryReleased instead.");
}
static FName NAME_UUserListEntry_BP_OnEntryReleased = FName(TEXT("BP_OnEntryReleased"));
void IUserListEntry::Execute_BP_OnEntryReleased(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnEntryReleased);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when this entry is released from the owning table and no longer represents any list item */" },
		{ "DisplayName", "On Entry Released" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when this entry is released from the owning table and no longer represents any list item" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, nullptr, "BP_OnEntryReleased", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UUserListEntry Function BP_OnEntryReleased

// Begin Interface UUserListEntry Function BP_OnItemExpansionChanged
struct UserListEntry_eventBP_OnItemExpansionChanged_Parms
{
	bool bIsExpanded;
};
void IUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnItemExpansionChanged instead.");
}
static FName NAME_UUserListEntry_BP_OnItemExpansionChanged = FName(TEXT("BP_OnItemExpansionChanged"));
void IUserListEntry::Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
	UserListEntry_eventBP_OnItemExpansionChanged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnItemExpansionChanged);
	if (Func)
	{
		Parms.bIsExpanded=bIsExpanded;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when the expansion state of the item represented by this entry changes. Tree view entries only. */" },
		{ "DisplayName", "On Item Expansion Changed" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when the expansion state of the item represented by this entry changes. Tree view entries only." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
{
	((UserListEntry_eventBP_OnItemExpansionChanged_Parms*)Obj)->bIsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UserListEntry_eventBP_OnItemExpansionChanged_Parms), &Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::NewProp_bIsExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, nullptr, "BP_OnItemExpansionChanged", nullptr, nullptr, Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::PropPointers), sizeof(UserListEntry_eventBP_OnItemExpansionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(UserListEntry_eventBP_OnItemExpansionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UUserListEntry Function BP_OnItemExpansionChanged

// Begin Interface UUserListEntry Function BP_OnItemSelectionChanged
struct UserListEntry_eventBP_OnItemSelectionChanged_Parms
{
	bool bIsSelected;
};
void IUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnItemSelectionChanged instead.");
}
static FName NAME_UUserListEntry_BP_OnItemSelectionChanged = FName(TEXT("BP_OnItemSelectionChanged"));
void IUserListEntry::Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UUserListEntry::StaticClass()));
	UserListEntry_eventBP_OnItemSelectionChanged_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UUserListEntry_BP_OnItemSelectionChanged);
	if (Func)
	{
		Parms.bIsSelected=bIsSelected;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when the selection state of the item represented by this entry changes. */" },
		{ "DisplayName", "On Item Selection Changed" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Called when the selection state of the item represented by this entry changes." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((UserListEntry_eventBP_OnItemSelectionChanged_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UserListEntry_eventBP_OnItemSelectionChanged_Parms), &Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntry, nullptr, "BP_OnItemSelectionChanged", nullptr, nullptr, Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::PropPointers), sizeof(UserListEntry_eventBP_OnItemSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(UserListEntry_eventBP_OnItemSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UUserListEntry Function BP_OnItemSelectionChanged

// Begin Interface UUserListEntry
void UUserListEntry::StaticRegisterNativesUUserListEntry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserListEntry);
UClass* Z_Construct_UClass_UUserListEntry_NoRegister()
{
	return UUserListEntry::StaticClass();
}
struct Z_Construct_UClass_UUserListEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnEntryReleased, "BP_OnEntryReleased" }, // 2410311215
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnItemExpansionChanged, "BP_OnItemExpansionChanged" }, // 3227996846
		{ &Z_Construct_UFunction_UUserListEntry_BP_OnItemSelectionChanged, "BP_OnItemSelectionChanged" }, // 3758949635
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUserListEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserListEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserListEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserListEntry_Statics::ClassParams = {
	&UUserListEntry::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserListEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserListEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserListEntry()
{
	if (!Z_Registration_Info_UClass_UUserListEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserListEntry.OuterSingleton, Z_Construct_UClass_UUserListEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserListEntry.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUserListEntry>()
{
	return UUserListEntry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserListEntry);
UUserListEntry::~UUserListEntry() {}
// End Interface UUserListEntry

// Begin Class UUserListEntryLibrary Function GetOwningListView
struct Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics
{
	struct UserListEntryLibrary_eventGetOwningListView_Parms
	{
		TScriptInterface<IUserListEntry> UserListEntry;
		UListViewBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** \n\x09 * Returns the list view that contains this entry.\n\x09 * @param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally.\n\x09 */" },
		{ "DefaultToSelf", "UserListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Returns the list view that contains this entry.\n@param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_UserListEntry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_UserListEntry = { "UserListEntry", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserListEntryLibrary_eventGetOwningListView_Parms, UserListEntry), Z_Construct_UClass_UUserListEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserListEntryLibrary_eventGetOwningListView_Parms, ReturnValue), Z_Construct_UClass_UListViewBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_UserListEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntryLibrary, nullptr, "GetOwningListView", nullptr, nullptr, Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::UserListEntryLibrary_eventGetOwningListView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::UserListEntryLibrary_eventGetOwningListView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserListEntryLibrary::execGetOwningListView)
{
	P_GET_TINTERFACE(IUserListEntry,Z_Param_UserListEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UListViewBase**)Z_Param__Result=UUserListEntryLibrary::GetOwningListView(Z_Param_UserListEntry);
	P_NATIVE_END;
}
// End Class UUserListEntryLibrary Function GetOwningListView

// Begin Class UUserListEntryLibrary Function IsListItemExpanded
struct Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics
{
	struct UserListEntryLibrary_eventIsListItemExpanded_Parms
	{
		TScriptInterface<IUserListEntry> UserListEntry;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** \n\x09 * Returns true if the item represented by this entry is currently expanded and showing its children. Tree view entries only.\n\x09 * @param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally.\n\x09 */" },
		{ "DefaultToSelf", "UserListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Returns true if the item represented by this entry is currently expanded and showing its children. Tree view entries only.\n@param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_UserListEntry;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_UserListEntry = { "UserListEntry", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserListEntryLibrary_eventIsListItemExpanded_Parms, UserListEntry), Z_Construct_UClass_UUserListEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UserListEntryLibrary_eventIsListItemExpanded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UserListEntryLibrary_eventIsListItemExpanded_Parms), &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_UserListEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntryLibrary, nullptr, "IsListItemExpanded", nullptr, nullptr, Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::UserListEntryLibrary_eventIsListItemExpanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::UserListEntryLibrary_eventIsListItemExpanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserListEntryLibrary::execIsListItemExpanded)
{
	P_GET_TINTERFACE(IUserListEntry,Z_Param_UserListEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUserListEntryLibrary::IsListItemExpanded(Z_Param_UserListEntry);
	P_NATIVE_END;
}
// End Class UUserListEntryLibrary Function IsListItemExpanded

// Begin Class UUserListEntryLibrary Function IsListItemSelected
struct Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics
{
	struct UserListEntryLibrary_eventIsListItemSelected_Parms
	{
		TScriptInterface<IUserListEntry> UserListEntry;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** \n\x09 * Returns true if the item represented by this entry is currently selected in the owning list view. \n\x09 * @param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally.\n\x09 */" },
		{ "DefaultToSelf", "UserListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Returns true if the item represented by this entry is currently selected in the owning list view.\n@param UserListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_UserListEntry;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_UserListEntry = { "UserListEntry", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserListEntryLibrary_eventIsListItemSelected_Parms, UserListEntry), Z_Construct_UClass_UUserListEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UserListEntryLibrary_eventIsListItemSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UserListEntryLibrary_eventIsListItemSelected_Parms), &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_UserListEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserListEntryLibrary, nullptr, "IsListItemSelected", nullptr, nullptr, Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::UserListEntryLibrary_eventIsListItemSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::UserListEntryLibrary_eventIsListItemSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserListEntryLibrary::execIsListItemSelected)
{
	P_GET_TINTERFACE(IUserListEntry,Z_Param_UserListEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUserListEntryLibrary::IsListItemSelected(Z_Param_UserListEntry);
	P_NATIVE_END;
}
// End Class UUserListEntryLibrary Function IsListItemSelected

// Begin Class UUserListEntryLibrary
void UUserListEntryLibrary::StaticRegisterNativesUUserListEntryLibrary()
{
	UClass* Class = UUserListEntryLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOwningListView", &UUserListEntryLibrary::execGetOwningListView },
		{ "IsListItemExpanded", &UUserListEntryLibrary::execIsListItemExpanded },
		{ "IsListItemSelected", &UUserListEntryLibrary::execIsListItemSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserListEntryLibrary);
UClass* Z_Construct_UClass_UUserListEntryLibrary_NoRegister()
{
	return UUserListEntryLibrary::StaticClass();
}
struct Z_Construct_UClass_UUserListEntryLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Static library to supply \"for free\" functionality to widgets that implement IUserListEntry */" },
		{ "IncludePath", "Blueprint/IUserListEntry.h" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserListEntry.h" },
		{ "ToolTip", "Static library to supply \"for free\" functionality to widgets that implement IUserListEntry" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserListEntryLibrary_GetOwningListView, "GetOwningListView" }, // 2016273863
		{ &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemExpanded, "IsListItemExpanded" }, // 3711909071
		{ &Z_Construct_UFunction_UUserListEntryLibrary_IsListItemSelected, "IsListItemSelected" }, // 1164727710
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserListEntryLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserListEntryLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserListEntryLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserListEntryLibrary_Statics::ClassParams = {
	&UUserListEntryLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserListEntryLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserListEntryLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserListEntryLibrary()
{
	if (!Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton, Z_Construct_UClass_UUserListEntryLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserListEntryLibrary.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUserListEntryLibrary>()
{
	return UUserListEntryLibrary::StaticClass();
}
UUserListEntryLibrary::UUserListEntryLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserListEntryLibrary);
UUserListEntryLibrary::~UUserListEntryLibrary() {}
// End Class UUserListEntryLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserListEntry, UUserListEntry::StaticClass, TEXT("UUserListEntry"), &Z_Registration_Info_UClass_UUserListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserListEntry), 1358960520U) },
		{ Z_Construct_UClass_UUserListEntryLibrary, UUserListEntryLibrary::StaticClass, TEXT("UUserListEntryLibrary"), &Z_Registration_Info_UClass_UUserListEntryLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserListEntryLibrary), 3613113589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_2735865121(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
