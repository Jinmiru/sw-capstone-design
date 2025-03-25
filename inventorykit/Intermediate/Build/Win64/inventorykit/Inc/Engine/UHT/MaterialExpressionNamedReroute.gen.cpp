// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionNamedReroute.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNamedReroute() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionNamedRerouteBase
void UMaterialExpressionNamedRerouteBase::StaticRegisterNativesUMaterialExpressionNamedRerouteBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNamedRerouteBase);
UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_NoRegister()
{
	return UMaterialExpressionNamedRerouteBase::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionRerouteBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::ClassParams = {
	&UMaterialExpressionNamedRerouteBase::StaticClass,
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
	0x000800B1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteBase()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNamedRerouteBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteBase>()
{
	return UMaterialExpressionNamedRerouteBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteBase);
UMaterialExpressionNamedRerouteBase::~UMaterialExpressionNamedRerouteBase() {}
// End Class UMaterialExpressionNamedRerouteBase

// Begin Class UMaterialExpressionNamedRerouteDeclaration
void UMaterialExpressionNamedRerouteDeclaration::StaticRegisterNativesUMaterialExpressionNamedRerouteDeclaration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNamedRerouteDeclaration);
UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister()
{
	return UMaterialExpressionNamedRerouteDeclaration::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Named Reroute Declaration" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Comment", "// The input pin\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The input pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MaterialExpressionNamedRerouteDeclaration" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[] = {
		{ "Category", "MaterialExpressionNamedRerouteDeclaration" },
		{ "Comment", "/** The color of the graph node. The same color will apply to all linked usages of this Declaration node */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The color of the graph node. The same color will apply to all linked usages of this Declaration node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteDeclaration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeColor_MetaData), NewProp_NodeColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteDeclaration, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableGuid_MetaData), NewProp_VariableGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_NodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::NewProp_VariableGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionNamedRerouteBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::ClassParams = {
	&UMaterialExpressionNamedRerouteDeclaration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteDeclaration>()
{
	return UMaterialExpressionNamedRerouteDeclaration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteDeclaration);
UMaterialExpressionNamedRerouteDeclaration::~UMaterialExpressionNamedRerouteDeclaration() {}
// End Class UMaterialExpressionNamedRerouteDeclaration

// Begin Class UMaterialExpressionNamedRerouteUsage
void UMaterialExpressionNamedRerouteUsage::StaticRegisterNativesUMaterialExpressionNamedRerouteUsage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNamedRerouteUsage);
UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_NoRegister()
{
	return UMaterialExpressionNamedRerouteUsage::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Named Reroute Usage" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionNamedReroute.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[] = {
		{ "Comment", "// The declaration this node is linked to\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The declaration this node is linked to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeclarationGuid_MetaData[] = {
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNamedReroute.h" },
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Declaration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeclarationGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNamedRerouteUsage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteUsage, Declaration), Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Declaration_MetaData), NewProp_Declaration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid = { "DeclarationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNamedRerouteUsage, DeclarationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeclarationGuid_MetaData), NewProp_DeclarationGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_Declaration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::NewProp_DeclarationGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionNamedRerouteBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::ClassParams = {
	&UMaterialExpressionNamedRerouteUsage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNamedRerouteUsage>()
{
	return UMaterialExpressionNamedRerouteUsage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNamedRerouteUsage);
UMaterialExpressionNamedRerouteUsage::~UMaterialExpressionNamedRerouteUsage() {}
// End Class UMaterialExpressionNamedRerouteUsage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionNamedRerouteBase, UMaterialExpressionNamedRerouteBase::StaticClass, TEXT("UMaterialExpressionNamedRerouteBase"), &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNamedRerouteBase), 2093753716U) },
		{ Z_Construct_UClass_UMaterialExpressionNamedRerouteDeclaration, UMaterialExpressionNamedRerouteDeclaration::StaticClass, TEXT("UMaterialExpressionNamedRerouteDeclaration"), &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNamedRerouteDeclaration), 2627437035U) },
		{ Z_Construct_UClass_UMaterialExpressionNamedRerouteUsage, UMaterialExpressionNamedRerouteUsage::StaticClass, TEXT("UMaterialExpressionNamedRerouteUsage"), &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteUsage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNamedRerouteUsage), 954107213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_1712866054(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNamedReroute_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
