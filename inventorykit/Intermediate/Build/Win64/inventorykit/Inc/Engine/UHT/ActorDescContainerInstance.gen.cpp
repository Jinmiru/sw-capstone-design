// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ActorDescContainerInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDescContainerInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainerInstance();
ENGINE_API UClass* Z_Construct_UClass_UActorDescContainerInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UActorDescContainerInstance
void UActorDescContainerInstance::StaticRegisterNativesUActorDescContainerInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorDescContainerInstance);
UClass* Z_Construct_UClass_UActorDescContainerInstance_NoRegister()
{
	return UActorDescContainerInstance::StaticClass();
}
struct Z_Construct_UClass_UActorDescContainerInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ActorDescContainerInstance.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ActorDescContainerInstance.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ActorDescContainerInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildContainerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ActorDescContainerInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildContainerInstances_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildContainerInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ChildContainerInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorDescContainerInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorDescContainerInstance_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorDescContainerInstance, Container), Z_Construct_UClass_UActorDescContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorDescContainerInstance_Statics::NewProp_ChildContainerInstances_ValueProp = { "ChildContainerInstances", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UActorDescContainerInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorDescContainerInstance_Statics::NewProp_ChildContainerInstances_Key_KeyProp = { "ChildContainerInstances_Key", nullptr, (EPropertyFlags)0x0100000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UActorDescContainerInstance_Statics::NewProp_ChildContainerInstances = { "ChildContainerInstances", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorDescContainerInstance, ChildContainerInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildContainerInstances_MetaData), NewProp_ChildContainerInstances_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorDescContainerInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDescContainerInstance_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDescContainerInstance_Statics::NewProp_ChildContainerInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDescContainerInstance_Statics::NewProp_ChildContainerInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDescContainerInstance_Statics::NewProp_ChildContainerInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainerInstance_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UActorDescContainerInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainerInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorDescContainerInstance_Statics::ClassParams = {
	&UActorDescContainerInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UActorDescContainerInstance_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainerInstance_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorDescContainerInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorDescContainerInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorDescContainerInstance()
{
	if (!Z_Registration_Info_UClass_UActorDescContainerInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorDescContainerInstance.OuterSingleton, Z_Construct_UClass_UActorDescContainerInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorDescContainerInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorDescContainerInstance>()
{
	return UActorDescContainerInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorDescContainerInstance);
UActorDescContainerInstance::~UActorDescContainerInstance() {}
// End Class UActorDescContainerInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorDescContainerInstance, UActorDescContainerInstance::StaticClass, TEXT("UActorDescContainerInstance"), &Z_Registration_Info_UClass_UActorDescContainerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorDescContainerInstance), 2687837594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_1254182493(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ActorDescContainerInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
