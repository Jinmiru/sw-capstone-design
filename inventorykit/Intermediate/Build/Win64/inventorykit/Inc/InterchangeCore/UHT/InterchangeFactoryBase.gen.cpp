// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/InterchangeFactoryBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeFactoryBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Enum EInterchangeFactoryAssetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeFactoryAssetType;
static UEnum* EInterchangeFactoryAssetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeFactoryAssetType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeFactoryAssetType>()
{
	return EInterchangeFactoryAssetType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Animations.Name", "EInterchangeFactoryAssetType::Animations" },
		{ "BlueprintType", "true" },
		{ "Materials.Name", "EInterchangeFactoryAssetType::Materials" },
		{ "Meshes.Name", "EInterchangeFactoryAssetType::Meshes" },
		{ "ModuleRelativePath", "Public/InterchangeFactoryBase.h" },
		{ "None.Name", "EInterchangeFactoryAssetType::None" },
		{ "Physics.Name", "EInterchangeFactoryAssetType::Physics" },
		{ "Textures.Name", "EInterchangeFactoryAssetType::Textures" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeFactoryAssetType::None", (int64)EInterchangeFactoryAssetType::None },
		{ "EInterchangeFactoryAssetType::Textures", (int64)EInterchangeFactoryAssetType::Textures },
		{ "EInterchangeFactoryAssetType::Materials", (int64)EInterchangeFactoryAssetType::Materials },
		{ "EInterchangeFactoryAssetType::Meshes", (int64)EInterchangeFactoryAssetType::Meshes },
		{ "EInterchangeFactoryAssetType::Animations", (int64)EInterchangeFactoryAssetType::Animations },
		{ "EInterchangeFactoryAssetType::Physics", (int64)EInterchangeFactoryAssetType::Physics },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EInterchangeFactoryAssetType",
	"EInterchangeFactoryAssetType",
	Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeFactoryAssetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeFactoryAssetType.InnerSingleton;
}
// End Enum EInterchangeFactoryAssetType

// Begin Class UInterchangeFactoryBase Function GetFactoryClass
struct Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics
{
	struct InterchangeFactoryBase_eventGetFactoryClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Factory" },
		{ "Comment", "/**\n\x09 * Return the UClass this factory can create.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeFactoryBase.h" },
		{ "ToolTip", "Return the UClass this factory can create." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFactoryBase_eventGetFactoryClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFactoryBase, nullptr, "GetFactoryClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::InterchangeFactoryBase_eventGetFactoryClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::InterchangeFactoryBase_eventGetFactoryClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFactoryBase::execGetFactoryClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetFactoryClass();
	P_NATIVE_END;
}
// End Class UInterchangeFactoryBase Function GetFactoryClass

// Begin Class UInterchangeFactoryBase
void UInterchangeFactoryBase::StaticRegisterNativesUInterchangeFactoryBase()
{
	UClass* Class = UInterchangeFactoryBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFactoryClass", &UInterchangeFactoryBase::execGetFactoryClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFactoryBase);
UClass* Z_Construct_UClass_UInterchangeFactoryBase_NoRegister()
{
	return UInterchangeFactoryBase::StaticClass();
}
struct Z_Construct_UClass_UInterchangeFactoryBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Asset factory implementation:\n * \n * The first three steps use the Interchange factory node to import or reimport the UObject:\n * \n * 1. BeginImportAsset_GameThread - Create the asset UObject. You can also import source data (retrieve payloads) and set up properties on the game thread.\n * 2. ImportAsset_Async - Import source data (retrieve payloads) and set up properties asynchronously on any thread.\n * 3. EndImportAsset_GameThread - Anything you need to do on the game thread to finalize the import source data and set up properties. For example, conflict resolution that needs UI.\n * \n * The last two steps are helpful to change the imported or reimported UObject before and after the PostEditChange (render data build) is called on the asset.\n * \n * 4. SetupObject_GameThread - Do any UObject setup required before the build (before PostEditChange), the UObject dependencies should exist and have all the source data and properties imported.\n * 5. FinalizeObject_GameThread - Do any final UObject setup after the build (after PostEditChange). Note that the build of an asset can be asynchronous and this function will be call after the async build is done.\n * \n * Scene factory implementation:\n * \n * 1. ImportSceneObject_GameThread - Create an actor in a level.\n */" },
		{ "IncludePath", "InterchangeFactoryBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeFactoryBase.h" },
		{ "ToolTip", "Asset factory implementation:\n\nThe first three steps use the Interchange factory node to import or reimport the UObject:\n\n1. BeginImportAsset_GameThread - Create the asset UObject. You can also import source data (retrieve payloads) and set up properties on the game thread.\n2. ImportAsset_Async - Import source data (retrieve payloads) and set up properties asynchronously on any thread.\n3. EndImportAsset_GameThread - Anything you need to do on the game thread to finalize the import source data and set up properties. For example, conflict resolution that needs UI.\n\nThe last two steps are helpful to change the imported or reimported UObject before and after the PostEditChange (render data build) is called on the asset.\n\n4. SetupObject_GameThread - Do any UObject setup required before the build (before PostEditChange), the UObject dependencies should exist and have all the source data and properties imported.\n5. FinalizeObject_GameThread - Do any final UObject setup after the build (after PostEditChange). Note that the build of an asset can be asynchronous and this function will be call after the async build is done.\n\nScene factory implementation:\n\n1. ImportSceneObject_GameThread - Create an actor in a level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeFactoryBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeFactoryBase_GetFactoryClass, "GetFactoryClass" }, // 559913253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFactoryBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeFactoryBase_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeFactoryBase, Results), Z_Construct_UClass_UInterchangeResultsContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeFactoryBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeFactoryBase_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeFactoryBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFactoryBase_Statics::ClassParams = {
	&UInterchangeFactoryBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterchangeFactoryBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBase_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFactoryBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeFactoryBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeFactoryBase()
{
	if (!Z_Registration_Info_UClass_UInterchangeFactoryBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFactoryBase.OuterSingleton, Z_Construct_UClass_UInterchangeFactoryBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeFactoryBase.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeFactoryBase>()
{
	return UInterchangeFactoryBase::StaticClass();
}
UInterchangeFactoryBase::UInterchangeFactoryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFactoryBase);
UInterchangeFactoryBase::~UInterchangeFactoryBase() {}
// End Class UInterchangeFactoryBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeFactoryAssetType_StaticEnum, TEXT("EInterchangeFactoryAssetType"), &Z_Registration_Info_UEnum_EInterchangeFactoryAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 563819893U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeFactoryBase, UInterchangeFactoryBase::StaticClass, TEXT("UInterchangeFactoryBase"), &Z_Registration_Info_UClass_UInterchangeFactoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFactoryBase), 2250789992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_894901146(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeFactoryBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
