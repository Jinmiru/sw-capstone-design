// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/ConvertMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertMeshesTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UConvertMeshesToolBuilder
void UConvertMeshesToolBuilder::StaticRegisterNativesUConvertMeshesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertMeshesToolBuilder);
UClass* Z_Construct_UClass_UConvertMeshesToolBuilder_NoRegister()
{
	return UConvertMeshesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UConvertMeshesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ConvertMeshesTool.h" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertMeshesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::ClassParams = {
	&UConvertMeshesToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConvertMeshesToolBuilder()
{
	if (!Z_Registration_Info_UClass_UConvertMeshesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConvertMeshesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertMeshesToolBuilder>()
{
	return UConvertMeshesToolBuilder::StaticClass();
}
UConvertMeshesToolBuilder::UConvertMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertMeshesToolBuilder);
UConvertMeshesToolBuilder::~UConvertMeshesToolBuilder() {}
// End Class UConvertMeshesToolBuilder

// Begin Class UConvertMeshesToolProperties
void UConvertMeshesToolProperties::StaticRegisterNativesUConvertMeshesToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertMeshesToolProperties);
UClass* Z_Construct_UClass_UConvertMeshesToolProperties_NoRegister()
{
	return UConvertMeshesToolProperties::StaticClass();
}
struct Z_Construct_UClass_UConvertMeshesToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Transfer operation\n */" },
		{ "IncludePath", "ConvertMeshesTool.h" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
		{ "ToolTip", "Standard properties of the Transfer operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransferMaterials_MetaData[] = {
		{ "Category", "Options" },
		{ "EditCondition", "bShowTransferMaterials == true" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransferMaterials_MetaData[] = {
		{ "Comment", "// control whether the transfer materials option is displayed\n" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
		{ "ToolTip", "control whether the transfer materials option is displayed" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransferCollision_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTransferMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferMaterials;
	static void NewProp_bShowTransferMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransferMaterials;
	static void NewProp_bTransferCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertMeshesToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials_SetBit(void* Obj)
{
	((UConvertMeshesToolProperties*)Obj)->bTransferMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials = { "bTransferMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertMeshesToolProperties), &Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransferMaterials_MetaData), NewProp_bTransferMaterials_MetaData) };
void Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials_SetBit(void* Obj)
{
	((UConvertMeshesToolProperties*)Obj)->bShowTransferMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials = { "bShowTransferMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertMeshesToolProperties), &Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTransferMaterials_MetaData), NewProp_bShowTransferMaterials_MetaData) };
void Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferCollision_SetBit(void* Obj)
{
	((UConvertMeshesToolProperties*)Obj)->bTransferCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferCollision = { "bTransferCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UConvertMeshesToolProperties), &Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransferCollision_MetaData), NewProp_bTransferCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertMeshesToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConvertMeshesToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertMeshesToolProperties_Statics::ClassParams = {
	&UConvertMeshesToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConvertMeshesToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UConvertMeshesToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConvertMeshesToolProperties()
{
	if (!Z_Registration_Info_UClass_UConvertMeshesToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UConvertMeshesToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConvertMeshesToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertMeshesToolProperties>()
{
	return UConvertMeshesToolProperties::StaticClass();
}
UConvertMeshesToolProperties::UConvertMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertMeshesToolProperties);
UConvertMeshesToolProperties::~UConvertMeshesToolProperties() {}
// End Class UConvertMeshesToolProperties

// Begin Class UConvertMeshesTool
void UConvertMeshesTool::StaticRegisterNativesUConvertMeshesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertMeshesTool);
UClass* Z_Construct_UClass_UConvertMeshesTool_NoRegister()
{
	return UConvertMeshesTool::StaticClass();
}
struct Z_Construct_UClass_UConvertMeshesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertMeshesTool.h" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertMeshesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertMeshesTool, BasicProperties), Z_Construct_UClass_UConvertMeshesToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertMeshesTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConvertMeshesTool, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertMeshesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_BasicProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConvertMeshesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UConvertMeshesTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister, (int32)VTABLE_OFFSET(UConvertMeshesTool, IInteractiveToolExclusiveToolAPI), false },  // 3683580694
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertMeshesTool_Statics::ClassParams = {
	&UConvertMeshesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConvertMeshesTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UConvertMeshesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConvertMeshesTool()
{
	if (!Z_Registration_Info_UClass_UConvertMeshesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertMeshesTool.OuterSingleton, Z_Construct_UClass_UConvertMeshesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConvertMeshesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertMeshesTool>()
{
	return UConvertMeshesTool::StaticClass();
}
UConvertMeshesTool::UConvertMeshesTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertMeshesTool);
UConvertMeshesTool::~UConvertMeshesTool() {}
// End Class UConvertMeshesTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConvertMeshesToolBuilder, UConvertMeshesToolBuilder::StaticClass, TEXT("UConvertMeshesToolBuilder"), &Z_Registration_Info_UClass_UConvertMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertMeshesToolBuilder), 4287690424U) },
		{ Z_Construct_UClass_UConvertMeshesToolProperties, UConvertMeshesToolProperties::StaticClass, TEXT("UConvertMeshesToolProperties"), &Z_Registration_Info_UClass_UConvertMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertMeshesToolProperties), 3015585721U) },
		{ Z_Construct_UClass_UConvertMeshesTool, UConvertMeshesTool::StaticClass, TEXT("UConvertMeshesTool"), &Z_Registration_Info_UClass_UConvertMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertMeshesTool), 1349617936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_257256863(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
