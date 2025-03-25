// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSequenceTickManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUMGSequenceTickManager();
UMG_API UClass* Z_Construct_UClass_UUMGSequenceTickManager_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FSequenceTickManagerWidgetData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequenceTickManagerWidgetData;
class UScriptStruct* FSequenceTickManagerWidgetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceTickManagerWidgetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequenceTickManagerWidgetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("SequenceTickManagerWidgetData"));
	}
	return Z_Registration_Info_UScriptStruct_SequenceTickManagerWidgetData.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FSequenceTickManagerWidgetData>()
{
	return FSequenceTickManagerWidgetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/UMGSequenceTickManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceTickManagerWidgetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"SequenceTickManagerWidgetData",
	nullptr,
	0,
	sizeof(FSequenceTickManagerWidgetData),
	alignof(FSequenceTickManagerWidgetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceTickManagerWidgetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequenceTickManagerWidgetData.InnerSingleton, Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SequenceTickManagerWidgetData.InnerSingleton;
}
// End ScriptStruct FSequenceTickManagerWidgetData

// Begin Class UUMGSequenceTickManager
void UUMGSequenceTickManager::StaticRegisterNativesUUMGSequenceTickManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMGSequenceTickManager);
UClass* Z_Construct_UClass_UUMGSequenceTickManager_NoRegister()
{
	return UUMGSequenceTickManager::StaticClass();
}
struct Z_Construct_UClass_UUMGSequenceTickManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An automatically created global object that will manage all widget animations.\n */" },
		{ "IncludePath", "Animation/UMGSequenceTickManager.h" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequenceTickManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An automatically created global object that will manage all widget animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakUserWidgetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/UMGSequenceTickManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Linker_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/UMGSequenceTickManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeakUserWidgetData_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakUserWidgetData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeakUserWidgetData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Linker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSequenceTickManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSequenceTickManager_Statics::NewProp_WeakUserWidgetData_ValueProp = { "WeakUserWidgetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData, METADATA_PARAMS(0, nullptr) }; // 1386150181
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUMGSequenceTickManager_Statics::NewProp_WeakUserWidgetData_Key_KeyProp = { "WeakUserWidgetData_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGSequenceTickManager_Statics::NewProp_WeakUserWidgetData = { "WeakUserWidgetData", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMGSequenceTickManager, WeakUserWidgetData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakUserWidgetData_MetaData), NewProp_WeakUserWidgetData_MetaData) }; // 1386150181
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSequenceTickManager_Statics::NewProp_Linker = { "Linker", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMGSequenceTickManager, Linker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Linker_MetaData), NewProp_Linker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSequenceTickManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequenceTickManager_Statics::NewProp_WeakUserWidgetData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequenceTickManager_Statics::NewProp_WeakUserWidgetData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequenceTickManager_Statics::NewProp_WeakUserWidgetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequenceTickManager_Statics::NewProp_Linker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequenceTickManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUMGSequenceTickManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequenceTickManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMGSequenceTickManager_Statics::ClassParams = {
	&UUMGSequenceTickManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUMGSequenceTickManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequenceTickManager_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequenceTickManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUMGSequenceTickManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUMGSequenceTickManager()
{
	if (!Z_Registration_Info_UClass_UUMGSequenceTickManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMGSequenceTickManager.OuterSingleton, Z_Construct_UClass_UUMGSequenceTickManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUMGSequenceTickManager.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUMGSequenceTickManager>()
{
	return UUMGSequenceTickManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSequenceTickManager);
UUMGSequenceTickManager::~UUMGSequenceTickManager() {}
// End Class UUMGSequenceTickManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSequenceTickManagerWidgetData::StaticStruct, Z_Construct_UScriptStruct_FSequenceTickManagerWidgetData_Statics::NewStructOps, TEXT("SequenceTickManagerWidgetData"), &Z_Registration_Info_UScriptStruct_SequenceTickManagerWidgetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequenceTickManagerWidgetData), 1386150181U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUMGSequenceTickManager, UUMGSequenceTickManager::StaticClass, TEXT("UUMGSequenceTickManager"), &Z_Registration_Info_UClass_UUMGSequenceTickManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMGSequenceTickManager), 1511060455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_461339220(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequenceTickManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
