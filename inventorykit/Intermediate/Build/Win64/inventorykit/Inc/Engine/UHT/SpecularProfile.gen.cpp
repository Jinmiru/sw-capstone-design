// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SpecularProfile.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecularProfile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_USpecularProfile();
ENGINE_API UClass* Z_Construct_UClass_USpecularProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpecularProfileFormat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeCurveLinearColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpecularProfileStruct();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESpecularProfileFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpecularProfileFormat;
static UEnum* ESpecularProfileFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpecularProfileFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESpecularProfileFormat"));
	}
	return Z_Registration_Info_UEnum_ESpecularProfileFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESpecularProfileFormat>()
{
	return ESpecularProfileFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESpecularProfileFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of niagara solvers */" },
		{ "HalfVector.DisplayName", "Half Angle" },
		{ "HalfVector.Name", "ESpecularProfileFormat::HalfVector" },
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
		{ "ToolTip", "List of niagara solvers" },
		{ "ViewLightVector.DisplayName", "View / Light" },
		{ "ViewLightVector.Name", "ESpecularProfileFormat::ViewLightVector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpecularProfileFormat::ViewLightVector", (int64)ESpecularProfileFormat::ViewLightVector },
		{ "ESpecularProfileFormat::HalfVector", (int64)ESpecularProfileFormat::HalfVector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESpecularProfileFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESpecularProfileFormat",
	"ESpecularProfileFormat",
	Z_Construct_UEnum_Engine_ESpecularProfileFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpecularProfileFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpecularProfileFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESpecularProfileFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESpecularProfileFormat()
{
	if (!Z_Registration_Info_UEnum_ESpecularProfileFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpecularProfileFormat.InnerSingleton, Z_Construct_UEnum_Engine_ESpecularProfileFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpecularProfileFormat.InnerSingleton;
}
// End Enum ESpecularProfileFormat

// Begin ScriptStruct FSpecularProfileStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpecularProfileStruct;
class UScriptStruct* FSpecularProfileStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpecularProfileStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpecularProfileStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecularProfileStruct, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SpecularProfileStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SpecularProfileStruct.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSpecularProfileStruct>()
{
	return FSpecularProfileStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// struct with all the settings we want in USpecularProfile, separate to make it easer to pass this data around in the engine.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
		{ "ToolTip", "struct with all the settings we want in USpecularProfile, separate to make it easer to pass this data around in the engine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/**\n\x09 * Define the texture used as a specular profile\n\x09 */" },
		{ "DisplayName", "LUT Format" },
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
		{ "ToolTip", "Define the texture used as a specular profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewColor_MetaData[] = {
		{ "AllowZoomOutput", "false" },
		{ "Category", "Procedural" },
		{ "Comment", "/**\n\x09* Define the view facing color\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
		{ "ShowInputGridNumbers", "false" },
		{ "ShowOutputGridNumbers", "false" },
		{ "ShowZoomButtons", "false" },
		{ "TimelineLength", "1" },
		{ "ToolTip", "Define the view facing color" },
		{ "ViewMaxInput", "1" },
		{ "ViewMaxOutput", "1" },
		{ "ViewMinInput", "0" },
		{ "ViewMinOutput", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "AllowZoomOutput", "false" },
		{ "Category", "Procedural" },
		{ "Comment", "/**\n\x09* Define the light facing color\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
		{ "ShowInputGridNumbers", "false" },
		{ "ShowOutputGridNumbers", "false" },
		{ "ShowZoomButtons", "false" },
		{ "TimelineLength", "1" },
		{ "ToolTip", "Define the light facing color" },
		{ "ViewMaxInput", "1" },
		{ "ViewMaxOutput", "1" },
		{ "ViewMinInput", "0" },
		{ "ViewMinOutput", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09 * Define the texture used as a specular profile\n\x09 */" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
		{ "ToolTip", "Define the texture used as a specular profile" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecularProfileStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpecularProfileStruct, Format), Z_Construct_UEnum_Engine_ESpecularProfileFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 2393623054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_ViewColor = { "ViewColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpecularProfileStruct, ViewColor), Z_Construct_UScriptStruct_FRuntimeCurveLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewColor_MetaData), NewProp_ViewColor_MetaData) }; // 2743372398
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpecularProfileStruct, LightColor), Z_Construct_UScriptStruct_FRuntimeCurveLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) }; // 2743372398
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpecularProfileStruct, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_ViewColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SpecularProfileStruct",
	Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::PropPointers),
	sizeof(FSpecularProfileStruct),
	alignof(FSpecularProfileStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpecularProfileStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpecularProfileStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpecularProfileStruct.InnerSingleton, Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpecularProfileStruct.InnerSingleton;
}
// End ScriptStruct FSpecularProfileStruct

// Begin Class USpecularProfile
void USpecularProfile::StaticRegisterNativesUSpecularProfile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpecularProfile);
UClass* Z_Construct_UClass_USpecularProfile_NoRegister()
{
	return USpecularProfile::StaticClass();
}
struct Z_Construct_UClass_USpecularProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "SpecularProfile" },
		{ "Comment", "/**\n * Specular profile asset, can be specified at a material. \n * Don't change at runtime. All properties in here are per material.\n */" },
		{ "IncludePath", "Engine/SpecularProfile.h" },
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
		{ "ToolTip", "Specular profile asset, can be specified at a material.\nDon't change at runtime. All properties in here are per material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "USpecularProfile" },
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SpecularProfile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpecularProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpecularProfile_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpecularProfile, Settings), Z_Construct_UScriptStruct_FSpecularProfileStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2170729140
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpecularProfile_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpecularProfile, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpecularProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpecularProfile_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpecularProfile_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpecularProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpecularProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpecularProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpecularProfile_Statics::ClassParams = {
	&USpecularProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpecularProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpecularProfile_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpecularProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_USpecularProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpecularProfile()
{
	if (!Z_Registration_Info_UClass_USpecularProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpecularProfile.OuterSingleton, Z_Construct_UClass_USpecularProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpecularProfile.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USpecularProfile>()
{
	return USpecularProfile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpecularProfile);
USpecularProfile::~USpecularProfile() {}
// End Class USpecularProfile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpecularProfileFormat_StaticEnum, TEXT("ESpecularProfileFormat"), &Z_Registration_Info_UEnum_ESpecularProfileFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2393623054U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSpecularProfileStruct::StaticStruct, Z_Construct_UScriptStruct_FSpecularProfileStruct_Statics::NewStructOps, TEXT("SpecularProfileStruct"), &Z_Registration_Info_UScriptStruct_SpecularProfileStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpecularProfileStruct), 2170729140U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpecularProfile, USpecularProfile::StaticClass, TEXT("USpecularProfile"), &Z_Registration_Info_UClass_USpecularProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpecularProfile), 663202680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_3703521850(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SpecularProfile_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
