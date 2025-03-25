// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericTeamAgentInterface() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface();
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum ETeamAttitude
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeamAttitude;
static UEnum* ETeamAttitude_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_ETeamAttitude, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ETeamAttitude"));
	}
	return Z_Registration_Info_UEnum_ETeamAttitude.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<ETeamAttitude::Type>()
{
	return ETeamAttitude_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_ETeamAttitude_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Friendly.Name", "ETeamAttitude::Friendly" },
		{ "Hostile.Name", "ETeamAttitude::Hostile" },
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
		{ "Neutral.Name", "ETeamAttitude::Neutral" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeamAttitude::Friendly", (int64)ETeamAttitude::Friendly },
		{ "ETeamAttitude::Neutral", (int64)ETeamAttitude::Neutral },
		{ "ETeamAttitude::Hostile", (int64)ETeamAttitude::Hostile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"ETeamAttitude",
	"ETeamAttitude::Type",
	Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude()
{
	if (!Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton, Z_Construct_UEnum_AIModule_ETeamAttitude_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeamAttitude.InnerSingleton;
}
// End Enum ETeamAttitude

// Begin ScriptStruct FGenericTeamId
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenericTeamId;
class UScriptStruct* FGenericTeamId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenericTeamId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenericTeamId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenericTeamId, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("GenericTeamId"));
	}
	return Z_Registration_Info_UScriptStruct_GenericTeamId.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FGenericTeamId>()
{
	return FGenericTeamId::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGenericTeamId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "TeamID" },
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenericTeamId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenericTeamId, TeamID), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewProp_TeamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenericTeamId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"GenericTeamId",
	Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::PropPointers),
	sizeof(FGenericTeamId),
	alignof(FGenericTeamId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenericTeamId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenericTeamId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId()
{
	if (!Z_Registration_Info_UScriptStruct_GenericTeamId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenericTeamId.InnerSingleton, Z_Construct_UScriptStruct_FGenericTeamId_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GenericTeamId.InnerSingleton;
}
// End ScriptStruct FGenericTeamId

// Begin Interface UGenericTeamAgentInterface
void UGenericTeamAgentInterface::StaticRegisterNativesUGenericTeamAgentInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenericTeamAgentInterface);
UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister()
{
	return UGenericTeamAgentInterface::StaticClass();
}
struct Z_Construct_UClass_UGenericTeamAgentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GenericTeamAgentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGenericTeamAgentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGenericTeamAgentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericTeamAgentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenericTeamAgentInterface_Statics::ClassParams = {
	&UGenericTeamAgentInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGenericTeamAgentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGenericTeamAgentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGenericTeamAgentInterface()
{
	if (!Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton, Z_Construct_UClass_UGenericTeamAgentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGenericTeamAgentInterface.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UGenericTeamAgentInterface>()
{
	return UGenericTeamAgentInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGenericTeamAgentInterface);
UGenericTeamAgentInterface::~UGenericTeamAgentInterface() {}
// End Interface UGenericTeamAgentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeamAttitude_StaticEnum, TEXT("ETeamAttitude"), &Z_Registration_Info_UEnum_ETeamAttitude, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2991328252U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGenericTeamId::StaticStruct, Z_Construct_UScriptStruct_FGenericTeamId_Statics::NewStructOps, TEXT("GenericTeamId"), &Z_Registration_Info_UScriptStruct_GenericTeamId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenericTeamId), 3379033268U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGenericTeamAgentInterface, UGenericTeamAgentInterface::StaticClass, TEXT("UGenericTeamAgentInterface"), &Z_Registration_Info_UClass_UGenericTeamAgentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenericTeamAgentInterface), 1380835789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_3318655591(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
