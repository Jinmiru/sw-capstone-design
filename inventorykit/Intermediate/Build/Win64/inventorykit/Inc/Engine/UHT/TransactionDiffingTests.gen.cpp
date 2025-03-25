// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Tests/TransactionDiffingTests.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransactionDiffingTests() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTransactionDiffingTestObject();
ENGINE_API UClass* Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTransactionDiffingTestObject
void UTransactionDiffingTestObject::StaticRegisterNativesUTransactionDiffingTestObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransactionDiffingTestObject);
UClass* Z_Construct_UClass_UTransactionDiffingTestObject_NoRegister()
{
	return UTransactionDiffingTestObject::StaticClass();
}
struct Z_Construct_UClass_UTransactionDiffingTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/TransactionDiffingTests.h" },
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamesArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectsArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSoftObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/TransactionDiffingTests.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NamesArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NamesArray;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AdditionalName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalObject;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObjectsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoftObjectsArray;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AdditionalSoftObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransactionDiffingTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray_Inner = { "NamesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray = { "NamesArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDiffingTestObject, NamesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamesArray_MetaData), NewProp_NamesArray_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalName = { "AdditionalName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDiffingTestObject, AdditionalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalName_MetaData), NewProp_AdditionalName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray_Inner = { "ObjectsArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray = { "ObjectsArray", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDiffingTestObject, ObjectsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectsArray_MetaData), NewProp_ObjectsArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalObject = { "AdditionalObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDiffingTestObject, AdditionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalObject_MetaData), NewProp_AdditionalObject_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray_Inner = { "SoftObjectsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray = { "SoftObjectsArray", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDiffingTestObject, SoftObjectsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftObjectsArray_MetaData), NewProp_SoftObjectsArray_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalSoftObject = { "AdditionalSoftObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDiffingTestObject, AdditionalSoftObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSoftObject_MetaData), NewProp_AdditionalSoftObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_PropertyData = { "PropertyData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransactionDiffingTestObject, PropertyData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyData_MetaData), NewProp_PropertyData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransactionDiffingTestObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_NamesArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_ObjectsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_SoftObjectsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_AdditionalSoftObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransactionDiffingTestObject_Statics::NewProp_PropertyData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransactionDiffingTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransactionDiffingTestObject_Statics::ClassParams = {
	&UTransactionDiffingTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransactionDiffingTestObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransactionDiffingTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransactionDiffingTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransactionDiffingTestObject()
{
	if (!Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton, Z_Construct_UClass_UTransactionDiffingTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransactionDiffingTestObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTransactionDiffingTestObject>()
{
	return UTransactionDiffingTestObject::StaticClass();
}
UTransactionDiffingTestObject::UTransactionDiffingTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransactionDiffingTestObject);
UTransactionDiffingTestObject::~UTransactionDiffingTestObject() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UTransactionDiffingTestObject)
// End Class UTransactionDiffingTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransactionDiffingTestObject, UTransactionDiffingTestObject::StaticClass, TEXT("UTransactionDiffingTestObject"), &Z_Registration_Info_UClass_UTransactionDiffingTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransactionDiffingTestObject), 1952686519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_2240877397(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_TransactionDiffingTests_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
