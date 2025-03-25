// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataChannelHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataChannelHandler Function GetDataChannelReader
struct Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics
{
	struct NiagaraDataChannelHandler_eventGetDataChannelReader_Parms
	{
		UNiagaraDataChannelReader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Channel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelHandler_eventGetDataChannelReader_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelHandler, nullptr, "GetDataChannelReader", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::NiagaraDataChannelHandler_eventGetDataChannelReader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::NiagaraDataChannelHandler_eventGetDataChannelReader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelHandler::execGetDataChannelReader)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraDataChannelReader**)Z_Param__Result=P_THIS->GetDataChannelReader();
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelHandler Function GetDataChannelReader

// Begin Class UNiagaraDataChannelHandler Function GetDataChannelWriter
struct Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics
{
	struct NiagaraDataChannelHandler_eventGetDataChannelWriter_Parms
	{
		UNiagaraDataChannelWriter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Channel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelHandler_eventGetDataChannelWriter_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelHandler, nullptr, "GetDataChannelWriter", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::NiagaraDataChannelHandler_eventGetDataChannelWriter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::NiagaraDataChannelHandler_eventGetDataChannelWriter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraDataChannelHandler::execGetDataChannelWriter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraDataChannelWriter**)Z_Param__Result=P_THIS->GetDataChannelWriter();
	P_NATIVE_END;
}
// End Class UNiagaraDataChannelHandler Function GetDataChannelWriter

// Begin Class UNiagaraDataChannelHandler
void UNiagaraDataChannelHandler::StaticRegisterNativesUNiagaraDataChannelHandler()
{
	UClass* Class = UNiagaraDataChannelHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataChannelReader", &UNiagaraDataChannelHandler::execGetDataChannelReader },
		{ "GetDataChannelWriter", &UNiagaraDataChannelHandler::execGetDataChannelWriter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelHandler);
UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister()
{
	return UNiagaraDataChannelHandler::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataChannelHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannelHandler.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Writer_MetaData[] = {
		{ "Comment", "/** Helper object allowing BP to write data in this channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
		{ "ToolTip", "Helper object allowing BP to write data in this channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reader_MetaData[] = {
		{ "Comment", "/** Helper object allowing BP to read data in this channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
		{ "ToolTip", "Helper object allowing BP to read data in this channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DataChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Writer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Reader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader, "GetDataChannelReader" }, // 2673708534
		{ &Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter, "GetDataChannelWriter" }, // 2875679361
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_DataChannel = { "DataChannel", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler, DataChannel), Z_Construct_UClass_UNiagaraDataChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataChannel_MetaData), NewProp_DataChannel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Writer = { "Writer", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler, Writer), Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Writer_MetaData), NewProp_Writer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Reader = { "Reader", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler, Reader), Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reader_MetaData), NewProp_Reader_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_DataChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Writer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Reader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::ClassParams = {
	&UNiagaraDataChannelHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataChannelHandler()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataChannelHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelHandler.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataChannelHandler.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelHandler>()
{
	return UNiagaraDataChannelHandler::StaticClass();
}
UNiagaraDataChannelHandler::UNiagaraDataChannelHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelHandler);
// End Class UNiagaraDataChannelHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelHandler, UNiagaraDataChannelHandler::StaticClass, TEXT("UNiagaraDataChannelHandler"), &Z_Registration_Info_UClass_UNiagaraDataChannelHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelHandler), 3232820052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_1153914717(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
