// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/SkeletalMeshVertexAttribute.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshVertexAttribute() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESkeletalMeshVertexAttributeDataType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType;
static UEnum* ESkeletalMeshVertexAttributeDataType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkeletalMeshVertexAttributeDataType"));
	}
	return Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshVertexAttributeDataType>()
{
	return ESkeletalMeshVertexAttributeDataType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Float.DisplayName", "Float" },
		{ "Float.Name", "ESkeletalMeshVertexAttributeDataType::Float" },
		{ "Float.ToolTip", "Store the vertex attribute values as a 32-bit floating point (float)" },
		{ "HalfFloat.DisplayName", "Half-float" },
		{ "HalfFloat.Name", "ESkeletalMeshVertexAttributeDataType::HalfFloat" },
		{ "HalfFloat.ToolTip", "Store the vertex attribute values as a 16-bit floating point (half)" },
		{ "ModuleRelativePath", "Public/Animation/SkeletalMeshVertexAttribute.h" },
		{ "NUInt8.DisplayName", "8-bit Unsigned Normalized" },
		{ "NUInt8.Name", "ESkeletalMeshVertexAttributeDataType::NUInt8" },
		{ "NUInt8.ToolTip", "Quantize and store the vertex attribute values as an unsigned normalized 8-bit integer. Values outside the [0.0 - 1.0] range are clamped." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESkeletalMeshVertexAttributeDataType::Float", (int64)ESkeletalMeshVertexAttributeDataType::Float },
		{ "ESkeletalMeshVertexAttributeDataType::HalfFloat", (int64)ESkeletalMeshVertexAttributeDataType::HalfFloat },
		{ "ESkeletalMeshVertexAttributeDataType::NUInt8", (int64)ESkeletalMeshVertexAttributeDataType::NUInt8 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESkeletalMeshVertexAttributeDataType",
	"ESkeletalMeshVertexAttributeDataType",
	Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType()
{
	if (!Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.InnerSingleton, Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.InnerSingleton;
}
// End Enum ESkeletalMeshVertexAttributeDataType

// Begin ScriptStruct FSkeletalMeshVertexAttributeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshVertexAttributeInfo;
class UScriptStruct* FSkeletalMeshVertexAttributeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshVertexAttributeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshVertexAttributeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshVertexAttributeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshVertexAttributeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshVertexAttributeInfo>()
{
	return FSkeletalMeshVertexAttributeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A structure to store user-controllable settings for attributes */" },
		{ "ModuleRelativePath", "Public/Animation/SkeletalMeshVertexAttribute.h" },
		{ "ToolTip", "A structure to store user-controllable settings for attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledForRender_MetaData[] = {
		{ "Category", "Vertex Attributes" },
		{ "Comment", "/** Whether this vertex attribute should be included in the render data. Requires a rebuild of the render mesh. */" },
		{ "ModuleRelativePath", "Public/Animation/SkeletalMeshVertexAttribute.h" },
		{ "ToolTip", "Whether this vertex attribute should be included in the render data. Requires a rebuild of the render mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Vertex Attributes" },
		{ "Comment", "/** The name of the vertex attribute */" },
		{ "ModuleRelativePath", "Public/Animation/SkeletalMeshVertexAttribute.h" },
		{ "ToolTip", "The name of the vertex attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "Category", "Vertex Attributes" },
		{ "Comment", "/** The data type to store the vertex data as for rendering */" },
		{ "ModuleRelativePath", "Public/Animation/SkeletalMeshVertexAttribute.h" },
		{ "ToolTip", "The data type to store the vertex data as for rendering" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnabledForRender;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshVertexAttributeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewProp_EnabledForRender = { "EnabledForRender", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshVertexAttributeInfo, EnabledForRender), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledForRender_MetaData), NewProp_EnabledForRender_MetaData) }; // 846681800
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshVertexAttributeInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshVertexAttributeInfo, DataType), Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1860552829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewProp_EnabledForRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewProp_DataType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewProp_DataType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkeletalMeshVertexAttributeInfo",
	Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::PropPointers),
	sizeof(FSkeletalMeshVertexAttributeInfo),
	alignof(FSkeletalMeshVertexAttributeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshVertexAttributeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshVertexAttributeInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshVertexAttributeInfo.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshVertexAttributeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESkeletalMeshVertexAttributeDataType_StaticEnum, TEXT("ESkeletalMeshVertexAttributeDataType"), &Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1860552829U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkeletalMeshVertexAttributeInfo::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewStructOps, TEXT("SkeletalMeshVertexAttributeInfo"), &Z_Registration_Info_UScriptStruct_SkeletalMeshVertexAttributeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshVertexAttributeInfo), 34094187U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h_85444632(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
