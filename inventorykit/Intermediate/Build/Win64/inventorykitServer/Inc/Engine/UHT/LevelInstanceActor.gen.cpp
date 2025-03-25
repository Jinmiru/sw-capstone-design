// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/LevelInstance/LevelInstanceActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ALevelInstance();
ENGINE_API UClass* Z_Construct_UClass_ALevelInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALevelInstance Function OnRep_LevelInstanceSpawnGuid
struct Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelInstance, nullptr, "OnRep_LevelInstanceSpawnGuid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelInstance::execOnRep_LevelInstanceSpawnGuid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LevelInstanceSpawnGuid();
	P_NATIVE_END;
}
// End Class ALevelInstance Function OnRep_LevelInstanceSpawnGuid

// Begin Class ALevelInstance
void ALevelInstance::StaticRegisterNativesALevelInstance()
{
	UClass* Class = ALevelInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_LevelInstanceSpawnGuid", &ALevelInstance::execOnRep_LevelInstanceSpawnGuid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelInstance);
UClass* Z_Construct_UClass_ALevelInstance_NoRegister()
{
	return ALevelInstance::StaticClass();
}
struct Z_Construct_UClass_ALevelInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceActor.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[] = {
		{ "Category", "Level" },
		{ "Comment", "/** Level LevelInstance */" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
		{ "NoCreate", "" },
		{ "ToolTip", "Level LevelInstance" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorldAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceSpawnGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRuntimeBehavior_MetaData[] = {
		{ "Category", "Level" },
		{ "DisplayName", "Level Behavior" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelInstanceComponent;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CookedWorldAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelInstanceSpawnGuid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredRuntimeBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredRuntimeBehavior;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelInstance_OnRep_LevelInstanceSpawnGuid, "OnRep_LevelInstanceSpawnGuid" }, // 969066816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelInstance, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldAsset_MetaData), NewProp_WorldAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceComponent = { "LevelInstanceComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelInstance, LevelInstanceComponent), Z_Construct_UClass_ULevelInstanceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceComponent_MetaData), NewProp_LevelInstanceComponent_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset = { "CookedWorldAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelInstance, CookedWorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedWorldAsset_MetaData), NewProp_CookedWorldAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceSpawnGuid = { "LevelInstanceSpawnGuid", "OnRep_LevelInstanceSpawnGuid", (EPropertyFlags)0x0020080100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelInstance, LevelInstanceSpawnGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelInstanceSpawnGuid_MetaData), NewProp_LevelInstanceSpawnGuid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior = { "DesiredRuntimeBehavior", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelInstance, DesiredRuntimeBehavior), Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredRuntimeBehavior_MetaData), NewProp_DesiredRuntimeBehavior_MetaData) }; // 1511861942
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_LevelInstanceSpawnGuid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelInstance_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULevelInstanceInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelInstance, ILevelInstanceInterface), false },  // 887087087
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelInstance_Statics::ClassParams = {
	&ALevelInstance::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALevelInstance_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelInstance()
{
	if (!Z_Registration_Info_UClass_ALevelInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelInstance.OuterSingleton, Z_Construct_UClass_ALevelInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALevelInstance>()
{
	return ALevelInstance::StaticClass();
}
void ALevelInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_LevelInstanceSpawnGuid(TEXT("LevelInstanceSpawnGuid"));
	const bool bIsValid = true
		&& Name_LevelInstanceSpawnGuid == ClassReps[(int32)ENetFields_Private::LevelInstanceSpawnGuid].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelInstance"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelInstance);
ALevelInstance::~ALevelInstance() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALevelInstance)
// End Class ALevelInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelInstance, ALevelInstance::StaticClass, TEXT("ALevelInstance"), &Z_Registration_Info_UClass_ALevelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelInstance), 655649702U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_3485919016(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
