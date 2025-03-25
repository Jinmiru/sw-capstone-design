// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/IUserObjectListEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUserObjectListEntry() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMG_API UClass* Z_Construct_UClass_UUserListEntry();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntryLibrary();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntryLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Interface UUserObjectListEntry Function OnListItemObjectSet
struct UserObjectListEntry_eventOnListItemObjectSet_Parms
{
	UObject* ListItemObject;
};
void IUserObjectListEntry::OnListItemObjectSet(UObject* ListItemObject)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnListItemObjectSet instead.");
}
static FName NAME_UUserObjectListEntry_OnListItemObjectSet = FName(TEXT("OnListItemObjectSet"));
void IUserObjectListEntry::Execute_OnListItemObjectSet(UObject* O, UObject* ListItemObject)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UUserObjectListEntry::StaticClass()));
	UserObjectListEntry_eventOnListItemObjectSet_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UUserObjectListEntry_OnListItemObjectSet);
	if (Func)
	{
		Parms.ListItemObject=ListItemObject;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ObjectListEntry" },
		{ "Comment", "/** Called when this entry is assigned a new item object to represent by the owning list view */" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
		{ "ToolTip", "Called when this entry is assigned a new item object to represent by the owning list view" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListItemObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::NewProp_ListItemObject = { "ListItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserObjectListEntry_eventOnListItemObjectSet_Parms, ListItemObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::NewProp_ListItemObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserObjectListEntry, nullptr, "OnListItemObjectSet", nullptr, nullptr, Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::PropPointers), sizeof(UserObjectListEntry_eventOnListItemObjectSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(UserObjectListEntry_eventOnListItemObjectSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UUserObjectListEntry Function OnListItemObjectSet

// Begin Interface UUserObjectListEntry
void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserObjectListEntry);
UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister()
{
	return UUserObjectListEntry::StaticClass();
}
struct Z_Construct_UClass_UUserObjectListEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserObjectListEntry_OnListItemObjectSet, "OnListItemObjectSet" }, // 1368787367
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUserObjectListEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserObjectListEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserListEntry,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserObjectListEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserObjectListEntry_Statics::ClassParams = {
	&UUserObjectListEntry::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserObjectListEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserObjectListEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserObjectListEntry()
{
	if (!Z_Registration_Info_UClass_UUserObjectListEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserObjectListEntry.OuterSingleton, Z_Construct_UClass_UUserObjectListEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserObjectListEntry.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUserObjectListEntry>()
{
	return UUserObjectListEntry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserObjectListEntry);
UUserObjectListEntry::~UUserObjectListEntry() {}
// End Interface UUserObjectListEntry

// Begin Class UUserObjectListEntryLibrary Function GetListItemObject
struct Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics
{
	struct UserObjectListEntryLibrary_eventGetListItemObject_Parms
	{
		TScriptInterface<IUserObjectListEntry> UserObjectListEntry;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UserObjectListEntry" },
		{ "Comment", "/** \n\x09 * Returns the item in the owning list view that this entry is currently assigned to represent. \n\x09 * @param UserObjectListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally.\n\x09 */" },
		{ "DefaultToSelf", "UserObjectListEntry" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
		{ "ToolTip", "Returns the item in the owning list view that this entry is currently assigned to represent.\n@param UserObjectListEntry Note: Visually not transmitted, but this defaults to \"self\". No need to hook up if calling internally." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_UserObjectListEntry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::NewProp_UserObjectListEntry = { "UserObjectListEntry", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserObjectListEntryLibrary_eventGetListItemObject_Parms, UserObjectListEntry), Z_Construct_UClass_UUserObjectListEntry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserObjectListEntryLibrary_eventGetListItemObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::NewProp_UserObjectListEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserObjectListEntryLibrary, nullptr, "GetListItemObject", nullptr, nullptr, Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::UserObjectListEntryLibrary_eventGetListItemObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::UserObjectListEntryLibrary_eventGetListItemObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserObjectListEntryLibrary::execGetListItemObject)
{
	P_GET_TINTERFACE(IUserObjectListEntry,Z_Param_UserObjectListEntry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UUserObjectListEntryLibrary::GetListItemObject(Z_Param_UserObjectListEntry);
	P_NATIVE_END;
}
// End Class UUserObjectListEntryLibrary Function GetListItemObject

// Begin Class UUserObjectListEntryLibrary
void UUserObjectListEntryLibrary::StaticRegisterNativesUUserObjectListEntryLibrary()
{
	UClass* Class = UUserObjectListEntryLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetListItemObject", &UUserObjectListEntryLibrary::execGetListItemObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserObjectListEntryLibrary);
UClass* Z_Construct_UClass_UUserObjectListEntryLibrary_NoRegister()
{
	return UUserObjectListEntryLibrary::StaticClass();
}
struct Z_Construct_UClass_UUserObjectListEntryLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Static library to supply \"for free\" functionality to widgets that implement IUserListEntry */" },
		{ "IncludePath", "Blueprint/IUserObjectListEntry.h" },
		{ "ModuleRelativePath", "Public/Blueprint/IUserObjectListEntry.h" },
		{ "ToolTip", "Static library to supply \"for free\" functionality to widgets that implement IUserListEntry" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserObjectListEntryLibrary_GetListItemObject, "GetListItemObject" }, // 384843993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserObjectListEntryLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::ClassParams = {
	&UUserObjectListEntryLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserObjectListEntryLibrary()
{
	if (!Z_Registration_Info_UClass_UUserObjectListEntryLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserObjectListEntryLibrary.OuterSingleton, Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserObjectListEntryLibrary.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUserObjectListEntryLibrary>()
{
	return UUserObjectListEntryLibrary::StaticClass();
}
UUserObjectListEntryLibrary::UUserObjectListEntryLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserObjectListEntryLibrary);
UUserObjectListEntryLibrary::~UUserObjectListEntryLibrary() {}
// End Class UUserObjectListEntryLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserObjectListEntry, UUserObjectListEntry::StaticClass, TEXT("UUserObjectListEntry"), &Z_Registration_Info_UClass_UUserObjectListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserObjectListEntry), 228470651U) },
		{ Z_Construct_UClass_UUserObjectListEntryLibrary, UUserObjectListEntryLibrary::StaticClass, TEXT("UUserObjectListEntryLibrary"), &Z_Registration_Info_UClass_UUserObjectListEntryLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserObjectListEntryLibrary), 1233771268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_353157355(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
