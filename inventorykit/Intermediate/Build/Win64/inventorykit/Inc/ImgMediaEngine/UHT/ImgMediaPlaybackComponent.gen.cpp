// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImgMediaEngine/Public/Unreal/ImgMediaPlaybackComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaPlaybackComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
IMGMEDIAENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent();
IMGMEDIAENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImgMediaEngine();
// End Cross Module References

// Begin Class UDEPRECATED_ImgMediaPlaybackComponent
void UDEPRECATED_ImgMediaPlaybackComponent::StaticRegisterNativesUDEPRECATED_ImgMediaPlaybackComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ImgMediaPlaybackComponent);
UClass* Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_NoRegister()
{
	return UDEPRECATED_ImgMediaPlaybackComponent::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Component to help with ImgMedia playback.\n * If desired, add this to an object that displays an ImgMedia sequence.\n * Not necessary to do this, but if you do then you can get additional functionality\n * such as selective mipmap loading.\n */" },
		{ "IncludePath", "Unreal/ImgMediaPlaybackComponent.h" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component to help with ImgMedia playback.\nIf desired, add this to an object that displays an ImgMedia sequence.\nNot necessary to do this, but if you do then you can get additional functionality\nsuch as selective mipmap loading." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
		{ "Category", "MipMaps" },
		{ "Comment", "/** This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3. */" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ToolTip", "This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODBias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ImgMediaPlaybackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_ImgMediaPlaybackComponent, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_MetaData), NewProp_LODBias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::NewProp_LODBias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ImgMediaEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::ClassParams = {
	&UDEPRECATED_ImgMediaPlaybackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::PropPointers),
	0,
	0x02B002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton;
}
template<> IMGMEDIAENGINE_API UClass* StaticClass<UDEPRECATED_ImgMediaPlaybackComponent>()
{
	return UDEPRECATED_ImgMediaPlaybackComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ImgMediaPlaybackComponent);
UDEPRECATED_ImgMediaPlaybackComponent::~UDEPRECATED_ImgMediaPlaybackComponent() {}
// End Class UDEPRECATED_ImgMediaPlaybackComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent, UDEPRECATED_ImgMediaPlaybackComponent::StaticClass, TEXT("UDEPRECATED_ImgMediaPlaybackComponent"), &Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ImgMediaPlaybackComponent), 3883226615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_1662124033(TEXT("/Script/ImgMediaEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
