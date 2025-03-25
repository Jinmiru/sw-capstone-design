// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Import/Public/Fbx/InterchangeFbxTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeFbxTranslator() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorSettings();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeFbxTranslator();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeFbxTranslatorSettings();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeFbxTranslatorSettings_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister();
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References

// Begin Class UInterchangeFbxTranslatorSettings
void UInterchangeFbxTranslatorSettings::StaticRegisterNativesUInterchangeFbxTranslatorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFbxTranslatorSettings);
UClass* Z_Construct_UClass_UInterchangeFbxTranslatorSettings_NoRegister()
{
	return UInterchangeFbxTranslatorSettings::StaticClass();
}
struct Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Fbx translator class support import of texture, material, static mesh, skeletal mesh, */" },
		{ "IncludePath", "Fbx/InterchangeFbxTranslator.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxTranslator.h" },
		{ "ToolTip", "Fbx translator class support import of texture, material, static mesh, skeletal mesh," },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertScene_MetaData[] = {
		{ "Category", "Fbx Translator" },
		{ "Comment", "/** Whether to convert FBX scene axis system to Unreal axis system. */" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxTranslator.h" },
		{ "ToolTip", "Whether to convert FBX scene axis system to Unreal axis system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "Fbx Translator" },
		{ "Comment", "/** Whether to force the front axis to be align with X instead of -Y default. */" },
		{ "EditCondition", "bConvertScene" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxTranslator.h" },
		{ "ToolTip", "Whether to force the front axis to be align with X instead of -Y default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertSceneUnit_MetaData[] = {
		{ "Category", "Fbx Translator" },
		{ "Comment", "/** Whether to convert the scene from FBX unit to UE unit (centimeter). */" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxTranslator.h" },
		{ "ToolTip", "Whether to convert the scene from FBX unit to UE unit (centimeter)." },
	};
#endif // WITH_METADATA
	static void NewProp_bConvertScene_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertScene;
	static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
	static void NewProp_bConvertSceneUnit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertSceneUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFbxTranslatorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertScene_SetBit(void* Obj)
{
	((UInterchangeFbxTranslatorSettings*)Obj)->bConvertScene = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertScene = { "bConvertScene", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeFbxTranslatorSettings), &Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertScene_MetaData), NewProp_bConvertScene_MetaData) };
void Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
{
	((UInterchangeFbxTranslatorSettings*)Obj)->bForceFrontXAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeFbxTranslatorSettings), &Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFrontXAxis_MetaData), NewProp_bForceFrontXAxis_MetaData) };
void Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertSceneUnit_SetBit(void* Obj)
{
	((UInterchangeFbxTranslatorSettings*)Obj)->bConvertSceneUnit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertSceneUnit = { "bConvertSceneUnit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeFbxTranslatorSettings), &Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertSceneUnit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertSceneUnit_MetaData), NewProp_bConvertSceneUnit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bForceFrontXAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::NewProp_bConvertSceneUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::ClassParams = {
	&UInterchangeFbxTranslatorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeFbxTranslatorSettings()
{
	if (!Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.OuterSingleton, Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeFbxTranslatorSettings>()
{
	return UInterchangeFbxTranslatorSettings::StaticClass();
}
UInterchangeFbxTranslatorSettings::UInterchangeFbxTranslatorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFbxTranslatorSettings);
UInterchangeFbxTranslatorSettings::~UInterchangeFbxTranslatorSettings() {}
// End Class UInterchangeFbxTranslatorSettings

// Begin Class UInterchangeFbxTranslator
void UInterchangeFbxTranslator::StaticRegisterNativesUInterchangeFbxTranslator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFbxTranslator);
UClass* Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister()
{
	return UInterchangeFbxTranslator::StaticClass();
}
struct Z_Construct_UClass_UInterchangeFbxTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Fbx/InterchangeFbxTranslator.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxTranslator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFbxTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeFbxTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFbxTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeFbxTranslator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeFbxTranslator, IInterchangeTexturePayloadInterface), false },  // 3669720233
	{ Z_Construct_UClass_UInterchangeMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeFbxTranslator, IInterchangeMeshPayloadInterface), false },  // 159805936
	{ Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeFbxTranslator, IInterchangeAnimationPayloadInterface), false },  // 790242820
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFbxTranslator_Statics::ClassParams = {
	&UInterchangeFbxTranslator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFbxTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeFbxTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeFbxTranslator()
{
	if (!Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeFbxTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton;
}
template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeFbxTranslator>()
{
	return UInterchangeFbxTranslator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFbxTranslator);
UInterchangeFbxTranslator::~UInterchangeFbxTranslator() {}
// End Class UInterchangeFbxTranslator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeFbxTranslatorSettings, UInterchangeFbxTranslatorSettings::StaticClass, TEXT("UInterchangeFbxTranslatorSettings"), &Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFbxTranslatorSettings), 3778107527U) },
		{ Z_Construct_UClass_UInterchangeFbxTranslator, UInterchangeFbxTranslator::StaticClass, TEXT("UInterchangeFbxTranslator"), &Z_Registration_Info_UClass_UInterchangeFbxTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFbxTranslator), 3109704690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_2059654893(TEXT("/Script/InterchangeImport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
