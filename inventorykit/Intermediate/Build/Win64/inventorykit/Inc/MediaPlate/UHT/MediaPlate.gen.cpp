// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlate/Public/MediaPlate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlate() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MEDIAPLATE_API UClass* Z_Construct_UClass_AMediaPlate();
MEDIAPLATE_API UClass* Z_Construct_UClass_AMediaPlate_NoRegister();
MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaPlate();
// End Cross Module References

// Begin Class AMediaPlate
void AMediaPlate::StaticRegisterNativesAMediaPlate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMediaPlate);
UClass* Z_Construct_UClass_AMediaPlate_NoRegister()
{
	return AMediaPlate::StaticClass();
}
struct Z_Construct_UClass_AMediaPlate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MediaPlate is an actor that can play and show media in the world.\n */" },
		{ "IncludePath", "MediaPlate.h" },
		{ "ModuleRelativePath", "Public/MediaPlate.h" },
		{ "ToolTip", "MediaPlate is an actor that can play and show media in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlateComponent_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "//~ End AActor Interface\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** Holds the mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlate.h" },
		{ "ToolTip", "Holds the mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlateComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMediaPlate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMediaPlate_Statics::NewProp_MediaPlateComponent = { "MediaPlateComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMediaPlate, MediaPlateComponent), Z_Construct_UClass_UMediaPlateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlateComponent_MetaData), NewProp_MediaPlateComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMediaPlate_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMediaPlate, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMediaPlate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaPlate_Statics::NewProp_MediaPlateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaPlate_Statics::NewProp_StaticMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMediaPlate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaPlate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMediaPlate_Statics::ClassParams = {
	&AMediaPlate::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMediaPlate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlate_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlate_Statics::Class_MetaDataParams), Z_Construct_UClass_AMediaPlate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMediaPlate()
{
	if (!Z_Registration_Info_UClass_AMediaPlate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMediaPlate.OuterSingleton, Z_Construct_UClass_AMediaPlate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMediaPlate.OuterSingleton;
}
template<> MEDIAPLATE_API UClass* StaticClass<AMediaPlate>()
{
	return AMediaPlate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMediaPlate);
AMediaPlate::~AMediaPlate() {}
// End Class AMediaPlate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMediaPlate, AMediaPlate::StaticClass, TEXT("AMediaPlate"), &Z_Registration_Info_UClass_AMediaPlate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMediaPlate), 4049917098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_755046645(TEXT("/Script/MediaPlate"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
