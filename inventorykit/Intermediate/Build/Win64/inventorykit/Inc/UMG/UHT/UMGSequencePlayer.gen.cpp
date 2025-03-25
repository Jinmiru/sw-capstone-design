// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSequencePlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer();
UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UUMGSequencePlayer Function GetUserTag
struct Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics
{
	struct UMGSequencePlayer_eventGetUserTag_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** @return */" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
		{ "ToolTip", "@return" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGSequencePlayer_eventGetUserTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSequencePlayer, nullptr, "GetUserTag", nullptr, nullptr, Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::UMGSequencePlayer_eventGetUserTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::UMGSequencePlayer_eventGetUserTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUMGSequencePlayer::execGetUserTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetUserTag();
	P_NATIVE_END;
}
// End Class UUMGSequencePlayer Function GetUserTag

// Begin Class UUMGSequencePlayer Function SetUserTag
struct Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics
{
	struct UMGSequencePlayer_eventSetUserTag_Parms
	{
		FName InUserTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InUserTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::NewProp_InUserTag = { "InUserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGSequencePlayer_eventSetUserTag_Parms, InUserTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::NewProp_InUserTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSequencePlayer, nullptr, "SetUserTag", nullptr, nullptr, Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::UMGSequencePlayer_eventSetUserTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::UMGSequencePlayer_eventSetUserTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUMGSequencePlayer::execSetUserTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InUserTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserTag(Z_Param_InUserTag);
	P_NATIVE_END;
}
// End Class UUMGSequencePlayer Function SetUserTag

// Begin Class UUMGSequencePlayer
void UUMGSequencePlayer::StaticRegisterNativesUUMGSequencePlayer()
{
	UClass* Class = UUMGSequencePlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserTag", &UUMGSequencePlayer::execGetUserTag },
		{ "SetUserTag", &UUMGSequencePlayer::execSetUserTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMGSequencePlayer);
UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister()
{
	return UUMGSequencePlayer::StaticClass();
}
struct Z_Construct_UClass_UUMGSequencePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/UMGSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Comment", "/** Animation being played */" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
		{ "ToolTip", "Animation being played" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootTemplateInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootTemplateInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag, "GetUserTag" }, // 3781660558
		{ &Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag, "SetUserTag" }, // 2410911809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSequencePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMGSequencePlayer, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_RootTemplateInstance = { "RootTemplateInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMGSequencePlayer, RootTemplateInstance), Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootTemplateInstance_MetaData), NewProp_RootTemplateInstance_MetaData) }; // 3481942416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_RootTemplateInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUMGSequencePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMGSequencePlayer_Statics::ClassParams = {
	&UUMGSequencePlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UUMGSequencePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUMGSequencePlayer()
{
	if (!Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton, Z_Construct_UClass_UUMGSequencePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUMGSequencePlayer>()
{
	return UUMGSequencePlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSequencePlayer);
UUMGSequencePlayer::~UUMGSequencePlayer() {}
// End Class UUMGSequencePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUMGSequencePlayer, UUMGSequencePlayer::StaticClass, TEXT("UUMGSequencePlayer"), &Z_Registration_Info_UClass_UUMGSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMGSequencePlayer), 1738237944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_1522386488(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
