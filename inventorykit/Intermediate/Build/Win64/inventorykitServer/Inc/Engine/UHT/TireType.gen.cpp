// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTireType() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTireType();
ENGINE_API UClass* Z_Construct_UClass_UTireType_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTireType
void UTireType::StaticRegisterNativesUTireType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTireType);
UClass* Z_Construct_UClass_UTireType_NoRegister()
{
	return UTireType::StaticClass();
}
struct Z_Construct_UClass_UTireType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** DEPRECATED - Only used to allow conversion to new TireConfig in PhysXVehicles plugin */" },
		{ "IncludePath", "Vehicles/TireType.h" },
		{ "ModuleRelativePath", "Classes/Vehicles/TireType.h" },
		{ "ToolTip", "DEPRECATED - Only used to allow conversion to new TireConfig in PhysXVehicles plugin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionScale_MetaData[] = {
		{ "Category", "Deprecated" },
		{ "ModuleRelativePath", "Classes/Vehicles/TireType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTireType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTireType_Statics::NewProp_FrictionScale = { "FrictionScale", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTireType, FrictionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionScale_MetaData), NewProp_FrictionScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTireType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTireType_Statics::NewProp_FrictionScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTireType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTireType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTireType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTireType_Statics::ClassParams = {
	&UTireType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTireType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTireType_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTireType_Statics::Class_MetaDataParams), Z_Construct_UClass_UTireType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTireType()
{
	if (!Z_Registration_Info_UClass_UTireType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTireType.OuterSingleton, Z_Construct_UClass_UTireType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTireType.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTireType>()
{
	return UTireType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTireType);
UTireType::~UTireType() {}
// End Class UTireType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTireType, UTireType::StaticClass, TEXT("UTireType"), &Z_Registration_Info_UClass_UTireType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTireType), 2075995472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_1128907173(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Vehicles_TireType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
