// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/UVProjectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVProjectionTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionOperatorFactory();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionOperatorFactory_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionTool();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionTool_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolBuilder_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolEditActions();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolEditActions_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolProperties_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UUVProjectionToolBuilder
void UUVProjectionToolBuilder::StaticRegisterNativesUUVProjectionToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVProjectionToolBuilder);
UClass* Z_Construct_UClass_UUVProjectionToolBuilder_NoRegister()
{
	return UUVProjectionToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UUVProjectionToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UVProjectionTool.h" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVProjectionToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUVProjectionToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVProjectionToolBuilder_Statics::ClassParams = {
	&UUVProjectionToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVProjectionToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVProjectionToolBuilder()
{
	if (!Z_Registration_Info_UClass_UUVProjectionToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVProjectionToolBuilder.OuterSingleton, Z_Construct_UClass_UUVProjectionToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVProjectionToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVProjectionToolBuilder>()
{
	return UUVProjectionToolBuilder::StaticClass();
}
UUVProjectionToolBuilder::UUVProjectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVProjectionToolBuilder);
UUVProjectionToolBuilder::~UUVProjectionToolBuilder() {}
// End Class UUVProjectionToolBuilder

// Begin Enum EUVProjectionToolActions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVProjectionToolActions;
static UEnum* EUVProjectionToolActions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EUVProjectionToolActions"));
	}
	return Z_Registration_Info_UEnum_EUVProjectionToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EUVProjectionToolActions>()
{
	return EUVProjectionToolActions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoFit.Name", "EUVProjectionToolActions::AutoFit" },
		{ "AutoFitAlign.Name", "EUVProjectionToolActions::AutoFitAlign" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "NoAction.Name", "EUVProjectionToolActions::NoAction" },
		{ "Reset.Name", "EUVProjectionToolActions::Reset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUVProjectionToolActions::NoAction", (int64)EUVProjectionToolActions::NoAction },
		{ "EUVProjectionToolActions::AutoFit", (int64)EUVProjectionToolActions::AutoFit },
		{ "EUVProjectionToolActions::AutoFitAlign", (int64)EUVProjectionToolActions::AutoFitAlign },
		{ "EUVProjectionToolActions::Reset", (int64)EUVProjectionToolActions::Reset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EUVProjectionToolActions",
	"EUVProjectionToolActions",
	Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions()
{
	if (!Z_Registration_Info_UEnum_EUVProjectionToolActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVProjectionToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolActions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUVProjectionToolActions.InnerSingleton;
}
// End Enum EUVProjectionToolActions

// Begin Class UUVProjectionToolEditActions Function AutoFit
struct Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Automatically fit the UV Projection Dimensions based on the current projection orientation */" },
		{ "DisplayName", "AutoFit" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Automatically fit the UV Projection Dimensions based on the current projection orientation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVProjectionToolEditActions, nullptr, "AutoFit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUVProjectionToolEditActions::execAutoFit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoFit();
	P_NATIVE_END;
}
// End Class UUVProjectionToolEditActions Function AutoFit

// Begin Class UUVProjectionToolEditActions Function AutoFitAlign
struct Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Automatically orient the projection and then automatically fit the UV Projection Dimensions */" },
		{ "DisplayName", "AutoFitAlign" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Automatically orient the projection and then automatically fit the UV Projection Dimensions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVProjectionToolEditActions, nullptr, "AutoFitAlign", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUVProjectionToolEditActions::execAutoFitAlign)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoFitAlign();
	P_NATIVE_END;
}
// End Class UUVProjectionToolEditActions Function AutoFitAlign

// Begin Class UUVProjectionToolEditActions Function Reset
struct Z_Construct_UFunction_UUVProjectionToolEditActions_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Re-initialize the projection based on the UV Projection Initialization property */" },
		{ "DisplayName", "Reset" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Re-initialize the projection based on the UV Projection Initialization property" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUVProjectionToolEditActions_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUVProjectionToolEditActions, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUVProjectionToolEditActions_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUVProjectionToolEditActions_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUVProjectionToolEditActions_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUVProjectionToolEditActions_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUVProjectionToolEditActions::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class UUVProjectionToolEditActions Function Reset

// Begin Class UUVProjectionToolEditActions
void UUVProjectionToolEditActions::StaticRegisterNativesUUVProjectionToolEditActions()
{
	UClass* Class = UUVProjectionToolEditActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutoFit", &UUVProjectionToolEditActions::execAutoFit },
		{ "AutoFitAlign", &UUVProjectionToolEditActions::execAutoFitAlign },
		{ "Reset", &UUVProjectionToolEditActions::execReset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVProjectionToolEditActions);
UClass* Z_Construct_UClass_UUVProjectionToolEditActions_NoRegister()
{
	return UUVProjectionToolEditActions::StaticClass();
}
struct Z_Construct_UClass_UUVProjectionToolEditActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UVProjectionTool.h" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFit, "AutoFit" }, // 105776995
		{ &Z_Construct_UFunction_UUVProjectionToolEditActions_AutoFitAlign, "AutoFitAlign" }, // 954461062
		{ &Z_Construct_UFunction_UUVProjectionToolEditActions_Reset, "Reset" }, // 1563015234
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVProjectionToolEditActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUVProjectionToolEditActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionToolEditActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVProjectionToolEditActions_Statics::ClassParams = {
	&UUVProjectionToolEditActions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionToolEditActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVProjectionToolEditActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVProjectionToolEditActions()
{
	if (!Z_Registration_Info_UClass_UUVProjectionToolEditActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVProjectionToolEditActions.OuterSingleton, Z_Construct_UClass_UUVProjectionToolEditActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVProjectionToolEditActions.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVProjectionToolEditActions>()
{
	return UUVProjectionToolEditActions::StaticClass();
}
UUVProjectionToolEditActions::UUVProjectionToolEditActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVProjectionToolEditActions);
UUVProjectionToolEditActions::~UUVProjectionToolEditActions() {}
// End Class UUVProjectionToolEditActions

// Begin Enum EUVProjectionToolInitializationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode;
static UEnum* EUVProjectionToolInitializationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EUVProjectionToolInitializationMode"));
	}
	return Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EUVProjectionToolInitializationMode>()
{
	return EUVProjectionToolInitializationMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoFit.Comment", "/** Initialize projection using Auto Fitting for the initial projection type */" },
		{ "AutoFit.Name", "EUVProjectionToolInitializationMode::AutoFit" },
		{ "AutoFit.ToolTip", "Initialize projection using Auto Fitting for the initial projection type" },
		{ "AutoFitAlign.Comment", "/** Initialize projection using Auto Fitting with Alignment for the initial projection type */" },
		{ "AutoFitAlign.Name", "EUVProjectionToolInitializationMode::AutoFitAlign" },
		{ "AutoFitAlign.ToolTip", "Initialize projection using Auto Fitting with Alignment for the initial projection type" },
		{ "Default.Comment", "/** Initialize projection to bounding box center */" },
		{ "Default.Name", "EUVProjectionToolInitializationMode::Default" },
		{ "Default.ToolTip", "Initialize projection to bounding box center" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "UsePrevious.Comment", "/** Initialize projection based on previous usage of the Project tool */" },
		{ "UsePrevious.Name", "EUVProjectionToolInitializationMode::UsePrevious" },
		{ "UsePrevious.ToolTip", "Initialize projection based on previous usage of the Project tool" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUVProjectionToolInitializationMode::Default", (int64)EUVProjectionToolInitializationMode::Default },
		{ "EUVProjectionToolInitializationMode::UsePrevious", (int64)EUVProjectionToolInitializationMode::UsePrevious },
		{ "EUVProjectionToolInitializationMode::AutoFit", (int64)EUVProjectionToolInitializationMode::AutoFit },
		{ "EUVProjectionToolInitializationMode::AutoFitAlign", (int64)EUVProjectionToolInitializationMode::AutoFitAlign },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EUVProjectionToolInitializationMode",
	"EUVProjectionToolInitializationMode",
	Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode()
{
	if (!Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode.InnerSingleton;
}
// End Enum EUVProjectionToolInitializationMode

// Begin Class UUVProjectionToolProperties
void UUVProjectionToolProperties::StaticRegisterNativesUUVProjectionToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVProjectionToolProperties);
UClass* Z_Construct_UClass_UUVProjectionToolProperties_NoRegister()
{
	return UUVProjectionToolProperties::StaticClass();
}
struct Z_Construct_UClass_UUVProjectionToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties\n */" },
		{ "IncludePath", "UVProjectionTool.h" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Standard properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[] = {
		{ "Category", "UV Projection" },
		{ "Comment", "/** Shape and/or algorithm to use for UV projection */" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Shape and/or algorithm to use for UV projection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "Category", "UV Projection" },
		{ "Comment", "/** Width, length, and height of the projection shape before rotation */" },
		{ "Delta", "0.500000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Width, length, and height of the projection shape before rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProportionalDimensions_MetaData[] = {
		{ "Category", "UV Projection" },
		{ "Comment", "/** If true, changes to Dimensions result in all components be changed proportionally */" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "If true, changes to Dimensions result in all components be changed proportionally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initialization_MetaData[] = {
		{ "Category", "UV Projection" },
		{ "Comment", "/** Determines how projection settings will be initialized; this only takes effect if the projection shape dimensions or position are unchanged */" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Determines how projection settings will be initialized; this only takes effect if the projection shape dimensions or position are unchanged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderSplitAngle_MetaData[] = {
		{ "Category", "CylinderProjection" },
		{ "Comment", "/** Angle in degrees to determine whether faces should be assigned to the cylinder or the flat end caps */" },
		{ "DisplayName", "Split Angle" },
		{ "EditCondition", "ProjectionType == EUVProjectionMethod::Cylinder" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Angle in degrees to determine whether faces should be assigned to the cylinder or the flat end caps" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpMapNormalBlending_MetaData[] = {
		{ "Category", "ExpMap Projection" },
		{ "Comment", "/** Blend between surface normals and projection normal; ExpMap projection becomes Plane projection when this value is 1 */" },
		{ "DisplayName", "Normal Blending" },
		{ "EditCondition", "ProjectionType == EUVProjectionMethod::ExpMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Blend between surface normals and projection normal; ExpMap projection becomes Plane projection when this value is 1" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpMapSmoothingSteps_MetaData[] = {
		{ "Category", "ExpMap Projection" },
		{ "Comment", "/** Number of smoothing steps to apply; this slightly increases distortion but produces more stable results. */" },
		{ "DisplayName", "Smoothing Steps" },
		{ "EditCondition", "ProjectionType == EUVProjectionMethod::ExpMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Number of smoothing steps to apply; this slightly increases distortion but produces more stable results." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpMapSmoothingAlpha_MetaData[] = {
		{ "Category", "ExpMap Projection" },
		{ "Comment", "/** Smoothing parameter; larger values result in faster smoothing in each step. */" },
		{ "DisplayName", "Smoothing Alpha" },
		{ "EditCondition", "ProjectionType == EUVProjectionMethod::ExpMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Smoothing parameter; larger values result in faster smoothing in each step." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "UV Transform" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Rotation in degrees applied after computing projection */" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Rotation in degrees applied after computing projection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "UV Transform" },
		{ "Comment", "/** Scaling applied after computing projection */" },
		{ "Delta", "0.010000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Scaling applied after computing projection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[] = {
		{ "Category", "UV Transform" },
		{ "Comment", "/** Translation applied after computing projection */" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Translation applied after computing projection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedDimensions_MetaData[] = {
		{ "Comment", "//\n// Saved State. These are used internally to support UsePrevious initialization mode\n//\n" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Saved State. These are used internally to support UsePrevious initialization mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSavedProportionalDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
	static void NewProp_bProportionalDimensions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProportionalDimensions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Initialization_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Initialization;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CylinderSplitAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpMapNormalBlending;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpMapSmoothingSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpMapSmoothingAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedDimensions;
	static void NewProp_bSavedProportionalDimensions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedProportionalDimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVProjectionToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ProjectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, ProjectionType), Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionType_MetaData), NewProp_ProjectionType_MetaData) }; // 2266334027
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
void Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bProportionalDimensions_SetBit(void* Obj)
{
	((UUVProjectionToolProperties*)Obj)->bProportionalDimensions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bProportionalDimensions = { "bProportionalDimensions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVProjectionToolProperties), &Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bProportionalDimensions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProportionalDimensions_MetaData), NewProp_bProportionalDimensions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Initialization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Initialization = { "Initialization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, Initialization), Z_Construct_UEnum_MeshModelingTools_EUVProjectionToolInitializationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initialization_MetaData), NewProp_Initialization_MetaData) }; // 3224326603
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_CylinderSplitAngle = { "CylinderSplitAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, CylinderSplitAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderSplitAngle_MetaData), NewProp_CylinderSplitAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ExpMapNormalBlending = { "ExpMapNormalBlending", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, ExpMapNormalBlending), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpMapNormalBlending_MetaData), NewProp_ExpMapNormalBlending_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ExpMapSmoothingSteps = { "ExpMapSmoothingSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, ExpMapSmoothingSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpMapSmoothingSteps_MetaData), NewProp_ExpMapSmoothingSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ExpMapSmoothingAlpha = { "ExpMapSmoothingAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, ExpMapSmoothingAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpMapSmoothingAlpha_MetaData), NewProp_ExpMapSmoothingAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translation_MetaData), NewProp_Translation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_SavedDimensions = { "SavedDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, SavedDimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedDimensions_MetaData), NewProp_SavedDimensions_MetaData) };
void Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bSavedProportionalDimensions_SetBit(void* Obj)
{
	((UUVProjectionToolProperties*)Obj)->bSavedProportionalDimensions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bSavedProportionalDimensions = { "bSavedProportionalDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUVProjectionToolProperties), &Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bSavedProportionalDimensions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSavedProportionalDimensions_MetaData), NewProp_bSavedProportionalDimensions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_SavedTransform = { "SavedTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionToolProperties, SavedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedTransform_MetaData), NewProp_SavedTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVProjectionToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ProjectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ProjectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bProportionalDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Initialization_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Initialization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_CylinderSplitAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ExpMapNormalBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ExpMapSmoothingSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_ExpMapSmoothingAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_Translation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_SavedDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_bSavedProportionalDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionToolProperties_Statics::NewProp_SavedTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVProjectionToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVProjectionToolProperties_Statics::ClassParams = {
	&UUVProjectionToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVProjectionToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVProjectionToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVProjectionToolProperties()
{
	if (!Z_Registration_Info_UClass_UUVProjectionToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVProjectionToolProperties.OuterSingleton, Z_Construct_UClass_UUVProjectionToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVProjectionToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVProjectionToolProperties>()
{
	return UUVProjectionToolProperties::StaticClass();
}
UUVProjectionToolProperties::UUVProjectionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVProjectionToolProperties);
UUVProjectionToolProperties::~UUVProjectionToolProperties() {}
// End Class UUVProjectionToolProperties

// Begin Class UUVProjectionOperatorFactory
void UUVProjectionOperatorFactory::StaticRegisterNativesUUVProjectionOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVProjectionOperatorFactory);
UClass* Z_Construct_UClass_UUVProjectionOperatorFactory_NoRegister()
{
	return UUVProjectionOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_UUVProjectionOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory with enough info to spawn the background-thread Operator to do a chunk of work for the tool\n *  stores a pointer to the tool and enough info to know which specific operator it should spawn\n */" },
		{ "IncludePath", "UVProjectionTool.h" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "Factory with enough info to spawn the background-thread Operator to do a chunk of work for the tool\n stores a pointer to the tool and enough info to know which specific operator it should spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVProjectionOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionOperatorFactory, Tool), Z_Construct_UClass_UUVProjectionTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tool_MetaData), NewProp_Tool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::NewProp_Tool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::ClassParams = {
	&UUVProjectionOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVProjectionOperatorFactory()
{
	if (!Z_Registration_Info_UClass_UUVProjectionOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVProjectionOperatorFactory.OuterSingleton, Z_Construct_UClass_UUVProjectionOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVProjectionOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVProjectionOperatorFactory>()
{
	return UUVProjectionOperatorFactory::StaticClass();
}
UUVProjectionOperatorFactory::UUVProjectionOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVProjectionOperatorFactory);
UUVProjectionOperatorFactory::~UUVProjectionOperatorFactory() {}
// End Class UUVProjectionOperatorFactory

// Begin Class UUVProjectionTool
void UUVProjectionTool::StaticRegisterNativesUUVProjectionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVProjectionTool);
UClass* Z_Construct_UClass_UUVProjectionTool_NoRegister()
{
	return UUVProjectionTool::StaticClass();
}
struct Z_Construct_UClass_UUVProjectionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV projection tool\n */" },
		{ "IncludePath", "UVProjectionTool.h" },
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
		{ "ToolTip", "UV projection tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperatorFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeRenderer_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickToSetPlaneBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVProjectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVChannelProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckerMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OperatorFactory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeRenderer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickToSetPlaneBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVProjectionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_UVChannelProperties = { "UVChannelProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, UVChannelProperties), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelProperties_MetaData), NewProp_UVChannelProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, BasicProperties), Z_Construct_UClass_UUVProjectionToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_EditActions = { "EditActions", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, EditActions), Z_Construct_UClass_UUVProjectionToolEditActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditActions_MetaData), NewProp_EditActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, MaterialSettings), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSettings_MetaData), NewProp_MaterialSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_CheckerMaterial = { "CheckerMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, CheckerMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerMaterial_MetaData), NewProp_CheckerMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformGizmo_MetaData), NewProp_TransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProxy_MetaData), NewProp_TransformProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_OperatorFactory = { "OperatorFactory", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, OperatorFactory), Z_Construct_UClass_UUVProjectionOperatorFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperatorFactory_MetaData), NewProp_OperatorFactory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_EdgeRenderer = { "EdgeRenderer", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, EdgeRenderer), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeRenderer_MetaData), NewProp_EdgeRenderer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_ClickToSetPlaneBehavior = { "ClickToSetPlaneBehavior", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVProjectionTool, ClickToSetPlaneBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickToSetPlaneBehavior_MetaData), NewProp_ClickToSetPlaneBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVProjectionTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_UVChannelProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_BasicProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_EditActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_MaterialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_CheckerMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_TransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_TransformProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_OperatorFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_EdgeRenderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVProjectionTool_Statics::NewProp_ClickToSetPlaneBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVProjectionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVProjectionTool_Statics::ClassParams = {
	&UUVProjectionTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVProjectionTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVProjectionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVProjectionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVProjectionTool()
{
	if (!Z_Registration_Info_UClass_UUVProjectionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVProjectionTool.OuterSingleton, Z_Construct_UClass_UUVProjectionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVProjectionTool.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVProjectionTool>()
{
	return UUVProjectionTool::StaticClass();
}
UUVProjectionTool::UUVProjectionTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVProjectionTool);
UUVProjectionTool::~UUVProjectionTool() {}
// End Class UUVProjectionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUVProjectionToolActions_StaticEnum, TEXT("EUVProjectionToolActions"), &Z_Registration_Info_UEnum_EUVProjectionToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2492983188U) },
		{ EUVProjectionToolInitializationMode_StaticEnum, TEXT("EUVProjectionToolInitializationMode"), &Z_Registration_Info_UEnum_EUVProjectionToolInitializationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3224326603U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUVProjectionToolBuilder, UUVProjectionToolBuilder::StaticClass, TEXT("UUVProjectionToolBuilder"), &Z_Registration_Info_UClass_UUVProjectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVProjectionToolBuilder), 1476095007U) },
		{ Z_Construct_UClass_UUVProjectionToolEditActions, UUVProjectionToolEditActions::StaticClass, TEXT("UUVProjectionToolEditActions"), &Z_Registration_Info_UClass_UUVProjectionToolEditActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVProjectionToolEditActions), 1237651948U) },
		{ Z_Construct_UClass_UUVProjectionToolProperties, UUVProjectionToolProperties::StaticClass, TEXT("UUVProjectionToolProperties"), &Z_Registration_Info_UClass_UUVProjectionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVProjectionToolProperties), 1161452429U) },
		{ Z_Construct_UClass_UUVProjectionOperatorFactory, UUVProjectionOperatorFactory::StaticClass, TEXT("UUVProjectionOperatorFactory"), &Z_Registration_Info_UClass_UUVProjectionOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVProjectionOperatorFactory), 1182617593U) },
		{ Z_Construct_UClass_UUVProjectionTool, UUVProjectionTool::StaticClass, TEXT("UUVProjectionTool"), &Z_Registration_Info_UClass_UUVProjectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVProjectionTool), 985193376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_4188980687(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
