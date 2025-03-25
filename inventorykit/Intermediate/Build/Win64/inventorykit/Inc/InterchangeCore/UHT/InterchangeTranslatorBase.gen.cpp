// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/InterchangeTranslatorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTranslatorBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorSettings();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Class UInterchangeTranslatorSettings
void UInterchangeTranslatorSettings::StaticRegisterNativesUInterchangeTranslatorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTranslatorSettings);
UClass* Z_Construct_UClass_UInterchangeTranslatorSettings_NoRegister()
{
	return UInterchangeTranslatorSettings::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTranslatorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for translator settings, the UInterchangeAssetImportData will store this data if the source translator exist\n */" },
		{ "IncludePath", "InterchangeTranslatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
		{ "ToolTip", "Base class for translator settings, the UInterchangeAssetImportData will store this data if the source translator exist" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTranslatorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTranslatorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTranslatorSettings_Statics::ClassParams = {
	&UInterchangeTranslatorSettings::StaticClass,
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
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTranslatorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTranslatorSettings()
{
	if (!Z_Registration_Info_UClass_UInterchangeTranslatorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTranslatorSettings.OuterSingleton, Z_Construct_UClass_UInterchangeTranslatorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTranslatorSettings.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeTranslatorSettings>()
{
	return UInterchangeTranslatorSettings::StaticClass();
}
UInterchangeTranslatorSettings::UInterchangeTranslatorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTranslatorSettings);
UInterchangeTranslatorSettings::~UInterchangeTranslatorSettings() {}
// End Class UInterchangeTranslatorSettings

// Begin Enum EInterchangeTranslatorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTranslatorType;
static UEnum* EInterchangeTranslatorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTranslatorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeTranslatorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeTranslatorType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeTranslatorType.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeTranslatorType>()
{
	return EInterchangeTranslatorType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actors.Name", "EInterchangeTranslatorType::Actors" },
		{ "Assets.Name", "EInterchangeTranslatorType::Assets" },
		{ "BlueprintType", "true" },
		{ "Invalid.Name", "EInterchangeTranslatorType::Invalid" },
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
		{ "Scenes.Name", "EInterchangeTranslatorType::Scenes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeTranslatorType::Invalid", (int64)EInterchangeTranslatorType::Invalid },
		{ "EInterchangeTranslatorType::Assets", (int64)EInterchangeTranslatorType::Assets },
		{ "EInterchangeTranslatorType::Actors", (int64)EInterchangeTranslatorType::Actors },
		{ "EInterchangeTranslatorType::Scenes", (int64)EInterchangeTranslatorType::Scenes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EInterchangeTranslatorType",
	"EInterchangeTranslatorType",
	Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTranslatorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTranslatorType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeTranslatorType.InnerSingleton;
}
// End Enum EInterchangeTranslatorType

// Begin Enum EInterchangeTranslatorAssetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType;
static UEnum* EInterchangeTranslatorAssetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeTranslatorAssetType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeTranslatorAssetType>()
{
	return EInterchangeTranslatorAssetType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Animations.Name", "EInterchangeTranslatorAssetType::Animations" },
		{ "BlueprintType", "true" },
		{ "Materials.Name", "EInterchangeTranslatorAssetType::Materials" },
		{ "Meshes.Name", "EInterchangeTranslatorAssetType::Meshes" },
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
		{ "None.Name", "EInterchangeTranslatorAssetType::None" },
		{ "Textures.Name", "EInterchangeTranslatorAssetType::Textures" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeTranslatorAssetType::None", (int64)EInterchangeTranslatorAssetType::None },
		{ "EInterchangeTranslatorAssetType::Textures", (int64)EInterchangeTranslatorAssetType::Textures },
		{ "EInterchangeTranslatorAssetType::Materials", (int64)EInterchangeTranslatorAssetType::Materials },
		{ "EInterchangeTranslatorAssetType::Meshes", (int64)EInterchangeTranslatorAssetType::Meshes },
		{ "EInterchangeTranslatorAssetType::Animations", (int64)EInterchangeTranslatorAssetType::Animations },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EInterchangeTranslatorAssetType",
	"EInterchangeTranslatorAssetType",
	Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.InnerSingleton;
}
// End Enum EInterchangeTranslatorAssetType

// Begin Class UInterchangeTranslatorBase
void UInterchangeTranslatorBase::StaticRegisterNativesUInterchangeTranslatorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTranslatorBase);
UClass* Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister()
{
	return UInterchangeTranslatorBase::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTranslatorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeTranslatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Results;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTranslatorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeTranslatorBase, Results), Z_Construct_UClass_UInterchangeResultsContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeTranslatorBase, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceData_MetaData), NewProp_SourceData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeTranslatorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_Results,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_SourceData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeTranslatorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTranslatorBase_Statics::ClassParams = {
	&UInterchangeTranslatorBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeTranslatorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTranslatorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTranslatorBase()
{
	if (!Z_Registration_Info_UClass_UInterchangeTranslatorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTranslatorBase.OuterSingleton, Z_Construct_UClass_UInterchangeTranslatorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTranslatorBase.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeTranslatorBase>()
{
	return UInterchangeTranslatorBase::StaticClass();
}
UInterchangeTranslatorBase::UInterchangeTranslatorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTranslatorBase);
UInterchangeTranslatorBase::~UInterchangeTranslatorBase() {}
// End Class UInterchangeTranslatorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeTranslatorType_StaticEnum, TEXT("EInterchangeTranslatorType"), &Z_Registration_Info_UEnum_EInterchangeTranslatorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2929013043U) },
		{ EInterchangeTranslatorAssetType_StaticEnum, TEXT("EInterchangeTranslatorAssetType"), &Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3610793168U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTranslatorSettings, UInterchangeTranslatorSettings::StaticClass, TEXT("UInterchangeTranslatorSettings"), &Z_Registration_Info_UClass_UInterchangeTranslatorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTranslatorSettings), 3584085269U) },
		{ Z_Construct_UClass_UInterchangeTranslatorBase, UInterchangeTranslatorBase::StaticClass, TEXT("UInterchangeTranslatorBase"), &Z_Registration_Info_UClass_UInterchangeTranslatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTranslatorBase), 891308039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_3804016500(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
