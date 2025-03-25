// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Retargeter/RetargetOps/PinBoneOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePinBoneOp() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
IKRIG_API UClass* Z_Construct_UClass_UPinBoneOp();
IKRIG_API UClass* Z_Construct_UClass_UPinBoneOp_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpBase();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_EPinBoneType();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FPinBoneData();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Enum EPinBoneType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPinBoneType;
static UEnum* EPinBoneType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_EPinBoneType, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("EPinBoneType"));
	}
	return Z_Registration_Info_UEnum_EPinBoneType.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<EPinBoneType>()
{
	return EPinBoneType_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_EPinBoneType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// which skeleton are we referring to?\n" },
		{ "FullTransform.Name", "EPinBoneType::FullTransform" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
		{ "RotateOnly.Name", "EPinBoneType::RotateOnly" },
		{ "ScaleOnly.Name", "EPinBoneType::ScaleOnly" },
		{ "ToolTip", "which skeleton are we referring to?" },
		{ "TranslateOnly.Name", "EPinBoneType::TranslateOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPinBoneType::FullTransform", (int64)EPinBoneType::FullTransform },
		{ "EPinBoneType::TranslateOnly", (int64)EPinBoneType::TranslateOnly },
		{ "EPinBoneType::RotateOnly", (int64)EPinBoneType::RotateOnly },
		{ "EPinBoneType::ScaleOnly", (int64)EPinBoneType::ScaleOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_EPinBoneType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"EPinBoneType",
	"EPinBoneType",
	Z_Construct_UEnum_IKRig_EPinBoneType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EPinBoneType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EPinBoneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_EPinBoneType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_EPinBoneType()
{
	if (!Z_Registration_Info_UEnum_EPinBoneType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPinBoneType.InnerSingleton, Z_Construct_UEnum_IKRig_EPinBoneType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPinBoneType.InnerSingleton;
}
// End Enum EPinBoneType

// Begin ScriptStruct FPinBoneData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PinBoneData;
class UScriptStruct* FPinBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PinBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PinBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPinBoneData, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("PinBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_PinBoneData.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FPinBoneData>()
{
	return FPinBoneData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPinBoneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneToPin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The bone to be affected by this op. Will have it's transform modified to match the BoneToPinTo\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
		{ "ToolTip", "The bone to be affected by this op. Will have it's transform modified to match the BoneToPinTo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneToPinTo_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The bone, on the target skeleton to pin to.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
		{ "ToolTip", "The bone, on the target skeleton to pin to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneToPin;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneToPinTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPinBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPinBoneData_Statics::NewProp_BoneToPin = { "BoneToPin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPinBoneData, BoneToPin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneToPin_MetaData), NewProp_BoneToPin_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPinBoneData_Statics::NewProp_BoneToPinTo = { "BoneToPinTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPinBoneData, BoneToPinTo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneToPinTo_MetaData), NewProp_BoneToPinTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPinBoneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinBoneData_Statics::NewProp_BoneToPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinBoneData_Statics::NewProp_BoneToPinTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinBoneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPinBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"PinBoneData",
	Z_Construct_UScriptStruct_FPinBoneData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinBoneData_Statics::PropPointers),
	sizeof(FPinBoneData),
	alignof(FPinBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPinBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPinBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_PinBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PinBoneData.InnerSingleton, Z_Construct_UScriptStruct_FPinBoneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PinBoneData.InnerSingleton;
}
// End ScriptStruct FPinBoneData

// Begin Class UPinBoneOp
void UPinBoneOp::StaticRegisterNativesUPinBoneOp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPinBoneOp);
UClass* Z_Construct_UClass_UPinBoneOp_NoRegister()
{
	return UPinBoneOp::StaticClass();
}
struct Z_Construct_UClass_UPinBoneOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Retargeter/RetargetOps/PinBoneOp.h" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesToPin_MetaData[] = {
		{ "Category", "OpSettings" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinTo_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The bone, on the target skeleton to pin to.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
		{ "ToolTip", "The bone, on the target skeleton to pin to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Apply this pin to the full transform, or just translation or rotation only.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
		{ "ToolTip", "Apply this pin to the full transform, or just translation or rotation only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Maintain the original offset between the BoneToPin and BoneToPinTo\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
		{ "ToolTip", "Maintain the original offset between the BoneToPin and BoneToPinTo" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// A manual offset to apply in global space\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
		{ "ToolTip", "A manual offset to apply in global space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// A manual offset to apply in local space\n" },
		{ "ModuleRelativePath", "Public/Retargeter/RetargetOps/PinBoneOp.h" },
		{ "ToolTip", "A manual offset to apply in local space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToPin_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToPin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PinTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PinTo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PinType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PinType;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPinBoneOp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_BonesToPin_Inner = { "BonesToPin", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPinBoneData, METADATA_PARAMS(0, nullptr) }; // 1294138958
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_BonesToPin = { "BonesToPin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPinBoneOp, BonesToPin), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesToPin_MetaData), NewProp_BonesToPin_MetaData) }; // 1294138958
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_PinTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_PinTo = { "PinTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPinBoneOp, PinTo), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinTo_MetaData), NewProp_PinTo_MetaData) }; // 2286967204
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_PinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPinBoneOp, PinType), Z_Construct_UEnum_IKRig_EPinBoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinType_MetaData), NewProp_PinType_MetaData) }; // 2120630099
void Z_Construct_UClass_UPinBoneOp_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((UPinBoneOp*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPinBoneOp), &Z_Construct_UClass_UPinBoneOp_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_GlobalOffset = { "GlobalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPinBoneOp, GlobalOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalOffset_MetaData), NewProp_GlobalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPinBoneOp_Statics::NewProp_LocalOffset = { "LocalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPinBoneOp, LocalOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOffset_MetaData), NewProp_LocalOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPinBoneOp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_BonesToPin_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_BonesToPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_PinTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_PinTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_PinType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_PinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_GlobalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinBoneOp_Statics::NewProp_LocalOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPinBoneOp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPinBoneOp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URetargetOpBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPinBoneOp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPinBoneOp_Statics::ClassParams = {
	&UPinBoneOp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPinBoneOp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPinBoneOp_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPinBoneOp_Statics::Class_MetaDataParams), Z_Construct_UClass_UPinBoneOp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPinBoneOp()
{
	if (!Z_Registration_Info_UClass_UPinBoneOp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPinBoneOp.OuterSingleton, Z_Construct_UClass_UPinBoneOp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPinBoneOp.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UPinBoneOp>()
{
	return UPinBoneOp::StaticClass();
}
UPinBoneOp::UPinBoneOp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPinBoneOp);
UPinBoneOp::~UPinBoneOp() {}
// End Class UPinBoneOp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPinBoneType_StaticEnum, TEXT("EPinBoneType"), &Z_Registration_Info_UEnum_EPinBoneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2120630099U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPinBoneData::StaticStruct, Z_Construct_UScriptStruct_FPinBoneData_Statics::NewStructOps, TEXT("PinBoneData"), &Z_Registration_Info_UScriptStruct_PinBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPinBoneData), 1294138958U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPinBoneOp, UPinBoneOp::StaticClass, TEXT("UPinBoneOp"), &Z_Registration_Info_UClass_UPinBoneOp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPinBoneOp), 3615701927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_3696839763(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_RetargetOps_PinBoneOp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
