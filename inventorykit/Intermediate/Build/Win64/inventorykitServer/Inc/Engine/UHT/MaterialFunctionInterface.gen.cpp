// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialFunctionUsage();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaterialFunctionUsage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialFunctionUsage;
static UEnum* EMaterialFunctionUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialFunctionUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialFunctionUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialFunctionUsage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialFunctionUsage"));
	}
	return Z_Registration_Info_UEnum_EMaterialFunctionUsage.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialFunctionUsage>()
{
	return EMaterialFunctionUsage_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Usage set on a material function determines feature compatibility and validation. */" },
		{ "Default.Name", "EMaterialFunctionUsage::Default" },
		{ "MaterialLayer.Name", "EMaterialFunctionUsage::MaterialLayer" },
		{ "MaterialLayerBlend.Name", "EMaterialFunctionUsage::MaterialLayerBlend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "Usage set on a material function determines feature compatibility and validation." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMaterialFunctionUsage::Default", (int64)EMaterialFunctionUsage::Default },
		{ "EMaterialFunctionUsage::MaterialLayer", (int64)EMaterialFunctionUsage::MaterialLayer },
		{ "EMaterialFunctionUsage::MaterialLayerBlend", (int64)EMaterialFunctionUsage::MaterialLayerBlend },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialFunctionUsage",
	"EMaterialFunctionUsage",
	Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialFunctionUsage()
{
	if (!Z_Registration_Info_UEnum_EMaterialFunctionUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialFunctionUsage.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialFunctionUsage.InnerSingleton;
}
// End Enum EMaterialFunctionUsage

// Begin Class UMaterialFunctionInterfaceEditorOnlyData
void UMaterialFunctionInterfaceEditorOnlyData::StaticRegisterNativesUMaterialFunctionInterfaceEditorOnlyData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionInterfaceEditorOnlyData);
UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister()
{
	return UMaterialFunctionInterfaceEditorOnlyData::StaticClass();
}
struct Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Materials/MaterialFunctionInterface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInterfaceEditorOnlyData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::ClassParams = {
	&UMaterialFunctionInterfaceEditorOnlyData::StaticClass,
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
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData()
{
	if (!Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.OuterSingleton, Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialFunctionInterfaceEditorOnlyData>()
{
	return UMaterialFunctionInterfaceEditorOnlyData::StaticClass();
}
UMaterialFunctionInterfaceEditorOnlyData::UMaterialFunctionInterfaceEditorOnlyData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInterfaceEditorOnlyData);
UMaterialFunctionInterfaceEditorOnlyData::~UMaterialFunctionInterfaceEditorOnlyData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunctionInterfaceEditorOnlyData)
// End Class UMaterialFunctionInterfaceEditorOnlyData

// Begin Class UMaterialFunctionInterface
void UMaterialFunctionInterface::StaticRegisterNativesUMaterialFunctionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionInterface);
UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister()
{
	return UMaterialFunctionInterface::StaticClass();
}
struct Z_Construct_UClass_UMaterialFunctionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Material Function is a collection of material expressions that can be reused in different materials\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Materials/MaterialFunctionInterface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "A Material Function is a collection of material expressions that can be reused in different materials" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Used by materials using this function to know when to recompile. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "Used by materials using this function to know when to recompile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctionUsage_MetaData[] = {
		{ "Comment", "/** The intended usage of this function, required for material layers. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "The intended usage of this function, required for material layers." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedInputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedOutputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorOnlyData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialFunctionUsage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialFunctionUsage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CombinedInputTypes;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CombinedOutputTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_EditorOnlyData = { "EditorOnlyData", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInterface, EditorOnlyData), Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorOnlyData_MetaData), NewProp_EditorOnlyData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInterface, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateId_MetaData), NewProp_StateId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage = { "MaterialFunctionUsage", nullptr, (EPropertyFlags)0x0020090000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInterface, MaterialFunctionUsage), Z_Construct_UEnum_Engine_EMaterialFunctionUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFunctionUsage_MetaData), NewProp_MaterialFunctionUsage_MetaData) }; // 3390640329
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes = { "CombinedInputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInterface, CombinedInputTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedInputTypes_MetaData), NewProp_CombinedInputTypes_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes = { "CombinedOutputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInterface, CombinedOutputTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedOutputTypes_MetaData), NewProp_CombinedOutputTypes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInterface, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData), NewProp_ThumbnailInfo_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_EditorOnlyData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialFunctionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::ClassParams = {
	&UMaterialFunctionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers),
	0,
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialFunctionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialFunctionInterface()
{
	if (!Z_Registration_Info_UClass_UMaterialFunctionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionInterface.OuterSingleton, Z_Construct_UClass_UMaterialFunctionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialFunctionInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialFunctionInterface>()
{
	return UMaterialFunctionInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInterface);
UMaterialFunctionInterface::~UMaterialFunctionInterface() {}
// End Class UMaterialFunctionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialFunctionUsage_StaticEnum, TEXT("EMaterialFunctionUsage"), &Z_Registration_Info_UEnum_EMaterialFunctionUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3390640329U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData, UMaterialFunctionInterfaceEditorOnlyData::StaticClass, TEXT("UMaterialFunctionInterfaceEditorOnlyData"), &Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionInterfaceEditorOnlyData), 3344196901U) },
		{ Z_Construct_UClass_UMaterialFunctionInterface, UMaterialFunctionInterface::StaticClass, TEXT("UMaterialFunctionInterface"), &Z_Registration_Info_UClass_UMaterialFunctionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionInterface), 3409691506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_2906873054(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
