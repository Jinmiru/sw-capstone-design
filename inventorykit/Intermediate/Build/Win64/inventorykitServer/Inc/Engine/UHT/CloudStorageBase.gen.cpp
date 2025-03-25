// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CloudStorageBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudStorageBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCloudStorageBase();
ENGINE_API UClass* Z_Construct_UClass_UCloudStorageBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECloudStorageDelegate();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ECloudStorageDelegate
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECloudStorageDelegate;
static UEnum* ECloudStorageDelegate_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECloudStorageDelegate.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECloudStorageDelegate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECloudStorageDelegate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECloudStorageDelegate"));
	}
	return Z_Registration_Info_UEnum_ECloudStorageDelegate.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECloudStorageDelegate>()
{
	return ECloudStorageDelegate_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** All the types of delegate callbacks that a CloudStorage subclass may receive from C++ */" },
		{ "CSD_DocumentConflictDetected.Comment", "/** Desc: Called when multiple machines have updated the document, and script needs to determine which one to use, via the Resolve functions. */" },
		{ "CSD_DocumentConflictDetected.Name", "CSD_DocumentConflictDetected" },
		{ "CSD_DocumentConflictDetected.ToolTip", "Desc: Called when multiple machines have updated the document, and script needs to determine which one to use, via the Resolve functions." },
		{ "CSD_DocumentQueryComplete.Name", "CSD_DocumentQueryComplete" },
		{ "CSD_DocumentReadComplete.Name", "CSD_DocumentReadComplete" },
		{ "CSD_DocumentWriteComplete.Name", "CSD_DocumentWriteComplete" },
		{ "CSD_KeyValueReadComplete.Comment", "// @todo: Fill in the result descriptions for these (and the other PI subclasses)\n" },
		{ "CSD_KeyValueReadComplete.Name", "CSD_KeyValueReadComplete" },
		{ "CSD_KeyValueReadComplete.ToolTip", "@todo: Fill in the result descriptions for these (and the other PI subclasses)" },
		{ "CSD_KeyValueWriteComplete.Name", "CSD_KeyValueWriteComplete" },
		{ "CSD_MAX.Name", "CSD_MAX" },
		{ "CSD_ValueChanged.Name", "CSD_ValueChanged" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "All the types of delegate callbacks that a CloudStorage subclass may receive from C++" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CSD_KeyValueReadComplete", (int64)CSD_KeyValueReadComplete },
		{ "CSD_KeyValueWriteComplete", (int64)CSD_KeyValueWriteComplete },
		{ "CSD_ValueChanged", (int64)CSD_ValueChanged },
		{ "CSD_DocumentQueryComplete", (int64)CSD_DocumentQueryComplete },
		{ "CSD_DocumentReadComplete", (int64)CSD_DocumentReadComplete },
		{ "CSD_DocumentWriteComplete", (int64)CSD_DocumentWriteComplete },
		{ "CSD_DocumentConflictDetected", (int64)CSD_DocumentConflictDetected },
		{ "CSD_MAX", (int64)CSD_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECloudStorageDelegate",
	"ECloudStorageDelegate",
	Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECloudStorageDelegate()
{
	if (!Z_Registration_Info_UEnum_ECloudStorageDelegate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECloudStorageDelegate.InnerSingleton, Z_Construct_UEnum_Engine_ECloudStorageDelegate_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECloudStorageDelegate.InnerSingleton;
}
// End Enum ECloudStorageDelegate

// Begin Class UCloudStorageBase
void UCloudStorageBase::StaticRegisterNativesUCloudStorageBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCloudStorageBase);
UClass* Z_Construct_UClass_UCloudStorageBase_NoRegister()
{
	return UCloudStorageBase::StaticClass();
}
struct Z_Construct_UClass_UCloudStorageBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the various platform interface classes.\n */" },
		{ "IncludePath", "Engine/CloudStorageBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "Base class for the various platform interface classes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalCloudFiles_MetaData[] = {
		{ "Comment", "/** When using local storage (aka \"cloud emulation\"), this maintains a list of the file paths. */" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "When using local storage (aka \"cloud emulation\"), this maintains a list of the file paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressDelegateCalls_MetaData[] = {
		{ "Comment", "/** If true, delegate callbacks should be skipped. */" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "If true, delegate callbacks should be skipped." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalCloudFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalCloudFiles;
	static void NewProp_bSuppressDelegateCalls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressDelegateCalls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCloudStorageBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_Inner = { "LocalCloudFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles = { "LocalCloudFiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCloudStorageBase, LocalCloudFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalCloudFiles_MetaData), NewProp_LocalCloudFiles_MetaData) };
void Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_SetBit(void* Obj)
{
	((UCloudStorageBase*)Obj)->bSuppressDelegateCalls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls = { "bSuppressDelegateCalls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCloudStorageBase), &Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressDelegateCalls_MetaData), NewProp_bSuppressDelegateCalls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCloudStorageBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCloudStorageBase_Statics::ClassParams = {
	&UCloudStorageBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCloudStorageBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCloudStorageBase()
{
	if (!Z_Registration_Info_UClass_UCloudStorageBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCloudStorageBase.OuterSingleton, Z_Construct_UClass_UCloudStorageBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCloudStorageBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCloudStorageBase>()
{
	return UCloudStorageBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCloudStorageBase);
UCloudStorageBase::~UCloudStorageBase() {}
// End Class UCloudStorageBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECloudStorageDelegate_StaticEnum, TEXT("ECloudStorageDelegate"), &Z_Registration_Info_UEnum_ECloudStorageDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3447694661U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCloudStorageBase, UCloudStorageBase::StaticClass, TEXT("UCloudStorageBase"), &Z_Registration_Info_UClass_UCloudStorageBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCloudStorageBase), 537740090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_3989319049(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
