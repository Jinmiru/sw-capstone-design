// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ActorFolder.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFolder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorFolder();
ENGINE_API UClass* Z_Construct_UClass_UActorFolder_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UActorFolder
void UActorFolder::StaticRegisterNativesUActorFolder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFolder);
UClass* Z_Construct_UClass_UActorFolder_NoRegister()
{
	return UActorFolder::StaticClass();
}
struct Z_Construct_UClass_UActorFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ActorFolder.h" },
		{ "ModuleRelativePath", "Public/ActorFolder.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentFolderGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFolderInitiallyExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorFolder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorFolder.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentFolderGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FolderGuid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FolderLabel;
	static void NewProp_bFolderInitiallyExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFolderInitiallyExpanded;
	static void NewProp_bIsDeleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorFolder_Statics::NewProp_ParentFolderGuid = { "ParentFolderGuid", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorFolder, ParentFolderGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentFolderGuid_MetaData), NewProp_ParentFolderGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorFolder_Statics::NewProp_FolderGuid = { "FolderGuid", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorFolder, FolderGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderGuid_MetaData), NewProp_FolderGuid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorFolder_Statics::NewProp_FolderLabel = { "FolderLabel", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorFolder, FolderLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderLabel_MetaData), NewProp_FolderLabel_MetaData) };
void Z_Construct_UClass_UActorFolder_Statics::NewProp_bFolderInitiallyExpanded_SetBit(void* Obj)
{
	((UActorFolder*)Obj)->bFolderInitiallyExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFolder_Statics::NewProp_bFolderInitiallyExpanded = { "bFolderInitiallyExpanded", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActorFolder), &Z_Construct_UClass_UActorFolder_Statics::NewProp_bFolderInitiallyExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFolderInitiallyExpanded_MetaData), NewProp_bFolderInitiallyExpanded_MetaData) };
void Z_Construct_UClass_UActorFolder_Statics::NewProp_bIsDeleted_SetBit(void* Obj)
{
	((UActorFolder*)Obj)->bIsDeleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFolder_Statics::NewProp_bIsDeleted = { "bIsDeleted", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActorFolder), &Z_Construct_UClass_UActorFolder_Statics::NewProp_bIsDeleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDeleted_MetaData), NewProp_bIsDeleted_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFolder_Statics::NewProp_ParentFolderGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFolder_Statics::NewProp_FolderGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFolder_Statics::NewProp_FolderLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFolder_Statics::NewProp_bFolderInitiallyExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFolder_Statics::NewProp_bIsDeleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFolder_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UActorFolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFolder_Statics::ClassParams = {
	&UActorFolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UActorFolder_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFolder_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorFolder()
{
	if (!Z_Registration_Info_UClass_UActorFolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFolder.OuterSingleton, Z_Construct_UClass_UActorFolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFolder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorFolder>()
{
	return UActorFolder::StaticClass();
}
UActorFolder::UActorFolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFolder);
UActorFolder::~UActorFolder() {}
// End Class UActorFolder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorFolder, UActorFolder::StaticClass, TEXT("UActorFolder"), &Z_Registration_Info_UClass_UActorFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFolder), 1479214797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_823896572(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorFolder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
