// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/SmoothMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmoothMeshTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDiffusionSmoothProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDiffusionSmoothProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UImplicitSmoothProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UImplicitSmoothProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UIterativeSmoothProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UIterativeSmoothProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothMeshTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothMeshTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothMeshToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothMeshToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothMeshToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothMeshToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothWeightMapSetProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USmoothWeightMapSetProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseMeshProcessingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseMeshProcessingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UWeightMapSetProperties();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum ESmoothMeshToolSmoothType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType;
static UEnum* ESmoothMeshToolSmoothType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ESmoothMeshToolSmoothType"));
	}
	return Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ESmoothMeshToolSmoothType>()
{
	return ESmoothMeshToolSmoothType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Diffusion.Comment", "/** Iterative implicit-diffusion smoothing with N iterations */" },
		{ "Diffusion.DisplayName", "Iterative Diffusion" },
		{ "Diffusion.Name", "ESmoothMeshToolSmoothType::Diffusion" },
		{ "Diffusion.ToolTip", "Iterative implicit-diffusion smoothing with N iterations" },
		{ "Implicit.Comment", "/** Implicit smoothing, produces smoother output and does a better job at preserving UVs, but can be very slow on large meshes */" },
		{ "Implicit.DisplayName", "Fast Implicit" },
		{ "Implicit.Name", "ESmoothMeshToolSmoothType::Implicit" },
		{ "Implicit.ToolTip", "Implicit smoothing, produces smoother output and does a better job at preserving UVs, but can be very slow on large meshes" },
		{ "Iterative.Comment", "/** Iterative smoothing with N iterations */" },
		{ "Iterative.DisplayName", "Fast Iterative" },
		{ "Iterative.Name", "ESmoothMeshToolSmoothType::Iterative" },
		{ "Iterative.ToolTip", "Iterative smoothing with N iterations" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESmoothMeshToolSmoothType::Iterative", (int64)ESmoothMeshToolSmoothType::Iterative },
		{ "ESmoothMeshToolSmoothType::Implicit", (int64)ESmoothMeshToolSmoothType::Implicit },
		{ "ESmoothMeshToolSmoothType::Diffusion", (int64)ESmoothMeshToolSmoothType::Diffusion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ESmoothMeshToolSmoothType",
	"ESmoothMeshToolSmoothType",
	Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType()
{
	if (!Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType.InnerSingleton;
}
// End Enum ESmoothMeshToolSmoothType

// Begin Class USmoothMeshToolProperties
void USmoothMeshToolProperties::StaticRegisterNativesUSmoothMeshToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothMeshToolProperties);
UClass* Z_Construct_UClass_USmoothMeshToolProperties_NoRegister()
{
	return USmoothMeshToolProperties::StaticClass();
}
struct Z_Construct_UClass_USmoothMeshToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for properties affecting the Smoother. */" },
		{ "IncludePath", "SmoothMeshTool.h" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "PropertySet for properties affecting the Smoother." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingType_MetaData[] = {
		{ "Category", "SmoothingType" },
		{ "Comment", "/** Type of smoothing to apply */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Type of smoothing to apply" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothMeshToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmoothMeshToolProperties_Statics::NewProp_SmoothingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmoothMeshToolProperties_Statics::NewProp_SmoothingType = { "SmoothingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothMeshToolProperties, SmoothingType), Z_Construct_UEnum_MeshModelingToolsExp_ESmoothMeshToolSmoothType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingType_MetaData), NewProp_SmoothingType_MetaData) }; // 3028459594
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothMeshToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothMeshToolProperties_Statics::NewProp_SmoothingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothMeshToolProperties_Statics::NewProp_SmoothingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmoothMeshToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothMeshToolProperties_Statics::ClassParams = {
	&USmoothMeshToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USmoothMeshToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothMeshToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothMeshToolProperties()
{
	if (!Z_Registration_Info_UClass_USmoothMeshToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothMeshToolProperties.OuterSingleton, Z_Construct_UClass_USmoothMeshToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothMeshToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USmoothMeshToolProperties>()
{
	return USmoothMeshToolProperties::StaticClass();
}
USmoothMeshToolProperties::USmoothMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothMeshToolProperties);
USmoothMeshToolProperties::~USmoothMeshToolProperties() {}
// End Class USmoothMeshToolProperties

// Begin Class UIterativeSmoothProperties
void UIterativeSmoothProperties::StaticRegisterNativesUIterativeSmoothProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIterativeSmoothProperties);
UClass* Z_Construct_UClass_UIterativeSmoothProperties_NoRegister()
{
	return UIterativeSmoothProperties::StaticClass();
}
struct Z_Construct_UClass_UIterativeSmoothProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Properties for Iterative Smoothing */" },
		{ "IncludePath", "SmoothMeshTool.h" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Properties for Iterative Smoothing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingPerStep_MetaData[] = {
		{ "Category", "IterativeSmoothingOptions" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of smoothing allowed per step. Smaller steps will avoid things like collapse of small/thin features. */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Amount of smoothing allowed per step. Smaller steps will avoid things like collapse of small/thin features." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Category", "IterativeSmoothingOptions" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Smoothing iterations */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Number of Smoothing iterations" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothBoundary_MetaData[] = {
		{ "Category", "IterativeSmoothingOptions" },
		{ "Comment", "/** If this is false, the smoother will try to reshape the triangles to be more regular, which will distort UVs */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "If this is false, the smoother will try to reshape the triangles to be more regular, which will distort UVs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingPerStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static void NewProp_bSmoothBoundary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothBoundary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIterativeSmoothProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_SmoothingPerStep = { "SmoothingPerStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIterativeSmoothProperties, SmoothingPerStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingPerStep_MetaData), NewProp_SmoothingPerStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIterativeSmoothProperties, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
void Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_bSmoothBoundary_SetBit(void* Obj)
{
	((UIterativeSmoothProperties*)Obj)->bSmoothBoundary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_bSmoothBoundary = { "bSmoothBoundary", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIterativeSmoothProperties), &Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_bSmoothBoundary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothBoundary_MetaData), NewProp_bSmoothBoundary_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIterativeSmoothProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_SmoothingPerStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_Steps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIterativeSmoothProperties_Statics::NewProp_bSmoothBoundary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIterativeSmoothProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIterativeSmoothProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIterativeSmoothProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIterativeSmoothProperties_Statics::ClassParams = {
	&UIterativeSmoothProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIterativeSmoothProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIterativeSmoothProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIterativeSmoothProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UIterativeSmoothProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIterativeSmoothProperties()
{
	if (!Z_Registration_Info_UClass_UIterativeSmoothProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIterativeSmoothProperties.OuterSingleton, Z_Construct_UClass_UIterativeSmoothProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIterativeSmoothProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UIterativeSmoothProperties>()
{
	return UIterativeSmoothProperties::StaticClass();
}
UIterativeSmoothProperties::UIterativeSmoothProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIterativeSmoothProperties);
UIterativeSmoothProperties::~UIterativeSmoothProperties() {}
// End Class UIterativeSmoothProperties

// Begin Class UDiffusionSmoothProperties
void UDiffusionSmoothProperties::StaticRegisterNativesUDiffusionSmoothProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDiffusionSmoothProperties);
UClass* Z_Construct_UClass_UDiffusionSmoothProperties_NoRegister()
{
	return UDiffusionSmoothProperties::StaticClass();
}
struct Z_Construct_UClass_UDiffusionSmoothProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Properties for Diffusion Smoothing */" },
		{ "IncludePath", "SmoothMeshTool.h" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Properties for Diffusion Smoothing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingPerStep_MetaData[] = {
		{ "Category", "DiffusionSmoothingOptions" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of smoothing allowed per step. Smaller steps will avoid things like collapse of small/thin features. */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Amount of smoothing allowed per step. Smaller steps will avoid things like collapse of small/thin features." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Category", "DiffusionSmoothingOptions" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Smoothing iterations */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Number of Smoothing iterations" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveUVs_MetaData[] = {
		{ "Category", "DiffusionSmoothingOptions" },
		{ "Comment", "/** If this is false, the smoother will try to reshape the triangles to be more regular, which will distort UVs */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "If this is false, the smoother will try to reshape the triangles to be more regular, which will distort UVs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingPerStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static void NewProp_bPreserveUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveUVs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiffusionSmoothProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_SmoothingPerStep = { "SmoothingPerStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiffusionSmoothProperties, SmoothingPerStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingPerStep_MetaData), NewProp_SmoothingPerStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDiffusionSmoothProperties, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
void Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_bPreserveUVs_SetBit(void* Obj)
{
	((UDiffusionSmoothProperties*)Obj)->bPreserveUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_bPreserveUVs = { "bPreserveUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDiffusionSmoothProperties), &Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_bPreserveUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveUVs_MetaData), NewProp_bPreserveUVs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiffusionSmoothProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_SmoothingPerStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_Steps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiffusionSmoothProperties_Statics::NewProp_bPreserveUVs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiffusionSmoothProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDiffusionSmoothProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiffusionSmoothProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDiffusionSmoothProperties_Statics::ClassParams = {
	&UDiffusionSmoothProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDiffusionSmoothProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDiffusionSmoothProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiffusionSmoothProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDiffusionSmoothProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDiffusionSmoothProperties()
{
	if (!Z_Registration_Info_UClass_UDiffusionSmoothProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiffusionSmoothProperties.OuterSingleton, Z_Construct_UClass_UDiffusionSmoothProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDiffusionSmoothProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDiffusionSmoothProperties>()
{
	return UDiffusionSmoothProperties::StaticClass();
}
UDiffusionSmoothProperties::UDiffusionSmoothProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDiffusionSmoothProperties);
UDiffusionSmoothProperties::~UDiffusionSmoothProperties() {}
// End Class UDiffusionSmoothProperties

// Begin Class UImplicitSmoothProperties
void UImplicitSmoothProperties::StaticRegisterNativesUImplicitSmoothProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImplicitSmoothProperties);
UClass* Z_Construct_UClass_UImplicitSmoothProperties_NoRegister()
{
	return UImplicitSmoothProperties::StaticClass();
}
struct Z_Construct_UClass_UImplicitSmoothProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Properties for Implicit smoothing */" },
		{ "IncludePath", "SmoothMeshTool.h" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Properties for Implicit smoothing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothSpeed_MetaData[] = {
		{ "Comment", "/** Smoothing speed *///UPROPERTY(EditAnywhere, Category = ImplicitSmoothing, meta = (UIMin = \"0.0\", UIMax = \"1.0\", ClampMin = \"0.0\", ClampMax = \"1.0\"))\n" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Smoothing speed //UPROPERTY(EditAnywhere, Category = ImplicitSmoothing, meta = (UIMin = \"0.0\", UIMax = \"1.0\", ClampMin = \"0.0\", ClampMax = \"1.0\"))" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Smoothness_MetaData[] = {
		{ "Category", "ImplicitSmoothingOptions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Desired Smoothness. This is not a linear quantity, but larger numbers produce smoother results */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Desired Smoothness. This is not a linear quantity, but larger numbers produce smoother results" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveUVs_MetaData[] = {
		{ "Category", "ImplicitSmoothingOptions" },
		{ "Comment", "/** If this is false, the smoother will try to reshape the triangles to be more regular, which will distort UVs */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "If this is false, the smoother will try to reshape the triangles to be more regular, which will distort UVs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeCorrection_MetaData[] = {
		{ "Category", "ImplicitSmoothingOptions" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Magic number that allows you to try to correct for shrinking caused by smoothing */" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Magic number that allows you to try to correct for shrinking caused by smoothing" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothness;
	static void NewProp_bPreserveUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveUVs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeCorrection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImplicitSmoothProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_SmoothSpeed = { "SmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImplicitSmoothProperties, SmoothSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothSpeed_MetaData), NewProp_SmoothSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_Smoothness = { "Smoothness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImplicitSmoothProperties, Smoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Smoothness_MetaData), NewProp_Smoothness_MetaData) };
void Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_bPreserveUVs_SetBit(void* Obj)
{
	((UImplicitSmoothProperties*)Obj)->bPreserveUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_bPreserveUVs = { "bPreserveUVs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImplicitSmoothProperties), &Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_bPreserveUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveUVs_MetaData), NewProp_bPreserveUVs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_VolumeCorrection = { "VolumeCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImplicitSmoothProperties, VolumeCorrection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeCorrection_MetaData), NewProp_VolumeCorrection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImplicitSmoothProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_SmoothSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_Smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_bPreserveUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImplicitSmoothProperties_Statics::NewProp_VolumeCorrection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImplicitSmoothProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UImplicitSmoothProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImplicitSmoothProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImplicitSmoothProperties_Statics::ClassParams = {
	&UImplicitSmoothProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UImplicitSmoothProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UImplicitSmoothProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImplicitSmoothProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UImplicitSmoothProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImplicitSmoothProperties()
{
	if (!Z_Registration_Info_UClass_UImplicitSmoothProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImplicitSmoothProperties.OuterSingleton, Z_Construct_UClass_UImplicitSmoothProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImplicitSmoothProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UImplicitSmoothProperties>()
{
	return UImplicitSmoothProperties::StaticClass();
}
UImplicitSmoothProperties::UImplicitSmoothProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImplicitSmoothProperties);
UImplicitSmoothProperties::~UImplicitSmoothProperties() {}
// End Class UImplicitSmoothProperties

// Begin Class USmoothWeightMapSetProperties
void USmoothWeightMapSetProperties::StaticRegisterNativesUSmoothWeightMapSetProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothWeightMapSetProperties);
UClass* Z_Construct_UClass_USmoothWeightMapSetProperties_NoRegister()
{
	return USmoothWeightMapSetProperties::StaticClass();
}
struct Z_Construct_UClass_USmoothWeightMapSetProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SmoothMeshTool.h" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSmoothMultiplier_MetaData[] = {
		{ "Category", "WeightMap" },
		{ "Comment", "/** Fractional Minimum Smoothing Parameter in World Units, for Weight Map values of zero */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Fractional Minimum Smoothing Parameter in World Units, for Weight Map values of zero" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSmoothMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothWeightMapSetProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::NewProp_MinSmoothMultiplier = { "MinSmoothMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothWeightMapSetProperties, MinSmoothMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSmoothMultiplier_MetaData), NewProp_MinSmoothMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::NewProp_MinSmoothMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeightMapSetProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::ClassParams = {
	&USmoothWeightMapSetProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothWeightMapSetProperties()
{
	if (!Z_Registration_Info_UClass_USmoothWeightMapSetProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothWeightMapSetProperties.OuterSingleton, Z_Construct_UClass_USmoothWeightMapSetProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothWeightMapSetProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USmoothWeightMapSetProperties>()
{
	return USmoothWeightMapSetProperties::StaticClass();
}
USmoothWeightMapSetProperties::USmoothWeightMapSetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothWeightMapSetProperties);
USmoothWeightMapSetProperties::~USmoothWeightMapSetProperties() {}
// End Class USmoothWeightMapSetProperties

// Begin Class USmoothMeshTool
void USmoothMeshTool::StaticRegisterNativesUSmoothMeshTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothMeshTool);
UClass* Z_Construct_UClass_USmoothMeshTool_NoRegister()
{
	return USmoothMeshTool::StaticClass();
}
struct Z_Construct_UClass_USmoothMeshTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Smoothing Tool\n */" },
		{ "IncludePath", "SmoothMeshTool.h" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
		{ "ToolTip", "Mesh Smoothing Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IterativeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffusionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmoothProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IterativeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DiffusionProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImplicitProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightMapProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothMeshTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_SmoothProperties = { "SmoothProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothMeshTool, SmoothProperties), Z_Construct_UClass_USmoothMeshToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothProperties_MetaData), NewProp_SmoothProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_IterativeProperties = { "IterativeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothMeshTool, IterativeProperties), Z_Construct_UClass_UIterativeSmoothProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IterativeProperties_MetaData), NewProp_IterativeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_DiffusionProperties = { "DiffusionProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothMeshTool, DiffusionProperties), Z_Construct_UClass_UDiffusionSmoothProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffusionProperties_MetaData), NewProp_DiffusionProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_ImplicitProperties = { "ImplicitProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothMeshTool, ImplicitProperties), Z_Construct_UClass_UImplicitSmoothProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImplicitProperties_MetaData), NewProp_ImplicitProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_WeightMapProperties = { "WeightMapProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmoothMeshTool, WeightMapProperties), Z_Construct_UClass_USmoothWeightMapSetProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapProperties_MetaData), NewProp_WeightMapProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmoothMeshTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_SmoothProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_IterativeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_DiffusionProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_ImplicitProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmoothMeshTool_Statics::NewProp_WeightMapProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmoothMeshTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMeshProcessingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USmoothMeshTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(USmoothMeshTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothMeshTool_Statics::ClassParams = {
	&USmoothMeshTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USmoothMeshTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothMeshTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothMeshTool()
{
	if (!Z_Registration_Info_UClass_USmoothMeshTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothMeshTool.OuterSingleton, Z_Construct_UClass_USmoothMeshTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothMeshTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USmoothMeshTool>()
{
	return USmoothMeshTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothMeshTool);
USmoothMeshTool::~USmoothMeshTool() {}
// End Class USmoothMeshTool

// Begin Class USmoothMeshToolBuilder
void USmoothMeshToolBuilder::StaticRegisterNativesUSmoothMeshToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmoothMeshToolBuilder);
UClass* Z_Construct_UClass_USmoothMeshToolBuilder_NoRegister()
{
	return USmoothMeshToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USmoothMeshToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SmoothMeshTool.h" },
		{ "ModuleRelativePath", "Public/SmoothMeshTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmoothMeshToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USmoothMeshToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMeshProcessingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmoothMeshToolBuilder_Statics::ClassParams = {
	&USmoothMeshToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmoothMeshToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USmoothMeshToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmoothMeshToolBuilder()
{
	if (!Z_Registration_Info_UClass_USmoothMeshToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmoothMeshToolBuilder.OuterSingleton, Z_Construct_UClass_USmoothMeshToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmoothMeshToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USmoothMeshToolBuilder>()
{
	return USmoothMeshToolBuilder::StaticClass();
}
USmoothMeshToolBuilder::USmoothMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmoothMeshToolBuilder);
USmoothMeshToolBuilder::~USmoothMeshToolBuilder() {}
// End Class USmoothMeshToolBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SmoothMeshTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESmoothMeshToolSmoothType_StaticEnum, TEXT("ESmoothMeshToolSmoothType"), &Z_Registration_Info_UEnum_ESmoothMeshToolSmoothType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3028459594U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USmoothMeshToolProperties, USmoothMeshToolProperties::StaticClass, TEXT("USmoothMeshToolProperties"), &Z_Registration_Info_UClass_USmoothMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothMeshToolProperties), 224640943U) },
		{ Z_Construct_UClass_UIterativeSmoothProperties, UIterativeSmoothProperties::StaticClass, TEXT("UIterativeSmoothProperties"), &Z_Registration_Info_UClass_UIterativeSmoothProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIterativeSmoothProperties), 2245057576U) },
		{ Z_Construct_UClass_UDiffusionSmoothProperties, UDiffusionSmoothProperties::StaticClass, TEXT("UDiffusionSmoothProperties"), &Z_Registration_Info_UClass_UDiffusionSmoothProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiffusionSmoothProperties), 3504825087U) },
		{ Z_Construct_UClass_UImplicitSmoothProperties, UImplicitSmoothProperties::StaticClass, TEXT("UImplicitSmoothProperties"), &Z_Registration_Info_UClass_UImplicitSmoothProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImplicitSmoothProperties), 1596736920U) },
		{ Z_Construct_UClass_USmoothWeightMapSetProperties, USmoothWeightMapSetProperties::StaticClass, TEXT("USmoothWeightMapSetProperties"), &Z_Registration_Info_UClass_USmoothWeightMapSetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothWeightMapSetProperties), 1832508110U) },
		{ Z_Construct_UClass_USmoothMeshTool, USmoothMeshTool::StaticClass, TEXT("USmoothMeshTool"), &Z_Registration_Info_UClass_USmoothMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothMeshTool), 3481028819U) },
		{ Z_Construct_UClass_USmoothMeshToolBuilder, USmoothMeshToolBuilder::StaticClass, TEXT("USmoothMeshToolBuilder"), &Z_Registration_Info_UClass_USmoothMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmoothMeshToolBuilder), 1528988440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SmoothMeshTool_h_1047356169(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SmoothMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SmoothMeshTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SmoothMeshTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SmoothMeshTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
