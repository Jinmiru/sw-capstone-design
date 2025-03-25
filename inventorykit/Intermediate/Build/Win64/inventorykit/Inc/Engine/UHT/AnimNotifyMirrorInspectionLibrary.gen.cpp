// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyMirrorInspectionLibrary.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyMirrorInspectionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimNotifyMirrorInspectionLibrary Function GetMirrorDataTable
struct Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics
{
	struct AnimNotifyMirrorInspectionLibrary_eventGetMirrorDataTable_Parms
	{
		FAnimNotifyEventReference EventReference;
		const UMirrorDataTable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/** If the notify is mirrored, return the mirror data table that was active.\n\x09*\n\x09* @param EventReference\x09\x09The event to inspect\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyMirrorInspectionLibrary.h" },
		{ "ToolTip", "If the notify is mirrored, return the mirror data table that was active.\n\n@param EventReference         The event to inspect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyMirrorInspectionLibrary_eventGetMirrorDataTable_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyMirrorInspectionLibrary_eventGetMirrorDataTable_Parms, ReturnValue), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary, nullptr, "GetMirrorDataTable", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::AnimNotifyMirrorInspectionLibrary_eventGetMirrorDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::AnimNotifyMirrorInspectionLibrary_eventGetMirrorDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyMirrorInspectionLibrary::execGetMirrorDataTable)
{
	P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UMirrorDataTable**)Z_Param__Result=UAnimNotifyMirrorInspectionLibrary::GetMirrorDataTable(Z_Param_Out_EventReference);
	P_NATIVE_END;
}
// End Class UAnimNotifyMirrorInspectionLibrary Function GetMirrorDataTable

// Begin Class UAnimNotifyMirrorInspectionLibrary Function IsTriggeredByMirroredAnimation
struct Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics
{
	struct AnimNotifyMirrorInspectionLibrary_eventIsTriggeredByMirroredAnimation_Parms
	{
		FAnimNotifyEventReference EventReference;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/** Get whether the animation which triggered this notify was mirrored.\n\x09*\n\x09* @param EventReference\x09\x09The event to inspect\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyMirrorInspectionLibrary.h" },
		{ "ToolTip", "Get whether the animation which triggered this notify was mirrored.\n\n@param EventReference         The event to inspect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyMirrorInspectionLibrary_eventIsTriggeredByMirroredAnimation_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
void Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimNotifyMirrorInspectionLibrary_eventIsTriggeredByMirroredAnimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNotifyMirrorInspectionLibrary_eventIsTriggeredByMirroredAnimation_Parms), &Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary, nullptr, "IsTriggeredByMirroredAnimation", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::AnimNotifyMirrorInspectionLibrary_eventIsTriggeredByMirroredAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::AnimNotifyMirrorInspectionLibrary_eventIsTriggeredByMirroredAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyMirrorInspectionLibrary::execIsTriggeredByMirroredAnimation)
{
	P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAnimNotifyMirrorInspectionLibrary::IsTriggeredByMirroredAnimation(Z_Param_Out_EventReference);
	P_NATIVE_END;
}
// End Class UAnimNotifyMirrorInspectionLibrary Function IsTriggeredByMirroredAnimation

// Begin Class UAnimNotifyMirrorInspectionLibrary
void UAnimNotifyMirrorInspectionLibrary::StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary()
{
	UClass* Class = UAnimNotifyMirrorInspectionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMirrorDataTable", &UAnimNotifyMirrorInspectionLibrary::execGetMirrorDataTable },
		{ "IsTriggeredByMirroredAnimation", &UAnimNotifyMirrorInspectionLibrary::execIsTriggeredByMirroredAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyMirrorInspectionLibrary);
UClass* Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_NoRegister()
{
	return UAnimNotifyMirrorInspectionLibrary::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""A library of commonly used functionality for Notifies related to mirroring, exposed to blueprint.\n*/" },
		{ "IncludePath", "Animation/AnimNotifyMirrorInspectionLibrary.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyMirrorInspectionLibrary.h" },
		{ "ScriptName", "UAnimNotifyMirrorInspectionLibrary" },
		{ "ToolTip", "A library of commonly used functionality for Notifies related to mirroring, exposed to blueprint." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_GetMirrorDataTable, "GetMirrorDataTable" }, // 599596108
		{ &Z_Construct_UFunction_UAnimNotifyMirrorInspectionLibrary_IsTriggeredByMirroredAnimation, "IsTriggeredByMirroredAnimation" }, // 1234905135
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyMirrorInspectionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics::ClassParams = {
	&UAnimNotifyMirrorInspectionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.OuterSingleton, Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimNotifyMirrorInspectionLibrary>()
{
	return UAnimNotifyMirrorInspectionLibrary::StaticClass();
}
UAnimNotifyMirrorInspectionLibrary::UAnimNotifyMirrorInspectionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyMirrorInspectionLibrary);
UAnimNotifyMirrorInspectionLibrary::~UAnimNotifyMirrorInspectionLibrary() {}
// End Class UAnimNotifyMirrorInspectionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary, UAnimNotifyMirrorInspectionLibrary::StaticClass, TEXT("UAnimNotifyMirrorInspectionLibrary"), &Z_Registration_Info_UClass_UAnimNotifyMirrorInspectionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyMirrorInspectionLibrary), 2851280330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_57151303(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
