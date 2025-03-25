// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundOperatorCacheSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundOperatorCacheSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioEngineSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundCacheSubsystem();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundCacheSubsystem_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Class UMetaSoundCacheSubsystem Function PrecacheMetaSound
struct Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics
{
	struct MetaSoundCacheSubsystem_eventPrecacheMetaSound_Parms
	{
		UMetaSoundSource* InMetaSound;
		int32 InNumInstances;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSound" },
		{ "Comment", "/* Builds the requested number of MetaSound operators (asynchronously) and puts them in the pool for playback.\n\x09(If these operators are not yet available when the MetaSound attempts to play, one will be created Independent of this request.) */" },
		{ "CPP_Default_InNumInstances", "1" },
		{ "DisplayName", "Precache MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundOperatorCacheSubsystem.h" },
		{ "ToolTip", "Builds the requested number of MetaSound operators (asynchronously) and puts them in the pool for playback.\n      (If these operators are not yet available when the MetaSound attempts to play, one will be created Independent of this request.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMetaSound_MetaData[] = {
		{ "DisplayName", "MetaSound Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNumInstances_MetaData[] = {
		{ "DisplayName", "Num Instances" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetaSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::NewProp_InMetaSound = { "InMetaSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundCacheSubsystem_eventPrecacheMetaSound_Parms, InMetaSound), Z_Construct_UClass_UMetaSoundSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMetaSound_MetaData), NewProp_InMetaSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::NewProp_InNumInstances = { "InNumInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundCacheSubsystem_eventPrecacheMetaSound_Parms, InNumInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNumInstances_MetaData), NewProp_InNumInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::NewProp_InMetaSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::NewProp_InNumInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundCacheSubsystem, nullptr, "PrecacheMetaSound", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::MetaSoundCacheSubsystem_eventPrecacheMetaSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::MetaSoundCacheSubsystem_eventPrecacheMetaSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundCacheSubsystem::execPrecacheMetaSound)
{
	P_GET_OBJECT(UMetaSoundSource,Z_Param_InMetaSound);
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumInstances);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrecacheMetaSound(Z_Param_InMetaSound,Z_Param_InNumInstances);
	P_NATIVE_END;
}
// End Class UMetaSoundCacheSubsystem Function PrecacheMetaSound

// Begin Class UMetaSoundCacheSubsystem Function RemoveCachedOperatorsForMetaSound
struct Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics
{
	struct MetaSoundCacheSubsystem_eventRemoveCachedOperatorsForMetaSound_Parms
	{
		UMetaSoundSource* InMetaSound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSound" },
		{ "Comment", "/* Clear the operator pool of any operators associated with the given MetaSound */" },
		{ "DisplayName", "RemoveCached Operators for MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundOperatorCacheSubsystem.h" },
		{ "ToolTip", "Clear the operator pool of any operators associated with the given MetaSound" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMetaSound_MetaData[] = {
		{ "DisplayName", "MetaSound Source" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetaSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::NewProp_InMetaSound = { "InMetaSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundCacheSubsystem_eventRemoveCachedOperatorsForMetaSound_Parms, InMetaSound), Z_Construct_UClass_UMetaSoundSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMetaSound_MetaData), NewProp_InMetaSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::NewProp_InMetaSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundCacheSubsystem, nullptr, "RemoveCachedOperatorsForMetaSound", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::MetaSoundCacheSubsystem_eventRemoveCachedOperatorsForMetaSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::MetaSoundCacheSubsystem_eventRemoveCachedOperatorsForMetaSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundCacheSubsystem::execRemoveCachedOperatorsForMetaSound)
{
	P_GET_OBJECT(UMetaSoundSource,Z_Param_InMetaSound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCachedOperatorsForMetaSound(Z_Param_InMetaSound);
	P_NATIVE_END;
}
// End Class UMetaSoundCacheSubsystem Function RemoveCachedOperatorsForMetaSound

// Begin Class UMetaSoundCacheSubsystem Function TouchOrPrecacheMetaSound
struct Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics
{
	struct MetaSoundCacheSubsystem_eventTouchOrPrecacheMetaSound_Parms
	{
		UMetaSoundSource* InMetaSound;
		int32 InNumInstances;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MetaSound" },
		{ "Comment", "/* same as PrecacheMetaSound except cached operator that already exists in the cache will be moved to the top instead of building,\n\x09""any operators that we couldn't move to the top, will be built.\n\x09(i.e. if 2 operators are already cached and Num Instances is 4, it will construct 2 and move the existing 2 to the top of the cache) */" },
		{ "CPP_Default_InNumInstances", "1" },
		{ "DisplayName", "Touch or Precache MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundOperatorCacheSubsystem.h" },
		{ "ToolTip", "same as PrecacheMetaSound except cached operator that already exists in the cache will be moved to the top instead of building,\n      any operators that we couldn't move to the top, will be built.\n      (i.e. if 2 operators are already cached and Num Instances is 4, it will construct 2 and move the existing 2 to the top of the cache)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMetaSound_MetaData[] = {
		{ "DisplayName", "MetaSound Source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNumInstances_MetaData[] = {
		{ "DisplayName", "Num Instances" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetaSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InNumInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::NewProp_InMetaSound = { "InMetaSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundCacheSubsystem_eventTouchOrPrecacheMetaSound_Parms, InMetaSound), Z_Construct_UClass_UMetaSoundSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMetaSound_MetaData), NewProp_InMetaSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::NewProp_InNumInstances = { "InNumInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundCacheSubsystem_eventTouchOrPrecacheMetaSound_Parms, InNumInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNumInstances_MetaData), NewProp_InNumInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::NewProp_InMetaSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::NewProp_InNumInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundCacheSubsystem, nullptr, "TouchOrPrecacheMetaSound", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::MetaSoundCacheSubsystem_eventTouchOrPrecacheMetaSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::MetaSoundCacheSubsystem_eventTouchOrPrecacheMetaSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundCacheSubsystem::execTouchOrPrecacheMetaSound)
{
	P_GET_OBJECT(UMetaSoundSource,Z_Param_InMetaSound);
	P_GET_PROPERTY(FIntProperty,Z_Param_InNumInstances);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TouchOrPrecacheMetaSound(Z_Param_InMetaSound,Z_Param_InNumInstances);
	P_NATIVE_END;
}
// End Class UMetaSoundCacheSubsystem Function TouchOrPrecacheMetaSound

// Begin Class UMetaSoundCacheSubsystem
void UMetaSoundCacheSubsystem::StaticRegisterNativesUMetaSoundCacheSubsystem()
{
	UClass* Class = UMetaSoundCacheSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PrecacheMetaSound", &UMetaSoundCacheSubsystem::execPrecacheMetaSound },
		{ "RemoveCachedOperatorsForMetaSound", &UMetaSoundCacheSubsystem::execRemoveCachedOperatorsForMetaSound },
		{ "TouchOrPrecacheMetaSound", &UMetaSoundCacheSubsystem::execTouchOrPrecacheMetaSound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundCacheSubsystem);
UClass* Z_Construct_UClass_UMetaSoundCacheSubsystem_NoRegister()
{
	return UMetaSoundCacheSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* \x09UMetaSoundCacheSubsystem\n*/" },
		{ "IncludePath", "MetasoundOperatorCacheSubsystem.h" },
		{ "ModuleRelativePath", "Public/MetasoundOperatorCacheSubsystem.h" },
		{ "ToolTip", "UMetaSoundCacheSubsystem" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundCacheSubsystem_PrecacheMetaSound, "PrecacheMetaSound" }, // 1580215007
		{ &Z_Construct_UFunction_UMetaSoundCacheSubsystem_RemoveCachedOperatorsForMetaSound, "RemoveCachedOperatorsForMetaSound" }, // 3287719384
		{ &Z_Construct_UFunction_UMetaSoundCacheSubsystem_TouchOrPrecacheMetaSound, "TouchOrPrecacheMetaSound" }, // 828478144
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundCacheSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics::ClassParams = {
	&UMetaSoundCacheSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundCacheSubsystem()
{
	if (!Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.OuterSingleton, Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundCacheSubsystem>()
{
	return UMetaSoundCacheSubsystem::StaticClass();
}
UMetaSoundCacheSubsystem::UMetaSoundCacheSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundCacheSubsystem);
UMetaSoundCacheSubsystem::~UMetaSoundCacheSubsystem() {}
// End Class UMetaSoundCacheSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundCacheSubsystem, UMetaSoundCacheSubsystem::StaticClass, TEXT("UMetaSoundCacheSubsystem"), &Z_Registration_Info_UClass_UMetaSoundCacheSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundCacheSubsystem), 15743224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_3706307968(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
