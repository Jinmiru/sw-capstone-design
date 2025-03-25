// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReporterBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UReporterBase();
ENGINE_API UClass* Z_Construct_UClass_UReporterBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReporterLineStyle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EReporterLineStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReporterLineStyle;
static UEnum* EReporterLineStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReporterLineStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReporterLineStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReporterLineStyle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EReporterLineStyle"));
	}
	return Z_Registration_Info_UEnum_EReporterLineStyle.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EReporterLineStyle::Type>()
{
	return EReporterLineStyle_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EReporterLineStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Draw styles for lines. */" },
		{ "Dash.Name", "EReporterLineStyle::Dash" },
		{ "Line.Name", "EReporterLineStyle::Line" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterBase.h" },
		{ "ToolTip", "Draw styles for lines." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReporterLineStyle::Line", (int64)EReporterLineStyle::Line },
		{ "EReporterLineStyle::Dash", (int64)EReporterLineStyle::Dash },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EReporterLineStyle",
	"EReporterLineStyle::Type",
	Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EReporterLineStyle()
{
	if (!Z_Registration_Info_UEnum_EReporterLineStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReporterLineStyle.InnerSingleton, Z_Construct_UEnum_Engine_EReporterLineStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReporterLineStyle.InnerSingleton;
}
// End Enum EReporterLineStyle

// Begin Class UReporterBase
void UReporterBase::StaticRegisterNativesUReporterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReporterBase);
UClass* Z_Construct_UClass_UReporterBase_NoRegister()
{
	return UReporterBase::StaticClass();
}
struct Z_Construct_UClass_UReporterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/ReporterBase.h" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReporterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReporterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReporterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReporterBase_Statics::ClassParams = {
	&UReporterBase::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReporterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UReporterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReporterBase()
{
	if (!Z_Registration_Info_UClass_UReporterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReporterBase.OuterSingleton, Z_Construct_UClass_UReporterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReporterBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UReporterBase>()
{
	return UReporterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReporterBase);
UReporterBase::~UReporterBase() {}
// End Class UReporterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReporterLineStyle_StaticEnum, TEXT("EReporterLineStyle"), &Z_Registration_Info_UEnum_EReporterLineStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 180529210U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReporterBase, UReporterBase::StaticClass, TEXT("UReporterBase"), &Z_Registration_Info_UClass_UReporterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReporterBase), 1836884521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_3748875170(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
