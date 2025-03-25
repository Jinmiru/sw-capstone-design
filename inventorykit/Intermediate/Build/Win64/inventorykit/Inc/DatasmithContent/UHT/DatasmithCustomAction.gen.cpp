// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithCustomAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCustomAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCustomActionBase();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithCustomActionBase
void UDatasmithCustomActionBase::StaticRegisterNativesUDatasmithCustomActionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCustomActionBase);
UClass* Z_Construct_UClass_UDatasmithCustomActionBase_NoRegister()
{
	return UDatasmithCustomActionBase::StaticClass();
}
struct Z_Construct_UClass_UDatasmithCustomActionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for actions available to the end-user through the Content browser contextual menu.\n * By extending this class, the custom action is automatically registered to be available for the end user\n */" },
		{ "IncludePath", "DatasmithCustomAction.h" },
		{ "ModuleRelativePath", "Public/DatasmithCustomAction.h" },
		{ "ToolTip", "Base class for actions available to the end-user through the Content browser contextual menu.\nBy extending this class, the custom action is automatically registered to be available for the end user" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCustomActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatasmithCustomActionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCustomActionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCustomActionBase_Statics::ClassParams = {
	&UDatasmithCustomActionBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCustomActionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithCustomActionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithCustomActionBase()
{
	if (!Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton, Z_Construct_UClass_UDatasmithCustomActionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithCustomActionBase.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCustomActionBase>()
{
	return UDatasmithCustomActionBase::StaticClass();
}
UDatasmithCustomActionBase::UDatasmithCustomActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCustomActionBase);
UDatasmithCustomActionBase::~UDatasmithCustomActionBase() {}
// End Class UDatasmithCustomActionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithCustomActionBase, UDatasmithCustomActionBase::StaticClass, TEXT("UDatasmithCustomActionBase"), &Z_Registration_Info_UClass_UDatasmithCustomActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCustomActionBase), 2293006566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_4011990041(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithCustomAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
