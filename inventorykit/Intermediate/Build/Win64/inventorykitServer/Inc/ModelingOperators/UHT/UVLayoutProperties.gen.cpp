// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingOperators/Public/Properties/UVLayoutProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVLayoutProperties() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EUVLayoutType();
UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References

// Begin Enum EUVLayoutType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVLayoutType;
static UEnum* EUVLayoutType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUVLayoutType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUVLayoutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EUVLayoutType, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EUVLayoutType"));
	}
	return Z_Registration_Info_UEnum_EUVLayoutType.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EUVLayoutType>()
{
	return EUVLayoutType_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Layout Strategies for the UV Layout Tool\n */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "Normalize.Comment", "/** Scale and translate UV islands to normalize the UV islands' area to match an average texel density. */" },
		{ "Normalize.Name", "EUVLayoutType::Normalize" },
		{ "Normalize.ToolTip", "Scale and translate UV islands to normalize the UV islands' area to match an average texel density." },
		{ "Repack.Comment", "/** Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap */" },
		{ "Repack.Name", "EUVLayoutType::Repack" },
		{ "Repack.ToolTip", "Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap" },
		{ "Stack.Comment", "/** Uniformly scale and translate each UV island individually to pack it into the unit square, i.e. fit between 0 and 1 with overlap */" },
		{ "Stack.Name", "EUVLayoutType::Stack" },
		{ "Stack.ToolTip", "Uniformly scale and translate each UV island individually to pack it into the unit square, i.e. fit between 0 and 1 with overlap" },
		{ "ToolTip", "UV Layout Strategies for the UV Layout Tool" },
		{ "Transform.Comment", "/** Apply Scale and Translation properties to all UV values */" },
		{ "Transform.Name", "EUVLayoutType::Transform" },
		{ "Transform.ToolTip", "Apply Scale and Translation properties to all UV values" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUVLayoutType::Transform", (int64)EUVLayoutType::Transform },
		{ "EUVLayoutType::Stack", (int64)EUVLayoutType::Stack },
		{ "EUVLayoutType::Repack", (int64)EUVLayoutType::Repack },
		{ "EUVLayoutType::Normalize", (int64)EUVLayoutType::Normalize },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"EUVLayoutType",
	"EUVLayoutType",
	Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_EUVLayoutType()
{
	if (!Z_Registration_Info_UEnum_EUVLayoutType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVLayoutType.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUVLayoutType.InnerSingleton;
}
// End Enum EUVLayoutType

// Begin Class UUVLayoutProperties
void UUVLayoutProperties::StaticRegisterNativesUUVLayoutProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutProperties);
UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister()
{
	return UUVLayoutProperties::StaticClass();
}
struct Z_Construct_UClass_UUVLayoutProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Layout Settings\n */" },
		{ "IncludePath", "Properties/UVLayoutProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "UV Layout Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutType_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Type of layout applied to input UVs */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Type of layout applied to input UVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts" },
		{ "UIMax", "2048" },
		{ "UIMin", "64" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Uniform scale applied to UVs after packing */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Uniform scale applied to UVs after packing" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Translation applied to UVs after packing, and after scaling */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Translation applied to UVs after packing, and after scaling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFlips_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Allow the Repack layout type to flip the orientation of UV islands to save space. Note that this may cause problems for downstream operations, and therefore is disabled by default. */" },
		{ "EditCondition", "LayoutType == EUVLayoutType::Repack" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Allow the Repack layout type to flip the orientation of UV islands to save space. Note that this may cause problems for downstream operations, and therefore is disabled by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUDIMLayout_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Enable UDIM aware layout and keep islands within their originating UDIM tiles when laying out.*/" },
		{ "DisplayName", "Preserve UDIMs" },
		{ "EditCondition", "bUDIMCVAREnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Enable UDIM aware layout and keep islands within their originating UDIM tiles when laying out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUDIMCVAREnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayoutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static void NewProp_bAllowFlips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFlips;
	static void NewProp_bEnableUDIMLayout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUDIMLayout;
	static void NewProp_bUDIMCVAREnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUDIMCVAREnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType = { "LayoutType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutProperties, LayoutType), Z_Construct_UEnum_ModelingOperators_EUVLayoutType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutType_MetaData), NewProp_LayoutType_MetaData) }; // 1553948370
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutProperties, TextureResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureResolution_MetaData), NewProp_TextureResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutProperties, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutProperties, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
void Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips_SetBit(void* Obj)
{
	((UUVLayoutProperties*)Obj)->bAllowFlips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips = { "bAllowFlips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVLayoutProperties), &Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFlips_MetaData), NewProp_bAllowFlips_MetaData) };
void Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout_SetBit(void* Obj)
{
	((UUVLayoutProperties*)Obj)->bEnableUDIMLayout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout = { "bEnableUDIMLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVLayoutProperties), &Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUDIMLayout_MetaData), NewProp_bEnableUDIMLayout_MetaData) };
void Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled_SetBit(void* Obj)
{
	((UUVLayoutProperties*)Obj)->bUDIMCVAREnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled = { "bUDIMCVAREnabled", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVLayoutProperties), &Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUDIMCVAREnabled_MetaData), NewProp_bUDIMCVAREnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_TextureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVLayoutProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutProperties_Statics::ClassParams = {
	&UUVLayoutProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVLayoutProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVLayoutProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVLayoutProperties()
{
	if (!Z_Registration_Info_UClass_UUVLayoutProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutProperties.OuterSingleton, Z_Construct_UClass_UUVLayoutProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVLayoutProperties.OuterSingleton;
}
template<> MODELINGOPERATORS_API UClass* StaticClass<UUVLayoutProperties>()
{
	return UUVLayoutProperties::StaticClass();
}
UUVLayoutProperties::UUVLayoutProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutProperties);
UUVLayoutProperties::~UUVLayoutProperties() {}
// End Class UUVLayoutProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUVLayoutType_StaticEnum, TEXT("EUVLayoutType"), &Z_Registration_Info_UEnum_EUVLayoutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1553948370U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUVLayoutProperties, UUVLayoutProperties::StaticClass, TEXT("UUVLayoutProperties"), &Z_Registration_Info_UClass_UUVLayoutProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutProperties), 1395360844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_2054341289(TEXT("/Script/ModelingOperators"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
