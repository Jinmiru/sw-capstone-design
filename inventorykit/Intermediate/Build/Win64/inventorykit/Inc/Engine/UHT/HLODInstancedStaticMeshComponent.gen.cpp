// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODInstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODInstancedStaticMeshComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UHLODInstancedStaticMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODISMComponentDescriptor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UHLODInstancedStaticMeshComponent
void UHLODInstancedStaticMeshComponent::StaticRegisterNativesUHLODInstancedStaticMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODInstancedStaticMeshComponent);
UClass* Z_Construct_UClass_UHLODInstancedStaticMeshComponent_NoRegister()
{
	return UHLODInstancedStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "WorldPartition/HLOD/HLODInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODInstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODInstancedStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics::ClassParams = {
	&UHLODInstancedStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x01A812A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHLODInstancedStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UHLODInstancedStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHLODInstancedStaticMeshComponent>()
{
	return UHLODInstancedStaticMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODInstancedStaticMeshComponent);
UHLODInstancedStaticMeshComponent::~UHLODInstancedStaticMeshComponent() {}
// End Class UHLODInstancedStaticMeshComponent

// Begin ScriptStruct FHLODISMComponentDescriptor
static_assert(std::is_polymorphic<FHLODISMComponentDescriptor>() == std::is_polymorphic<FISMComponentDescriptor>(), "USTRUCT FHLODISMComponentDescriptor cannot be polymorphic unless super FISMComponentDescriptor is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODISMComponentDescriptor;
class UScriptStruct* FHLODISMComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODISMComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODISMComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODISMComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HLODISMComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_HLODISMComponentDescriptor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODISMComponentDescriptor>()
{
	return FHLODISMComponentDescriptor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// ISM descriptor class based on FISMComponentDescriptor\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODInstancedStaticMeshComponent.h" },
		{ "ToolTip", "ISM descriptor class based on FISMComponentDescriptor" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODISMComponentDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FISMComponentDescriptor,
	&NewStructOps,
	"HLODISMComponentDescriptor",
	nullptr,
	0,
	sizeof(FHLODISMComponentDescriptor),
	alignof(FHLODISMComponentDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHLODISMComponentDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_HLODISMComponentDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODISMComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HLODISMComponentDescriptor.InnerSingleton;
}
// End ScriptStruct FHLODISMComponentDescriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHLODISMComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FHLODISMComponentDescriptor_Statics::NewStructOps, TEXT("HLODISMComponentDescriptor"), &Z_Registration_Info_UScriptStruct_HLODISMComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODISMComponentDescriptor), 1467380653U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHLODInstancedStaticMeshComponent, UHLODInstancedStaticMeshComponent::StaticClass, TEXT("UHLODInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UHLODInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODInstancedStaticMeshComponent), 3851143536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_3416693276(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODInstancedStaticMeshComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
