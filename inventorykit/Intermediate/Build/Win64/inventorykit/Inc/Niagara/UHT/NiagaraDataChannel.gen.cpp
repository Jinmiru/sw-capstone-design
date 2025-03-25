// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataChannel.h"
#include "Niagara/Classes/NiagaraDataSetCompiledData.h"
#include "Niagara/Public/NiagaraDataChannelPublic.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelVariable();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataChannel
void UNiagaraDataChannel::StaticRegisterNativesUNiagaraDataChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannel);
UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister()
{
	return UNiagaraDataChannel::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "PrioritizeCategories", "Data Channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelVariables_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** The variables that define the data contained in this Data Channel. */" },
		{ "EnforceUniqueNames", "TRUE" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "The variables that define the data contained in this Data Channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepPreviousFrameData_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** If true, we keep our previous frame's data. This comes at a memory and performance cost but allows users to avoid tick order dependency by reading last frame's data. Some users will prefer a frame of latency to tick order dependency. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "If true, we keep our previous frame's data. This comes at a memory and performance cost but allows users to avoid tick order dependency by reading last frame's data. Some users will prefer a frame of latency to tick order dependency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceTickGroupReadWriteOrder_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** If true we ensure that all writes happen in or before the Tick Group specified in EndWriteTickGroup and that all reads happen in tick groups after this. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "If true we ensure that all writes happen in or before the Tick Group specified in EndWriteTickGroup and that all reads happen in tick groups after this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalWriteTickGroup_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** The final tick group that this data channel can be written to. */" },
		{ "EditCondition", "bEnforceTickGroupReadWriteOrder" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "The final tick group that this data channel can be written to." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[] = {
		{ "Comment", "/**\n\x09""Data layout for payloads in Niagara datasets.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Data layout for payloads in Niagara datasets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledDataGPU_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelVariables;
	static void NewProp_bKeepPreviousFrameData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPreviousFrameData;
	static void NewProp_bEnforceTickGroupReadWriteOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceTickGroupReadWriteOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinalWriteTickGroup;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VersionGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledDataGPU;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelVariables_Inner = { "ChannelVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraDataChannelVariable, METADATA_PARAMS(0, nullptr) }; // 72677008
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelVariables = { "ChannelVariables", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, ChannelVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelVariables_MetaData), NewProp_ChannelVariables_MetaData) }; // 72677008
void Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_SetBit(void* Obj)
{
	((UNiagaraDataChannel*)Obj)->bKeepPreviousFrameData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData = { "bKeepPreviousFrameData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataChannel), &Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepPreviousFrameData_MetaData), NewProp_bKeepPreviousFrameData_MetaData) };
void Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bEnforceTickGroupReadWriteOrder_SetBit(void* Obj)
{
	((UNiagaraDataChannel*)Obj)->bEnforceTickGroupReadWriteOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bEnforceTickGroupReadWriteOrder = { "bEnforceTickGroupReadWriteOrder", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataChannel), &Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bEnforceTickGroupReadWriteOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnforceTickGroupReadWriteOrder_MetaData), NewProp_bEnforceTickGroupReadWriteOrder_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_FinalWriteTickGroup = { "FinalWriteTickGroup", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, FinalWriteTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalWriteTickGroup_MetaData), NewProp_FinalWriteTickGroup_MetaData) }; // 3616902692
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_VersionGuid = { "VersionGuid", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, VersionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionGuid_MetaData), NewProp_VersionGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, Variables_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 2475164134
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, CompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledData_MetaData), NewProp_CompiledData_MetaData) }; // 3790253218
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU = { "CompiledDataGPU", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, CompiledDataGPU), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledDataGPU_MetaData), NewProp_CompiledDataGPU_MetaData) }; // 3790253218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bEnforceTickGroupReadWriteOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_FinalWriteTickGroup,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_VersionGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannel_Statics::ClassParams = {
	&UNiagaraDataChannel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannel()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannel>()
{
	return UNiagaraDataChannel::StaticClass();
}
UNiagaraDataChannel::UNiagaraDataChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannel);
UNiagaraDataChannel::~UNiagaraDataChannel() {}
// End Class UNiagaraDataChannel

// Begin Enum ENiagartaDataChannelReadResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagartaDataChannelReadResult;
static UEnum* ENiagartaDataChannelReadResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagartaDataChannelReadResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagartaDataChannelReadResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagartaDataChannelReadResult"));
	}
	return Z_Registration_Info_UEnum_ENiagartaDataChannelReadResult.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagartaDataChannelReadResult>()
{
	return ENiagartaDataChannelReadResult_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failure.Name", "ENiagartaDataChannelReadResult::Failure" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "Success.Name", "ENiagartaDataChannelReadResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagartaDataChannelReadResult::Success", (int64)ENiagartaDataChannelReadResult::Success },
		{ "ENiagartaDataChannelReadResult::Failure", (int64)ENiagartaDataChannelReadResult::Failure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagartaDataChannelReadResult",
	"ENiagartaDataChannelReadResult",
	Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult()
{
	if (!Z_Registration_Info_UEnum_ENiagartaDataChannelReadResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagartaDataChannelReadResult.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagartaDataChannelReadResult.InnerSingleton;
}
// End Enum ENiagartaDataChannelReadResult

// Begin Class UNiagaraDataChannelLibrary Function GetDataChannelElementCount
struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics
{
	struct NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms
	{
		const UObject* WorldContextObject;
		const UNiagaraDataChannelAsset* Channel;
		FNiagaraDataChannelSearchParameters SearchParams;
		bool bReadPreviousFrame;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SearchParams, bReadPreviousFrame" },
		{ "bReadPreviousFrame", "true" },
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/**\n\x09 * Returns the number of readable elements in the given data channel\n\x09 *\n\x09 * @param WorldContextObject\x09World to execute in\n\x09 * @param Channel\x09\x09\x09\x09The channel to read from\n\x09 * @param SearchParams\x09\x09\x09Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n\x09 * @param bReadPreviousFrame\x09True if this reader will read the previous frame's data. If false, we read the current frame.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.\n\x09 */" },
		{ "Keywords", "niagara DataChannel num size" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Returns the number of readable elements in the given data channel\n\n@param WorldContextObject    World to execute in\n@param Channel                               The channel to read from\n@param SearchParams                  Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n@param bReadPreviousFrame    True if this reader will read the previous frame's data. If false, we read the current frame.\n                                                             Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.\n                                                             Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
	static void NewProp_bReadPreviousFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadPreviousFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010048000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 133002555
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_bReadPreviousFrame_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms*)Obj)->bReadPreviousFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_bReadPreviousFrame = { "bReadPreviousFrame", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_bReadPreviousFrame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_SearchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_bReadPreviousFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "GetDataChannelElementCount", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::NiagaraDataChannelLibrary_eventGetDataChannelElementCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execGetDataChannelElementCount)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
	P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
	P_GET_UBOOL(Z_Param_bReadPreviousFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UNiagaraDataChannelLibrary::GetDataChannelElementCount(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_SearchParams,Z_Param_bReadPreviousFrame);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelLibrary Function GetDataChannelElementCount

// Begin Class UNiagaraDataChannelLibrary Function GetNiagaraDataChannel
struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics
{
	struct NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms
	{
		const UObject* WorldContextObject;
		const UNiagaraDataChannelAsset* Channel;
		UNiagaraDataChannelHandler* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "GetNiagaraDataChannel", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execGetNiagaraDataChannel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraDataChannelHandler**)Z_Param__Result=UNiagaraDataChannelLibrary::GetNiagaraDataChannel(Z_Param_WorldContextObject,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelLibrary Function GetNiagaraDataChannel

// Begin Class UNiagaraDataChannelLibrary Function ReadFromNiagaraDataChannel
struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics
{
	struct NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms
	{
		const UObject* WorldContextObject;
		const UNiagaraDataChannelAsset* Channel;
		FNiagaraDataChannelSearchParameters SearchParams;
		bool bReadPreviousFrame;
		UNiagaraDataChannelReader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SearchParams" },
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/**\n\x09 * Initializes and returns the Niagara Data Channel reader for the given data channel.\n\x09 *\n\x09 * @param WorldContextObject\x09World to execute in\n\x09 * @param Channel\x09\x09\x09\x09The channel to read from\n\x09 * @param SearchParams\x09\x09\x09Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n\x09 * @param bReadPreviousFrame\x09True if this reader will read the previous frame's data. If false, we read the current frame.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.\n\x09 */" },
		{ "DisplayName", "Read From Niagara Data Channel (Batch)" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Initializes and returns the Niagara Data Channel reader for the given data channel.\n\n@param WorldContextObject    World to execute in\n@param Channel                               The channel to read from\n@param SearchParams                  Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n@param bReadPreviousFrame    True if this reader will read the previous frame's data. If false, we read the current frame.\n                                                             Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.\n                                                             Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
	static void NewProp_bReadPreviousFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadPreviousFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010048000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 133002555
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_bReadPreviousFrame_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms*)Obj)->bReadPreviousFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_bReadPreviousFrame = { "bReadPreviousFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_bReadPreviousFrame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_SearchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_bReadPreviousFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "ReadFromNiagaraDataChannel", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
	P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
	P_GET_UBOOL(Z_Param_bReadPreviousFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraDataChannelReader**)Z_Param__Result=UNiagaraDataChannelLibrary::ReadFromNiagaraDataChannel(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_SearchParams,Z_Param_bReadPreviousFrame);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelLibrary Function ReadFromNiagaraDataChannel

// Begin Class UNiagaraDataChannelLibrary Function ReadFromNiagaraDataChannelSingle
struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics
{
	struct NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms
	{
		const UObject* WorldContextObject;
		const UNiagaraDataChannelAsset* Channel;
		int32 Index;
		FNiagaraDataChannelSearchParameters SearchParams;
		bool bReadPreviousFrame;
		ENiagartaDataChannelReadResult ReadResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SearchParams, bReadPreviousFrame" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "bReadPreviousFrame", "true" },
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/**\n\x09 * Reads a single entry from the given data channel, if possible.\n\x09 *\n\x09 * @param WorldContextObject\x09World to execute in\n\x09 * @param Channel\x09\x09\x09\x09The channel to read from\n\x09 * @param Index\x09\x09\x09\x09\x09The data index to read from\n\x09 * @param SearchParams\x09\x09\x09Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n\x09 * @param bReadPreviousFrame\x09True if this reader will read the previous frame's data. If false, we read the current frame.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.\n\x09 * @param ReadResult\x09\x09\x09Used by Blueprint for the return value\n\x09 */" },
		{ "DisplayName", "Read From Niagara Data Channel" },
		{ "ExpandEnumAsExecs", "ReadResult" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Reads a single entry from the given data channel, if possible.\n\n@param WorldContextObject    World to execute in\n@param Channel                               The channel to read from\n@param Index                                 The data index to read from\n@param SearchParams                  Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n@param bReadPreviousFrame    True if this reader will read the previous frame's data. If false, we read the current frame.\n                                                             Reading the current frame allows for zero latency reads, but any data elements that are generated after this reader is used are missed.\n                                                             Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.\n@param ReadResult                    Used by Blueprint for the return value" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
	static void NewProp_bReadPreviousFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadPreviousFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReadResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReadResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010048000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 133002555
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_bReadPreviousFrame_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms*)Obj)->bReadPreviousFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_bReadPreviousFrame = { "bReadPreviousFrame", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_bReadPreviousFrame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_ReadResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_ReadResult = { "ReadResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms, ReadResult), Z_Construct_UEnum_Niagara_ENiagartaDataChannelReadResult, METADATA_PARAMS(0, nullptr) }; // 1143536023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_SearchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_bReadPreviousFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_ReadResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NewProp_ReadResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "ReadFromNiagaraDataChannelSingle", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannelSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannelSingle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
	P_GET_UBOOL(Z_Param_bReadPreviousFrame);
	P_GET_ENUM_REF(ENiagartaDataChannelReadResult,Z_Param_Out_ReadResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNiagaraDataChannelLibrary::ReadFromNiagaraDataChannelSingle(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_Index,Z_Param_SearchParams,Z_Param_bReadPreviousFrame,(ENiagartaDataChannelReadResult&)(Z_Param_Out_ReadResult));
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelLibrary Function ReadFromNiagaraDataChannelSingle

// Begin Class UNiagaraDataChannelLibrary Function WriteToNiagaraDataChannel
struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics
{
	struct NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms
	{
		const UObject* WorldContextObject;
		const UNiagaraDataChannelAsset* Channel;
		FNiagaraDataChannelSearchParameters SearchParams;
		int32 Count;
		bool bVisibleToGame;
		bool bVisibleToCPU;
		bool bVisibleToGPU;
		FString DebugSource;
		UNiagaraDataChannelWriter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "SearchParams, DebugSource" },
		{ "AutoCreateRefTerm", "DebugSource" },
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/**\n\x09 * Initializes and returns the Niagara Data Channel writer to write N elements to the given data channel.\n\x09 *\n\x09 * @param WorldContextObject\x09World to execute in\n\x09 * @param Channel\x09\x09\x09\x09The channel to write to\n\x09 * @param SearchParams\x09\x09\x09Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n\x09 * @param Count\x09\x09\x09\x09\x09The number of elements to write \n\x09 * @param bVisibleToGame\x09If true, the data written to this data channel is visible to Blueprint and C++ logic reading from it\n\x09 * @param bVisibleToCPU\x09If true, the data written to this data channel is visible to Niagara CPU emitters\n\x09 * @param bVisibleToGPU\x09If true, the data written to this data channel is visible to Niagara GPU emitters\n\x09 * @param DebugSource\x09Instigator for this write, used in the debug hud to track writes to the data channel from different sources\n\x09 */" },
		{ "DisplayName", "Write To Niagara Data Channel (Batch)" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Initializes and returns the Niagara Data Channel writer to write N elements to the given data channel.\n\n@param WorldContextObject    World to execute in\n@param Channel                               The channel to write to\n@param SearchParams                  Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n@param Count                                 The number of elements to write\n@param bVisibleToGame        If true, the data written to this data channel is visible to Blueprint and C++ logic reading from it\n@param bVisibleToCPU If true, the data written to this data channel is visible to Niagara CPU emitters\n@param bVisibleToGPU If true, the data written to this data channel is visible to Niagara GPU emitters\n@param DebugSource   Instigator for this write, used in the debug hud to track writes to the data channel from different sources" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleToGame_MetaData[] = {
		{ "DisplayName", "Visible to Blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleToCPU_MetaData[] = {
		{ "DisplayName", "Visible to Niagara CPU" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleToGPU_MetaData[] = {
		{ "DisplayName", "Visible to Niagara GPU" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_bVisibleToGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGame;
	static void NewProp_bVisibleToCPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToCPU;
	static void NewProp_bVisibleToGPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGPU;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010048000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 133002555
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGame_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms*)Obj)->bVisibleToGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGame = { "bVisibleToGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleToGame_MetaData), NewProp_bVisibleToGame_MetaData) };
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToCPU_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms*)Obj)->bVisibleToCPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToCPU = { "bVisibleToCPU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToCPU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleToCPU_MetaData), NewProp_bVisibleToCPU_MetaData) };
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGPU_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms*)Obj)->bVisibleToGPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGPU = { "bVisibleToGPU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGPU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleToGPU_MetaData), NewProp_bVisibleToGPU_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_DebugSource = { "DebugSource", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, DebugSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSource_MetaData), NewProp_DebugSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_SearchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToCPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_DebugSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "WriteToNiagaraDataChannel", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
	P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_GET_UBOOL(Z_Param_bVisibleToGame);
	P_GET_UBOOL(Z_Param_bVisibleToCPU);
	P_GET_UBOOL(Z_Param_bVisibleToGPU);
	P_GET_PROPERTY(FStrProperty,Z_Param_DebugSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraDataChannelWriter**)Z_Param__Result=UNiagaraDataChannelLibrary::WriteToNiagaraDataChannel(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_SearchParams,Z_Param_Count,Z_Param_bVisibleToGame,Z_Param_bVisibleToCPU,Z_Param_bVisibleToGPU,Z_Param_DebugSource);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelLibrary Function WriteToNiagaraDataChannel

// Begin Class UNiagaraDataChannelLibrary Function WriteToNiagaraDataChannelSingle
struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics
{
	struct NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms
	{
		const UObject* WorldContextObject;
		const UNiagaraDataChannelAsset* Channel;
		FNiagaraDataChannelSearchParameters SearchParams;
		bool bVisibleToBlueprint;
		bool bVisibleToNiagaraCPU;
		bool bVisibleToNiagaraGPU;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bVisibleToBlueprint, bVisibleToNiagaraCPU, bVisibleToNiagaraGPU, SearchParams" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "bVisibleToBlueprint", "true" },
		{ "bVisibleToNiagaraCPU", "true" },
		{ "bVisibleToNiagaraGPU", "true" },
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/**\n\x09 * Writes a single element to a Niagara Data Channel. The element won't be immediately visible to readers, as it needs to be processed first. The earliest point it can be read is in the next tick group.\n\x09 *\n\x09 * @param WorldContextObject\x09World to execute in\n\x09 * @param Channel\x09\x09\x09\x09The channel to write to\n\x09 * @param SearchParams\x09\x09\x09Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n\x09 * @param bVisibleToBlueprint\x09If true, the data written to this data channel is visible to Blueprint and C++ logic reading from it\n\x09 * @param bVisibleToNiagaraCPU\x09If true, the data written to this data channel is visible to Niagara CPU emitters\n\x09 * @param bVisibleToNiagaraGPU\x09If true, the data written to this data channel is visible to Niagara GPU emitters\n\x09 */" },
		{ "DisplayName", "Write To Niagara Data Channel" },
		{ "Keywords", "niagara DataChannel event writer" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Writes a single element to a Niagara Data Channel. The element won't be immediately visible to readers, as it needs to be processed first. The earliest point it can be read is in the next tick group.\n\n@param WorldContextObject    World to execute in\n@param Channel                               The channel to write to\n@param SearchParams                  Parameters used when retrieving a specific set of Data Channel Data to read or write like the islands data channel type.\n@param bVisibleToBlueprint   If true, the data written to this data channel is visible to Blueprint and C++ logic reading from it\n@param bVisibleToNiagaraCPU  If true, the data written to this data channel is visible to Niagara CPU emitters\n@param bVisibleToNiagaraGPU  If true, the data written to this data channel is visible to Niagara GPU emitters" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
	static void NewProp_bVisibleToBlueprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToBlueprint;
	static void NewProp_bVisibleToNiagaraCPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToNiagaraCPU;
	static void NewProp_bVisibleToNiagaraGPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToNiagaraGPU;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010048000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 133002555
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToBlueprint_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms*)Obj)->bVisibleToBlueprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToBlueprint = { "bVisibleToBlueprint", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToBlueprint_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToNiagaraCPU_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms*)Obj)->bVisibleToNiagaraCPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToNiagaraCPU = { "bVisibleToNiagaraCPU", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToNiagaraCPU_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToNiagaraGPU_SetBit(void* Obj)
{
	((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms*)Obj)->bVisibleToNiagaraGPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToNiagaraGPU = { "bVisibleToNiagaraGPU", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToNiagaraGPU_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_SearchParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToNiagaraCPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NewProp_bVisibleToNiagaraGPU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "WriteToNiagaraDataChannelSingle", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannelSingle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannelSingle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
	P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
	P_GET_UBOOL(Z_Param_bVisibleToBlueprint);
	P_GET_UBOOL(Z_Param_bVisibleToNiagaraCPU);
	P_GET_UBOOL(Z_Param_bVisibleToNiagaraGPU);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNiagaraDataChannelLibrary::WriteToNiagaraDataChannelSingle(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_SearchParams,Z_Param_bVisibleToBlueprint,Z_Param_bVisibleToNiagaraCPU,Z_Param_bVisibleToNiagaraGPU);
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelLibrary Function WriteToNiagaraDataChannelSingle

// Begin Class UNiagaraDataChannelLibrary
void UNiagaraDataChannelLibrary::StaticRegisterNativesUNiagaraDataChannelLibrary()
{
	UClass* Class = UNiagaraDataChannelLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataChannelElementCount", &UNiagaraDataChannelLibrary::execGetDataChannelElementCount },
		{ "GetNiagaraDataChannel", &UNiagaraDataChannelLibrary::execGetNiagaraDataChannel },
		{ "ReadFromNiagaraDataChannel", &UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannel },
		{ "ReadFromNiagaraDataChannelSingle", &UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannelSingle },
		{ "WriteToNiagaraDataChannel", &UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannel },
		{ "WriteToNiagaraDataChannelSingle", &UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannelSingle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelLibrary);
UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister()
{
	return UNiagaraDataChannelLibrary::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A C++ and Blueprint accessible library of utility functions for accessing Niagara DataChannel\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "A C++ and Blueprint accessible library of utility functions for accessing Niagara DataChannel" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetDataChannelElementCount, "GetDataChannelElementCount" }, // 1418842168
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel, "GetNiagaraDataChannel" }, // 2135631192
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel, "ReadFromNiagaraDataChannel" }, // 2394053589
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannelSingle, "ReadFromNiagaraDataChannelSingle" }, // 583162256
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel, "WriteToNiagaraDataChannel" }, // 2447366944
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannelSingle, "WriteToNiagaraDataChannelSingle" }, // 4066731036
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::ClassParams = {
	&UNiagaraDataChannelLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelLibrary>()
{
	return UNiagaraDataChannelLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelLibrary);
UNiagaraDataChannelLibrary::~UNiagaraDataChannelLibrary() {}
// End Class UNiagaraDataChannelLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagartaDataChannelReadResult_StaticEnum, TEXT("ENiagartaDataChannelReadResult"), &Z_Registration_Info_UEnum_ENiagartaDataChannelReadResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1143536023U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannel, UNiagaraDataChannel::StaticClass, TEXT("UNiagaraDataChannel"), &Z_Registration_Info_UClass_UNiagaraDataChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannel), 579520402U) },
		{ Z_Construct_UClass_UNiagaraDataChannelLibrary, UNiagaraDataChannelLibrary::StaticClass, TEXT("UNiagaraDataChannelLibrary"), &Z_Registration_Info_UClass_UNiagaraDataChannelLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelLibrary), 3503141371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_2481893063(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
