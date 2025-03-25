// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/MeshAttributePaintTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshAttributePaintTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintEditActions();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintEditActions_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshAttributePaintToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UMeshAttributePaintToolBuilder
void UMeshAttributePaintToolBuilder::StaticRegisterNativesUMeshAttributePaintToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshAttributePaintToolBuilder);
UClass* Z_Construct_UClass_UMeshAttributePaintToolBuilder_NoRegister()
{
	return UMeshAttributePaintToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMeshAttributePaintToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder for Attribute Paint Tool\n */" },
		{ "IncludePath", "MeshAttributePaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
		{ "ToolTip", "Tool Builder for Attribute Paint Tool" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshAttributePaintToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshAttributePaintToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshAttributePaintToolBuilder_Statics::ClassParams = {
	&UMeshAttributePaintToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshAttributePaintToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshAttributePaintToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshAttributePaintToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshAttributePaintToolBuilder>()
{
	return UMeshAttributePaintToolBuilder::StaticClass();
}
UMeshAttributePaintToolBuilder::UMeshAttributePaintToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshAttributePaintToolBuilder);
UMeshAttributePaintToolBuilder::~UMeshAttributePaintToolBuilder() {}
// End Class UMeshAttributePaintToolBuilder

// Begin Enum EBrushActionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBrushActionMode;
static UEnum* EBrushActionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBrushActionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBrushActionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBrushActionMode"));
	}
	return Z_Registration_Info_UEnum_EBrushActionMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBrushActionMode>()
{
	return EBrushActionMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FloodFill.Name", "EBrushActionMode::FloodFill" },
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
		{ "Paint.Name", "EBrushActionMode::Paint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBrushActionMode::Paint", (int64)EBrushActionMode::Paint },
		{ "EBrushActionMode::FloodFill", (int64)EBrushActionMode::FloodFill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EBrushActionMode",
	"EBrushActionMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode()
{
	if (!Z_Registration_Info_UEnum_EBrushActionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBrushActionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBrushActionMode.InnerSingleton;
}
// End Enum EBrushActionMode

// Begin Class UMeshAttributePaintBrushOperationProperties
void UMeshAttributePaintBrushOperationProperties::StaticRegisterNativesUMeshAttributePaintBrushOperationProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshAttributePaintBrushOperationProperties);
UClass* Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_NoRegister()
{
	return UMeshAttributePaintBrushOperationProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Selected-Attribute settings Attribute Paint Tool\n */" },
		{ "IncludePath", "MeshAttributePaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
		{ "ToolTip", "Selected-Attribute settings Attribute Paint Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushAction_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BrushAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BrushAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshAttributePaintBrushOperationProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::NewProp_BrushAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::NewProp_BrushAction = { "BrushAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshAttributePaintBrushOperationProperties, BrushAction), Z_Construct_UEnum_MeshModelingToolsExp_EBrushActionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushAction_MetaData), NewProp_BrushAction_MetaData) }; // 2323555284
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::NewProp_BrushAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::NewProp_BrushAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::ClassParams = {
	&UMeshAttributePaintBrushOperationProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties()
{
	if (!Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.OuterSingleton, Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshAttributePaintBrushOperationProperties>()
{
	return UMeshAttributePaintBrushOperationProperties::StaticClass();
}
UMeshAttributePaintBrushOperationProperties::UMeshAttributePaintBrushOperationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshAttributePaintBrushOperationProperties);
UMeshAttributePaintBrushOperationProperties::~UMeshAttributePaintBrushOperationProperties() {}
// End Class UMeshAttributePaintBrushOperationProperties

// Begin Class UMeshAttributePaintToolProperties Function GetAttributeNames
struct Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics
{
	struct MeshAttributePaintToolProperties_eventGetAttributeNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshAttributePaintToolProperties_eventGetAttributeNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshAttributePaintToolProperties, nullptr, "GetAttributeNames", nullptr, nullptr, Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::MeshAttributePaintToolProperties_eventGetAttributeNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::MeshAttributePaintToolProperties_eventGetAttributeNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshAttributePaintToolProperties::execGetAttributeNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAttributeNames();
	P_NATIVE_END;
}
// End Class UMeshAttributePaintToolProperties Function GetAttributeNames

// Begin Class UMeshAttributePaintToolProperties
void UMeshAttributePaintToolProperties::StaticRegisterNativesUMeshAttributePaintToolProperties()
{
	UClass* Class = UMeshAttributePaintToolProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttributeNames", &UMeshAttributePaintToolProperties::execGetAttributeNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshAttributePaintToolProperties);
UClass* Z_Construct_UClass_UMeshAttributePaintToolProperties_NoRegister()
{
	return UMeshAttributePaintToolProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshAttributePaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Attribute" },
		{ "DisplayName", "Selected Attribute" },
		{ "GetOptions", "GetAttributeNames" },
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshAttributePaintToolProperties_GetAttributeNames, "GetAttributeNames" }, // 3612860329
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshAttributePaintToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshAttributePaintToolProperties, Attribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::NewProp_Attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::ClassParams = {
	&UMeshAttributePaintToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshAttributePaintToolProperties()
{
	if (!Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.OuterSingleton, Z_Construct_UClass_UMeshAttributePaintToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshAttributePaintToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshAttributePaintToolProperties>()
{
	return UMeshAttributePaintToolProperties::StaticClass();
}
UMeshAttributePaintToolProperties::UMeshAttributePaintToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshAttributePaintToolProperties);
UMeshAttributePaintToolProperties::~UMeshAttributePaintToolProperties() {}
// End Class UMeshAttributePaintToolProperties

// Begin Enum EMeshAttributePaintToolActions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshAttributePaintToolActions;
static UEnum* EMeshAttributePaintToolActions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshAttributePaintToolActions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshAttributePaintToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshAttributePaintToolActions"));
	}
	return Z_Registration_Info_UEnum_EMeshAttributePaintToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshAttributePaintToolActions>()
{
	return EMeshAttributePaintToolActions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
		{ "NoAction.Name", "EMeshAttributePaintToolActions::NoAction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshAttributePaintToolActions::NoAction", (int64)EMeshAttributePaintToolActions::NoAction },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshAttributePaintToolActions",
	"EMeshAttributePaintToolActions",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions()
{
	if (!Z_Registration_Info_UEnum_EMeshAttributePaintToolActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshAttributePaintToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshAttributePaintToolActions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshAttributePaintToolActions.InnerSingleton;
}
// End Enum EMeshAttributePaintToolActions

// Begin Class UMeshAttributePaintEditActions
void UMeshAttributePaintEditActions::StaticRegisterNativesUMeshAttributePaintEditActions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshAttributePaintEditActions);
UClass* Z_Construct_UClass_UMeshAttributePaintEditActions_NoRegister()
{
	return UMeshAttributePaintEditActions::StaticClass();
}
struct Z_Construct_UClass_UMeshAttributePaintEditActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshAttributePaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshAttributePaintEditActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshAttributePaintEditActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintEditActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshAttributePaintEditActions_Statics::ClassParams = {
	&UMeshAttributePaintEditActions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintEditActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshAttributePaintEditActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshAttributePaintEditActions()
{
	if (!Z_Registration_Info_UClass_UMeshAttributePaintEditActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshAttributePaintEditActions.OuterSingleton, Z_Construct_UClass_UMeshAttributePaintEditActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshAttributePaintEditActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshAttributePaintEditActions>()
{
	return UMeshAttributePaintEditActions::StaticClass();
}
UMeshAttributePaintEditActions::UMeshAttributePaintEditActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshAttributePaintEditActions);
UMeshAttributePaintEditActions::~UMeshAttributePaintEditActions() {}
// End Class UMeshAttributePaintEditActions

// Begin Class UMeshAttributePaintTool
void UMeshAttributePaintTool::StaticRegisterNativesUMeshAttributePaintTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshAttributePaintTool);
UClass* Z_Construct_UClass_UMeshAttributePaintTool_NoRegister()
{
	return UMeshAttributePaintTool::StaticClass();
}
struct Z_Construct_UClass_UMeshAttributePaintTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshAttributePaintTool paints single-channel float attributes on a MeshDescription.\n * \n */" },
		{ "IncludePath", "MeshAttributePaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
		{ "ToolTip", "UMeshAttributePaintTool paints single-channel float attributes on a MeshDescription." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushActionProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttribProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshAttributePaintTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushActionProps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttribProps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshAttributePaintTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshAttributePaintTool_Statics::NewProp_BrushActionProps = { "BrushActionProps", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshAttributePaintTool, BrushActionProps), Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushActionProps_MetaData), NewProp_BrushActionProps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshAttributePaintTool_Statics::NewProp_AttribProps = { "AttribProps", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshAttributePaintTool, AttribProps), Z_Construct_UClass_UMeshAttributePaintToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttribProps_MetaData), NewProp_AttribProps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshAttributePaintTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshAttributePaintTool_Statics::NewProp_BrushActionProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshAttributePaintTool_Statics::NewProp_AttribProps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshAttributePaintTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicMeshBrushTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshAttributePaintTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UMeshAttributePaintTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshAttributePaintTool_Statics::ClassParams = {
	&UMeshAttributePaintTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshAttributePaintTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshAttributePaintTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshAttributePaintTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshAttributePaintTool()
{
	if (!Z_Registration_Info_UClass_UMeshAttributePaintTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshAttributePaintTool.OuterSingleton, Z_Construct_UClass_UMeshAttributePaintTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshAttributePaintTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshAttributePaintTool>()
{
	return UMeshAttributePaintTool::StaticClass();
}
UMeshAttributePaintTool::UMeshAttributePaintTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshAttributePaintTool);
UMeshAttributePaintTool::~UMeshAttributePaintTool() {}
// End Class UMeshAttributePaintTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshAttributePaintTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBrushActionMode_StaticEnum, TEXT("EBrushActionMode"), &Z_Registration_Info_UEnum_EBrushActionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2323555284U) },
		{ EMeshAttributePaintToolActions_StaticEnum, TEXT("EMeshAttributePaintToolActions"), &Z_Registration_Info_UEnum_EMeshAttributePaintToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 464310109U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshAttributePaintToolBuilder, UMeshAttributePaintToolBuilder::StaticClass, TEXT("UMeshAttributePaintToolBuilder"), &Z_Registration_Info_UClass_UMeshAttributePaintToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshAttributePaintToolBuilder), 1723111981U) },
		{ Z_Construct_UClass_UMeshAttributePaintBrushOperationProperties, UMeshAttributePaintBrushOperationProperties::StaticClass, TEXT("UMeshAttributePaintBrushOperationProperties"), &Z_Registration_Info_UClass_UMeshAttributePaintBrushOperationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshAttributePaintBrushOperationProperties), 674994239U) },
		{ Z_Construct_UClass_UMeshAttributePaintToolProperties, UMeshAttributePaintToolProperties::StaticClass, TEXT("UMeshAttributePaintToolProperties"), &Z_Registration_Info_UClass_UMeshAttributePaintToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshAttributePaintToolProperties), 176601668U) },
		{ Z_Construct_UClass_UMeshAttributePaintEditActions, UMeshAttributePaintEditActions::StaticClass, TEXT("UMeshAttributePaintEditActions"), &Z_Registration_Info_UClass_UMeshAttributePaintEditActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshAttributePaintEditActions), 3077711331U) },
		{ Z_Construct_UClass_UMeshAttributePaintTool, UMeshAttributePaintTool::StaticClass, TEXT("UMeshAttributePaintTool"), &Z_Registration_Info_UClass_UMeshAttributePaintTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshAttributePaintTool), 201976075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshAttributePaintTool_h_2271745030(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshAttributePaintTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshAttributePaintTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshAttributePaintTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshAttributePaintTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
