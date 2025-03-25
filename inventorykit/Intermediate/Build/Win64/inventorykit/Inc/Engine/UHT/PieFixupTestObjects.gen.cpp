// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Tests/PieFixupTestObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePieFixupTestObjects() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPieFixupTestObject();
ENGINE_API UClass* Z_Construct_UClass_UPieFixupTestObject_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPieFixupStructWithSoftObjectPath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PieFixupStructWithSoftObjectPath;
class UScriptStruct* FPieFixupStructWithSoftObjectPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PieFixupStructWithSoftObjectPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PieFixupStructWithSoftObjectPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PieFixupStructWithSoftObjectPath"));
	}
	return Z_Registration_Info_UScriptStruct_PieFixupStructWithSoftObjectPath.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPieFixupStructWithSoftObjectPath>()
{
	return FPieFixupStructWithSoftObjectPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/PieFixupTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PieFixupTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypedPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PieFixupTestObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TypedPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPieFixupStructWithSoftObjectPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPieFixupStructWithSoftObjectPath, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::NewProp_TypedPtr = { "TypedPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPieFixupStructWithSoftObjectPath, TypedPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypedPtr_MetaData), NewProp_TypedPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::NewProp_TypedPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PieFixupStructWithSoftObjectPath",
	Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::PropPointers),
	sizeof(FPieFixupStructWithSoftObjectPath),
	alignof(FPieFixupStructWithSoftObjectPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath()
{
	if (!Z_Registration_Info_UScriptStruct_PieFixupStructWithSoftObjectPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PieFixupStructWithSoftObjectPath.InnerSingleton, Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PieFixupStructWithSoftObjectPath.InnerSingleton;
}
// End ScriptStruct FPieFixupStructWithSoftObjectPath

// Begin Class UPieFixupTestObject
void UPieFixupTestObject::StaticRegisterNativesUPieFixupTestObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPieFixupTestObject);
UClass* Z_Construct_UClass_UPieFixupTestObject_NoRegister()
{
	return UPieFixupTestObject::StaticClass();
}
struct Z_Construct_UClass_UPieFixupTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/PieFixupTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/PieFixupTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PieFixupTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypedPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PieFixupTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PieFixupTestObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/PieFixupTestObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TypedPtr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPieFixupTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPieFixupTestObject, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_TypedPtr = { "TypedPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPieFixupTestObject, TypedPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypedPtr_MetaData), NewProp_TypedPtr_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPieFixupTestObject, Struct), Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Struct_MetaData), NewProp_Struct_MetaData) }; // 3407567659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath, METADATA_PARAMS(0, nullptr) }; // 3407567659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPieFixupTestObject, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Array_MetaData), NewProp_Array_MetaData) }; // 3407567659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPieFixupTestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_TypedPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_Struct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPieFixupTestObject_Statics::NewProp_Array,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPieFixupTestObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPieFixupTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPieFixupTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPieFixupTestObject_Statics::ClassParams = {
	&UPieFixupTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPieFixupTestObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPieFixupTestObject_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPieFixupTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UPieFixupTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPieFixupTestObject()
{
	if (!Z_Registration_Info_UClass_UPieFixupTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPieFixupTestObject.OuterSingleton, Z_Construct_UClass_UPieFixupTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPieFixupTestObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPieFixupTestObject>()
{
	return UPieFixupTestObject::StaticClass();
}
UPieFixupTestObject::UPieFixupTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPieFixupTestObject);
UPieFixupTestObject::~UPieFixupTestObject() {}
// End Class UPieFixupTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPieFixupStructWithSoftObjectPath::StaticStruct, Z_Construct_UScriptStruct_FPieFixupStructWithSoftObjectPath_Statics::NewStructOps, TEXT("PieFixupStructWithSoftObjectPath"), &Z_Registration_Info_UScriptStruct_PieFixupStructWithSoftObjectPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPieFixupStructWithSoftObjectPath), 3407567659U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPieFixupTestObject, UPieFixupTestObject::StaticClass, TEXT("UPieFixupTestObject"), &Z_Registration_Info_UClass_UPieFixupTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPieFixupTestObject), 1112964722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_3653484035(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_PieFixupTestObjects_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
