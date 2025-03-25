// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/IntSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntSerialization() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UIntSerialization();
ENGINE_API UClass* Z_Construct_UClass_UIntSerialization_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UIntSerialization
void UIntSerialization::StaticRegisterNativesUIntSerialization()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntSerialization);
UClass* Z_Construct_UClass_UIntSerialization_NoRegister()
{
	return UIntSerialization::StaticClass();
}
struct Z_Construct_UClass_UIntSerialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/IntSerialization.h" },
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt16Variable_MetaData[] = {
		{ "Comment", "//New types\n" },
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
		{ "ToolTip", "New types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt32Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt64Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedInt8Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedInt16Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedInt64Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnsignedInt8Variable_MetaData[] = {
		{ "Comment", "//Existing types\n" },
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
		{ "ToolTip", "Existing types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignedInt32Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/IntSerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_UnsignedInt16Variable;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UnsignedInt32Variable;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_UnsignedInt64Variable;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_SignedInt8Variable;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_SignedInt16Variable;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SignedInt64Variable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UnsignedInt8Variable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SignedInt32Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntSerialization>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable = { "UnsignedInt16Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntSerialization, UnsignedInt16Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnsignedInt16Variable_MetaData), NewProp_UnsignedInt16Variable_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable = { "UnsignedInt32Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntSerialization, UnsignedInt32Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnsignedInt32Variable_MetaData), NewProp_UnsignedInt32Variable_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable = { "UnsignedInt64Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntSerialization, UnsignedInt64Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnsignedInt64Variable_MetaData), NewProp_UnsignedInt64Variable_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable = { "SignedInt8Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntSerialization, SignedInt8Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedInt8Variable_MetaData), NewProp_SignedInt8Variable_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable = { "SignedInt16Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntSerialization, SignedInt16Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedInt16Variable_MetaData), NewProp_SignedInt16Variable_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable = { "SignedInt64Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntSerialization, SignedInt64Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedInt64Variable_MetaData), NewProp_SignedInt64Variable_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable = { "UnsignedInt8Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntSerialization, UnsignedInt8Variable), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnsignedInt8Variable_MetaData), NewProp_UnsignedInt8Variable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable = { "SignedInt32Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntSerialization, SignedInt32Variable), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignedInt32Variable_MetaData), NewProp_SignedInt32Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIntSerialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt16Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt32Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt64Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt8Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt16Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt64Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_UnsignedInt8Variable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntSerialization_Statics::NewProp_SignedInt32Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIntSerialization_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntSerialization_Statics::ClassParams = {
	&UIntSerialization::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIntSerialization_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntSerialization_Statics::Class_MetaDataParams), Z_Construct_UClass_UIntSerialization_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIntSerialization()
{
	if (!Z_Registration_Info_UClass_UIntSerialization.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntSerialization.OuterSingleton, Z_Construct_UClass_UIntSerialization_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIntSerialization.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UIntSerialization>()
{
	return UIntSerialization::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIntSerialization);
UIntSerialization::~UIntSerialization() {}
// End Class UIntSerialization

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIntSerialization, UIntSerialization::StaticClass, TEXT("UIntSerialization"), &Z_Registration_Info_UClass_UIntSerialization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntSerialization), 3798542949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_112946309(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_IntSerialization_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
