// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMDrawInstruction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDrawInstruction() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMDrawSettings();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawInstruction();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Enum ERigVMDrawSettings
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMDrawSettings;
static UEnum* ERigVMDrawSettings_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMDrawSettings, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMDrawSettings"));
	}
	return Z_Registration_Info_UEnum_ERigVMDrawSettings.OuterSingleton;
}
template<> RIGVM_API UEnum* StaticEnum<ERigVMDrawSettings::Primitive>()
{
	return ERigVMDrawSettings_StaticEnum();
}
struct Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DynamicMesh.Name", "ERigVMDrawSettings::DynamicMesh" },
		{ "Lines.Name", "ERigVMDrawSettings::Lines" },
		{ "LineStrip.Name", "ERigVMDrawSettings::LineStrip" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
		{ "Points.Name", "ERigVMDrawSettings::Points" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigVMDrawSettings::Points", (int64)ERigVMDrawSettings::Points },
		{ "ERigVMDrawSettings::Lines", (int64)ERigVMDrawSettings::Lines },
		{ "ERigVMDrawSettings::LineStrip", (int64)ERigVMDrawSettings::LineStrip },
		{ "ERigVMDrawSettings::DynamicMesh", (int64)ERigVMDrawSettings::DynamicMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	"ERigVMDrawSettings",
	"ERigVMDrawSettings::Primitive",
	Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RigVM_ERigVMDrawSettings()
{
	if (!Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMDrawSettings_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigVMDrawSettings.InnerSingleton;
}
// End Enum ERigVMDrawSettings

// Begin ScriptStruct FRigVMDrawInstruction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDrawInstruction;
class UScriptStruct* FRigVMDrawInstruction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDrawInstruction, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDrawInstruction"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDrawInstruction>()
{
	return FRigVMDrawInstruction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveType_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawInstruction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimitiveType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDrawInstruction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMDrawInstruction, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMDrawInstruction, PrimitiveType), Z_Construct_UEnum_RigVM_ERigVMDrawSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveType_MetaData), NewProp_PrimitiveType_MetaData) }; // 1122585734
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMDrawInstruction, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMDrawInstruction, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMDrawInstruction, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMDrawInstruction, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_PrimitiveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	nullptr,
	&NewStructOps,
	"RigVMDrawInstruction",
	Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::PropPointers),
	sizeof(FRigVMDrawInstruction),
	alignof(FRigVMDrawInstruction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawInstruction()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMDrawInstruction.InnerSingleton;
}
// End ScriptStruct FRigVMDrawInstruction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERigVMDrawSettings_StaticEnum, TEXT("ERigVMDrawSettings"), &Z_Registration_Info_UEnum_ERigVMDrawSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1122585734U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMDrawInstruction::StaticStruct, Z_Construct_UScriptStruct_FRigVMDrawInstruction_Statics::NewStructOps, TEXT("RigVMDrawInstruction"), &Z_Registration_Info_UScriptStruct_RigVMDrawInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDrawInstruction), 523164675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_3974375774(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDrawInstruction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
