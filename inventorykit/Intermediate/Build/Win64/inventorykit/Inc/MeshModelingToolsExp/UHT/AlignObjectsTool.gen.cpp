// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/AlignObjectsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlignObjectsTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAlignObjectsTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAlignObjectsTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAlignObjectsToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAlignObjectsToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAlignObjectsToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAlignObjectsToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UAlignObjectsToolBuilder
void UAlignObjectsToolBuilder::StaticRegisterNativesUAlignObjectsToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlignObjectsToolBuilder);
UClass* Z_Construct_UClass_UAlignObjectsToolBuilder_NoRegister()
{
	return UAlignObjectsToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UAlignObjectsToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AlignObjectsTool.h" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlignObjectsToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAlignObjectsToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlignObjectsToolBuilder_Statics::ClassParams = {
	&UAlignObjectsToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlignObjectsToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAlignObjectsToolBuilder()
{
	if (!Z_Registration_Info_UClass_UAlignObjectsToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlignObjectsToolBuilder.OuterSingleton, Z_Construct_UClass_UAlignObjectsToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAlignObjectsToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UAlignObjectsToolBuilder>()
{
	return UAlignObjectsToolBuilder::StaticClass();
}
UAlignObjectsToolBuilder::UAlignObjectsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAlignObjectsToolBuilder);
UAlignObjectsToolBuilder::~UAlignObjectsToolBuilder() {}
// End Class UAlignObjectsToolBuilder

// Begin Enum EAlignObjectsAlignTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlignObjectsAlignTypes;
static UEnum* EAlignObjectsAlignTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlignObjectsAlignTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlignObjectsAlignTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EAlignObjectsAlignTypes"));
	}
	return Z_Registration_Info_UEnum_EAlignObjectsAlignTypes.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EAlignObjectsAlignTypes>()
{
	return EAlignObjectsAlignTypes_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BoundingBoxes.Name", "EAlignObjectsAlignTypes::BoundingBoxes" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
		{ "Pivots.Name", "EAlignObjectsAlignTypes::Pivots" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAlignObjectsAlignTypes::Pivots", (int64)EAlignObjectsAlignTypes::Pivots },
		{ "EAlignObjectsAlignTypes::BoundingBoxes", (int64)EAlignObjectsAlignTypes::BoundingBoxes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EAlignObjectsAlignTypes",
	"EAlignObjectsAlignTypes",
	Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes()
{
	if (!Z_Registration_Info_UEnum_EAlignObjectsAlignTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlignObjectsAlignTypes.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlignObjectsAlignTypes.InnerSingleton;
}
// End Enum EAlignObjectsAlignTypes

// Begin Enum EAlignObjectsAlignToOptions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlignObjectsAlignToOptions;
static UEnum* EAlignObjectsAlignToOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlignObjectsAlignToOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlignObjectsAlignToOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EAlignObjectsAlignToOptions"));
	}
	return Z_Registration_Info_UEnum_EAlignObjectsAlignToOptions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EAlignObjectsAlignToOptions>()
{
	return EAlignObjectsAlignToOptions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Combined.Name", "EAlignObjectsAlignToOptions::Combined" },
		{ "FirstSelected.Name", "EAlignObjectsAlignToOptions::FirstSelected" },
		{ "LastSelected.Name", "EAlignObjectsAlignToOptions::LastSelected" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAlignObjectsAlignToOptions::FirstSelected", (int64)EAlignObjectsAlignToOptions::FirstSelected },
		{ "EAlignObjectsAlignToOptions::LastSelected", (int64)EAlignObjectsAlignToOptions::LastSelected },
		{ "EAlignObjectsAlignToOptions::Combined", (int64)EAlignObjectsAlignToOptions::Combined },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EAlignObjectsAlignToOptions",
	"EAlignObjectsAlignToOptions",
	Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions()
{
	if (!Z_Registration_Info_UEnum_EAlignObjectsAlignToOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlignObjectsAlignToOptions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlignObjectsAlignToOptions.InnerSingleton;
}
// End Enum EAlignObjectsAlignToOptions

// Begin Enum EAlignObjectsBoxPoint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlignObjectsBoxPoint;
static UEnum* EAlignObjectsBoxPoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlignObjectsBoxPoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlignObjectsBoxPoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EAlignObjectsBoxPoint"));
	}
	return Z_Registration_Info_UEnum_EAlignObjectsBoxPoint.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EAlignObjectsBoxPoint>()
{
	return EAlignObjectsBoxPoint_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.Name", "EAlignObjectsBoxPoint::Back" },
		{ "Bottom.Name", "EAlignObjectsBoxPoint::Bottom" },
		{ "Center.Name", "EAlignObjectsBoxPoint::Center" },
		{ "Front.Name", "EAlignObjectsBoxPoint::Front" },
		{ "Left.Name", "EAlignObjectsBoxPoint::Left" },
		{ "Max.Name", "EAlignObjectsBoxPoint::Max" },
		{ "Min.Name", "EAlignObjectsBoxPoint::Min" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
		{ "Right.Name", "EAlignObjectsBoxPoint::Right" },
		{ "Top.Name", "EAlignObjectsBoxPoint::Top" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAlignObjectsBoxPoint::Center", (int64)EAlignObjectsBoxPoint::Center },
		{ "EAlignObjectsBoxPoint::Bottom", (int64)EAlignObjectsBoxPoint::Bottom },
		{ "EAlignObjectsBoxPoint::Top", (int64)EAlignObjectsBoxPoint::Top },
		{ "EAlignObjectsBoxPoint::Left", (int64)EAlignObjectsBoxPoint::Left },
		{ "EAlignObjectsBoxPoint::Right", (int64)EAlignObjectsBoxPoint::Right },
		{ "EAlignObjectsBoxPoint::Front", (int64)EAlignObjectsBoxPoint::Front },
		{ "EAlignObjectsBoxPoint::Back", (int64)EAlignObjectsBoxPoint::Back },
		{ "EAlignObjectsBoxPoint::Min", (int64)EAlignObjectsBoxPoint::Min },
		{ "EAlignObjectsBoxPoint::Max", (int64)EAlignObjectsBoxPoint::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EAlignObjectsBoxPoint",
	"EAlignObjectsBoxPoint",
	Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint()
{
	if (!Z_Registration_Info_UEnum_EAlignObjectsBoxPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlignObjectsBoxPoint.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlignObjectsBoxPoint.InnerSingleton;
}
// End Enum EAlignObjectsBoxPoint

// Begin Class UAlignObjectsToolProperties
void UAlignObjectsToolProperties::StaticRegisterNativesUAlignObjectsToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlignObjectsToolProperties);
UClass* Z_Construct_UClass_UAlignObjectsToolProperties_NoRegister()
{
	return UAlignObjectsToolProperties::StaticClass();
}
struct Z_Construct_UClass_UAlignObjectsToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Align Objects Operation\n */" },
		{ "IncludePath", "AlignObjectsTool.h" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
		{ "ToolTip", "Standard properties of the Align Objects Operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignType_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignTo_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxPosition_MetaData[] = {
		{ "Category", "Options" },
		{ "EditCondition", "AlignType == EAlignObjectsAlignTypes::BoundingBoxes || AlignTo == EAlignObjectsAlignToOptions::Combined" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignX_MetaData[] = {
		{ "Category", "Axes" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignY_MetaData[] = {
		{ "Category", "Axes" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignZ_MetaData[] = {
		{ "Category", "Axes" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlignType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlignType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlignTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlignTo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoxPosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoxPosition;
	static void NewProp_bAlignX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignX;
	static void NewProp_bAlignY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignY;
	static void NewProp_bAlignZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlignObjectsToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_AlignType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_AlignType = { "AlignType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlignObjectsToolProperties, AlignType), Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignType_MetaData), NewProp_AlignType_MetaData) }; // 4027244931
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_AlignTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_AlignTo = { "AlignTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlignObjectsToolProperties, AlignTo), Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsAlignToOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignTo_MetaData), NewProp_AlignTo_MetaData) }; // 3485470432
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_BoxPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_BoxPosition = { "BoxPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlignObjectsToolProperties, BoxPosition), Z_Construct_UEnum_MeshModelingToolsExp_EAlignObjectsBoxPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxPosition_MetaData), NewProp_BoxPosition_MetaData) }; // 1045996714
void Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignX_SetBit(void* Obj)
{
	((UAlignObjectsToolProperties*)Obj)->bAlignX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignX = { "bAlignX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlignObjectsToolProperties), &Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignX_MetaData), NewProp_bAlignX_MetaData) };
void Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignY_SetBit(void* Obj)
{
	((UAlignObjectsToolProperties*)Obj)->bAlignY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignY = { "bAlignY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlignObjectsToolProperties), &Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignY_MetaData), NewProp_bAlignY_MetaData) };
void Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignZ_SetBit(void* Obj)
{
	((UAlignObjectsToolProperties*)Obj)->bAlignZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignZ = { "bAlignZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlignObjectsToolProperties), &Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignZ_MetaData), NewProp_bAlignZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlignObjectsToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_AlignType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_AlignType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_AlignTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_AlignTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_BoxPosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_BoxPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsToolProperties_Statics::NewProp_bAlignZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAlignObjectsToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlignObjectsToolProperties_Statics::ClassParams = {
	&UAlignObjectsToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAlignObjectsToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlignObjectsToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAlignObjectsToolProperties()
{
	if (!Z_Registration_Info_UClass_UAlignObjectsToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlignObjectsToolProperties.OuterSingleton, Z_Construct_UClass_UAlignObjectsToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAlignObjectsToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UAlignObjectsToolProperties>()
{
	return UAlignObjectsToolProperties::StaticClass();
}
UAlignObjectsToolProperties::UAlignObjectsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAlignObjectsToolProperties);
UAlignObjectsToolProperties::~UAlignObjectsToolProperties() {}
// End Class UAlignObjectsToolProperties

// Begin Class UAlignObjectsTool
void UAlignObjectsTool::StaticRegisterNativesUAlignObjectsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlignObjectsTool);
UClass* Z_Construct_UClass_UAlignObjectsTool_NoRegister()
{
	return UAlignObjectsTool::StaticClass();
}
struct Z_Construct_UClass_UAlignObjectsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAlignObjectsTool transforms the input Components so that they are aligned in various ways, depending on the current settings.\n * The object positions move after every change in the parameters. Currently those changes are not transacted.\n * On cancel the original positions are restored, and on accept the positions are updated with a transaction.\n */" },
		{ "IncludePath", "AlignObjectsTool.h" },
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
		{ "ToolTip", "UAlignObjectsTool transforms the input Components so that they are aligned in various ways, depending on the current settings.\nThe object positions move after every change in the parameters. Currently those changes are not transacted.\nOn cancel the original positions are restored, and on accept the positions are updated with a transaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/AlignObjectsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlignProps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlignObjectsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAlignObjectsTool_Statics::NewProp_AlignProps = { "AlignProps", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlignObjectsTool, AlignProps), Z_Construct_UClass_UAlignObjectsToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignProps_MetaData), NewProp_AlignProps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlignObjectsTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignObjectsTool_Statics::NewProp_AlignProps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAlignObjectsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlignObjectsTool_Statics::ClassParams = {
	&UAlignObjectsTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAlignObjectsTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignObjectsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlignObjectsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAlignObjectsTool()
{
	if (!Z_Registration_Info_UClass_UAlignObjectsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlignObjectsTool.OuterSingleton, Z_Construct_UClass_UAlignObjectsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAlignObjectsTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UAlignObjectsTool>()
{
	return UAlignObjectsTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAlignObjectsTool);
UAlignObjectsTool::~UAlignObjectsTool() {}
// End Class UAlignObjectsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AlignObjectsTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAlignObjectsAlignTypes_StaticEnum, TEXT("EAlignObjectsAlignTypes"), &Z_Registration_Info_UEnum_EAlignObjectsAlignTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4027244931U) },
		{ EAlignObjectsAlignToOptions_StaticEnum, TEXT("EAlignObjectsAlignToOptions"), &Z_Registration_Info_UEnum_EAlignObjectsAlignToOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3485470432U) },
		{ EAlignObjectsBoxPoint_StaticEnum, TEXT("EAlignObjectsBoxPoint"), &Z_Registration_Info_UEnum_EAlignObjectsBoxPoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1045996714U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAlignObjectsToolBuilder, UAlignObjectsToolBuilder::StaticClass, TEXT("UAlignObjectsToolBuilder"), &Z_Registration_Info_UClass_UAlignObjectsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlignObjectsToolBuilder), 802753244U) },
		{ Z_Construct_UClass_UAlignObjectsToolProperties, UAlignObjectsToolProperties::StaticClass, TEXT("UAlignObjectsToolProperties"), &Z_Registration_Info_UClass_UAlignObjectsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlignObjectsToolProperties), 2061235586U) },
		{ Z_Construct_UClass_UAlignObjectsTool, UAlignObjectsTool::StaticClass, TEXT("UAlignObjectsTool"), &Z_Registration_Info_UClass_UAlignObjectsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlignObjectsTool), 4139266209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AlignObjectsTool_h_1336308705(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AlignObjectsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AlignObjectsTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AlignObjectsTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_AlignObjectsTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
