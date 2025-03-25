// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneCapture/Public/Protocols/ImageSequenceProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageSequenceProtocol() {}

// Begin Cross Module References
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG_NoRegister();
MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut();
UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References

// Begin Class UImageSequenceProtocol
void UImageSequenceProtocol::StaticRegisterNativesUImageSequenceProtocol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol);
UClass* Z_Construct_UClass_UImageSequenceProtocol_NoRegister()
{
	return UImageSequenceProtocol::StaticClass();
}
struct Z_Construct_UClass_UImageSequenceProtocol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocol,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_Statics::ClassParams = {
	&UImageSequenceProtocol::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000804A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageSequenceProtocol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageSequenceProtocol()
{
	if (!Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol>()
{
	return UImageSequenceProtocol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol);
UImageSequenceProtocol::~UImageSequenceProtocol() {}
// End Class UImageSequenceProtocol

// Begin Class UCompressedImageSequenceProtocol
void UCompressedImageSequenceProtocol::StaticRegisterNativesUCompressedImageSequenceProtocol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompressedImageSequenceProtocol);
UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol_NoRegister()
{
	return UCompressedImageSequenceProtocol::StaticClass();
}
struct Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Level of compression to apply to the image, between 1 (worst quality, best compression) and 100 (best quality, worst compression)*/" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "Level of compression to apply to the image, between 1 (worst quality, best compression) and 100 (best quality, worst compression)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompressedImageSequenceProtocol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompressedImageSequenceProtocol, CompressionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionQuality_MetaData), NewProp_CompressionQuality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::ClassParams = {
	&UCompressedImageSequenceProtocol::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers),
	0,
	0x000804A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol()
{
	if (!Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton, Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UCompressedImageSequenceProtocol>()
{
	return UCompressedImageSequenceProtocol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompressedImageSequenceProtocol);
UCompressedImageSequenceProtocol::~UCompressedImageSequenceProtocol() {}
// End Class UCompressedImageSequenceProtocol

// Begin Class UImageSequenceProtocol_BMP
void UImageSequenceProtocol_BMP::StaticRegisterNativesUImageSequenceProtocol_BMP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol_BMP);
UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP_NoRegister()
{
	return UImageSequenceProtocol_BMP::StaticClass();
}
struct Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CommandLineID", "BMP" },
		{ "DisplayName", "Image Sequence (bmp)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_BMP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::ClassParams = {
	&UImageSequenceProtocol_BMP::StaticClass,
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
	0x000804A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP()
{
	if (!Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol_BMP>()
{
	return UImageSequenceProtocol_BMP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_BMP);
UImageSequenceProtocol_BMP::~UImageSequenceProtocol_BMP() {}
// End Class UImageSequenceProtocol_BMP

// Begin Class UImageSequenceProtocol_PNG
void UImageSequenceProtocol_PNG::StaticRegisterNativesUImageSequenceProtocol_PNG()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol_PNG);
UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG_NoRegister()
{
	return UImageSequenceProtocol_PNG::StaticClass();
}
struct Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CommandLineID", "PNG" },
		{ "DisplayName", "Image Sequence (png)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_PNG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompressedImageSequenceProtocol,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::ClassParams = {
	&UImageSequenceProtocol_PNG::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG()
{
	if (!Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol_PNG>()
{
	return UImageSequenceProtocol_PNG::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_PNG);
UImageSequenceProtocol_PNG::~UImageSequenceProtocol_PNG() {}
// End Class UImageSequenceProtocol_PNG

// Begin Class UImageSequenceProtocol_JPG
void UImageSequenceProtocol_JPG::StaticRegisterNativesUImageSequenceProtocol_JPG()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol_JPG);
UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG_NoRegister()
{
	return UImageSequenceProtocol_JPG::StaticClass();
}
struct Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CommandLineID", "JPG" },
		{ "DisplayName", "Image Sequence (jpg)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_JPG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompressedImageSequenceProtocol,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::ClassParams = {
	&UImageSequenceProtocol_JPG::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG()
{
	if (!Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol_JPG>()
{
	return UImageSequenceProtocol_JPG::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_JPG);
UImageSequenceProtocol_JPG::~UImageSequenceProtocol_JPG() {}
// End Class UImageSequenceProtocol_JPG

// Begin Class UImageSequenceProtocol_EXR
void UImageSequenceProtocol_EXR::StaticRegisterNativesUImageSequenceProtocol_EXR()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol_EXR);
UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR_NoRegister()
{
	return UImageSequenceProtocol_EXR::StaticClass();
}
struct Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CommandLineID", "EXR" },
		{ "DisplayName", "Image Sequence (exr)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompressed_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "Comment", "/** Whether to write out compressed or uncompressed EXRs */" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "Whether to write out compressed or uncompressed EXRs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureGamut_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "Comment", "/** The color gamut to use when storing HDR captured data. */" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "The color gamut to use when storing HDR captured data." },
	};
#endif // WITH_METADATA
	static void NewProp_bCompressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureGamut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_EXR>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_SetBit(void* Obj)
{
	((UImageSequenceProtocol_EXR*)Obj)->bCompressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed = { "bCompressed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UImageSequenceProtocol_EXR), &Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompressed_MetaData), NewProp_bCompressed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut = { "CaptureGamut", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImageSequenceProtocol_EXR, CaptureGamut), Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureGamut_MetaData), NewProp_CaptureGamut_MetaData) }; // 3830512448
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::ClassParams = {
	&UImageSequenceProtocol_EXR::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers),
	0,
	0x000804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR()
{
	if (!Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol_EXR>()
{
	return UImageSequenceProtocol_EXR::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_EXR);
UImageSequenceProtocol_EXR::~UImageSequenceProtocol_EXR() {}
// End Class UImageSequenceProtocol_EXR

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImageSequenceProtocol, UImageSequenceProtocol::StaticClass, TEXT("UImageSequenceProtocol"), &Z_Registration_Info_UClass_UImageSequenceProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol), 2956029809U) },
		{ Z_Construct_UClass_UCompressedImageSequenceProtocol, UCompressedImageSequenceProtocol::StaticClass, TEXT("UCompressedImageSequenceProtocol"), &Z_Registration_Info_UClass_UCompressedImageSequenceProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompressedImageSequenceProtocol), 1159888892U) },
		{ Z_Construct_UClass_UImageSequenceProtocol_BMP, UImageSequenceProtocol_BMP::StaticClass, TEXT("UImageSequenceProtocol_BMP"), &Z_Registration_Info_UClass_UImageSequenceProtocol_BMP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol_BMP), 624943209U) },
		{ Z_Construct_UClass_UImageSequenceProtocol_PNG, UImageSequenceProtocol_PNG::StaticClass, TEXT("UImageSequenceProtocol_PNG"), &Z_Registration_Info_UClass_UImageSequenceProtocol_PNG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol_PNG), 2768517557U) },
		{ Z_Construct_UClass_UImageSequenceProtocol_JPG, UImageSequenceProtocol_JPG::StaticClass, TEXT("UImageSequenceProtocol_JPG"), &Z_Registration_Info_UClass_UImageSequenceProtocol_JPG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol_JPG), 2217127942U) },
		{ Z_Construct_UClass_UImageSequenceProtocol_EXR, UImageSequenceProtocol_EXR::StaticClass, TEXT("UImageSequenceProtocol_EXR"), &Z_Registration_Info_UClass_UImageSequenceProtocol_EXR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol_EXR), 3333726598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_159013412(TEXT("/Script/MovieSceneCapture"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
