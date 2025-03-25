// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Streaming/ActorTextureStreamingBuildDataComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorTextureStreamingBuildDataComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorTextureStreamingBuildDataComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamableTexture();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FStreamableTexture
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamableTexture;
class UScriptStruct* FStreamableTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamableTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamableTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamableTexture, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StreamableTexture"));
	}
	return Z_Registration_Info_UScriptStruct_StreamableTexture.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamableTexture>()
{
	return FStreamableTexture::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStreamableTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamableTexture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamableTexture, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamableTexture, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamableTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTexture_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamableTexture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StreamableTexture",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FStreamableTexture_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTexture_Statics::PropPointers), 0),
	sizeof(FStreamableTexture),
	alignof(FStreamableTexture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTexture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamableTexture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamableTexture()
{
	if (!Z_Registration_Info_UScriptStruct_StreamableTexture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamableTexture.InnerSingleton, Z_Construct_UScriptStruct_FStreamableTexture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StreamableTexture.InnerSingleton;
}
// End ScriptStruct FStreamableTexture

// Begin Class UActorTextureStreamingBuildDataComponent
void UActorTextureStreamingBuildDataComponent::StaticRegisterNativesUActorTextureStreamingBuildDataComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorTextureStreamingBuildDataComponent);
UClass* Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_NoRegister()
{
	return UActorTextureStreamingBuildDataComponent::StaticClass();
}
struct Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Streaming/ActorTextureStreamingBuildDataComponent.h" },
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamableTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamableTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamableTextures;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PackedTextureStreamingQualityLevelFeatureLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTextureStreamingBuildDataComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures_Inner = { "StreamableTextures", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreamableTexture, METADATA_PARAMS(0, nullptr) }; // 1292129728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures = { "StreamableTextures", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorTextureStreamingBuildDataComponent, StreamableTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamableTextures_MetaData), NewProp_StreamableTextures_MetaData) }; // 1292129728
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel = { "PackedTextureStreamingQualityLevelFeatureLevel", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorTextureStreamingBuildDataComponent, PackedTextureStreamingQualityLevelFeatureLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData), NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::ClassParams = {
	&UActorTextureStreamingBuildDataComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::PropPointers), 0),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorTextureStreamingBuildDataComponent()
{
	if (!Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton, Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActorTextureStreamingBuildDataComponent>()
{
	return UActorTextureStreamingBuildDataComponent::StaticClass();
}
UActorTextureStreamingBuildDataComponent::UActorTextureStreamingBuildDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTextureStreamingBuildDataComponent);
UActorTextureStreamingBuildDataComponent::~UActorTextureStreamingBuildDataComponent() {}
// End Class UActorTextureStreamingBuildDataComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStreamableTexture::StaticStruct, Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewStructOps, TEXT("StreamableTexture"), &Z_Registration_Info_UScriptStruct_StreamableTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamableTexture), 1292129728U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorTextureStreamingBuildDataComponent, UActorTextureStreamingBuildDataComponent::StaticClass, TEXT("UActorTextureStreamingBuildDataComponent"), &Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorTextureStreamingBuildDataComponent), 942723282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_1761836012(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
