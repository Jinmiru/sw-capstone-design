// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyBinding() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
UMG_API UClass* Z_Construct_UClass_UPropertyBinding_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UPropertyBinding
void UPropertyBinding::StaticRegisterNativesUPropertyBinding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyBinding);
UClass* Z_Construct_UClass_UPropertyBinding_NoRegister()
{
	return UPropertyBinding::StaticClass();
}
struct Z_Construct_UClass_UPropertyBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/PropertyBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** The source object to use as the initial container to resolve the Source Property Path on. */" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "The source object to use as the initial container to resolve the Source Property Path on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "Comment", "/** The property path to trace to resolve this binding on the Source Object */" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "The property path to trace to resolve this binding on the Source Object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationProperty_MetaData[] = {
		{ "Comment", "/** Used to determine if a binding already exists on the object and if this binding can be safely removed. */" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "Used to determine if a binding already exists on the object and if this binding can be safely removed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DestinationProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyBinding, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceObject_MetaData), NewProp_SourceObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyBinding, SourcePath), Z_Construct_UScriptStruct_FDynamicPropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) }; // 2909106557
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty = { "DestinationProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPropertyBinding, DestinationProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationProperty_MetaData), NewProp_DestinationProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPropertyBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyBinding_Statics::ClassParams = {
	&UPropertyBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPropertyBinding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UPropertyBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPropertyBinding()
{
	if (!Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton, Z_Construct_UClass_UPropertyBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UPropertyBinding>()
{
	return UPropertyBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBinding);
UPropertyBinding::~UPropertyBinding() {}
// End Class UPropertyBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyBinding, UPropertyBinding::StaticClass, TEXT("UPropertyBinding"), &Z_Registration_Info_UClass_UPropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyBinding), 1998360360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_1959813823(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
