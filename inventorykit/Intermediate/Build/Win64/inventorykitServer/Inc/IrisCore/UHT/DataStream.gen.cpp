// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/DataStream/DataStream.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStream() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
IRISCORE_API UClass* Z_Construct_UClass_UDataStream();
IRISCORE_API UClass* Z_Construct_UClass_UDataStream_NoRegister();
IRISCORE_API UEnum* Z_Construct_UEnum_IrisCore_EDataStreamSendStatus();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin Enum EDataStreamSendStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataStreamSendStatus;
static UEnum* EDataStreamSendStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IrisCore_EDataStreamSendStatus, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("EDataStreamSendStatus"));
	}
	return Z_Registration_Info_UEnum_EDataStreamSendStatus.OuterSingleton;
}
template<> IRISCORE_API UEnum* StaticEnum<EDataStreamSendStatus>()
{
	return EDataStreamSendStatus_StaticEnum();
}
struct Z_Construct_UEnum_IrisCore_EDataStreamSendStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum used to control whether a DataStream is allowed to write data or not.\n * As the DataStreamManager needs to know this the behavior is controlled there.\n * @see UDataStreamManager::GetSendStatus, UDataStreamManager::SetSendStatus\n */" },
		{ "ModuleRelativePath", "Public/Iris/DataStream/DataStream.h" },
		{ "Pause.Name", "EDataStreamSendStatus::Pause" },
		{ "Send.Name", "EDataStreamSendStatus::Send" },
		{ "ToolTip", "Enum used to control whether a DataStream is allowed to write data or not.\nAs the DataStreamManager needs to know this the behavior is controlled there.\n@see UDataStreamManager::GetSendStatus, UDataStreamManager::SetSendStatus" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataStreamSendStatus::Send", (int64)EDataStreamSendStatus::Send },
		{ "EDataStreamSendStatus::Pause", (int64)EDataStreamSendStatus::Pause },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IrisCore_EDataStreamSendStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IrisCore,
	nullptr,
	"EDataStreamSendStatus",
	"EDataStreamSendStatus",
	Z_Construct_UEnum_IrisCore_EDataStreamSendStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IrisCore_EDataStreamSendStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IrisCore_EDataStreamSendStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IrisCore_EDataStreamSendStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IrisCore_EDataStreamSendStatus()
{
	if (!Z_Registration_Info_UEnum_EDataStreamSendStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataStreamSendStatus.InnerSingleton, Z_Construct_UEnum_IrisCore_EDataStreamSendStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataStreamSendStatus.InnerSingleton;
}
// End Enum EDataStreamSendStatus

// Begin Class UDataStream
void UDataStream::StaticRegisterNativesUDataStream()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataStream);
UClass* Z_Construct_UClass_UDataStream_NoRegister()
{
	return UDataStream::StaticClass();
}
struct Z_Construct_UClass_UDataStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * DataStream is an interface that facilitates implementing the replication of custom data, \n * such as bulky data or data with special delivery guarantees.\n */" },
		{ "IncludePath", "Iris/DataStream/DataStream.h" },
		{ "ModuleRelativePath", "Public/Iris/DataStream/DataStream.h" },
		{ "ToolTip", "DataStream is an interface that facilitates implementing the replication of custom data,\nsuch as bulky data or data with special delivery guarantees." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStream>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataStream_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStream_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataStream_Statics::ClassParams = {
	&UDataStream::StaticClass,
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
	0x000800A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataStream_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataStream_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataStream()
{
	if (!Z_Registration_Info_UClass_UDataStream.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataStream.OuterSingleton, Z_Construct_UClass_UDataStream_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataStream.OuterSingleton;
}
template<> IRISCORE_API UClass* StaticClass<UDataStream>()
{
	return UDataStream::StaticClass();
}
UDataStream::UDataStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStream);
// End Class UDataStream

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataStreamSendStatus_StaticEnum, TEXT("EDataStreamSendStatus"), &Z_Registration_Info_UEnum_EDataStreamSendStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1815584412U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataStream, UDataStream::StaticClass, TEXT("UDataStream"), &Z_Registration_Info_UClass_UDataStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataStream), 3419079725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_1207312602(TEXT("/Script/IrisCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
