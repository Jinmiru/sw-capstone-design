// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPinBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPinBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPinBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReroute_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeReroute();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCompositeReroute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositeReroute;
class UScriptStruct* FCompositeReroute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeReroute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositeReroute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeReroute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CompositeReroute"));
	}
	return Z_Registration_Info_UScriptStruct_CompositeReroute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompositeReroute>()
{
	return FCompositeReroute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompositeReroute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Collection of pins used for tunneling between graphs.\n * Utilizes reroute expressions to ensure zero overhead in the compiled material.\n * \n *      _________________          _________________\n *     |   INPUT BASE    |        |   OUTPUT BASE   |\n *     +--------+--------+        +--------+--------+\n *     |        |   (>)  |   ->   |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |        |        |        |        |\n *     +--------+--------+        +--------+--------+\n *     | NODE IN:  NONE  |        | NODE IN:  PINS  |\n *     | NODE OUT: PINS  |        | NODE OUT: NONE  |\n *     |_________________|        |_________________|\n *\n */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "ToolTip", "Collection of pins used for tunneling between graphs.\nUtilizes reroute expressions to ensure zero overhead in the compiled material.\n\n     _________________          _________________\n    |   INPUT BASE    |        |   OUTPUT BASE   |\n    +--------+--------+        +--------+--------+\n    |        |   (>)  |   ->   |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |        |        |        |        |\n    +--------+--------+        +--------+--------+\n    | NODE IN:  NONE  |        | NODE IN:  PINS  |\n    | NODE OUT: PINS  |        | NODE OUT: NONE  |\n    |_________________|        |_________________|" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeReroute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompositeReroute, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompositeReroute, Expression), Z_Construct_UClass_UMaterialExpressionReroute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeReroute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Expression,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeReroute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeReroute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CompositeReroute",
	Z_Construct_UScriptStruct_FCompositeReroute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeReroute_Statics::PropPointers),
	sizeof(FCompositeReroute),
	alignof(FCompositeReroute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeReroute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompositeReroute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompositeReroute()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeReroute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositeReroute.InnerSingleton, Z_Construct_UScriptStruct_FCompositeReroute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompositeReroute.InnerSingleton;
}
// End ScriptStruct FCompositeReroute

// Begin Class UMaterialExpressionPinBase
void UMaterialExpressionPinBase::StaticRegisterNativesUMaterialExpressionPinBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPinBase);
UClass* Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister()
{
	return UMaterialExpressionPinBase::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPinBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionPinBase.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReroutePins_MetaData[] = {
		{ "Category", "MaterialExpressionPinBase" },
		{ "Comment", "/** Underlying reroute pins used to compile material. Must call Modify after editing to update output expressions. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "NoResetToDefault", "" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "Underlying reroute pins used to compile material. Must call Modify after editing to update output expressions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinDirection_MetaData[] = {
		{ "Comment", "/** Direction of the pins for this base. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "ToolTip", "Direction of the pins for this base." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReroutePins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReroutePins;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PinDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPinBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins_Inner = { "ReroutePins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCompositeReroute, METADATA_PARAMS(0, nullptr) }; // 4188045919
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins = { "ReroutePins", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPinBase, ReroutePins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReroutePins_MetaData), NewProp_ReroutePins_MetaData) }; // 4188045919
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_PinDirection = { "PinDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPinBase, PinDirection), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinDirection_MetaData), NewProp_PinDirection_MetaData) }; // 3543720081
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPinBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_PinDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPinBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPinBase_Statics::ClassParams = {
	&UMaterialExpressionPinBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPinBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPinBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPinBase()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPinBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPinBase.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPinBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPinBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPinBase>()
{
	return UMaterialExpressionPinBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPinBase);
UMaterialExpressionPinBase::~UMaterialExpressionPinBase() {}
// End Class UMaterialExpressionPinBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCompositeReroute::StaticStruct, Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewStructOps, TEXT("CompositeReroute"), &Z_Registration_Info_UScriptStruct_CompositeReroute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositeReroute), 4188045919U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPinBase, UMaterialExpressionPinBase::StaticClass, TEXT("UMaterialExpressionPinBase"), &Z_Registration_Info_UClass_UMaterialExpressionPinBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPinBase), 4851858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_2399768335(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
