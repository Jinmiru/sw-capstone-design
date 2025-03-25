// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/NetPushModelHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetPushModelHelpers() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UNetPushModelHelpers();
ENGINE_API UClass* Z_Construct_UClass_UNetPushModelHelpers_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UNetPushModelHelpers Function MarkPropertyDirty
struct Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics
{
	struct NetPushModelHelpers_eventMarkPropertyDirty_Parms
	{
		UObject* Object;
		FName PropertyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "/** Mark replicated property as dirty with the Push Model networking system */" },
		{ "ModuleRelativePath", "Public/Net/NetPushModelHelpers.h" },
		{ "ToolTip", "Mark replicated property as dirty with the Push Model networking system" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirty_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetPushModelHelpers, nullptr, "MarkPropertyDirty", nullptr, nullptr, Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NetPushModelHelpers_eventMarkPropertyDirty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::NetPushModelHelpers_eventMarkPropertyDirty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetPushModelHelpers::execMarkPropertyDirty)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNetPushModelHelpers::MarkPropertyDirty(Z_Param_Object,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UNetPushModelHelpers Function MarkPropertyDirty

// Begin Class UNetPushModelHelpers Function MarkPropertyDirtyFromRepIndex
struct Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics
{
	struct NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms
	{
		UObject* Object;
		int32 RepIndex;
		FName PropertyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Networking" },
		{ "HidePin", "Object|RepIndex|PropertyName" },
		{ "ModuleRelativePath", "Public/Net/NetPushModelHelpers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RepIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_RepIndex = { "RepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms, RepIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_RepIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetPushModelHelpers, nullptr, "MarkPropertyDirtyFromRepIndex", nullptr, nullptr, Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::NetPushModelHelpers_eventMarkPropertyDirtyFromRepIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetPushModelHelpers::execMarkPropertyDirtyFromRepIndex)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FIntProperty,Z_Param_RepIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(Z_Param_Object,Z_Param_RepIndex,Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UNetPushModelHelpers Function MarkPropertyDirtyFromRepIndex

// Begin Class UNetPushModelHelpers
void UNetPushModelHelpers::StaticRegisterNativesUNetPushModelHelpers()
{
	UClass* Class = UNetPushModelHelpers::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MarkPropertyDirty", &UNetPushModelHelpers::execMarkPropertyDirty },
		{ "MarkPropertyDirtyFromRepIndex", &UNetPushModelHelpers::execMarkPropertyDirtyFromRepIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetPushModelHelpers);
UClass* Z_Construct_UClass_UNetPushModelHelpers_NoRegister()
{
	return UNetPushModelHelpers::StaticClass();
}
struct Z_Construct_UClass_UNetPushModelHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Net/NetPushModelHelpers.h" },
		{ "ModuleRelativePath", "Public/Net/NetPushModelHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirty, "MarkPropertyDirty" }, // 2000816768
		{ &Z_Construct_UFunction_UNetPushModelHelpers_MarkPropertyDirtyFromRepIndex, "MarkPropertyDirtyFromRepIndex" }, // 3787761341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetPushModelHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNetPushModelHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetPushModelHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetPushModelHelpers_Statics::ClassParams = {
	&UNetPushModelHelpers::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetPushModelHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetPushModelHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetPushModelHelpers()
{
	if (!Z_Registration_Info_UClass_UNetPushModelHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetPushModelHelpers.OuterSingleton, Z_Construct_UClass_UNetPushModelHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetPushModelHelpers.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetPushModelHelpers>()
{
	return UNetPushModelHelpers::StaticClass();
}
UNetPushModelHelpers::UNetPushModelHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetPushModelHelpers);
UNetPushModelHelpers::~UNetPushModelHelpers() {}
// End Class UNetPushModelHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetPushModelHelpers, UNetPushModelHelpers::StaticClass, TEXT("UNetPushModelHelpers"), &Z_Registration_Info_UClass_UNetPushModelHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetPushModelHelpers), 336983939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_1081426208(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
