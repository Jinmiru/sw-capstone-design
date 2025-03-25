// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystemBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase();
ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum FNavigationSystemRunMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FNavigationSystemRunMode;
static UEnum* FNavigationSystemRunMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_FNavigationSystemRunMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FNavigationSystemRunMode"));
	}
	return Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<FNavigationSystemRunMode>()
{
	return FNavigationSystemRunMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EditorMode.Name", "FNavigationSystemRunMode::EditorMode" },
		{ "EditorWorldPartitionBuildMode.Name", "FNavigationSystemRunMode::EditorWorldPartitionBuildMode" },
		{ "GameMode.Name", "FNavigationSystemRunMode::GameMode" },
		{ "InferFromWorldMode.Name", "FNavigationSystemRunMode::InferFromWorldMode" },
		{ "InvalidMode.Name", "FNavigationSystemRunMode::InvalidMode" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
		{ "PIEMode.Name", "FNavigationSystemRunMode::PIEMode" },
		{ "SimulationMode.DisplayName", "DEPRECATED No longer used, to be removed soon" },
		{ "SimulationMode.Hidden", "" },
		{ "SimulationMode.Name", "FNavigationSystemRunMode::SimulationMode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FNavigationSystemRunMode::InvalidMode", (int64)FNavigationSystemRunMode::InvalidMode },
		{ "FNavigationSystemRunMode::GameMode", (int64)FNavigationSystemRunMode::GameMode },
		{ "FNavigationSystemRunMode::EditorMode", (int64)FNavigationSystemRunMode::EditorMode },
		{ "FNavigationSystemRunMode::SimulationMode", (int64)FNavigationSystemRunMode::SimulationMode },
		{ "FNavigationSystemRunMode::PIEMode", (int64)FNavigationSystemRunMode::PIEMode },
		{ "FNavigationSystemRunMode::InferFromWorldMode", (int64)FNavigationSystemRunMode::InferFromWorldMode },
		{ "FNavigationSystemRunMode::EditorWorldPartitionBuildMode", (int64)FNavigationSystemRunMode::EditorWorldPartitionBuildMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"FNavigationSystemRunMode",
	"FNavigationSystemRunMode",
	Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode()
{
	if (!Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton, Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton;
}
// End Enum FNavigationSystemRunMode

// Begin Class UNavigationSystemBase
void UNavigationSystemBase::StaticRegisterNativesUNavigationSystemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationSystemBase);
UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister()
{
	return UNavigationSystemBase::StaticClass();
}
struct Z_Construct_UClass_UNavigationSystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AI/NavigationSystemBase.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavigationSystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams = {
	&UNavigationSystemBase::StaticClass,
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
	0x000800ABu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationSystemBase()
{
	if (!Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton, Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNavigationSystemBase>()
{
	return UNavigationSystemBase::StaticClass();
}
UNavigationSystemBase::UNavigationSystemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemBase);
// End Class UNavigationSystemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ FNavigationSystemRunMode_StaticEnum, TEXT("FNavigationSystemRunMode"), &Z_Registration_Info_UEnum_FNavigationSystemRunMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 401727333U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationSystemBase, UNavigationSystemBase::StaticClass, TEXT("UNavigationSystemBase"), &Z_Registration_Info_UClass_UNavigationSystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationSystemBase), 3868870493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_1317365962(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
