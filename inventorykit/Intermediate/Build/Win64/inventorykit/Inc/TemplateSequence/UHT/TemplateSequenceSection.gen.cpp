// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/Sections/TemplateSequenceSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieScenePropertyBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSection();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceSection_NoRegister();
TEMPLATESEQUENCE_API UEnum* Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType();
TEMPLATESEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateSectionPropertyScale();
UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References

// Begin Enum ETemplateSectionPropertyScaleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType;
static UEnum* ETemplateSectionPropertyScaleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType, (UObject*)Z_Construct_UPackage__Script_TemplateSequence(), TEXT("ETemplateSectionPropertyScaleType"));
	}
	return Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UEnum* StaticEnum<ETemplateSectionPropertyScaleType>()
{
	return ETemplateSectionPropertyScaleType_StaticEnum();
}
struct Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines the type of property scaling for a template sequence.\n */" },
		{ "FloatProperty.Comment", "/** Scales a float property */" },
		{ "FloatProperty.Name", "ETemplateSectionPropertyScaleType::FloatProperty" },
		{ "FloatProperty.ToolTip", "Scales a float property" },
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
		{ "ToolTip", "Defines the type of property scaling for a template sequence." },
		{ "TransformPropertyLocationOnly.Comment", "/** Scales the location channels (X, Y, Z) of a transform property */" },
		{ "TransformPropertyLocationOnly.Name", "ETemplateSectionPropertyScaleType::TransformPropertyLocationOnly" },
		{ "TransformPropertyLocationOnly.ToolTip", "Scales the location channels (X, Y, Z) of a transform property" },
		{ "TransformPropertyRotationOnly.Comment", "/** Scales the rotation channels (yaw, pitch, roll) of a transform property */" },
		{ "TransformPropertyRotationOnly.Name", "ETemplateSectionPropertyScaleType::TransformPropertyRotationOnly" },
		{ "TransformPropertyRotationOnly.ToolTip", "Scales the rotation channels (yaw, pitch, roll) of a transform property" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETemplateSectionPropertyScaleType::FloatProperty", (int64)ETemplateSectionPropertyScaleType::FloatProperty },
		{ "ETemplateSectionPropertyScaleType::TransformPropertyLocationOnly", (int64)ETemplateSectionPropertyScaleType::TransformPropertyLocationOnly },
		{ "ETemplateSectionPropertyScaleType::TransformPropertyRotationOnly", (int64)ETemplateSectionPropertyScaleType::TransformPropertyRotationOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TemplateSequence,
	nullptr,
	"ETemplateSectionPropertyScaleType",
	"ETemplateSectionPropertyScaleType",
	Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType()
{
	if (!Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.InnerSingleton, Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType.InnerSingleton;
}
// End Enum ETemplateSectionPropertyScaleType

// Begin ScriptStruct FTemplateSectionPropertyScale
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TemplateSectionPropertyScale;
class UScriptStruct* FTemplateSectionPropertyScale::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateSectionPropertyScale.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TemplateSectionPropertyScale.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale, (UObject*)Z_Construct_UPackage__Script_TemplateSequence(), TEXT("TemplateSectionPropertyScale"));
	}
	return Z_Registration_Info_UScriptStruct_TemplateSectionPropertyScale.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UScriptStruct* StaticStruct<FTemplateSectionPropertyScale>()
{
	return FTemplateSectionPropertyScale::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a property scaling for a template sequence.\n */" },
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
		{ "ToolTip", "Defines a property scaling for a template sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyScaleType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBinding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyScaleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PropertyScaleType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateSectionPropertyScale>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateSectionPropertyScale, ObjectBinding), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBinding_MetaData), NewProp_ObjectBinding_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyBinding = { "PropertyBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateSectionPropertyScale, PropertyBinding), Z_Construct_UScriptStruct_FMovieScenePropertyBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyBinding_MetaData), NewProp_PropertyBinding_MetaData) }; // 509261761
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType = { "PropertyScaleType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateSectionPropertyScale, PropertyScaleType), Z_Construct_UEnum_TemplateSequence_ETemplateSectionPropertyScaleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyScaleType_MetaData), NewProp_PropertyScaleType_MetaData) }; // 1006876103
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_FloatChannel = { "FloatChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTemplateSectionPropertyScale, FloatChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatChannel_MetaData), NewProp_FloatChannel_MetaData) }; // 139010471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_ObjectBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_PropertyScaleType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewProp_FloatChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	nullptr,
	&NewStructOps,
	"TemplateSectionPropertyScale",
	Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::PropPointers),
	sizeof(FTemplateSectionPropertyScale),
	alignof(FTemplateSectionPropertyScale),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTemplateSectionPropertyScale()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateSectionPropertyScale.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TemplateSectionPropertyScale.InnerSingleton, Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TemplateSectionPropertyScale.InnerSingleton;
}
// End ScriptStruct FTemplateSectionPropertyScale

// Begin Class UTemplateSequenceSection
void UTemplateSequenceSection::StaticRegisterNativesUTemplateSequenceSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequenceSection);
UClass* Z_Construct_UClass_UTemplateSequenceSection_NoRegister()
{
	return UTemplateSequenceSection::StaticClass();
}
struct Z_Construct_UClass_UTemplateSequenceSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines the section for a template sequence track.\n */" },
		{ "IncludePath", "Sections/TemplateSequenceSection.h" },
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Defines the section for a template sequence track." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyScales_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/TemplateSequenceSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyScales_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyScales;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales_Inner = { "PropertyScales", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTemplateSectionPropertyScale, METADATA_PARAMS(0, nullptr) }; // 3316219736
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales = { "PropertyScales", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemplateSequenceSection, PropertyScales), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyScales_MetaData), NewProp_PropertyScales_MetaData) }; // 3316219736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateSequenceSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequenceSection_Statics::NewProp_PropertyScales,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTemplateSequenceSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceSection_Statics::ClassParams = {
	&UTemplateSequenceSection::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTemplateSequenceSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSection_Statics::PropPointers),
	0,
	0x003000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemplateSequenceSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemplateSequenceSection()
{
	if (!Z_Registration_Info_UClass_UTemplateSequenceSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequenceSection.OuterSingleton, Z_Construct_UClass_UTemplateSequenceSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemplateSequenceSection.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequenceSection>()
{
	return UTemplateSequenceSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceSection);
UTemplateSequenceSection::~UTemplateSequenceSection() {}
// End Class UTemplateSequenceSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETemplateSectionPropertyScaleType_StaticEnum, TEXT("ETemplateSectionPropertyScaleType"), &Z_Registration_Info_UEnum_ETemplateSectionPropertyScaleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1006876103U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTemplateSectionPropertyScale::StaticStruct, Z_Construct_UScriptStruct_FTemplateSectionPropertyScale_Statics::NewStructOps, TEXT("TemplateSectionPropertyScale"), &Z_Registration_Info_UScriptStruct_TemplateSectionPropertyScale, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateSectionPropertyScale), 3316219736U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSequenceSection, UTemplateSequenceSection::StaticClass, TEXT("UTemplateSequenceSection"), &Z_Registration_Info_UClass_UTemplateSequenceSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequenceSection), 935839270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_2219489237(TEXT("/Script/TemplateSequence"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Sections_TemplateSequenceSection_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
