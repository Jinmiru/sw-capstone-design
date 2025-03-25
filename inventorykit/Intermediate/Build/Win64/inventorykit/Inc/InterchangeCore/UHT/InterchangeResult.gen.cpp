// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/InterchangeResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeResult() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResult();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResult_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultDisplay_Generic();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultDisplay_Generic_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_Generic();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_ReimportFail();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultError_ReimportFail_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultSuccess();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultSuccess_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning_Generic();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultWarning_NoRegister();
INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeResultType();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Enum EInterchangeResultType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeResultType;
static UEnum* EInterchangeResultType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeResultType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeResultType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeResultType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeResultType"));
	}
	return Z_Registration_Info_UEnum_EInterchangeResultType.OuterSingleton;
}
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeResultType>()
{
	return EInterchangeResultType_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "EInterchangeResultType::Error" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "Success.Name", "EInterchangeResultType::Success" },
		{ "Warning.Name", "EInterchangeResultType::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeResultType::Success", (int64)EInterchangeResultType::Success },
		{ "EInterchangeResultType::Warning", (int64)EInterchangeResultType::Warning },
		{ "EInterchangeResultType::Error", (int64)EInterchangeResultType::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
	nullptr,
	"EInterchangeResultType",
	"EInterchangeResultType",
	Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeResultType()
{
	if (!Z_Registration_Info_UEnum_EInterchangeResultType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeResultType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeResultType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeResultType.InnerSingleton;
}
// End Enum EInterchangeResultType

// Begin Class UInterchangeResult
void UInterchangeResult::StaticRegisterNativesUInterchangeResult()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResult);
UClass* Z_Construct_UClass_UInterchangeResult_NoRegister()
{
	return UInterchangeResult::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the result from an Interchange operation.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Base class for the result from an Interchange operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetFriendlyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceAssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetFriendlyName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InterchangeKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_SourceAssetName = { "SourceAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResult, SourceAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAssetName_MetaData), NewProp_SourceAssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_DestinationAssetName = { "DestinationAssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResult, DestinationAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationAssetName_MetaData), NewProp_DestinationAssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetFriendlyName = { "AssetFriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResult, AssetFriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetFriendlyName_MetaData), NewProp_AssetFriendlyName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResult, AssetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeResult_Statics::NewProp_InterchangeKey = { "InterchangeKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResult, InterchangeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeKey_MetaData), NewProp_InterchangeKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_SourceAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_DestinationAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetFriendlyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_AssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResult_Statics::NewProp_InterchangeKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResult_Statics::ClassParams = {
	&UInterchangeResult::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResult_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResult_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResult_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResult()
{
	if (!Z_Registration_Info_UClass_UInterchangeResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResult.OuterSingleton, Z_Construct_UClass_UInterchangeResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResult.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResult>()
{
	return UInterchangeResult::StaticClass();
}
UInterchangeResult::UInterchangeResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResult);
UInterchangeResult::~UInterchangeResult() {}
// End Class UInterchangeResult

// Begin Class UInterchangeResultSuccess
void UInterchangeResultSuccess::StaticRegisterNativesUInterchangeResultSuccess()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultSuccess);
UClass* Z_Construct_UClass_UInterchangeResultSuccess_NoRegister()
{
	return UInterchangeResultSuccess::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class representing a succesful result.\n */" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Class representing a succesful result." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultSuccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeResultSuccess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResult,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultSuccess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultSuccess_Statics::ClassParams = {
	&UInterchangeResultSuccess::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultSuccess_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultSuccess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultSuccess()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultSuccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultSuccess.OuterSingleton, Z_Construct_UClass_UInterchangeResultSuccess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultSuccess.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultSuccess>()
{
	return UInterchangeResultSuccess::StaticClass();
}
UInterchangeResultSuccess::UInterchangeResultSuccess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultSuccess);
UInterchangeResultSuccess::~UInterchangeResultSuccess() {}
// End Class UInterchangeResultSuccess

// Begin Class UInterchangeResultWarning
void UInterchangeResultWarning::StaticRegisterNativesUInterchangeResultWarning()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultWarning);
UClass* Z_Construct_UClass_UInterchangeResultWarning_NoRegister()
{
	return UInterchangeResultWarning::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultWarning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class representing a warning result.\n */" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Base class representing a warning result." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultWarning>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeResultWarning_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResult,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultWarning_Statics::ClassParams = {
	&UInterchangeResultWarning::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultWarning_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultWarning()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultWarning.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultWarning.OuterSingleton, Z_Construct_UClass_UInterchangeResultWarning_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultWarning.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultWarning>()
{
	return UInterchangeResultWarning::StaticClass();
}
UInterchangeResultWarning::UInterchangeResultWarning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultWarning);
UInterchangeResultWarning::~UInterchangeResultWarning() {}
// End Class UInterchangeResultWarning

// Begin Class UInterchangeResultError
void UInterchangeResultError::StaticRegisterNativesUInterchangeResultError()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultError);
UClass* Z_Construct_UClass_UInterchangeResultError_NoRegister()
{
	return UInterchangeResultError::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class representing a error result.\n */" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Base class representing a error result." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultError>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeResultError_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResult,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultError_Statics::ClassParams = {
	&UInterchangeResultError::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultError_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultError()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultError.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultError.OuterSingleton, Z_Construct_UClass_UInterchangeResultError_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultError.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultError>()
{
	return UInterchangeResultError::StaticClass();
}
UInterchangeResultError::UInterchangeResultError(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultError);
UInterchangeResultError::~UInterchangeResultError() {}
// End Class UInterchangeResultError

// Begin Class UInterchangeResultWarning_Generic
void UInterchangeResultWarning_Generic::StaticRegisterNativesUInterchangeResultWarning_Generic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultWarning_Generic);
UClass* Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister()
{
	return UInterchangeResultWarning_Generic::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultWarning_Generic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultWarning_Generic, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultWarning,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::ClassParams = {
	&UInterchangeResultWarning_Generic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultWarning_Generic()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultWarning_Generic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultWarning_Generic.OuterSingleton, Z_Construct_UClass_UInterchangeResultWarning_Generic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultWarning_Generic.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultWarning_Generic>()
{
	return UInterchangeResultWarning_Generic::StaticClass();
}
UInterchangeResultWarning_Generic::UInterchangeResultWarning_Generic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultWarning_Generic);
UInterchangeResultWarning_Generic::~UInterchangeResultWarning_Generic() {}
// End Class UInterchangeResultWarning_Generic

// Begin Class UInterchangeResultError_Generic
void UInterchangeResultError_Generic::StaticRegisterNativesUInterchangeResultError_Generic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultError_Generic);
UClass* Z_Construct_UClass_UInterchangeResultError_Generic_NoRegister()
{
	return UInterchangeResultError_Generic::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultError_Generic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultError_Generic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInterchangeResultError_Generic_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultError_Generic, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultError_Generic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultError_Generic_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultError_Generic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultError,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultError_Generic_Statics::ClassParams = {
	&UInterchangeResultError_Generic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultError_Generic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_Generic_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultError_Generic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultError_Generic()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultError_Generic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultError_Generic.OuterSingleton, Z_Construct_UClass_UInterchangeResultError_Generic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultError_Generic.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultError_Generic>()
{
	return UInterchangeResultError_Generic::StaticClass();
}
UInterchangeResultError_Generic::UInterchangeResultError_Generic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultError_Generic);
UInterchangeResultError_Generic::~UInterchangeResultError_Generic() {}
// End Class UInterchangeResultError_Generic

// Begin Class UInterchangeResultError_ReimportFail
void UInterchangeResultError_ReimportFail::StaticRegisterNativesUInterchangeResultError_ReimportFail()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultError_ReimportFail);
UClass* Z_Construct_UClass_UInterchangeResultError_ReimportFail_NoRegister()
{
	return UInterchangeResultError_ReimportFail::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultError_ReimportFail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultError,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::ClassParams = {
	&UInterchangeResultError_ReimportFail::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultError_ReimportFail()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.OuterSingleton, Z_Construct_UClass_UInterchangeResultError_ReimportFail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultError_ReimportFail>()
{
	return UInterchangeResultError_ReimportFail::StaticClass();
}
UInterchangeResultError_ReimportFail::UInterchangeResultError_ReimportFail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultError_ReimportFail);
UInterchangeResultError_ReimportFail::~UInterchangeResultError_ReimportFail() {}
// End Class UInterchangeResultError_ReimportFail

// Begin Class UInterchangeResultDisplay_Generic
void UInterchangeResultDisplay_Generic::StaticRegisterNativesUInterchangeResultDisplay_Generic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeResultDisplay_Generic);
UClass* Z_Construct_UClass_UInterchangeResultDisplay_Generic_NoRegister()
{
	return UInterchangeResultDisplay_Generic::StaticClass();
}
struct Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Used for Successful imports with messages with lower than Warning priorities (for ep Display)\n*/" },
		{ "IncludePath", "InterchangeResult.h" },
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
		{ "ToolTip", "Used for Successful imports with messages with lower than Warning priorities (for ep Display)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeResultDisplay_Generic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeResultDisplay_Generic, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeResultSuccess,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::ClassParams = {
	&UInterchangeResultDisplay_Generic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeResultDisplay_Generic()
{
	if (!Z_Registration_Info_UClass_UInterchangeResultDisplay_Generic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeResultDisplay_Generic.OuterSingleton, Z_Construct_UClass_UInterchangeResultDisplay_Generic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeResultDisplay_Generic.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeResultDisplay_Generic>()
{
	return UInterchangeResultDisplay_Generic::StaticClass();
}
UInterchangeResultDisplay_Generic::UInterchangeResultDisplay_Generic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeResultDisplay_Generic);
UInterchangeResultDisplay_Generic::~UInterchangeResultDisplay_Generic() {}
// End Class UInterchangeResultDisplay_Generic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeResultType_StaticEnum, TEXT("EInterchangeResultType"), &Z_Registration_Info_UEnum_EInterchangeResultType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3462851561U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeResult, UInterchangeResult::StaticClass, TEXT("UInterchangeResult"), &Z_Registration_Info_UClass_UInterchangeResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResult), 24165766U) },
		{ Z_Construct_UClass_UInterchangeResultSuccess, UInterchangeResultSuccess::StaticClass, TEXT("UInterchangeResultSuccess"), &Z_Registration_Info_UClass_UInterchangeResultSuccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultSuccess), 3378482862U) },
		{ Z_Construct_UClass_UInterchangeResultWarning, UInterchangeResultWarning::StaticClass, TEXT("UInterchangeResultWarning"), &Z_Registration_Info_UClass_UInterchangeResultWarning, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultWarning), 2325325341U) },
		{ Z_Construct_UClass_UInterchangeResultError, UInterchangeResultError::StaticClass, TEXT("UInterchangeResultError"), &Z_Registration_Info_UClass_UInterchangeResultError, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultError), 148927049U) },
		{ Z_Construct_UClass_UInterchangeResultWarning_Generic, UInterchangeResultWarning_Generic::StaticClass, TEXT("UInterchangeResultWarning_Generic"), &Z_Registration_Info_UClass_UInterchangeResultWarning_Generic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultWarning_Generic), 2082541734U) },
		{ Z_Construct_UClass_UInterchangeResultError_Generic, UInterchangeResultError_Generic::StaticClass, TEXT("UInterchangeResultError_Generic"), &Z_Registration_Info_UClass_UInterchangeResultError_Generic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultError_Generic), 2534566043U) },
		{ Z_Construct_UClass_UInterchangeResultError_ReimportFail, UInterchangeResultError_ReimportFail::StaticClass, TEXT("UInterchangeResultError_ReimportFail"), &Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultError_ReimportFail), 3480906360U) },
		{ Z_Construct_UClass_UInterchangeResultDisplay_Generic, UInterchangeResultDisplay_Generic::StaticClass, TEXT("UInterchangeResultDisplay_Generic"), &Z_Registration_Info_UClass_UInterchangeResultDisplay_Generic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeResultDisplay_Generic), 606475778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_3897470466(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeResult_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
