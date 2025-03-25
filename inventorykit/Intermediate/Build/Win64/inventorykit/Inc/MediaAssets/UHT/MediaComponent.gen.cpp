// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaComponent();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaComponent_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Class UMediaComponent Function GetMediaPlayer
struct Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics
{
	struct MediaComponent_eventGetMediaPlayer_Parms
	{
		UMediaPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Get the media player that this component owns */" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ToolTip", "Get the media player that this component owns" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaComponent_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaComponent, nullptr, "GetMediaPlayer", nullptr, nullptr, Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::MediaComponent_eventGetMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::MediaComponent_eventGetMediaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaComponent_GetMediaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaComponent::execGetMediaPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
	P_NATIVE_END;
}
// End Class UMediaComponent Function GetMediaPlayer

// Begin Class UMediaComponent Function GetMediaTexture
struct Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics
{
	struct MediaComponent_eventGetMediaTexture_Parms
	{
		UMediaTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Get the media texture that this component owns, bound to its media player. */" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ToolTip", "Get the media texture that this component owns, bound to its media player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaComponent_eventGetMediaTexture_Parms, ReturnValue), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaComponent, nullptr, "GetMediaTexture", nullptr, nullptr, Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::MediaComponent_eventGetMediaTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::MediaComponent_eventGetMediaTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaComponent_GetMediaTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaComponent::execGetMediaTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaTexture**)Z_Param__Result=P_THIS->GetMediaTexture();
	P_NATIVE_END;
}
// End Class UMediaComponent Function GetMediaTexture

// Begin Class UMediaComponent
void UMediaComponent::StaticRegisterNativesUMediaComponent()
{
	UClass* Class = UMediaComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMediaPlayer", &UMediaComponent::execGetMediaPlayer },
		{ "GetMediaTexture", &UMediaComponent::execGetMediaTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaComponent);
UClass* Z_Construct_UClass_UMediaComponent_NoRegister()
{
	return UMediaComponent::StaticClass();
}
struct Z_Construct_UClass_UMediaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "HideCategories", "Media Activation" },
		{ "IncludePath", "MediaComponent.h" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[] = {
		{ "BlueprintGetter", "GetMediaTexture" },
		{ "Category", "Media" },
		{ "Comment", "/** This component's media texture */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ToolTip", "This component's media texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "BlueprintGetter", "GetMediaPlayer" },
		{ "Category", "Media" },
		{ "Comment", "/** This component's media player */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ToolTip", "This component's media player" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaComponent_GetMediaPlayer, "GetMediaPlayer" }, // 2048945600
		{ &Z_Construct_UFunction_UMediaComponent_GetMediaTexture, "GetMediaTexture" }, // 1725625065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x014600000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaComponent, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTexture_MetaData), NewProp_MediaTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x014600020008201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMediaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaComponent_Statics::ClassParams = {
	&UMediaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMediaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMediaComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaComponent()
{
	if (!Z_Registration_Info_UClass_UMediaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaComponent.OuterSingleton, Z_Construct_UClass_UMediaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaComponent.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaComponent>()
{
	return UMediaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaComponent);
UMediaComponent::~UMediaComponent() {}
// End Class UMediaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaComponent, UMediaComponent::StaticClass, TEXT("UMediaComponent"), &Z_Registration_Info_UClass_UMediaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaComponent), 3168877481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_3836602872(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
