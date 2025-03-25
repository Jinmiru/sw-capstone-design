// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Private/Tests/SequenceCameraShakeTestUtil.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceCameraShakeTestUtil() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakeTestUtil();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakeTestUtil_NoRegister();
UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References

// Begin Class USequenceCameraShakeTestUtil Function GetCameraCachePOV
struct Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics
{
	struct SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms
	{
		APlayerController* PlayerController;
		FMinimalViewInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/SequenceCameraShakeTestUtil.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms, ReturnValue), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(0, nullptr) }; // 994039058
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceCameraShakeTestUtil, nullptr, "GetCameraCachePOV", nullptr, nullptr, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequenceCameraShakeTestUtil::execGetCameraCachePOV)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMinimalViewInfo*)Z_Param__Result=USequenceCameraShakeTestUtil::GetCameraCachePOV(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class USequenceCameraShakeTestUtil Function GetCameraCachePOV

// Begin Class USequenceCameraShakeTestUtil Function GetLastFrameCameraCachePOV
struct Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics
{
	struct SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms
	{
		APlayerController* PlayerController;
		FMinimalViewInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/SequenceCameraShakeTestUtil.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms, ReturnValue), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(0, nullptr) }; // 994039058
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceCameraShakeTestUtil, nullptr, "GetLastFrameCameraCachePOV", nullptr, nullptr, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequenceCameraShakeTestUtil::execGetLastFrameCameraCachePOV)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMinimalViewInfo*)Z_Param__Result=USequenceCameraShakeTestUtil::GetLastFrameCameraCachePOV(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class USequenceCameraShakeTestUtil Function GetLastFrameCameraCachePOV

// Begin Class USequenceCameraShakeTestUtil Function GetPostProcessBlendCache
struct Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics
{
	struct SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms
	{
		APlayerController* PlayerController;
		int32 PPIndex;
		FPostProcessSettings OutPPSettings;
		float OutPPBlendWeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/SequenceCameraShakeTestUtil.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PPIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPPSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPPBlendWeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_PPIndex = { "PPIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms, PPIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_OutPPSettings = { "OutPPSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms, OutPPSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(0, nullptr) }; // 1858651484
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_OutPPBlendWeight = { "OutPPBlendWeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms, OutPPBlendWeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms), &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_PPIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_OutPPSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_OutPPBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceCameraShakeTestUtil, nullptr, "GetPostProcessBlendCache", nullptr, nullptr, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequenceCameraShakeTestUtil::execGetPostProcessBlendCache)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FIntProperty,Z_Param_PPIndex);
	P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_OutPPSettings);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPPBlendWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USequenceCameraShakeTestUtil::GetPostProcessBlendCache(Z_Param_PlayerController,Z_Param_PPIndex,Z_Param_Out_OutPPSettings,Z_Param_Out_OutPPBlendWeight);
	P_NATIVE_END;
}
// End Class USequenceCameraShakeTestUtil Function GetPostProcessBlendCache

// Begin Class USequenceCameraShakeTestUtil
void USequenceCameraShakeTestUtil::StaticRegisterNativesUSequenceCameraShakeTestUtil()
{
	UClass* Class = USequenceCameraShakeTestUtil::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCameraCachePOV", &USequenceCameraShakeTestUtil::execGetCameraCachePOV },
		{ "GetLastFrameCameraCachePOV", &USequenceCameraShakeTestUtil::execGetLastFrameCameraCachePOV },
		{ "GetPostProcessBlendCache", &USequenceCameraShakeTestUtil::execGetPostProcessBlendCache },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceCameraShakeTestUtil);
UClass* Z_Construct_UClass_USequenceCameraShakeTestUtil_NoRegister()
{
	return USequenceCameraShakeTestUtil::StaticClass();
}
struct Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/SequenceCameraShakeTestUtil.h" },
		{ "ModuleRelativePath", "Private/Tests/SequenceCameraShakeTestUtil.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV, "GetCameraCachePOV" }, // 1398068248
		{ &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV, "GetLastFrameCameraCachePOV" }, // 2591947060
		{ &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache, "GetPostProcessBlendCache" }, // 854568239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceCameraShakeTestUtil>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::ClassParams = {
	&USequenceCameraShakeTestUtil::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::Class_MetaDataParams), Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequenceCameraShakeTestUtil()
{
	if (!Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton, Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton;
}
template<> TEMPLATESEQUENCE_API UClass* StaticClass<USequenceCameraShakeTestUtil>()
{
	return USequenceCameraShakeTestUtil::StaticClass();
}
USequenceCameraShakeTestUtil::USequenceCameraShakeTestUtil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceCameraShakeTestUtil);
USequenceCameraShakeTestUtil::~USequenceCameraShakeTestUtil() {}
// End Class USequenceCameraShakeTestUtil

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequenceCameraShakeTestUtil, USequenceCameraShakeTestUtil::StaticClass, TEXT("USequenceCameraShakeTestUtil"), &Z_Registration_Info_UClass_USequenceCameraShakeTestUtil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceCameraShakeTestUtil), 1135234732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_796243356(TEXT("/Script/TemplateSequence"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
