// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeCommon/Public/ClothConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfig() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon();
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon_NoRegister();
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon();
CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon_NoRegister();
CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References

// Begin Enum EClothMassMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothMassMode;
static UEnum* EClothMassMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("EClothMassMode"));
	}
	return Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EClothMassMode>()
{
	return EClothMassMode_StaticEnum();
}
struct Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Different mass modes deciding the setup process. */" },
		{ "Density.Comment", "/** The mass value is used to set the density of the cloth, calculating the mass for each particle depending on its connected surface area. */" },
		{ "Density.Name", "EClothMassMode::Density" },
		{ "Density.ToolTip", "The mass value is used to set the density of the cloth, calculating the mass for each particle depending on its connected surface area." },
		{ "MaxClothMassMode.Hidden", "" },
		{ "MaxClothMassMode.Name", "EClothMassMode::MaxClothMassMode" },
		{ "ModuleRelativePath", "Public/ClothConfig.h" },
		{ "ToolTip", "Different mass modes deciding the setup process." },
		{ "TotalMass.Comment", "/** The mass value is used to set the mass of the entire cloth, distributing it to each particle depending on the amount of connected surface area. */" },
		{ "TotalMass.Name", "EClothMassMode::TotalMass" },
		{ "TotalMass.ToolTip", "The mass value is used to set the mass of the entire cloth, distributing it to each particle depending on the amount of connected surface area." },
		{ "UniformMass.Comment", "/** The mass value is used to set the same mass for each particle. */" },
		{ "UniformMass.Name", "EClothMassMode::UniformMass" },
		{ "UniformMass.ToolTip", "The mass value is used to set the same mass for each particle." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClothMassMode::UniformMass", (int64)EClothMassMode::UniformMass },
		{ "EClothMassMode::TotalMass", (int64)EClothMassMode::TotalMass },
		{ "EClothMassMode::Density", (int64)EClothMassMode::Density },
		{ "EClothMassMode::MaxClothMassMode", (int64)EClothMassMode::MaxClothMassMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	nullptr,
	"EClothMassMode",
	"EClothMassMode",
	Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode()
{
	if (!Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton, Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton;
}
// End Enum EClothMassMode

// Begin Class UClothConfigCommon
void UClothConfigCommon::StaticRegisterNativesUClothConfigCommon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothConfigCommon);
UClass* Z_Construct_UClass_UClothConfigCommon_NoRegister()
{
	return UClothConfigCommon::StaticClass();
}
struct Z_Construct_UClass_UClothConfigCommon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Common configuration base class. */" },
		{ "IncludePath", "ClothConfig.h" },
		{ "ModuleRelativePath", "Public/ClothConfig.h" },
		{ "ToolTip", "Common configuration base class." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigCommon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClothConfigCommon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClothConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigCommon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigCommon_Statics::ClassParams = {
	&UClothConfigCommon::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigCommon_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothConfigCommon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothConfigCommon()
{
	if (!Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton, Z_Construct_UClass_UClothConfigCommon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothConfigCommon>()
{
	return UClothConfigCommon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigCommon);
// End Class UClothConfigCommon

// Begin Class UClothSharedConfigCommon
void UClothSharedConfigCommon::StaticRegisterNativesUClothSharedConfigCommon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothSharedConfigCommon);
UClass* Z_Construct_UClass_UClothSharedConfigCommon_NoRegister()
{
	return UClothSharedConfigCommon::StaticClass();
}
struct Z_Construct_UClass_UClothSharedConfigCommon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Common shared configuration base class. */" },
		{ "IncludePath", "ClothConfig.h" },
		{ "ModuleRelativePath", "Public/ClothConfig.h" },
		{ "ToolTip", "Common shared configuration base class." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothSharedConfigCommon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClothSharedConfigCommon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClothConfigCommon,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothSharedConfigCommon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothSharedConfigCommon_Statics::ClassParams = {
	&UClothSharedConfigCommon::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothSharedConfigCommon_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothSharedConfigCommon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothSharedConfigCommon()
{
	if (!Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton, Z_Construct_UClass_UClothSharedConfigCommon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothSharedConfigCommon>()
{
	return UClothSharedConfigCommon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothSharedConfigCommon);
// End Class UClothSharedConfigCommon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClothMassMode_StaticEnum, TEXT("EClothMassMode"), &Z_Registration_Info_UEnum_EClothMassMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1760191966U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothConfigCommon, UClothConfigCommon::StaticClass, TEXT("UClothConfigCommon"), &Z_Registration_Info_UClass_UClothConfigCommon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothConfigCommon), 3326062608U) },
		{ Z_Construct_UClass_UClothSharedConfigCommon, UClothSharedConfigCommon::StaticClass, TEXT("UClothSharedConfigCommon"), &Z_Registration_Info_UClass_UClothSharedConfigCommon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothSharedConfigCommon), 1060918451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_2600765531(TEXT("/Script/ClothingSystemRuntimeCommon"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
