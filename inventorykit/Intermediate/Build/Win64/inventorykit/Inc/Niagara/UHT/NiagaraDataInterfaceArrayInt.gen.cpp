// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceArrayInt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayInt() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayBool();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceArrayInt32
void UNiagaraDataInterfaceArrayInt32::StaticRegisterNativesUNiagaraDataInterfaceArrayInt32()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayInt32);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_NoRegister()
{
	return UNiagaraDataInterfaceArrayInt32::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Int32 Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayInt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayInt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayInt32>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::NewProp_IntData_Inner = { "IntData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::NewProp_IntData = { "IntData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceArrayInt32, IntData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntData_MetaData), NewProp_IntData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::NewProp_IntData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::NewProp_IntData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::ClassParams = {
	&UNiagaraDataInterfaceArrayInt32::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayInt32.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayInt32.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayInt32.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayInt32>()
{
	return UNiagaraDataInterfaceArrayInt32::StaticClass();
}
UNiagaraDataInterfaceArrayInt32::UNiagaraDataInterfaceArrayInt32() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayInt32);
UNiagaraDataInterfaceArrayInt32::~UNiagaraDataInterfaceArrayInt32() {}
// End Class UNiagaraDataInterfaceArrayInt32

// Begin Class UNiagaraDataInterfaceArrayUInt8
void UNiagaraDataInterfaceArrayUInt8::StaticRegisterNativesUNiagaraDataInterfaceArrayUInt8()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayUInt8);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_NoRegister()
{
	return UNiagaraDataInterfaceArrayUInt8::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "UInt8 Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayInt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayInt.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayInt.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalIntData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayInt.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InternalIntData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalIntData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayUInt8>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::NewProp_IntData_Inner = { "IntData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::NewProp_IntData = { "IntData", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceArrayUInt8, IntData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntData_MetaData), NewProp_IntData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::NewProp_InternalIntData_Inner = { "InternalIntData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::NewProp_InternalIntData = { "InternalIntData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceArrayUInt8, InternalIntData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalIntData_MetaData), NewProp_InternalIntData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::NewProp_IntData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::NewProp_IntData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::NewProp_InternalIntData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::NewProp_InternalIntData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::ClassParams = {
	&UNiagaraDataInterfaceArrayUInt8::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayUInt8.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayUInt8.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayUInt8.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayUInt8>()
{
	return UNiagaraDataInterfaceArrayUInt8::StaticClass();
}
UNiagaraDataInterfaceArrayUInt8::UNiagaraDataInterfaceArrayUInt8() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayUInt8);
UNiagaraDataInterfaceArrayUInt8::~UNiagaraDataInterfaceArrayUInt8() {}
// End Class UNiagaraDataInterfaceArrayUInt8

// Begin Class UNiagaraDataInterfaceArrayBool
void UNiagaraDataInterfaceArrayBool::StaticRegisterNativesUNiagaraDataInterfaceArrayBool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayBool);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_NoRegister()
{
	return UNiagaraDataInterfaceArrayBool::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Bool Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayInt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayInt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayInt.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayBool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::NewProp_BoolData_Inner = { "BoolData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::NewProp_BoolData = { "BoolData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceArrayBool, BoolData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolData_MetaData), NewProp_BoolData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::NewProp_BoolData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::NewProp_BoolData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::ClassParams = {
	&UNiagaraDataInterfaceArrayBool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayBool()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayBool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayBool.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayBool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayBool.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayBool>()
{
	return UNiagaraDataInterfaceArrayBool::StaticClass();
}
UNiagaraDataInterfaceArrayBool::UNiagaraDataInterfaceArrayBool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayBool);
UNiagaraDataInterfaceArrayBool::~UNiagaraDataInterfaceArrayBool() {}
// End Class UNiagaraDataInterfaceArrayBool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayInt_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayInt32, UNiagaraDataInterfaceArrayInt32::StaticClass, TEXT("UNiagaraDataInterfaceArrayInt32"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayInt32, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayInt32), 2761827042U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayUInt8, UNiagaraDataInterfaceArrayUInt8::StaticClass, TEXT("UNiagaraDataInterfaceArrayUInt8"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayUInt8, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayUInt8), 521876927U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayBool, UNiagaraDataInterfaceArrayBool::StaticClass, TEXT("UNiagaraDataInterfaceArrayBool"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayBool), 2192962486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayInt_h_3314683370(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayInt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayInt_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
