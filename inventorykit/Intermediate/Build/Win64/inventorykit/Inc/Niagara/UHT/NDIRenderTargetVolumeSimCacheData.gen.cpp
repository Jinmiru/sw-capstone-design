// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/NDIRenderTargetVolumeSimCacheData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIRenderTargetVolumeSimCacheData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
NIAGARA_API UClass* Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData();
NIAGARA_API UClass* Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNDIRenderTargetVolumeSimCacheFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame;
class UScriptStruct* FNDIRenderTargetVolumeSimCacheFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIRenderTargetVolumeSimCacheFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIRenderTargetVolumeSimCacheFrame>()
{
	return FNDIRenderTargetVolumeSimCacheFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressedSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIRenderTargetVolumeSimCacheFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIRenderTargetVolumeSimCacheFrame, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIRenderTargetVolumeSimCacheFrame, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 2609309733
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_UncompressedSize = { "UncompressedSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIRenderTargetVolumeSimCacheFrame, UncompressedSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncompressedSize_MetaData), NewProp_UncompressedSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_CompressedSize = { "CompressedSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIRenderTargetVolumeSimCacheFrame, CompressedSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedSize_MetaData), NewProp_CompressedSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_UncompressedSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_CompressedSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIRenderTargetVolumeSimCacheFrame",
	Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::PropPointers),
	sizeof(FNDIRenderTargetVolumeSimCacheFrame),
	alignof(FNDIRenderTargetVolumeSimCacheFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame()
{
	if (!Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.InnerSingleton, Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.InnerSingleton;
}
// End ScriptStruct FNDIRenderTargetVolumeSimCacheFrame

// Begin Class UNDIRenderTargetVolumeSimCacheData
void UNDIRenderTargetVolumeSimCacheData::StaticRegisterNativesUNDIRenderTargetVolumeSimCacheData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIRenderTargetVolumeSimCacheData);
UClass* Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_NoRegister()
{
	return UNDIRenderTargetVolumeSimCacheData::StaticClass();
}
struct Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NDIRenderTargetVolumeSimCacheData.h" },
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionType_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompressionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIRenderTargetVolumeSimCacheData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_CompressionType = { "CompressionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIRenderTargetVolumeSimCacheData, CompressionType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionType_MetaData), NewProp_CompressionType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame, METADATA_PARAMS(0, nullptr) }; // 3408015602
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIRenderTargetVolumeSimCacheData, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frames_MetaData), NewProp_Frames_MetaData) }; // 3408015602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_CompressionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::ClassParams = {
	&UNDIRenderTargetVolumeSimCacheData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData()
{
	if (!Z_Registration_Info_UClass_UNDIRenderTargetVolumeSimCacheData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIRenderTargetVolumeSimCacheData.OuterSingleton, Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIRenderTargetVolumeSimCacheData.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNDIRenderTargetVolumeSimCacheData>()
{
	return UNDIRenderTargetVolumeSimCacheData::StaticClass();
}
UNDIRenderTargetVolumeSimCacheData::UNDIRenderTargetVolumeSimCacheData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIRenderTargetVolumeSimCacheData);
UNDIRenderTargetVolumeSimCacheData::~UNDIRenderTargetVolumeSimCacheData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNDIRenderTargetVolumeSimCacheData)
// End Class UNDIRenderTargetVolumeSimCacheData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIRenderTargetVolumeSimCacheFrame::StaticStruct, Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewStructOps, TEXT("NDIRenderTargetVolumeSimCacheFrame"), &Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIRenderTargetVolumeSimCacheFrame), 3408015602U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData, UNDIRenderTargetVolumeSimCacheData::StaticClass, TEXT("UNDIRenderTargetVolumeSimCacheData"), &Z_Registration_Info_UClass_UNDIRenderTargetVolumeSimCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIRenderTargetVolumeSimCacheData), 4034337231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_3706976186(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
