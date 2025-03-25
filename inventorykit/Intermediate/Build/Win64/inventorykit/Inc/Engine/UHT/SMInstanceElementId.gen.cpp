// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/SMInstance/SMInstanceElementId.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementId() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementIdMapTransactor();
ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementIdMapTransactor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USMInstanceElementIdMapTransactor
void USMInstanceElementIdMapTransactor::StaticRegisterNativesUSMInstanceElementIdMapTransactor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementIdMapTransactor);
UClass* Z_Construct_UClass_USMInstanceElementIdMapTransactor_NoRegister()
{
	return USMInstanceElementIdMapTransactor::StaticClass();
}
struct Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Transient object instance used as a proxy for storing the current data mapping state\n * in the transaction buffer (for retaining the correct mapping through undo/redo).\n */" },
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementId.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementId.h" },
		{ "ToolTip", "Transient object instance used as a proxy for storing the current data mapping state\nin the transaction buffer (for retaining the correct mapping through undo/redo)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementIdMapTransactor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics::ClassParams = {
	&USMInstanceElementIdMapTransactor::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics::Class_MetaDataParams), Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMInstanceElementIdMapTransactor()
{
	if (!Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.OuterSingleton, Z_Construct_UClass_USMInstanceElementIdMapTransactor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USMInstanceElementIdMapTransactor>()
{
	return USMInstanceElementIdMapTransactor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementIdMapTransactor);
USMInstanceElementIdMapTransactor::~USMInstanceElementIdMapTransactor() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USMInstanceElementIdMapTransactor)
#endif // WITH_EDITORONLY_DATA
// End Class USMInstanceElementIdMapTransactor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementIdMapTransactor, USMInstanceElementIdMapTransactor::StaticClass, TEXT("USMInstanceElementIdMapTransactor"), &Z_Registration_Info_UClass_USMInstanceElementIdMapTransactor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementIdMapTransactor), 626958533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_71542800(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementId_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
