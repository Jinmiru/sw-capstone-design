// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTextureProperty.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureProperty() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaterialExposedTextureProperty
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialExposedTextureProperty;
static UEnum* EMaterialExposedTextureProperty_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialExposedTextureProperty.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialExposedTextureProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialExposedTextureProperty"));
	}
	return Z_Registration_Info_UEnum_EMaterialExposedTextureProperty.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialExposedTextureProperty>()
{
	return EMaterialExposedTextureProperty_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Selects the texture property to output */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
		{ "TMTM_MAX.Name", "TMTM_MAX" },
		{ "TMTM_TexelSize.Comment", "/* The texture's texel size in the UV space (1 / Texture Size) */" },
		{ "TMTM_TexelSize.DisplayName", "Texel Size" },
		{ "TMTM_TexelSize.Name", "TMTM_TexelSize" },
		{ "TMTM_TexelSize.ToolTip", "The texture's texel size in the UV space (1 / Texture Size)" },
		{ "TMTM_TextureSize.Comment", "/* The texture's size. */" },
		{ "TMTM_TextureSize.DisplayName", "Texture Size" },
		{ "TMTM_TextureSize.Name", "TMTM_TextureSize" },
		{ "TMTM_TextureSize.ToolTip", "The texture's size." },
		{ "ToolTip", "Selects the texture property to output" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TMTM_TextureSize", (int64)TMTM_TextureSize },
		{ "TMTM_TexelSize", (int64)TMTM_TexelSize },
		{ "TMTM_MAX", (int64)TMTM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialExposedTextureProperty",
	"EMaterialExposedTextureProperty",
	Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty()
{
	if (!Z_Registration_Info_UEnum_EMaterialExposedTextureProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialExposedTextureProperty.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialExposedTextureProperty.InnerSingleton;
}
// End Enum EMaterialExposedTextureProperty

// Begin Class UMaterialExpressionTextureProperty
void UMaterialExpressionTextureProperty::StaticRegisterNativesUMaterialExpressionTextureProperty()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureProperty);
UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty_NoRegister()
{
	return UMaterialExpressionTextureProperty::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureProperty.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Texture Object to access the property from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "Category", "UMaterialExpressionTextureProperty" },
		{ "Comment", "/** Texture property to be accessed */" },
		{ "DisplayName", "Texture Property" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Texture property to be accessed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureProperty>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_TextureObject = { "TextureObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureProperty, TextureObject), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureObject_MetaData), NewProp_TextureObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureProperty, Property), Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) }; // 2725326488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_TextureObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::NewProp_Property,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::ClassParams = {
	&UMaterialExpressionTextureProperty::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureProperty.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureProperty>()
{
	return UMaterialExpressionTextureProperty::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureProperty);
UMaterialExpressionTextureProperty::~UMaterialExpressionTextureProperty() {}
// End Class UMaterialExpressionTextureProperty

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialExposedTextureProperty_StaticEnum, TEXT("EMaterialExposedTextureProperty"), &Z_Registration_Info_UEnum_EMaterialExposedTextureProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2725326488U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureProperty, UMaterialExpressionTextureProperty::StaticClass, TEXT("UMaterialExpressionTextureProperty"), &Z_Registration_Info_UClass_UMaterialExpressionTextureProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureProperty), 2976049818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_2176437447(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
