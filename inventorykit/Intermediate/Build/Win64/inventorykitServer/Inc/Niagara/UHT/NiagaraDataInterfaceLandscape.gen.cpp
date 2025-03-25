// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceLandscape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceLandscape() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNDILandscapeSimCacheData();
NIAGARA_API UClass* Z_Construct_UClass_UNDILandscapeSimCacheData_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDILandscape_SourceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDILandscape_SourceMode;
static UEnum* ENDILandscape_SourceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDILandscape_SourceMode"));
	}
	return Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDILandscape_SourceMode>()
{
	return ENDILandscape_SourceMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\n\x09Only use the parent actor or component the system is attached to.\n\x09*/" },
		{ "AttachParent.Name", "ENDILandscape_SourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
		{ "Default.Comment", "/**\n\x09""Default behavior.\n\x09- Use \"Source\" when explicitly specified.\n\x09- When no source is specified, fall back on attached actor or component or world.\n\x09*/" },
		{ "Default.Name", "ENDILandscape_SourceMode::Default" },
		{ "Default.ToolTip", "Default behavior.\n- Use \"Source\" when explicitly specified.\n- When no source is specified, fall back on attached actor or component or world." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
		{ "Source.Comment", "/**\n\x09Only use \"Source\".\n\x09*/" },
		{ "Source.Name", "ENDILandscape_SourceMode::Source" },
		{ "Source.ToolTip", "Only use \"Source\"." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDILandscape_SourceMode::Default", (int64)ENDILandscape_SourceMode::Default },
		{ "ENDILandscape_SourceMode::Source", (int64)ENDILandscape_SourceMode::Source },
		{ "ENDILandscape_SourceMode::AttachParent", (int64)ENDILandscape_SourceMode::AttachParent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDILandscape_SourceMode",
	"ENDILandscape_SourceMode",
	Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode()
{
	if (!Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton;
}
// End Enum ENDILandscape_SourceMode

// Begin Class UNiagaraDataInterfaceLandscape
void UNiagaraDataInterfaceLandscape::StaticRegisterNativesUNiagaraDataInterfaceLandscape()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceLandscape);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister()
{
	return UNiagaraDataInterfaceLandscape::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Data Interface allowing sampling of a Landscape */" },
		{ "DisplayName", "Landscape Sample" },
		{ "IncludePath", "NiagaraDataInterfaceLandscape.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
		{ "ToolTip", "Data Interface allowing sampling of a Landscape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterials_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTexturesSupported_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Can be used to ignore virtual textures even if they are defined for the landscape. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
		{ "ToolTip", "Can be used to ignore virtual textures even if they are defined for the landscape." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceLandscape;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterials;
	static void NewProp_bVirtualTexturesSupported_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTexturesSupported;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceLandscape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape = { "SourceLandscape", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, SourceLandscape), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLandscape_MetaData), NewProp_SourceLandscape_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, SourceMode), Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 3441424291
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_Inner = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, PhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterials_MetaData), NewProp_PhysicalMaterials_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_bVirtualTexturesSupported_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceLandscape*)Obj)->bVirtualTexturesSupported = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_bVirtualTexturesSupported = { "bVirtualTexturesSupported", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceLandscape), &Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_bVirtualTexturesSupported_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualTexturesSupported_MetaData), NewProp_bVirtualTexturesSupported_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_bVirtualTexturesSupported,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceLandscape, INiagaraSimCacheCustomStorageInterface), false },  // 2941118379
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams = {
	&UNiagaraDataInterfaceLandscape::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceLandscape>()
{
	return UNiagaraDataInterfaceLandscape::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceLandscape);
UNiagaraDataInterfaceLandscape::~UNiagaraDataInterfaceLandscape() {}
// End Class UNiagaraDataInterfaceLandscape

// Begin Class UNDILandscapeSimCacheData
void UNDILandscapeSimCacheData::StaticRegisterNativesUNDILandscapeSimCacheData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDILandscapeSimCacheData);
UClass* Z_Construct_UClass_UNDILandscapeSimCacheData_NoRegister()
{
	return UNDILandscapeSimCacheData::StaticClass();
}
struct Z_Construct_UClass_UNDILandscapeSimCacheData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceLandscape.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightFieldTextures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightFieldTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeightFieldTextures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDILandscapeSimCacheData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::NewProp_HeightFieldTextures_Inner = { "HeightFieldTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::NewProp_HeightFieldTextures = { "HeightFieldTextures", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDILandscapeSimCacheData, HeightFieldTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightFieldTextures_MetaData), NewProp_HeightFieldTextures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::NewProp_HeightFieldTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::NewProp_HeightFieldTextures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::ClassParams = {
	&UNDILandscapeSimCacheData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDILandscapeSimCacheData()
{
	if (!Z_Registration_Info_UClass_UNDILandscapeSimCacheData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDILandscapeSimCacheData.OuterSingleton, Z_Construct_UClass_UNDILandscapeSimCacheData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDILandscapeSimCacheData.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNDILandscapeSimCacheData>()
{
	return UNDILandscapeSimCacheData::StaticClass();
}
UNDILandscapeSimCacheData::UNDILandscapeSimCacheData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDILandscapeSimCacheData);
UNDILandscapeSimCacheData::~UNDILandscapeSimCacheData() {}
// End Class UNDILandscapeSimCacheData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDILandscape_SourceMode_StaticEnum, TEXT("ENDILandscape_SourceMode"), &Z_Registration_Info_UEnum_ENDILandscape_SourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3441424291U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceLandscape, UNiagaraDataInterfaceLandscape::StaticClass, TEXT("UNiagaraDataInterfaceLandscape"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceLandscape), 1073644712U) },
		{ Z_Construct_UClass_UNDILandscapeSimCacheData, UNDILandscapeSimCacheData::StaticClass, TEXT("UNDILandscapeSimCacheData"), &Z_Registration_Info_UClass_UNDILandscapeSimCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDILandscapeSimCacheData), 1882700452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_1133716769(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
