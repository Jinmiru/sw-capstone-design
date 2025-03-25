// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VectorField/VectorFieldAnimated.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldAnimated() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVectorField();
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated();
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorFieldConstructionOp();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EVectorFieldConstructionOp
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorFieldConstructionOp;
static UEnum* EVectorFieldConstructionOp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVectorFieldConstructionOp"));
	}
	return Z_Registration_Info_UEnum_EVectorFieldConstructionOp.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVectorFieldConstructionOp>()
{
	return EVectorFieldConstructionOp_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Operation used to construct the vector field from a 2D texture.\n */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "Operation used to construct the vector field from a 2D texture." },
		{ "VFCO_Extrude.DisplayName", "Extrude" },
		{ "VFCO_Extrude.Name", "VFCO_Extrude" },
		{ "VFCO_MAX.Name", "VFCO_MAX" },
		{ "VFCO_Revolve.DisplayName", "Revolve" },
		{ "VFCO_Revolve.Name", "VFCO_Revolve" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "VFCO_Extrude", (int64)VFCO_Extrude },
		{ "VFCO_Revolve", (int64)VFCO_Revolve },
		{ "VFCO_MAX", (int64)VFCO_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVectorFieldConstructionOp",
	"EVectorFieldConstructionOp",
	Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVectorFieldConstructionOp()
{
	if (!Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton, Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVectorFieldConstructionOp.InnerSingleton;
}
// End Enum EVectorFieldConstructionOp

// Begin Class UVectorFieldAnimated
void UVectorFieldAnimated::StaticRegisterNativesUVectorFieldAnimated()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorFieldAnimated);
UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister()
{
	return UVectorFieldAnimated::StaticClass();
}
struct Z_Construct_UClass_UVectorFieldAnimated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VectorField/VectorFieldAnimated.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The texture from which to create the vector field. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The texture from which to create the vector field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionOp_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The operation used to construct the vector field. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The operation used to construct the vector field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeX_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The size of the volume. Valid sizes: 16, 32, 64. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeY_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The size of the volume. Valid sizes: 16, 32, 64. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeZ_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The size of the volume. Valid sizes: 16, 32, 64. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubImagesX_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The number of horizontal subimages in the texture atlas. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of horizontal subimages in the texture atlas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubImagesY_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The number of vertical subimages in the texture atlas. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of vertical subimages in the texture atlas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "Comment", "/** The number of frames in the atlas. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of frames in the atlas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The rate at which to interpolate between frames. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The rate at which to interpolate between frames." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Whether or not the simulation should loop. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "Whether or not the simulation should loop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseField_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** A static vector field used to add noise. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "A static vector field used to add noise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Scale to apply to vectors in the noise field. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "Scale to apply to vectors in the noise field." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMax_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** The maximum magnitude of noise vectors to apply. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The maximum magnitude of noise vectors to apply." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstructionOp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeSizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VolumeSizeZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubImagesX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubImagesY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseField;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldAnimated>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp = { "ConstructionOp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, ConstructionOp), Z_Construct_UEnum_Engine_EVectorFieldConstructionOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructionOp_MetaData), NewProp_ConstructionOp_MetaData) }; // 1900446230
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX = { "VolumeSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeSizeX_MetaData), NewProp_VolumeSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY = { "VolumeSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeSizeY_MetaData), NewProp_VolumeSizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ = { "VolumeSizeZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeSizeZ_MetaData), NewProp_VolumeSizeZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX = { "SubImagesX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, SubImagesX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubImagesX_MetaData), NewProp_SubImagesX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY = { "SubImagesY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, SubImagesY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubImagesY_MetaData), NewProp_SubImagesY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, FrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameCount_MetaData), NewProp_FrameCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, FramesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesPerSecond_MetaData), NewProp_FramesPerSecond_MetaData) };
void Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((UVectorFieldAnimated*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UVectorFieldAnimated), &Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField = { "NoiseField", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, NoiseField), Z_Construct_UClass_UVectorFieldStatic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseField_MetaData), NewProp_NoiseField_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseScale_MetaData), NewProp_NoiseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax = { "NoiseMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVectorFieldAnimated, NoiseMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseMax_MetaData), NewProp_NoiseMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVectorFieldAnimated_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVectorField,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldAnimated_Statics::ClassParams = {
	&UVectorFieldAnimated::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::Class_MetaDataParams), Z_Construct_UClass_UVectorFieldAnimated_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVectorFieldAnimated()
{
	if (!Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton, Z_Construct_UClass_UVectorFieldAnimated_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVectorFieldAnimated.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVectorFieldAnimated>()
{
	return UVectorFieldAnimated::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldAnimated);
UVectorFieldAnimated::~UVectorFieldAnimated() {}
// End Class UVectorFieldAnimated

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVectorFieldConstructionOp_StaticEnum, TEXT("EVectorFieldConstructionOp"), &Z_Registration_Info_UEnum_EVectorFieldConstructionOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1900446230U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVectorFieldAnimated, UVectorFieldAnimated::StaticClass, TEXT("UVectorFieldAnimated"), &Z_Registration_Info_UClass_UVectorFieldAnimated, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorFieldAnimated), 1148907155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_1603922862(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
