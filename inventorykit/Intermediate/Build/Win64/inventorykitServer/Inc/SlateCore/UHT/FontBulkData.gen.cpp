// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontBulkData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData();
SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Class UFontBulkData
void UFontBulkData::StaticRegisterNativesUFontBulkData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontBulkData);
UClass* Z_Construct_UClass_UFontBulkData_NoRegister()
{
	return UFontBulkData::StaticClass();
}
struct Z_Construct_UClass_UFontBulkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Fonts/FontBulkData.h" },
		{ "ModuleRelativePath", "Public/Fonts/FontBulkData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontBulkData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFontBulkData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFontBulkData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontBulkData_Statics::ClassParams = {
	&UFontBulkData::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFontBulkData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFontBulkData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFontBulkData()
{
	if (!Z_Registration_Info_UClass_UFontBulkData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontBulkData.OuterSingleton, Z_Construct_UClass_UFontBulkData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFontBulkData.OuterSingleton;
}
template<> SLATECORE_API UClass* StaticClass<UFontBulkData>()
{
	return UFontBulkData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFontBulkData);
UFontBulkData::~UFontBulkData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFontBulkData)
// End Class UFontBulkData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFontBulkData, UFontBulkData::StaticClass, TEXT("UFontBulkData"), &Z_Registration_Info_UClass_UFontBulkData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontBulkData), 2754069428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_3204474678(TEXT("/Script/SlateCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
