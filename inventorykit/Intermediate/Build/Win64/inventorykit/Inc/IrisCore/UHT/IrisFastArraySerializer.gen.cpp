// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Iris/Core/Public/Iris/ReplicationState/IrisFastArraySerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIrisFastArraySerializer() {}

// Begin Cross Module References
IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIrisFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

// Begin ScriptStruct FIrisFastArraySerializer
static_assert(std::is_polymorphic<FIrisFastArraySerializer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FIrisFastArraySerializer cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IrisFastArraySerializer;
class UScriptStruct* FIrisFastArraySerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIrisFastArraySerializer, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("IrisFastArraySerializer"));
	}
	return Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FIrisFastArraySerializer>()
{
	return FIrisFastArraySerializer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialization of FFastArraySerializer in order to add state tracking support for Iris\n * Current usage is to inherit from this struct instead of FFastArraySerializer, backwards compatible with existing system as it simply forwards calls to MarkDirty/MarkItemDirty\n * This class could be named FFastArrayReplicationState, but kept the FIrisFastArraySerializer to match old naming for the time being\n */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/IrisFastArraySerializer.h" },
		{ "ToolTip", "Specialization of FFastArraySerializer in order to add state tracking support for Iris\nCurrent usage is to inherit from this struct instead of FFastArraySerializer, backwards compatible with existing system as it simply forwards calls to MarkDirty/MarkItemDirty\nThis class could be named FFastArrayReplicationState, but kept the FIrisFastArraySerializer to match old naming for the time being" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeMaskStorage_MetaData[] = {
		{ "Comment", "// Storage for changemask, this is currently hardcoded\n" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/IrisFastArraySerializer.h" },
		{ "ToolTip", "Storage for changemask, this is currently hardcoded" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChangeMaskStorage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIrisFastArraySerializer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewProp_ChangeMaskStorage = { "ChangeMaskStorage", nullptr, (EPropertyFlags)0x0040000080002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ChangeMaskStorage, FIrisFastArraySerializer), STRUCT_OFFSET(FIrisFastArraySerializer, ChangeMaskStorage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeMaskStorage_MetaData), NewProp_ChangeMaskStorage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewProp_ChangeMaskStorage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"IrisFastArraySerializer",
	Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::PropPointers),
	sizeof(FIrisFastArraySerializer),
	alignof(FIrisFastArraySerializer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIrisFastArraySerializer()
{
	if (!Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.InnerSingleton, Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.InnerSingleton;
}
// End ScriptStruct FIrisFastArraySerializer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIrisFastArraySerializer::StaticStruct, Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewStructOps, TEXT("IrisFastArraySerializer"), &Z_Registration_Info_UScriptStruct_IrisFastArraySerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIrisFastArraySerializer), 2426700834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_2605536162(TEXT("/Script/IrisCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
