// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateRHIRenderer/Public/FX/SlateFXSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateFXSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlatePostRT();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateFXSubsystem();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateFXSubsystem_NoRegister();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlateRHIRenderer();
// End Cross Module References

// Begin Class USlateFXSubsystem Function GetSlatePostProcessor
struct Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics
{
	struct SlateFXSubsystem_eventGetSlatePostProcessor_Parms
	{
		ESlatePostRT InPostBufferBit;
		USlateRHIPostBufferProcessor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SlateFX" },
		{ "Comment", "/** Get post processor for a particular post buffer index, if it exists */" },
		{ "ModuleRelativePath", "Public/FX/SlateFXSubsystem.h" },
		{ "ToolTip", "Get post processor for a particular post buffer index, if it exists" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InPostBufferBit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InPostBufferBit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::NewProp_InPostBufferBit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::NewProp_InPostBufferBit = { "InPostBufferBit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateFXSubsystem_eventGetSlatePostProcessor_Parms, InPostBufferBit), Z_Construct_UEnum_SlateCore_ESlatePostRT, METADATA_PARAMS(0, nullptr) }; // 968732184
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateFXSubsystem_eventGetSlatePostProcessor_Parms, ReturnValue), Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::NewProp_InPostBufferBit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::NewProp_InPostBufferBit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateFXSubsystem, nullptr, "GetSlatePostProcessor", nullptr, nullptr, Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::SlateFXSubsystem_eventGetSlatePostProcessor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::SlateFXSubsystem_eventGetSlatePostProcessor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USlateFXSubsystem::execGetSlatePostProcessor)
{
	P_GET_ENUM(ESlatePostRT,Z_Param_InPostBufferBit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USlateRHIPostBufferProcessor**)Z_Param__Result=P_THIS->GetSlatePostProcessor(ESlatePostRT(Z_Param_InPostBufferBit));
	P_NATIVE_END;
}
// End Class USlateFXSubsystem Function GetSlatePostProcessor

// Begin Class USlateFXSubsystem
void USlateFXSubsystem::StaticRegisterNativesUSlateFXSubsystem()
{
	UClass* Class = USlateFXSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSlatePostProcessor", &USlateFXSubsystem::execGetSlatePostProcessor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateFXSubsystem);
UClass* Z_Construct_UClass_USlateFXSubsystem_NoRegister()
{
	return USlateFXSubsystem::StaticClass();
}
struct Z_Construct_UClass_USlateFXSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Slate FX Subsystem" },
		{ "IncludePath", "FX/SlateFXSubsystem.h" },
		{ "ModuleRelativePath", "Public/FX/SlateFXSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlatePostBufferProcessors_MetaData[] = {
		{ "Comment", "/** Map of post RT buffer index to buffer processors, if they exist */" },
		{ "ModuleRelativePath", "Public/FX/SlateFXSubsystem.h" },
		{ "ToolTip", "Map of post RT buffer index to buffer processors, if they exist" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlatePostBufferProcessors_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SlatePostBufferProcessors_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SlatePostBufferProcessors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SlatePostBufferProcessors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USlateFXSubsystem_GetSlatePostProcessor, "GetSlatePostProcessor" }, // 1499202180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateFXSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateFXSubsystem_Statics::NewProp_SlatePostBufferProcessors_ValueProp = { "SlatePostBufferProcessors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlateFXSubsystem_Statics::NewProp_SlatePostBufferProcessors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlateFXSubsystem_Statics::NewProp_SlatePostBufferProcessors_Key_KeyProp = { "SlatePostBufferProcessors_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SlateCore_ESlatePostRT, METADATA_PARAMS(0, nullptr) }; // 968732184
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USlateFXSubsystem_Statics::NewProp_SlatePostBufferProcessors = { "SlatePostBufferProcessors", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateFXSubsystem, SlatePostBufferProcessors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlatePostBufferProcessors_MetaData), NewProp_SlatePostBufferProcessors_MetaData) }; // 968732184
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateFXSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateFXSubsystem_Statics::NewProp_SlatePostBufferProcessors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateFXSubsystem_Statics::NewProp_SlatePostBufferProcessors_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateFXSubsystem_Statics::NewProp_SlatePostBufferProcessors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateFXSubsystem_Statics::NewProp_SlatePostBufferProcessors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateFXSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlateFXSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateRHIRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateFXSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateFXSubsystem_Statics::ClassParams = {
	&USlateFXSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USlateFXSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USlateFXSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateFXSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateFXSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateFXSubsystem()
{
	if (!Z_Registration_Info_UClass_USlateFXSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateFXSubsystem.OuterSingleton, Z_Construct_UClass_USlateFXSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateFXSubsystem.OuterSingleton;
}
template<> SLATERHIRENDERER_API UClass* StaticClass<USlateFXSubsystem>()
{
	return USlateFXSubsystem::StaticClass();
}
USlateFXSubsystem::USlateFXSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateFXSubsystem);
USlateFXSubsystem::~USlateFXSubsystem() {}
// End Class USlateFXSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateFXSubsystem, USlateFXSubsystem::StaticClass, TEXT("USlateFXSubsystem"), &Z_Registration_Info_UClass_USlateFXSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateFXSubsystem), 4181609362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_2820284508(TEXT("/Script/SlateRHIRenderer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateFXSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
