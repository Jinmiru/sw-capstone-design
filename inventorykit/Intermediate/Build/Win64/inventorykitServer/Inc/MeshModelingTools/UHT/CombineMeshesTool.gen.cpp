// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/CombineMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombineMeshesTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesTool();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesTool_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesToolBuilder_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesToolProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_NoRegister();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UCombineMeshesToolBuilder
void UCombineMeshesToolBuilder::StaticRegisterNativesUCombineMeshesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombineMeshesToolBuilder);
UClass* Z_Construct_UClass_UCombineMeshesToolBuilder_NoRegister()
{
	return UCombineMeshesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UCombineMeshesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "CombineMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombineMeshesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::ClassParams = {
	&UCombineMeshesToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombineMeshesToolBuilder()
{
	if (!Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCombineMeshesToolBuilder>()
{
	return UCombineMeshesToolBuilder::StaticClass();
}
UCombineMeshesToolBuilder::UCombineMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombineMeshesToolBuilder);
UCombineMeshesToolBuilder::~UCombineMeshesToolBuilder() {}
// End Class UCombineMeshesToolBuilder

// Begin Class UCombineMeshesToolProperties
void UCombineMeshesToolProperties::StaticRegisterNativesUCombineMeshesToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombineMeshesToolProperties);
UClass* Z_Construct_UClass_UCombineMeshesToolProperties_NoRegister()
{
	return UCombineMeshesToolProperties::StaticClass();
}
struct Z_Construct_UClass_UCombineMeshesToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Common properties\n */" },
		{ "IncludePath", "CombineMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "ToolTip", "Common properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDuplicateMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputWriteTo_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Defines the object the tool output is written to. */" },
		{ "DisplayName", "Write To" },
		{ "EditCondition", "bIsDuplicateMode == false" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "ToolTip", "Defines the object the tool output is written to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNewName_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Base name of the newly generated object to which the output is written to. */" },
		{ "DisplayName", "Name" },
		{ "EditCondition", "bIsDuplicateMode || OutputWriteTo == EBaseCreateFromSelectedTargetType::NewObject" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Base name of the newly generated object to which the output is written to." },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputExistingName_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Name of the existing object to which the output is written to. */" },
		{ "DisplayName", "Name" },
		{ "EditCondition", "bIsDuplicateMode == false && OutputWriteTo != EBaseCreateFromSelectedTargetType::NewObject" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Name of the existing object to which the output is written to." },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDuplicateMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDuplicateMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputWriteTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputWriteTo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNewName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputExistingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombineMeshesToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode_SetBit(void* Obj)
{
	((UCombineMeshesToolProperties*)Obj)->bIsDuplicateMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode = { "bIsDuplicateMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombineMeshesToolProperties), &Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDuplicateMode_MetaData), NewProp_bIsDuplicateMode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo = { "OutputWriteTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombineMeshesToolProperties, OutputWriteTo), Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputWriteTo_MetaData), NewProp_OutputWriteTo_MetaData) }; // 1877644053
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputNewName = { "OutputNewName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombineMeshesToolProperties, OutputNewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNewName_MetaData), NewProp_OutputNewName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputExistingName = { "OutputExistingName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombineMeshesToolProperties, OutputExistingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputExistingName_MetaData), NewProp_OutputExistingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombineMeshesToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputNewName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputExistingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombineMeshesToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::ClassParams = {
	&UCombineMeshesToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombineMeshesToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombineMeshesToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombineMeshesToolProperties()
{
	if (!Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UCombineMeshesToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCombineMeshesToolProperties>()
{
	return UCombineMeshesToolProperties::StaticClass();
}
UCombineMeshesToolProperties::UCombineMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombineMeshesToolProperties);
UCombineMeshesToolProperties::~UCombineMeshesToolProperties() {}
// End Class UCombineMeshesToolProperties

// Begin Class UCombineMeshesTool
void UCombineMeshesTool::StaticRegisterNativesUCombineMeshesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombineMeshesTool);
UClass* Z_Construct_UClass_UCombineMeshesTool_NoRegister()
{
	return UCombineMeshesTool::StaticClass();
}
struct Z_Construct_UClass_UCombineMeshesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple tool to combine multiple meshes into a single mesh asset\n */" },
		{ "IncludePath", "CombineMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "ToolTip", "Simple tool to combine multiple meshes into a single mesh asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleSourceProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleSourceProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombineMeshesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombineMeshesTool, BasicProperties), Z_Construct_UClass_UCombineMeshesToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombineMeshesTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_HandleSourceProperties = { "HandleSourceProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombineMeshesTool, HandleSourceProperties), Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleSourceProperties_MetaData), NewProp_HandleSourceProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombineMeshesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_BasicProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_HandleSourceProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombineMeshesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCombineMeshesTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister, (int32)VTABLE_OFFSET(UCombineMeshesTool, IInteractiveToolExclusiveToolAPI), false },  // 3683580694
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombineMeshesTool_Statics::ClassParams = {
	&UCombineMeshesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombineMeshesTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombineMeshesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombineMeshesTool()
{
	if (!Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton, Z_Construct_UClass_UCombineMeshesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCombineMeshesTool>()
{
	return UCombineMeshesTool::StaticClass();
}
UCombineMeshesTool::UCombineMeshesTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombineMeshesTool);
UCombineMeshesTool::~UCombineMeshesTool() {}
// End Class UCombineMeshesTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombineMeshesToolBuilder, UCombineMeshesToolBuilder::StaticClass, TEXT("UCombineMeshesToolBuilder"), &Z_Registration_Info_UClass_UCombineMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombineMeshesToolBuilder), 2510281021U) },
		{ Z_Construct_UClass_UCombineMeshesToolProperties, UCombineMeshesToolProperties::StaticClass, TEXT("UCombineMeshesToolProperties"), &Z_Registration_Info_UClass_UCombineMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombineMeshesToolProperties), 2454692080U) },
		{ Z_Construct_UClass_UCombineMeshesTool, UCombineMeshesTool::StaticClass, TEXT("UCombineMeshesTool"), &Z_Registration_Info_UClass_UCombineMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombineMeshesTool), 4019764658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_728353588(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
