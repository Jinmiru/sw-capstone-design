// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/VT/VirtualTextureBuildSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTexture() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture();
ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVirtualTexture
void UVirtualTexture::StaticRegisterNativesUVirtualTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTexture);
UClass* Z_Construct_UClass_UVirtualTexture_NoRegister()
{
	return UVirtualTexture::StaticClass();
}
struct Z_Construct_UClass_UVirtualTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Deprecated class */" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "Deprecated class" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVirtualTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexture_Statics::ClassParams = {
	&UVirtualTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVirtualTexture()
{
	if (!Z_Registration_Info_UClass_UVirtualTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTexture.OuterSingleton, Z_Construct_UClass_UVirtualTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVirtualTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVirtualTexture>()
{
	return UVirtualTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexture);
UVirtualTexture::~UVirtualTexture() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTexture)
// End Class UVirtualTexture

// Begin Class ULightMapVirtualTexture
void ULightMapVirtualTexture::StaticRegisterNativesULightMapVirtualTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightMapVirtualTexture);
UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister()
{
	return ULightMapVirtualTexture::StaticClass();
}
struct Z_Construct_UClass_ULightMapVirtualTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Deprecated class */" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "Deprecated class" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapVirtualTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULightMapVirtualTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVirtualTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightMapVirtualTexture_Statics::ClassParams = {
	&ULightMapVirtualTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightMapVirtualTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightMapVirtualTexture()
{
	if (!Z_Registration_Info_UClass_ULightMapVirtualTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightMapVirtualTexture.OuterSingleton, Z_Construct_UClass_ULightMapVirtualTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightMapVirtualTexture.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightMapVirtualTexture>()
{
	return ULightMapVirtualTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapVirtualTexture);
ULightMapVirtualTexture::~ULightMapVirtualTexture() {}
// End Class ULightMapVirtualTexture

// Begin Class URuntimeVirtualTextureStreamingProxy
void URuntimeVirtualTextureStreamingProxy::StaticRegisterNativesURuntimeVirtualTextureStreamingProxy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeVirtualTextureStreamingProxy);
UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister()
{
	return URuntimeVirtualTextureStreamingProxy::StaticClass();
}
struct Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Deprecated class. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "Deprecated class." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureStreamingProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::ClassParams = {
	&URuntimeVirtualTextureStreamingProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy()
{
	if (!Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.OuterSingleton, Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTextureStreamingProxy>()
{
	return URuntimeVirtualTextureStreamingProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureStreamingProxy);
URuntimeVirtualTextureStreamingProxy::~URuntimeVirtualTextureStreamingProxy() {}
// End Class URuntimeVirtualTextureStreamingProxy

// Begin Class UVirtualTexture2D
void UVirtualTexture2D::StaticRegisterNativesUVirtualTexture2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTexture2D);
UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister()
{
	return UVirtualTexture2D::StaticClass();
}
struct Z_Construct_UClass_UVirtualTexture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Virtual Texture with locally configurable build settings.\n * A raw UTexture2D can also represent a Virtual Texture but uses the one and only per-project build settings.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VT/VirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
		{ "ToolTip", "Virtual Texture with locally configurable build settings.\nA raw UTexture2D can also represent a Virtual Texture but uses the one and only per-project build settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContinuousUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSinglePhysicalSpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static void NewProp_bContinuousUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinuousUpdate;
	static void NewProp_bSinglePhysicalSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSinglePhysicalSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualTexture2D, Settings), Z_Construct_UScriptStruct_FVirtualTextureBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3357586360
void Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate_SetBit(void* Obj)
{
	((UVirtualTexture2D*)Obj)->bContinuousUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate = { "bContinuousUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualTexture2D), &Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContinuousUpdate_MetaData), NewProp_bContinuousUpdate_MetaData) };
void Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace_SetBit(void* Obj)
{
	((UVirtualTexture2D*)Obj)->bSinglePhysicalSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace = { "bSinglePhysicalSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualTexture2D), &Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSinglePhysicalSpace_MetaData), NewProp_bSinglePhysicalSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bContinuousUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexture2D_Statics::NewProp_bSinglePhysicalSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVirtualTexture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexture2D_Statics::ClassParams = {
	&UVirtualTexture2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVirtualTexture2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualTexture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVirtualTexture2D()
{
	if (!Z_Registration_Info_UClass_UVirtualTexture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTexture2D.OuterSingleton, Z_Construct_UClass_UVirtualTexture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVirtualTexture2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVirtualTexture2D>()
{
	return UVirtualTexture2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexture2D);
UVirtualTexture2D::~UVirtualTexture2D() {}
// End Class UVirtualTexture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTexture, UVirtualTexture::StaticClass, TEXT("UVirtualTexture"), &Z_Registration_Info_UClass_UVirtualTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTexture), 2466522317U) },
		{ Z_Construct_UClass_ULightMapVirtualTexture, ULightMapVirtualTexture::StaticClass, TEXT("ULightMapVirtualTexture"), &Z_Registration_Info_UClass_ULightMapVirtualTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightMapVirtualTexture), 83329606U) },
		{ Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy, URuntimeVirtualTextureStreamingProxy::StaticClass, TEXT("URuntimeVirtualTextureStreamingProxy"), &Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeVirtualTextureStreamingProxy), 1215963686U) },
		{ Z_Construct_UClass_UVirtualTexture2D, UVirtualTexture2D::StaticClass, TEXT("UVirtualTexture2D"), &Z_Registration_Info_UClass_UVirtualTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTexture2D), 2431779507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_132667376(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
